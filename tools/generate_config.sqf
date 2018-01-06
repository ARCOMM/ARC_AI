private _bases = [];
private _br = toString [13, 10];
private _spacing = "    ";
private _output = "class CfgAmmo {" + _br;

{
    private _mag = _x;
    private _magAmmoClass = getText (_mag >> "ammo");
    private _ammo = (configFile >> "CfgAmmo" >> _magAmmoClass);

    if (
        isClass _ammo &&
        {getText (_ammo >> "explosionEffects") == "GrenadeExplosion"}
    ) then {
        private _b = configName (inheritsFrom _ammo);

        if (_bases find _b == -1) then {
            _output = _output + _spacing + "PROTO(" + _b + ");" + _br;
            _bases pushBack _b;
        };

        _output = _output + _spacing + "GRENADE(" + (configName _ammo) + ", " + _b + ");" + _br;
        _bases pushBack (configName _ammo);
    };
    
    false
} count ("getNumber (_x >> 'type') == 256 && getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgMagazines"));

_output = _output + "};";

_bases = [];
_output = _output + _br + _br + "class CfgWeapons {" + _br;
private _parsedWeapons = [];
private _patches = [];

{
    private _patch = _x;
    private _weapons = getArray (_patch >> "weapons");

    if !(_weapons isEqualTo []) then {
        {
            private _w = (configFile >> "CfgWeapons" >> _x);
            
            if (
                getNumber (_w >> "scope") == 2 &&
                getNumber (_w >> "type") == 1
            ) then {
                private _mags = getArray (_w >> "magazines");
                private _isMG = ({(getNumber ((configFile >> "CfgMagazines" >> _x) >> "count")) >= 50} count _mags) == (count _mags);
                private _b = configName (inheritsFrom _w);
                private _macro = ["RIFLE", "MG"] select _isMG;
                
                _parsedWeapons pushBack [
                    _macro,
                    (configName _w),
                    _b
                ];
            };
            
            false
        } count _weapons;
        
        _patches pushBack (configName _patch);
    };
    
    false
} count ("true" configClasses (configFile >> "CfgPatches"));

{
    _x params ["_macro", "_cname", "_bname"];
    
    if !(_bname in _bases) then {
        private _bnameI = -1;
        {if ((_x select 1) == _bname) exitWith {_bnameI = _forEachIndex}} forEach _parsedWeapons;
        
        if (_bnameI != -1) then {
            private _bnameItem = _parsedWeapons select _bnameI;
            _bnameItem params ["_bmacro", "_bcname", "_bbname"];
            
            if !(_bbname in _bases) then {
                _output = _output + _spacing + "PROTO(" + _bbname + ");" + _br;
                _bases pushBack _bbname;
            };
            
            _output = _output + _spacing + _bmacro + "(" + _bcname + ", " + _bbname + ");" + _br;
            _bases pushBack _bcname;
        } else {
            _output = _output + _spacing + "PROTO(" + _bname + ");" + _br;
            _bases pushBack _bname;
        };
    };

    if !(_cname in _bases) then {
        _output = _output + _spacing + _macro + "(" + _cname + ", " + _bname + ");" + _br;
        _bases pushBack _cname;
    };
    
    false
} count _parsedWeapons;

_output = _output + "};";
// copyToClipboard _output;

_output = "";

{
    _output = _output + "            """ + _x + """," + _br;
} forEach _patches;

copyToClipboard _output;
private _bases = [];
private _br = toString [13, 10];
private _spacing = "    ";
private _output = "class CfgAmmo {" + _br;

{
    private _ammo = _x;
    private _b = configName (inheritsFrom _ammo);

    if (_bases find _b == -1) then {
        _output = _output + _spacing + "PROTO(" + _b + ");" + _br;
        _bases pushBack _b;
    };

    _output = _output + _spacing + "LAUNCHER(" + (configName _ammo) + ", " + _b + ");" + _br;
    _bases pushBack (configName _ammo);
    
    false
} count ("getText (_x >> 'simulation') == 'shotMissile'" configClasses (configFile >> "CfgAmmo"));

_output = _output + "};";

copyToClipboard _output;

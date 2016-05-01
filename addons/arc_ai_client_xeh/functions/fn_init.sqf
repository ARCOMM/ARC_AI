private _unit = _this select 0;

if (isPlayer _unit || !((side _unit) in [west,east,resistance,civilian])) exitWith {};

_unit addEventHandler ["Reloaded", {
    params [["_unit",objNull],"_weapon","_muzzle","_newMag",["_oldMag",""]];
    _unit addMagazine [(_oldMag select 0), 1E6];
}];

if (!local _unit) exitWith {};

_unit disableAI "AUTOCOMBAT";
_unit disableAI "SUPPRESSION";
_unit setBehaviour "AWARE";
_unit setSpeedMode "FULL";
_unit allowFleeing 0;
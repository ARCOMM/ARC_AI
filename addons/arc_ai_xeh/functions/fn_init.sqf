private _unit = _this select 0;

if (!local _unit) exitWith {};

if (isPlayer _unit || !((side _unit) in [west,east,resistance,civilian])) exitWith {};

_unit disableAI "AUTOCOMBAT";
_unit disableAI "SUPPRESSION";
_unit setBehaviour "AWARE";
_unit setSpeedMode "FULL";
_unit allowFleeing 0;

_unit addEventHandler ["Reloaded", {
    params ["_unit","_weapon","_muzzle","_newMag","_oldMag"];
    _unit addMagazine (_oldMag select 0);
}];
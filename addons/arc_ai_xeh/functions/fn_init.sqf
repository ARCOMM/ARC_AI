private ["_unit"];

_unit = _this select 0;

_isMan = _unit isKindOf "CAManBase";
_side = side _unit;

if (isPlayer _unit || !(_side in [west,east,resistance,civilian])) exitWith {};

_unit disableAI "AUTOCOMBAT";
_unit disableAI "SUPPRESSION";
_unit setBehaviour "AWARE";
_unit setSpeedMode "FULL";
_unit allowFleeing 0;

diag_log format ["[ARC_AI_XEH] %1 has been processed.", name _unit];
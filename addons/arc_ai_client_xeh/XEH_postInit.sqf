//--- Delete empty groups every minute to prevent reaching the group limit
[{
    [] spawn {
        {deleteGroup _x;false} count (allGroups select {local _x && {(units _x) isEqualTo []}});
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

{
    _typeDefactionized = [_x] call grad_loadout_fnc_defactionizeType;
    _faction = [faction _x] call grad_loadout_fnc_factionGetLoadout;

    if (!isClass (missionConfigFile >> "Loadouts" >> "Faction" >> _faction >> "Type" >> _typeDefactionized)) then {
        diag_log ["checkLoadoutsExist.sqf","missig loadout",_typeDefactionized,_faction];
    };
} forEach playableUnits;

diag_log ["checkLoadoutsExist.sqf","done"];

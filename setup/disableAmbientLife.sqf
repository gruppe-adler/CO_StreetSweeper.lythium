[{(missionNamespace getVariable ["CBA_missionTime",0]) > 10},{
    enableEnvironment [false, true];
},[]] call CBA_fnc_waitUntilAndExecute;

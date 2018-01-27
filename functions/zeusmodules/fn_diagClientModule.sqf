private _state = missionNamespace getVariable ["grad_zeusmodules_updateFPS",false];

[!_state] remoteExec ["grad_zeusmodules_fnc_diagClientModule_switch",2,false];

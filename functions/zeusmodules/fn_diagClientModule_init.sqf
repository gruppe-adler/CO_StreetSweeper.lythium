"grad_zeusmodules_updateFPS" addPublicVariableEventHandler {
    params ["","_var"];

    [] call grad_zeusmodules_fnc_diagClientModule_updateFPS;
    
    if !(_var) exitWith {};
    [] call grad_zeusmodules_fnc_diagClientModule_drawFPS;
};


if (missionNamespace getVariable ["grad_zeusmodules_updateFPS",false]) then {
    [] call grad_zeusmodules_fnc_diagClientModule_updateFPS;
    [] call grad_zeusmodules_fnc_diagClientModule_drawFPS;
};

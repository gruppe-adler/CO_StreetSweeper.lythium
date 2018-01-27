[{!isNull (findDisplay 46) && {time > 5}}, {
    ["0_STREETSWEEPER","Show Player FPS",grad_zeusmodules_fnc_diagClientModule] call Ares_fnc_RegisterCustomModule;
    ["0_STREETSWEEPER","Reload Loadout",grad_zeusmodules_fnc_reloadLoadoutModule] call Ares_fnc_RegisterCustomModule;
    ["0_STREETSWEEPER","Transfer to/from HC",grad_zeusmodules_fnc_transferHcModule] call Ares_fnc_RegisterCustomModule;
}] call CBA_fnc_waitUntilAndExecute;

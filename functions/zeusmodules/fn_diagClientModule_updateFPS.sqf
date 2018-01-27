/*  written by DriftingNitro
*   modified by McDiod
*/


if (missionNamespace getVariable ["grad_zeusmodules_updateFPS_running",false]) exitWith {};
grad_zeusmodules_updateFPS_running = true;

[{
    params ["_args","_handle"];
    if !(grad_zeusmodules_updateFPS) exitWith {grad_zeusmodules_updateFPS_running = false; [_handle] call CBA_fnc_removePerFrameHandler};

    player setVariable ["grad_zeusmodules_playerFPS", round diag_fps, true];
} , 2, []] call CBA_fnc_addPerFrameHandler;

#include "component.hpp"

params [["_setTo",false]];

if !(isServer) exitWith {};

missionNamespace setVariable ["grad_zeusmodules_updateFPS",_setTo,true];
[objNull, format ["Client FPS Anzeige für alle Zeuse %1.",["ausgeschaltet","eingeschaltet"] select _setTo]] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];

if (hasInterface && _setTo) then {
    [] call grad_zeusmodules_fnc_diagClientModule_updateFPS;
    [] call grad_zeusmodules_fnc_diagClientModule_drawFPS;
};

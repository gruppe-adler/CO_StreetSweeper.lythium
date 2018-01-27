#include "component.hpp"

params [["_posAGL",[0,0,0]],["_obj",objNull]];

if (isNull _obj) exitWith {
    [objNull,"Error: Place module on unit."] call bis_fnc_showCuratorFeedbackMessage;
};

[_obj] remoteExec ["GRAD_Loadout_fnc_doLoadoutForUnit",_obj,false];
[objNull,format ["Loadout reloaded for %1.",name _obj]] call bis_fnc_showCuratorFeedbackMessage;

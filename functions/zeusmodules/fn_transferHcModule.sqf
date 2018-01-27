#include "component.hpp"

params [["_posAGL",[0,0,0]],["_obj",objNull]];

if (isNull _obj) exitWith {
    [objNull,"Error: no unit found."] call bis_fnc_showCuratorFeedbackMessage;
};

private _grp = group _obj;
if (isNull _grp) exitWith {
    [objNull,"Error: object has no group."] call bis_fnc_showCuratorFeedbackMessage;
};

[_grp] remoteExec ["grad_zeusmodules_fnc_transferHcModule_server",2,false];

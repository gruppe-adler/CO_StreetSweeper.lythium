#include "component.hpp"

params [["_grp",grpNull]];

if (isNull _grp) exitWith {
    [objNull,"Error: group was null on server."] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];
};

if (({isPlayer _x} count (units _grp)) > 0) exitWith {
    [objNull,"Error: group contains players."] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];
};



private _hcs = missionNamespace getVariable ["acex_headless_headlessClients",[]];
private _hcIDs = _hcs apply {owner _x};

if (_grp getVariable ["acex_headless_blacklist",false]) then {
    _grp setVariable ["acex_headless_blacklist",false,true];
    {_x setVariable ["acex_headless_blacklist",false,true]} forEach (units _grp);
    [objNull,"Group re-enabled for HC transfer."] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];

} else {
    _grp setVariable ["acex_headless_blacklist",true,true];
    {_x setVariable ["acex_headless_blacklist",true,true]} forEach (units _grp);

    if ((groupOwner _grp) in _hcIDs) then {
        _grp setGroupOwner remoteExecutedOwner;
        [objNull,"Group blacklisted for HC and transferred to player."] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];
    } else {
        [objNull,"Group blacklisted for HC."] remoteExec ["bis_fnc_showCuratorFeedbackMessage",remoteExecutedOwner,false];
    };
};

/*  Sets group names and radio channels
*
*/

#include "component.hpp"

_allgroups = [] call GRAD_groupsettings_fnc_findPlayableGroups;

if (isServer) then {
    [_allGroups] call GRAD_groupsettings_fnc_setDynamicGroupNames;
    "groupsettings: groups registered" remoteExec ["systemChat",0,false];
};

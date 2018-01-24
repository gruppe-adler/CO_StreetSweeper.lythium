["InitializePlayer", [player,true]] call BIS_fnc_dynamicGroups;

[{!isNull player},{

    if (didJIP) then {[player] remoteExec ["grad_common_fnc_addJipToZeus",2,false]};
    player addEventHandler ["HandleRating",{0}];

},[]] call CBA_fnc_waitUntilAndExecute;

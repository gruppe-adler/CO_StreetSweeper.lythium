player allowDamage false;

private _respawnMarker = switch (player getVariable ["grad_streetSweeper_clan","UNKNOWN"]) do {
    case ("3CB"): {"respawn_3CB"};
    case ("KV13"): {"respawn_KV13"};
    case ("GA"): {"respawn_GA"};
    default {"respawn_GA"};
};

private _respawnPos = getMarkerPos _respawnMarker;
if (_respawnPos isEqualTo [0,0,0]) exitWith {};

player setPosATL _respawnPos;

[{player allowDamage true},[],5] call CBA_fnc_waitAndExecute;

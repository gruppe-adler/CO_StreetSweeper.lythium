/*  written by DriftingNitro
*   modified by McDiod
*/


if (isNull (getAssignedCuratorLogic player)) exitWith {};
if !(grad_zeusmodules_updateFPS) exitWith {grad_zeusmodules_drawFPS_running = false};


if (missionNamespace getVariable ["grad_zeusmodules_drawFPS_running",false]) exitWith {};
grad_zeusmodules_drawFPS_running = true;


addMissionEventHandler ["Draw3D", {

	if !(grad_zeusmodules_drawFPS_running) exitWith {
        removeMissionEventHandler ["Draw3D",_thisEventHandler];
    };

	{
		_distance = position curatorCamera distance _x;
		if (_distance > 1200) exitWith {};

		_playerFPS = _x getVariable ["grad_zeusmodules_playerFPS",-1];
		_textSettings = if (_playerFPS < 20) then {[[1,0,0,0.7],0.04]} else {[[1,1,1,0.5],0.03]};
        _textSettings params ["_color","_size"];
		drawIcon3D ["",_color,position _x,1,2,0,format["%1 FPS: %2", name _x, str _playerFPS],0,_size,"RobotoCondensed","center"];

        false
	} count allPlayers;
}];

class Extended_PreInit_EventHandlers {
	class grad_co_streetsweeper {
		init = "call compile preprocessFileLineNumbers 'XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class grad_co_streetsweeper {
		init = "call compile preprocessFileLineNumbers 'XEH_postInit.sqf'";
	};
};

class Extended_InitPost_EventHandlers  {
	class CAManBase {
	   init = "params ['_u']; if (!(isPlayer _u) && {local _u}) then {[_u] call GRAD_Loadout_fnc_doLoadoutForUnit};";
	};
};

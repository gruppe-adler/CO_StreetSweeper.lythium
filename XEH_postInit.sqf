#include "macros_mission.hpp"

CALLCOMPILE("setup\factionsSetLoadouts.sqf");
CALLCOMPILE("setup\disableAmbientLife.sqf");

[] call grad_groupsettings_fnc_setGroupSettings;


[{!isNil "ga_adminMessages_channel" && time > 5},{
    ga_adminMessages_channel radioChannelAdd [player];
    ga_adminMessages_channel radioChannelSetCallsign "Adminmessage (GA):";

    player customChat [ga_adminMessages_channel, "Dear guests: If necessary, please use our adminMessages window to ask for help. (Esc >> top left)"];
    player say2D "3DEN_notificationWarning";

    ga_adminMessages_channel radioChannelRemove [player];
},[]] call CBA_fnc_waitUntilAndExecute;

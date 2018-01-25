private _logos = [
    "data\KV13_logo.paa",
    "data\3CB_logo.paa"
];

disableSerialization;
private _controls = [];

private _topLogo = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
_topLogo ctrlSetPosition [safeZoneX, safeZoneY + (safeZoneH * 0.14), safeZoneW, safeZoneH * 0.24];
_topLogo ctrlSetFade 1;
_topLogo ctrlCommit 0;
_topLogo ctrlSetStructuredText parseText "<t>          </t><img image='data\GRAD_logo.paa' align='center' size='12' shadow='0' />";
_topLogo ctrlSetFade 0;
_topLogo ctrlCommit 1;
_controls pushBack _topLogo;

private _presentTitle = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
_presentTitle ctrlSetPosition [safeZoneX, safeZoneY + (safeZoneH * 0.4), safeZoneW, safeZoneH * 0.1];
_presentTitle ctrlSetFade 1;
_presentTitle ctrlCommit 0;
_presentTitle ctrlSetStructuredText parseText "<t align='center' shadow='0' size='1.4'>presents</t>";
_controls pushBack _presentTitle;
[{
    disableSerialization;
    params ["_ctrl"];
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 1;
}, [_presentTitle], 1] call CBA_fnc_waitAndExecute;

private _title = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
_title ctrlSetPosition [safeZoneX, safeZoneY + (safeZoneH * 0.44), safeZoneW, safeZoneH * 0.1];
_title ctrlSetFade 1;
_title ctrlCommit 0;
_title ctrlSetStructuredText parseText "<t align='center' size='2.6' shadow='0'>Operation ""Street Sweeper""</t>";
_controls pushBack _title;
[{
    disableSerialization;
    params ["_ctrl"];
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 1;
}, [_title], 2] call CBA_fnc_waitAndExecute;

private _subTitle = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
_subTitle ctrlSetPosition [safeZoneX, safeZoneY + (safeZoneH * 0.54), safeZoneW, safeZoneH * 0.1];
_subTitle ctrlSetFade 1;
_subTitle ctrlCommit 0;
_subTitle ctrlSetStructuredText parseText "<t align='center' shadow='0' size='1.4'>in cooperation with</t>";
_controls pushBack _subTitle;
[{
    disableSerialization;
    params ["_ctrl"];
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 1;
}, [_subTitle], 3] call CBA_fnc_waitAndExecute;

private _subLogo = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
_subLogo ctrlSetPosition [safeZoneX, safeZoneY + (safeZoneH * 0.60), safeZoneW, safeZoneH * 0.26];
_subLogo ctrlSetFade 1;
_subLogo ctrlCommit 0;
_controls pushBack _subLogo;
private _subText = "";

{
    _subText = _subText + format ["<img image='%1' align='center' size='10' shadow='0' />", _x];
    if (_forEachIndex < (count _logos - 1)) then {
        _subText = _subText + "<t align='center'>                    </t>";
    };
} forEach _logos;

_subLogo ctrlSetStructuredText parseText _subText;

[{
    disableSerialization;
    params ["_ctrl"];
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 1;
}, [_subLogo], 4] call CBA_fnc_waitAndExecute;

[{
    disableSerialization;
    {
        _x ctrlSetFade 1;
        _x ctrlCommit 2;
    } forEach _this;
}, _controls, 10] call CBA_fnc_waitAndExecute;

[{
    disableSerialization;
    {
        ctrlDelete _x;
    } forEach _this;
}, _controls, 12] call CBA_fnc_waitAndExecute;

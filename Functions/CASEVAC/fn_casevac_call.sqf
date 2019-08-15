disableSerialization;
//Get current selected items in the lines.
_group = group player;
_line_1_selected_index = lbCurSel 1500;
_line_2_selected_index = lbCurSel 1501;
_line_3_selected_index = lbCurSel 1502;
_line_4_selected_index = lbCurSel 1503;
_line_5_selected_index = lbCurSel 1504;
_line_6_selected_index = lbCurSel 1505;
_line_7_selected_index = lbCurSel 1506;
_line_8_selected_index = lbCurSel 1507;
_line_9_selected_index = lbCurSel 1508;

//Get data
/*
_line_1_data = lbData [1500, _line_1_selected_index];
_line_2_data = lbData [1501, _line_2_selected_index];
_line_3_data = lbData [1502, _line_3_selected_index];
_line_4_data = lbData [1503, _line_4_selected_index];
_line_5_data = lbData [1504, _line_5_selected_index];
_line_6_data = lbData [1505, _line_6_selected_index];
_line_7_data = lbData [1506, _line_7_selected_index];
_line_8_data = lbData [1507, _line_8_selected_index];
_line_9_data = lbData [1508, _line_9_selected_index];
*/
//Text test
_line_1_data = lbData  [1500, _line_1_selected_index];
_line_2_data = lbData  [1501, _line_2_selected_index];
_line_3_data = lbText  [1502, _line_3_selected_index];
_line_4_data = lbText  [1503, _line_4_selected_index];
_line_5_data = lbText  [1504, _line_5_selected_index];
_line_6_data = lbText  [1505, _line_6_selected_index];
_line_7_data = lbText  [1506, _line_7_selected_index];
_line_8_data = lbText  [1507, _line_8_selected_index];
_line_9_data = lbText  [1508, _line_9_selected_index];
//Test
_text = format ["
Line 1:%1<br/>
Line 2:%2<br/>
Line 3:%3<br/>
Line 4:%4<br/>
Line 5:%5<br/>
Line 6:%6<br/>
Line 7:%7<br/>
Line 8:%8<br/>
Line 9:%9<br/>
",_line_1_data,_line_2_data,_line_3_data,_line_4_data,_line_5_data,_line_6_data,_line_7_data,_line_8_data,_line_9_data];
_casevac_control = "AW_CASEVAC_CTRL" call BIS_fnc_getParamValue;
if (_casevac_control == 1) then {
  _casevac_task = player createSimpleTask ["CASEVAC"]; //TODO: add ifthen for AI\Player CASEVAC also localize to aw_task_tasking and make a casevac group
  _casevac_task setSimpleTaskDescription [_text,"CASEVAC","CASEVAC"];//desc,short,hud
  _pos = [_line_1_data] call BIS_fnc_gridToPos;
  _casevac_task setSimpleTaskDestination (_pos select 0);
} else {
    [_group,_line_1_data,_line_2_data,_line_3_data,_line_4_data,_line_5_data,_line_6_data,_line_7_data,_line_8_data,_line_9_data] call AW_fnc_casevac_ai
};





//DEBUG hintC format ["%1,%2,%3,%4,%5,%6,%7,%8,%9",_pos,_line_2_data,_line_3_data,_line_4_data,_line_5_data,_line_6_data,_line_7_data,_line_8_data,_line_9_data];
closeDialog 0;

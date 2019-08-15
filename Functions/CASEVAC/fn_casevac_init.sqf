disableSerialization;
createDialog "casevac_gui";
//Line 1
_gridPos = mapGridPosition player;//_caller,TODO:Pass caller of action to this script to get localized gridPos
_gridFormat = format["GRID:%1",_gridPos];
_line1 = lbAdd [1500, _gridFormat];
lbSetData [1500, _line1, _gridPos];//IDC,INDEX,DATA
//Line 2
_SW_FRC_CAL = "52MHz";//TODO:Get SW of caller;
_Callsign = group player ;//TODO:get player role(ASL,BSCL etc.);
_text = format ["RF:%1 Callsign:%2",_SW_FRC_CAL,_Callsign];
_data = format ["%1",_Callsign];
_line2 = lbAdd [1501, _text];
lbSetData [1501, _line2, _data];//IDC,INDEX,DATA
//Line 3
_line3_Urgent = lbAdd [1502, "A - Urgent"];
lbSetData [1502, _line3_Urgent, "URGENT"];//IDC,INDEX,DATA

_line3_UrgentSurgical = lbAdd [1502, "B - Urgent Surgical"];
lbSetData [1502, _line3_UrgentSurgical, "URGENTSURGICAL"];//IDC,INDEX,DATA

_line3_Priority = lbAdd [1502, "C - Priority"];
lbSetData [1502, _line3_Priority, "PRIORITY"];//IDC,INDEX,DATA

_line3_Routine = lbAdd [1502, "D - Routine"];
lbSetData [1502, _line3_Routine, "ROUTINE"];//IDC,INDEX,DATA

_line3_Convenience = lbAdd [1502, "E - Convenience"];
lbSetData [1502, _line3_Convenience, "CONVENIENCE"];//IDC,INDEX,DATA

//Line 4
_line4 = lbAdd [1503, "NOT IN USE"];
lbSetData [1503, _line4, "NA"];//IDC,INDEX,DATA
//Line 5
_line5_Litter = lbAdd [1504, "A - Litter"];
lbSetData [1504, _line5_Litter, "LITTER"];//IDC,INDEX,DATA
_line5_Ambualatory = lbAdd [1504, "B - Ambulatory"];
lbSetData [1504, _line5_Ambualatory, "AMBULATORY"];//IDC,INDEX,DATA
//Line 6
_line6_NoEI = lbAdd [1505, "N - No EI"];
lbSetData [1505, _line6_NoEI, "NOEI"];//IDC,INDEX,DATA

_line6_PosEI = lbAdd [1505, "P - Possible EI troops"];
lbSetData [1505, _line6_PosEI, "POSEI"];//IDC,INDEX,DATA

_line6_EI = lbAdd [1505, "E - EI in area"];
lbSetData [1505, _line6_EI, "EI"];//IDC,INDEX,DATA

_line6_HvyEI = lbAdd [1505, "X - EI in area,Escort REQ"];
lbSetData [1505, _line6_HvyEI, "HVYEI"];//IDC,INDEX,DATA
//Line 7
_line7_Flare = lbAdd [1506, "A - Flare"];
lbSetData [1506, _line7_Flare, "FLARE"];//IDC,INDEX,DATA

_line7_Smoke = lbAdd [1506, "B - Smoke"];
lbSetData [1506, _line7_Smoke, "SMOKE"];//IDC,INDEX,DATA
//Line 8
_line8_Blu = lbAdd [1507, "A - MILITARY"];
lbSetData [1507, _line8_Blu, "MIL"];//IDC,INDEX,DATA

_line8_Civ = lbAdd [1507, "B - CIVILLIAN"];
lbSetData [1507, _line8_Civ, "CIV"];//IDC,INDEX,DATA
//Line 9
_line8_Blu = lbAdd [1508, "NOT IN USE"];
lbSetData [1508, _line8_Blu, "NA"];//IDC,INDEX,DATA

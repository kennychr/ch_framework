/*
 * Author: Christiansen
 * [Description]
 *
 * Arguments:
 * 0: Argument Name <TYPE>
 *
 * Return Value:
 * Return Name <TYPE>
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */
 //_pos = [_line_1_data] call BIS_fnc_gridToPos;
 //AW_CASEVAC_START

params ["_group","_line_1_data","_line_2_data","_line_3_data","_line_4_data","_line_5_data","_line_6_data","_line_7_data","_line_8_data","_line_9_data"];
PAPABEAR = [West,"HQ"];
PAPABEAR sideChat format ["%1 this is PAPA BEAR. Request Received. Over.", _line_2_data];
_chance = 0;
_destination = [_line_1_data] call BIS_fnc_gridToPos;
_callsign_casevac = ceil(random 9);
_speed = _line_3_data;
_number_patients = _line_5_data;
_threat_level = _line_6_data;
_marking_lz = _line_7_data;
//Debug

_startpos = getMarkerPos "AW_CASEVAC_START";
//Setup CASEVAC with params recieved from 9 line request
switch (_speed) do {
    case "A - Urgent": {
      AW_speed = "FULL";
    };
    case "B - Urgent Surgica": {

    };
    case "C - Priority": {

    };
    case "D - Routine": {

    };
    case "E - Convenience": {

    };
};


switch (_number_patients) do {
  //Player(s) not walking
  case "A - Litter": {

  };
  //Player(s) able to walk
  case "B - Ambulatory": {

  };

};
switch (_threat_level) do {
    case "N - No EI": {
      AW_casevac_behaviour = "SAFE";
    };
    case "P - Possible EI troops": {
      AW_casevac_behaviour = "AWARE";
    };
    case "E - EI in area": {
      AW_casevac_behaviour = "COMBAT";
    };
    case "X - EI in area,Escort REQ": {
      AW_casevac_behaviour = "STEALTH";
    };
};
switch (_marking_lz) do {
    case "A - Flare": {
        AW_casevac_marker_name = "Flare";
        AW_casevac_maker = "";
    };
    case "B - Smoke": {
        AW_casevac_marker_name = "Smoke";
        AW_casevac_marker = "";
    };
};

if (!(AW_CASEVAC_ACTIVE)) then {

  AW_CASEVAC_ACTIVE = true;

  //Check if escort is needed
  if (_threat_level == "X - EI in area,Escort REQ") then {

  };

  [_startpos,_destination,_group,_callsign_casevac,_marking_lz] spawn {

    params ["_startpos","_destination","_group","_callsign_casevac","_marking_lz"];
    _casevac_destination = _destination select 0;
    //Spawn helicockter
    _vehicle_type = "B_Heli_Transport_01_F";
    _veh = _vehicle_type createVehicle _startpos;
    createVehicleCrew _veh;
    _veh flyInHeight 70;
    _vehGrp = group _veh;
    _vehGrp setVariable ["zbe_cacheDisabled",true];
    if (alive _veh) then {
      _veh disableAI "TARGET";
      _veh disableAI "AUTOTARGET";
      _endpos = getMarkerPos "AW_HOSPITAL";
      _wp = [_vehGrp,_casevac_destination,20,"MOVE",AW_casevac_behaviour] call CBA_fnc_addWaypoint;

      waitUntil {sleep 1;((_veh distance _casevac_destination) <= 1000) || !(alive _veh) || damage _veh > 0.3;};
      if (alive _veh && damage _veh < 0.3) then {
        _veh sideChat format ["%1 This is Pedro %2. 1000 Meters out. Over",_group,_callsign_casevac];
      if (alive _veh) then {
        _veh sideChat format ["%1 this is Pedro %3. Mark LZ now with %2. Over.", _group, AW_casevac_marker_name, _callsign_casevac];
        //Find object
        //Make this a CBA PFEH ?
        AW_casevac_lz_no_mark = true;
        while {AW_casevac_lz_no_mark} do {
            switch (_marking_lz) do {
                case "A - Flare": {
                  AW_itemArray = [];
                  AW_itemArray = _casevac_destination nearObjects ["SmokeShell",50];//TODO:add Flare configname
                  AW_itemCount = count AW_itemArray;
                  _flare = AW_itemArray select 0;
                  if (AW_itemCount == 1) then {
                      AW_casevac_lz_no_mark = false;
                      AW_markingPos = position _flare;
                  };
                };
                case "B - Smoke": {
                  AW_itemArray = [];
                  AW_itemArray = _casevac_destination nearObjects ["SmokeShell",200];
                  AW_itemCount = count AW_itemArray;
                  _smoke = AW_itemArray select 0;

                  if (AW_itemCount > 0) then {
                      AW_casevac_lz_no_mark = false;
                      AW_markingPos = position _smoke;
                      hintC "Smoke Found";
                      _veh sideChat format ["%1 this is Pedro %3. %2 found. Landing now. Over.", _group, AW_casevac_marker_name, _callsign_casevac];
                  };

                };
            };
            //Debug
            hintSilent "Searching For Smoke";
            sleep 5;
        };

        waitUntil {sleep 1;(AW_itemCount == 1)};

          //Make eet land
        _landEnd = "Land_HelipadEmpty_F" createVehicle AW_markingPos;
        _veh land "GET IN";
        _veh landAt _landEnd;
        //Landed?
        waitUntil {sleep 3;((position _veh) select 2 <= 3) || !(alive _veh) || damage _veh > 0.3};
        if (alive _veh && damage _veh < 0.3) then {
            _veh sideChat format ["%1 this is Pedro %2. Touchdown. Over",_group,_callsign_casevac];
            //Find Wounded TODO: Find ACE Wounded etc too
            AW_casevac_wounded = [];
            _units = [AW_MarkingPos,100] call AW_fnc_player_getUnitsArea;
            {
              //Vanilla wounded, need to be severly damaged to get counted
              if (damage _x > 0.5) then {
                  AW_casevac_wounded set [count AW_casevac_wounded,_x];//Use pushback later
              };
            } forEach _units;
          if (count AW_casevac_wounded > 0) then {
              _veh sideChat format ["%1 This is Pedro %2. Load the %3 wounded. Over",_group,_callsign_casevac,count AW_casevac_wounded];
          };
          if (count AW_casevac_wounded > 0) then {
              waitUntil {sleep 3;{!(_x in _veh)} count AW_casevac_wounded == 0};
              _veh sideChat format ["%1 this is Pedro %2. Wounded now onboard. Over.", _group, _callsign_casevac];
          };
          if (alive _veh) then {
            _veh sideChat format ["%1 this is Pedro %2. 30 seconds to dustoff. Over.", _group, _callsign_casevac];
            sleep 30;
            deleteVehicle _landEnd;
          };

        };
        //Time to go field hospital
        _field_hospital = getMarkerPos "AW_CASEVAC_FIELDHOSPITAL";
        _wp = [_vehGrp,_field_hospital,20,"MOVE",AW_casevac_behaviour] call CBA_fnc_addWaypoint;
        waitUntil {sleep 1;((_veh distance _field_hospital) <= 600) || !(alive _veh) || damage _veh > 0.3;};
        _landEnd = "HeliHEmpty" createVehicle _field_hospital;
				_veh land "GET OUT";
        _veh landAt _landEnd;
        waitUntil {sleep 3;((position _veh) select 2 <= 3) || !(alive _veh) || damage _veh > 0.3};

        if (alive _veh && damage _veh < 0.3) then {
          _wounded_amount = count AW_casevac_wounded;
          _wait_time = 60 * _wounded_amount;
            _veh sideChat format ["%1 this is Pedro %2. Arrived at Field Hospital.Waiting %4 Seconds for unloading of %3 Wounded. Over.", _group, _callsign_casevac,count AW_casevac_wounded,_wait_time];
            sleep _wait_time;
            _veh sideChat format ["%1 this is Pedro %2. Wounded have been moved to the field hospital. We are RTB. Over.",_group, _callsign_casevac];
            deleteVehicle _landEnd;

        };

        _wp = [_vehGrp,[0,0,0],20,"MOVE",AW_casevac_behaviour] call CBA_fnc_addWaypoint;
        waitUntil {sleep 5;( _veh distance _field_hospital > 2000) || !(alive _veh) || damage _veh > 0.3};
        if !(alive _veh || damage _veh > 0.3) then {
          hint format ["CASEVAC: PEDRO %1 has crashed!", _callsign_casevac];
          };
          _veh call CBA_fnc_deleteEntity;
          AW_CASEVAC_ACTIVE = false;
        };
      };
    };
  };


} else {
  [] spawn {
    sleep (5+(random 5));
		PAPABEAR sideChat format ["%1 this is CROSSROADS. Request Not-Authorised. Sorry guys, we're real busy, try later. Over.", _line_2_data];
  };
};

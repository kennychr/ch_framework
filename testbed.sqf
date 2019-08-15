_pos = getPos player;
_groups = [EAST, 5, _pos, 500] call AW_fnc_ai_spawnEnemy;
{
  [_x] call AW_fnc_patrols_add_eventhandler;
} forEach _groups;
AW_Patrols = AW_Patrols + _groups;
hint format ["%1",AW_Patrols]

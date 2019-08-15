/*
 * Author: Christiansen
 * Spawns X amount of camps within defined radius of map center
 *
 * Arguments:
 * 0: Amount of camps
 *
 * Return Value:
 * Camps <array>
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */
params ["_amount"];


//TODO dymo camp prefab
for [{_i = 0}, {_i < _amount}, {_i = _i + 1}] do {
_spawnPos = ["land2",true] call AW_fnc_position_findSpace;
_campCenter = createVehicle ["Box_FIA_Wps_F", _spawnPos, [], 0, "can_collide"];
//Create camp walls etc via dymo
AW_AI_CAMPS pushBack _campCenter;
};

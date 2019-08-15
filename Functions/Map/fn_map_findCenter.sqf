/*
 * Author: Christiansen
 * Finds center of map
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */
 _mapSize = call BIS_fnc_mapSize;
_mapHalf = _mapSize / 2;
AW_MAP_CENTER = [_mapHalf,_mapHalf,0];

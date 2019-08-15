/*
 * Author: Christiansen
 * Find all towns\villages on map
 *
 * Arguments:
 * 0: Argument Name <TYPE>
 *
 * Return Value:
 * Towns <array>
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */
AW_TOWNS = [];
AW_TOWNS = nearestLocations [AW_MAP_CENTER, ["NameVillage","NameCity","NameCityCapital"], 25000];

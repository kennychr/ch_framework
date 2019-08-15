/*
 * Author: Christiansen
 * Select random town from the town array,subtracts selected town from array so that it cant be double selected
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Town <x,y>
 *
 * Example:
 * _town = [] call AW_fnc_map_findTown;
 *
 * Public: [Yes/No]
 */
 if ((count AW_Towns) < 3) then {
     [] call AW_fnc_map_findTowns;
 };
 _town = AW_TOWNS call BIS_fnc_selectRandom;
 _townPos = getPos _town;
 AW_TOWNS = AW_TOWNS - [_town];
 _townPos

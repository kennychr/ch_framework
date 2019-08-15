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

params ["_pos","_radius"];

 _units = [];
 {
 	if(_pos distance _x < _radius) then {
 		_units set [count _units, _x];
 	};
 } forEach allUnits;

 _units

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

 _hasSatcom = player getVariable "hasSatcom";

 switch _hasSatcom do {
     case 0: {

     };
     case 1: {
         player addAction ["Use SATCOM", {createDialog "satcom_gui";}];
     };
 };

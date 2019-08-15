params ["_caller"];


//Check if player already has a task for his group
_tasked = _caller getVariable ["AW_TASKED",0];
if (_tasked == 1) then {
    hint "You are currently tasked with an objective, finish it before you request another one";
} else {
    hint "Generating task";
    [_caller] call AW_fnc_task_patrol;//Currently only one task to test 
    _caller setVariable ["AW_TASKED", 1, true];
};

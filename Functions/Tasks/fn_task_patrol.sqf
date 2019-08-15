params ["_caller"];


//find town
_town = [] call AW_fnc_map_findTown;

//Spawn 2 groups of enemies at town
_spawnedUnits = [EAST, 2, _town, 500] call AW_fnc_ai_spawnEnemy;
[_spawnedUnits, [["patrol", true, 200]]] call AW_fnc_ai_setBehaviour;

//Task player group
_group = group _caller;
_taskHandle = [_group,"We have recieved reports of activity near this town, please patrol it","Patrol","MARKERNAME",_town,"Interact"] call AW_fnc_task_makeTask;

//Add trigger and PFH for checking if task is completed etc.
_trg = createTrigger ["EmptyDetector",_town];
_trg setTriggerArea [700,700,0,false];
_trg setTriggerActivation ["EAST","PRESENT", false];
_trg setTriggerStatements ["this","",""];

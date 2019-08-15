/*
| Author: Pfc.Christiansen
|
|
|_____
|
|   Description:
|
|	Created: 25.10-2015
|	Last modified:
|	Made for AhoyWorld.
*/

/*
Usage
0 = Task target, can be Player,group,side,  or array.
1 = task description i.e : We take this hill and etc..
2 = task name i.e : attack hill
3 = markerName doesnt need to be unique
4 = location of task, either marker or object.
5 = taskIcon type, read further down.

Explanations of #4:
There are currently these 8 archetype task types defined:

Default
Attack
Defend
Destroy
Interact
Move
Search
Support
And there is a pre-defined task type for every capital letter in latin alphabet.(A-Z)

When using taskFnc in a script:
_taskHandle = ["We are going to make a task","Use the Tasksys","MARKERNAME","_missionPos","Interact"] call AW_fnc_makeTask;
This will return the taskID to the local var _taskHandle, you can then update the state of the task when succeeded or failed via BIS_fnc_setTask state : [_taskID,"SUCCEEDED"] call BIS_fnc_taskSetState;

*/
i_blu = i_blu + 1 ;
_TASK_ID = Format ["Task_BLU%1", i_blu];

params ["_task_target","_description","_taskName","_taskMarkername","_taskLocation","_taskIcon"];

[_task_target,
[_TASK_ID],
[
_description,
_taskName,
_taskMarkername
],
_taskLocation,
0,
1,
true,
_taskIcon,
true] call BIS_fnc_taskCreate;
//return taskID so that you can call it easier when using multiple tasks.
_TASK_ID

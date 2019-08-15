/*
 * Author: Christiansen
 * Set up variables for server via XEH preinit
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * None
 *
 * Public: [Yes/No]
 */
//--Initialize variables
AW_Patrols = [];
AW_AI_CAMPS = [];
AW_CASEVAC_ACTIVE = false;
//Initialize map center and towns
[] call AW_fnc_map_findCenter;
[] call AW_fnc_map_findTowns;



//Initialize AI Camps TODO: misParam for amount
//[5] call AW_fnc_ai_spawn_camps;
//[{AW_AI_Patrol_FSM = execFSM "Machines\AI\AW_AI_Patrols.fsm";}, [], 1] call CBA_fnc_waitAndExecute;

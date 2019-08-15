class AW {
  tag = "AW"
  class AI {
    file = "Functions\AI";
    class ai_setBehaviour {};
    class ai_spawn_camps  {};
    class ai_spawnEnemy   {};

  };
  class BASE {
    file = "Functions\BASE";

  };
  class CASEVAC {
    file = "Functions\CASEVAC";
    class casevac_ai      {};
    class casevac_call  {};
    class casevac_init {};

  };
  class FOB {
    file = "Functions\FOB";

  };
  class Garbage {
    file = "Functions\Garbage";
    class garbage_addDead {};
    class garbage_collectGarbage  {};
  };
  class Map {
    file = "Functions\Map";
    class map_findCenter  {};
    class map_findTown    {};
    class map_findTowns   {};
  };
  class Patrols {
    file = "Functions\Patrols";
    class patrols_add_eventhandler  {};
    class patrols_spawnPatrol       {};

  };
  class Player {
    file = "Functions\Player";
    class player_getUnitsArea {};

  };
  class Position {
    file = "Functions\Position";
    class position_findSpace  {};
    class position_randomPosTrigger {};

  };
  class Server {
    file = "Functions\Server";
    class server_serverPreInit  {};
    class server_advTowingInit  {};

  };
  class Tasks {
    file = "Functions\Tasks";
    class task_generate_task  {};
    class task_makeTask       {};
    class task_patrol         {};
    class task_taskInit       {};
  };
};

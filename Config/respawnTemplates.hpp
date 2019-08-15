class CfgRoles {
	class Assault	{
		displayName = $STR_A3_Role_Assault;
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
	};
	class Support	{
		displayName = $STR_A3_Role_Support;
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
	};

};
class CfgRespawnInventory {

  class West_Officer {
  displayName = "Officer"; // Name visible in the menu
  role = "Support";
	icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
	// Condition must return true in order for the loadout to be displayed in the menu.
	// Evaluated when the menu is opened.
	show = "side group _this == west";

	// Loadout definition, uses same entries as CfgVehicles classes
	weapons[] = {
		"arifle_SPAR_01_blk_F",
		"hgun_Pistol_heavy_01_F"

	};
	magazines[] = {
		"30Rnd_556x45_Stanag_red",
    "30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
    "30Rnd_556x45_Stanag_red",
    "11Rnd_45ACP_Mag"


	};
	items[] = {
		"FirstAidKit",
		"FirstAidKit"

	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr_noflag_F",
		"H_HelmetB_light_desert",
		"optic_Holosight_blk_F",
    "optic_MRD",
		"acc_pointer_IR",
    //Standard Items
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "U_B_CombatUniform_mcam_tshirt";
	backpack = "";
  };

  class West_Rifleman {
  displayName = "Rifleman"; // Name visible in the menu
  role = "Assault";
	icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
	// Condition must return true in order for the loadout to be displayed in the menu.
	// Evaluated when the menu is opened.
	show = "side group _this == west";

	// Loadout definition, uses same entries as CfgVehicles classes
	weapons[] = {
		"arifle_SPAR_01_blk_F",
		"hgun_Pistol_heavy_01_F"

	};
	magazines[] = {
		"30Rnd_556x45_Stanag_red",
    "30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
    "30Rnd_556x45_Stanag_red",
    "11Rnd_45ACP_Mag"


	};
	items[] = {
		"FirstAidKit",
		"FirstAidKit"

	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr_noflag_F",
		"H_HelmetB_light_desert",
		"optic_Holosight_blk_F",
    "optic_MRD",
		"acc_pointer_IR",
    //Standard Items
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "U_B_CombatUniform_mcam_tshirt";
	backpack = "";
  };

  class West_Grenadier {
  displayName = "Grenadier"; // Name visible in the menu
  role = "Assault";
	icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
	// Condition must return true in order for the loadout to be displayed in the menu.
	// Evaluated when the menu is opened.
	show = "side group _this == west";
  
	// Loadout definition, uses same entries as CfgVehicles classes
	weapons[] = {
		"arifle_SPAR_01_GL_blk_F",
		"hgun_Pistol_heavy_01_F"

	};
	magazines[] = {
		"30Rnd_556x45_Stanag_red",
    "30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "1Rnd_HE_Grenade_shell",
    "11Rnd_45ACP_Mag"


	};
	items[] = {
		"FirstAidKit",
		"FirstAidKit"

	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr_noflag_F",
		"H_HelmetB_light_desert",
		"optic_Holosight_blk_F",
    "optic_MRD",
		"acc_pointer_IR",
    //Standard Items
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "U_B_CombatUniform_mcam_tshirt";
	backpack = "";
  };

  class West_Autorifleman {
  displayName = "Autorifleman"; // Name visible in the menu
  role = "Assault";
	icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
	// Condition must return true in order for the loadout to be displayed in the menu.
	// Evaluated when the menu is opened.
	show = "side group _this == west";

	// Loadout definition, uses same entries as CfgVehicles classes
	weapons[] = {
		"arifle_SPAR_02_blk_F",
		"hgun_Pistol_heavy_01_F"

	};
	magazines[] = {
    "150Rnd_556x45_Drum_Mag_F",
    "150Rnd_556x45_Drum_Mag_F",
    "150Rnd_556x45_Drum_Mag_F",
    "150Rnd_556x45_Drum_Mag_F",
    "150Rnd_556x45_Drum_Mag_F",
    "11Rnd_45ACP_Mag"


	};
	items[] = {
		"FirstAidKit",
		"FirstAidKit"

	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr_noflag_F",
		"H_HelmetB_light_desert",
		"optic_Holosight_blk_F",
    "optic_MRD",
		"acc_pointer_IR",
    //Standard Items
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "U_B_CombatUniform_mcam_tshirt";
	backpack = "B_AssaultPack_rgr";
  };
  class West_Marksman {
  displayName = "Marksman"; // Name visible in the menu
  role = "Assault";
	icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
	// Condition must return true in order for the loadout to be displayed in the menu.
	// Evaluated when the menu is opened.
	show = "side group _this == west";

	// Loadout definition, uses same entries as CfgVehicles classes
	weapons[] = {
		"arifle_SPAR_03_blk_F",
		"hgun_Pistol_heavy_01_F"

	};
	magazines[] = {
		"20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "11Rnd_45ACP_Mag"


	};
	items[] = {
		"FirstAidKit",
		"FirstAidKit"

	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr_noflag_F",
		"H_HelmetB_light_desert",
		"optic_Hamr",
    "optic_MRD",
		"acc_pointer_IR",
    "bipod_01_F_blk",
    //Standard Items
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "U_B_CombatUniform_mcam_tshirt";
	backpack = "";
  };
};

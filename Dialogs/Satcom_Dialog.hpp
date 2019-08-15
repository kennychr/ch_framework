#include "defines.hpp"
class satcom_gui {
  idd = 1448;
  movingEnable = false;
  controls[]=
  {
      satcom_background,
      satcom_button_cas,
      satcom_button_casevac,
      satcom_button_tasking

  };



  class satcom_background
  {
  	idc = 1300;
    type = CT_STATIC;
    style = 48;
    text = "";
    colorBackground[] = {0.2,0.2,0.2,0.4}; // Fill color
    colorText[] = {1,1,1,1}; // Text and frame color
    font = "PuristaLight"; // Font from CfgFontFamilies
    sizeEx = 0.035; // Text size
  	x = 0.335 * safezoneW + safezoneX;
  	y = 0.3625 * safezoneH + safezoneY;
  	w = 0.324844 * safezoneW;
  	h = 0.143 * safezoneH;
  };
  class satcom_button_cas
  {
  	idc = 1700;
    action = "";
    type = CT_BUTTON;
    text = "Request CAS"; //--- ToDo: Localize;
    font = "PuristaLight"; // Font from CfgFontFamilies
    sizeEx = 0.035; // Text size
    colorText[] = {1,1,1,1}; // Text and frame color
    style = ST_CENTER;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorBackgroundActive[] ={0.73,0.24,0.11,1};
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorShadow[] = {1,1,1,0.5}; // Disabled text color
    colorBorder[] = {0.2,0.2,0.2,0.9};
    borderSize = 0;
    colorFocused[] ={0.73,0.24,0.11,1};
    soundEnter[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
  	x = 0.355625 * safezoneW + safezoneX;
  	y = 0.39 * safezoneH + safezoneY;
  	w = 0.0928125 * safezoneW;
  	h = 0.088 * safezoneH;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    tooltip = "Task CAS to your position"; //--- ToDo: Localize;
  };
  class satcom_button_casevac
  {
  	idc = 1701;
    action = "[] call AW_fnc_casevac_init";
    type = CT_BUTTON;
    text = "Request CASEVAC"; //--- ToDo: Localize;
    font = "PuristaLight"; // Font from CfgFontFamilies
    sizeEx = 0.035; // Text size
    colorText[] = {1,1,1,1}; // Text and frame color
    style = ST_CENTER;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorBackgroundActive[] ={0.73,0.24,0.11,1};
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorShadow[] = {1,1,1,0.5}; // Disabled text color
    colorBorder[] = {0.2,0.2,0.2,0.9};
    borderSize = 0;
    colorFocused[] ={0.73,0.24,0.11,1};
    soundEnter[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
  	x = 0.453594 * safezoneW + safezoneX;
  	y = 0.39 * safezoneH + safezoneY;
  	w = 0.0928125 * safezoneW;
  	h = 0.088 * safezoneH;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    tooltip = "Task CASEVAC to your position"; //--- ToDo: Localize;
  };
  class satcom_button_tasking
  {
  	idc = 1702;
    action = "[player] call AW_fnc_task_generate_task";
    type = CT_BUTTON;
    text = "Request Tasking"; //--- ToDo: Localize;
    font = "PuristaLight"; // Font from CfgFontFamilies
    sizeEx = 0.035; // Text size
    colorText[] = {1,1,1,1}; // Text and frame color
    style = ST_CENTER;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorBackgroundActive[] ={0.73,0.24,0.11,1};
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorShadow[] = {1,1,1,0.5}; // Disabled text color
    colorBorder[] = {0.2,0.2,0.2,0.9};
    borderSize = 0;
    colorFocused[] ={0.73,0.24,0.11,1};
    soundEnter[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
  	x = 0.551562 * safezoneW + safezoneX;
  	y = 0.39 * safezoneH + safezoneY;
  	w = 0.0928125 * safezoneW;
  	h = 0.088 * safezoneH;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    tooltip = "Request HQ for tasking for your group"; //--- ToDo: Localize;
  };




};

#include "defines.hpp"

class casevac_gui {
  idd = 1447;
  movingEnable = false;
  controls[]=
  {
    casevac_background,
    casevac_line_1,
    casevac_line_2,
    casevac_line_3,
    casevac_line_4,
    casevac_line_5,
    casevac_line_6,
    casevac_line_7,
    casevac_line_8,
    casevac_line_9,
    casevac_button_transmit,
    casevac_button_cancel
  };
  class casevac_background
  {
  	idc = 1200;
    type = CT_STATIC;
    style = 48;
  	text = "#(argb,8,8,3)color(1,1,1,1)";
    colorBackground[] = {0.2,0.2,0.2,0.4}; // Fill color
    colorText[] = {1,1,1,1}; // Text and frame color
    font = "PuristaLight"; // Font from CfgFontFamilies
    sizeEx = 0.035; // Text size
  	x = 0 * GUI_GRID_W + GUI_GRID_X;
  	y = 0 * GUI_GRID_H + GUI_GRID_Y;
  	w = 40 * GUI_GRID_W;
  	h = 25 * GUI_GRID_H;
  };
  class casevac_line_1
  {
    idc = 1500;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.236 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_2
  {
    idc = 1501;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.291 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_3
  {
    idc = 1502;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.346 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_4
  {
    idc = 1503;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.401 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_5
  {
    idc = 1504;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.456 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_6
  {
    idc = 1505;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.511 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_7
  {
    idc = 1506;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.566 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_8
  {
    idc = 1507;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.621 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_line_9
  {
    idc = 1508;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    colorBackground[] = {0.2,0.2,0.2,0.7}; // Fill color
    colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    sizeEx = 0.035; // Text size
    font = "PuristaLight"; // Font from CfgFontFamilies
    shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {1,1,1,1}; // Text and frame color
    colorDisabled[] = {1,1,1,0.5}; // Disabled text color
    colorSelect[] = {1,1,1,1}; // Text selection color
    colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
    tooltip = "AW Roster Dialog"; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
    period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    rowHeight = 1.1 * GUI_GRID_CENTER_H; // Row height
    itemSpacing = 0; // Height of empty space between items
    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

    // Scrollbar configuration (applied only when LB_TEXTURES style is used)
    class ListScrollBar //In older games this class is "ScrollBar"
    {
      width = 0; // width of ListScrollBar
      height = 0; // height of ListScrollBar
      scrollSpeed = 0.01; // scroll speed of ListScrollBar

      arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
      arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
      border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
      thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

      color[] = {1,1,1,1}; // Scrollbar color
    };
    x = 0.335 * safezoneW + safezoneX;
    y = 0.676 * safezoneH + safezoneY;
    w = 0.134062 * safezoneW;
    h = 0.044 * safezoneH;
  };
  class casevac_button_transmit
  {
    idc = 1600;
    action = "call AW_fnc_casevac_call";
    type = CT_BUTTON;
    text = "Transmit"; //--- ToDo: Localize;
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
    x = 0.618594 * safezoneW + safezoneX;
    y = 0.72 * safezoneH + safezoneY;
    w = 0.0825 * safezoneW;
    h = 0.044 * safezoneH;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    tooltip = "Sends the 9 liner to HQ"; //--- ToDo: Localize;
  };
  class casevac_button_cancel
  {
    idc = 2;//Hardcoded IDC for cancel
    type = CT_BUTTON;
    text = "Cancel"; //--- ToDo: Localize;
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
    x = 0.530937 * safezoneW + safezoneX;
    y = 0.72 * safezoneH + safezoneY;
    w = 0.0825 * safezoneW;
    h = 0.044 * safezoneH;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    tooltip = "Cancels the CASEVAC call"; //--- ToDo: Localize;
  };



};

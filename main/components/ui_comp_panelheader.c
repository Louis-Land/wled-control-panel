// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: wled controller

#include "ui.h"


// COMPONENT PanelHeader

lv_obj_t * ui_PanelHeader_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_PanelHeader;
    cui_PanelHeader = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_PanelHeader, 800);
    lv_obj_set_height(cui_PanelHeader, 39);
    lv_obj_set_align(cui_PanelHeader, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_flex_flow(cui_PanelHeader, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_PanelHeader, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_PanelHeader, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(cui_PanelHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(cui_PanelHeader, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_Secondary);
    ui_object_set_themeable_style_property(cui_PanelHeader, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_Secondary);
    lv_obj_set_style_border_side(cui_PanelHeader, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(cui_PanelHeader, lv_color_hex(0x2A2E32), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(cui_PanelHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Label_Header;
    cui_Label_Header = lv_label_create(cui_PanelHeader);
    lv_obj_set_width(cui_Label_Header, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Label_Header, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_Label_Header, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(cui_Label_Header, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_Label_Header, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(cui_Label_Header, "WLED Control For Office");
    lv_label_set_recolor(cui_Label_Header, "true");
    ui_object_set_themeable_style_property(cui_Label_Header, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_textColor);
    ui_object_set_themeable_style_property(cui_Label_Header, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_textColor);
    lv_obj_set_style_text_font(cui_Label_Header, &ui_font_Small_Font, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_IMG_Wifi;
    cui_IMG_Wifi = lv_img_create(cui_PanelHeader);
    lv_img_set_src(cui_IMG_Wifi, &ui_img_icn_wifi_png);
    lv_obj_set_width(cui_IMG_Wifi, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(cui_IMG_Wifi, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(cui_IMG_Wifi, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(cui_IMG_Wifi, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PANELHEADER_NUM);
    children[UI_COMP_PANELHEADER_PANELHEADER] = cui_PanelHeader;
    children[UI_COMP_PANELHEADER_LABEL_HEADER] = cui_Label_Header;
    children[UI_COMP_PANELHEADER_IMG_WIFI] = cui_IMG_Wifi;
    lv_obj_add_event_cb(cui_PanelHeader, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_PanelHeader, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_PanelHeader_create_hook(cui_PanelHeader);
    return cui_PanelHeader;
}

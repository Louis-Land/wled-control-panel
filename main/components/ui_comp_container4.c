// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: wled controller

#include "../ui.h"


// COMPONENT Container4

lv_obj_t * ui_Container4_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Container4;
    cui_Container4 = lv_obj_create(comp_parent);
    lv_obj_remove_style_all(cui_Container4);
    lv_obj_set_width(cui_Container4, lv_pct(100));
    lv_obj_set_flex_grow(cui_Container4, 1);
    lv_obj_set_x(cui_Container4, 4);
    lv_obj_set_y(cui_Container4, 0);
    lv_obj_set_align(cui_Container4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_Container4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_Slider2;
    cui_Slider2 = lv_slider_create(cui_Container4);
    lv_slider_set_value(cui_Slider2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(cui_Slider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(cui_Slider2, 255, LV_ANIM_OFF);
    lv_obj_set_width(cui_Slider2, 150);
    lv_obj_set_height(cui_Slider2, 10);
    lv_obj_set_x(cui_Slider2, 92);
    lv_obj_set_y(cui_Slider2, -149);
    lv_obj_set_align(cui_Slider2, LV_ALIGN_CENTER);

    lv_obj_t * cui_Switch1;
    cui_Switch1 = lv_switch_create(cui_Container4);
    lv_obj_set_width(cui_Switch1, 50);
    lv_obj_set_height(cui_Switch1, 25);
    lv_obj_set_x(cui_Switch1, -118);
    lv_obj_set_y(cui_Switch1, -6);
    lv_obj_set_align(cui_Switch1, LV_ALIGN_CENTER);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_CONTAINER4_NUM);
    children[UI_COMP_CONTAINER4_CONTAINER4] = cui_Container4;
    children[UI_COMP_CONTAINER4_SLIDER2] = cui_Slider2;
    children[UI_COMP_CONTAINER4_SWITCH1] = cui_Switch1;
    lv_obj_add_event_cb(cui_Container4, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Container4, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_Container4_create_hook(cui_Container4);
    return cui_Container4;
}


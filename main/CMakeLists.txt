SET( SOURCES components/ui_comp_container4.c
components/ui_comp_maincontainer.c
components/ui_comp_panelheader.c
components/ui_comp.c
screens/ui_Screen_1_Print.c
ui_theme_manager.c
ui_themes.c
ui.c
components/ui_comp_hook.c
ui_helpers.c
ui_events.c
images/ui_img_icn_wifi_png.c
images/ui_img_icn_time_1_png.c
images/ui_img_icn_time_2_png.c
fonts/ui_font_Small_Font.c
)

idf_component_register(SRCS "main.c" ${SOURCES}
                    INCLUDE_DIRS ".")

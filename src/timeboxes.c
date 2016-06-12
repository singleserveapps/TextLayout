#include <pebble.h>
#include "timeboxes.h"

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GFont s_res_bitham_42_medium_numbers;
static TextLayer *s_textlayer_1;
static TextLayer *s_textlayer_2;
static TextLayer *s_textlayer_3;

static void initialise_ui(void) {
  s_window = window_create();
  #ifndef PBL_SDK_3
    window_set_fullscreen(s_window, true);
  #endif
  
  s_res_bitham_42_medium_numbers = fonts_get_system_font(FONT_KEY_BITHAM_42_MEDIUM_NUMBERS);
  // s_textlayer_1
  s_textlayer_1 = text_layer_create(GRect(5, 55, 42, 49));
  text_layer_set_text(s_textlayer_1, "12");
  text_layer_set_font(s_textlayer_1, s_res_bitham_42_medium_numbers);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_1);
  
  // s_textlayer_2
  s_textlayer_2 = text_layer_create(GRect(50, 55, 42, 49));
  text_layer_set_text(s_textlayer_2, "12");
  text_layer_set_font(s_textlayer_2, s_res_bitham_42_medium_numbers);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_2);
  
  // s_textlayer_3
  s_textlayer_3 = text_layer_create(GRect(95, 55, 42, 49));
  text_layer_set_text(s_textlayer_3, "12");
  text_layer_set_font(s_textlayer_3, s_res_bitham_42_medium_numbers);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_3);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  text_layer_destroy(s_textlayer_1);
  text_layer_destroy(s_textlayer_2);
  text_layer_destroy(s_textlayer_3);
}
// END AUTO-GENERATED UI CODE

static void handle_window_unload(Window* window) {
  destroy_ui();
}

void show_timeboxes(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  window_stack_push(s_window, true);
}

void hide_timeboxes(void) {
  window_stack_remove(s_window, true);
}

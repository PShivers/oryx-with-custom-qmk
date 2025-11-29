#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  KC_ONESHOT_W, // <-- New custom keycode added here
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(2),                                          KC_AUDIO_VOL_UP,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        TG(1),          
    KC_BSPC,        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_DELETE,                                                                      KC_MEH,         KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_GUI,    KC_CAPS,        KC_LEFT_CTRL,   KC_LEFT_ALT,    MO(4),          KC_ESCAPE,                                                                                                      TG(6),          MO(5),          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    MEH_T(KC_SPACE),KC_RIGHT_CTRL,  LT(8, KC_ENTER),                MO(4),          MO(3),          KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_CAPS,        KC_C,           KC_R,           KC_S,           KC_T,           KC_G,           KC_NO,                                                                          KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        
    KC_TAB,         KC_Y,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_RIGHT_SHIFT, KC_B,           KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_LEFT_GUI,    MO(8),          KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_ONESHOT_W,                                                                                                      KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_RIGHT_CTRL,  KC_M,                           KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 MU_TOGG,        KC_TRANSPARENT, KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_MS_ACCEL0,   KC_MS_ACCEL1,   
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                 MU_NEXT,        LCTL(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), KC_MS_ACCEL2,   
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_HOME,        KC_INSERT,      KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LALT(LCTL(KC_RIGHT)),
    KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DELETE,      
    KC_TAB,         KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          RGB_SPI,                                        RGB_SAI,        KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_BSPC,        KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_PSCR,        RGB_SPD,                                                                        RGB_SAD,        KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_NO,          
    KC_LEFT_SHIFT,  KC_F1,          KC_F2,          KC_F3,          KC_F4,          LCTL(KC_SLASH),                                 KC_KP_DOT,      KC_1,           KC_2,           KC_3,           KC_KP_ASTERISK, AS_TOGG,        
    LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),KC_TRANSPARENT, RGB_MODE_FORWARD,                                                                                                RGB_HUI,        KC_0,           KC_EQUAL,       KC_DOT,         KC_KP_SLASH,    KC_NO,          
    RGB_VAI,        RGB_VAD,        TOGGLE_LAYER_COLOR,                KC_TRANSPARENT, RGB_HUD,        KC_ENTER
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_EQUAL,       KC_RABK,        KC_GRAVE,       
    KC_TRANSPARENT, KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_LEFT),  LALT(KC_RIGHT), KC_NO,          KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          LCTL(KC_GRAVE), LCTL(LSFT(KC_M)),LCTL(LSFT(KC_U)),LCTL(LSFT(KC_Y)),LALT(LSFT(KC_DOWN)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_MS_WH_UP),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_2,           LALT(KC_MS_WH_DOWN),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MO(4):
            return TAPPING_TERM -101;
        case MEH_T(KC_SPACE):
            return TAPPING_TERM + 99;
        case LT(8, KC_ENTER):
            return TAPPING_TERM -51;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {31,255,255}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {85,203,158}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {199,250,153}, {0,0,0}, {20,177,225}, {20,177,225}, {20,177,225}, {85,203,158}, {31,255,255}, {20,177,225}, {0,243,110}, {154,255,255}, {20,177,225}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {85,203,158}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {243,222,234}, {35,255,255}, {20,177,225}, {85,203,158}, {85,203,158}, {85,203,158} },

    [1] = { {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {35,255,255}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {20,177,225}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {35,255,255}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {85,203,158}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {20,177,225}, {20,177,225}, {85,203,158}, {20,177,225}, {20,177,225}, {0,0,0}, {205,255,255}, {20,177,225}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {85,203,158}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {20,177,225}, {85,203,158}, {85,203,158}, {85,203,158} },

    [2] = { {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153}, {199,250,153} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {239,245,230}, {255,220,201}, {0,0,0}, {0,0,0}, {0,0,0}, {255,220,201}, {255,220,201}, {0,0,0}, {0,0,0}, {0,0,0}, {239,245,230}, {255,220,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,220,201}, {255,220,201}, {255,220,201}, {0,0,0}, {0,0,0}, {239,245,230}, {239,245,230}, {0,0,0}, {35,255,255}, {0,0,0}, {239,245,230}, {20,177,225}, {0,0,0}, {86,249,128}, {0,0,0}, {31,255,255}, {255,220,201}, {31,255,255}, {86,249,128}, {0,0,0}, {255,220,201}, {255,220,201}, {31,255,255}, {86,249,128}, {0,0,0}, {31,255,255}, {255,220,201}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {20,177,225}, {0,0,0}, {35,255,255}, {35,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,242,255}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {0,242,255}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {20,177,225}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {20,177,225}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {105,255,255}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {0,0,0}, {122,216,255}, {122,216,255}, {122,216,255}, {122,216,255}, {122,216,255}, {122,216,255}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {205,243,229}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {122,216,255}, {122,216,255}, {20,177,225}, {122,216,255}, {85,203,158}, {122,216,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,255,82}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {155,255,82}, {155,255,82}, {31,255,255}, {0,0,0}, {155,255,82}, {155,255,82}, {0,0,0}, {31,255,255}, {0,0,0}, {155,255,82}, {155,255,82}, {155,255,82}, {31,255,255}, {0,0,0}, {155,255,82}, {155,255,82}, {155,255,82}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {165,218,204}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {165,218,204}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {165,218,204}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {165,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


// State variable to track if 'W' is currently being held down
bool w_is_held = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // ----------------------------------------------------
    // START: Custom KC_ONESHOT_W Logic (The new W-hold feature)
    // ----------------------------------------------------
    if (keycode == KC_ONESHOT_W) {
        if (record->event.pressed) {
            if (!w_is_held) {
                // Press the W key and set the state flag
                register_code(KC_W);
                w_is_held = true;
            } else {
                // Pressing it again releases W and clears the flag (acts as a toggle/kill switch)
                unregister_code(KC_W);
                w_is_held = false;
            }
        }
        // Always return false to stop KC_ONESHOT_W from doing anything else
        return false;
    }

    // ----------------------------------------------------
    // Logic to stop W when ANY other key is pressed
    // ----------------------------------------------------
    // If W is currently held AND any key is pressed, it releases W
    if (w_is_held && record->event.pressed) {
        // Only trigger if the key pressed is *not* one of the thumb keys (MO(3), MO(4), etc.)
        // or a key that you want to ignore. For simplicity, we just check if it's not the KC_ONESHOT_W itself.
        // The check at the top covers KC_ONESHOT_W. This check handles everything else.
        if (keycode != KC_ONESHOT_W) {
            unregister_code(KC_W);
            w_is_held = false;
            // The newly pressed key will be processed normally by returning true.
        }
    }
    // ----------------------------------------------------
    // END: Custom KC_ONESHOT_W Logic
    // ----------------------------------------------------
    
    // ----------------------------------------------------
    // START: Original process_record_user switch block (for RGB_SLD)
    // ----------------------------------------------------
    switch (keycode) {
        case RGB_SLD:
            if (rawhid_state.rgb_control) {
                return false;
            }
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    // ----------------------------------------------------
    // END: Original process_record_user switch block
    // ----------------------------------------------------
    
    // Default: Process all other keycodes normally
    return true;
}

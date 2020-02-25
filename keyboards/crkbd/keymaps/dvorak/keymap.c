#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   [0] = LAYOUT(
                KC_GRV,   KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,  KC_Y,  KC_F,  KC_G,  KC_C,  KC_R,  KC_L,  KC_BSPC,
                KC_TAB,   KC_A,     KC_O,     KC_E,    KC_U,  KC_I,  KC_D,  KC_H,  KC_T,  KC_N,  KC_S,  KC_MINS,
                KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,    KC_K,  KC_X,  KC_B,  KC_M,  KC_W,  KC_V,  KC_Z,  KC_SFTENT,
                KC_NO, KC_LGUI, LCTL_T(KC_SPC), LALT_T(KC_SPC), MO(1), MO(2)
                ),

   [1] = LAYOUT(
                KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LBRC,  KC_RBRC,  KC_NO,
                KC_TRNS,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,   KC_6,   KC_7,   KC_8,   KC_9,     KC_0,     KC_BSLS,
                KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_EQL,   KC_SLSH,  KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS

                ),
   [2] = LAYOUT(
                KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_F11,  KC_F12,
                KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_NO,
                RESET,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,
                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
                )
  };

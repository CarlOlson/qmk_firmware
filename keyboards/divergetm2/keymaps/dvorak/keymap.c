#include QMK_KEYBOARD_H

#define L_INT 0
#define L_CTL 1
#define L_ALT 2
#define L_NUM 3
#define L_FNS 4

LEADER_EXTERNS();

extern uint8_t is_master;

const uint16_t PROGMEM uh_combo[] = {KC_U, KC_H, COMBO_END};
const uint16_t PROGMEM pc_combo[] = {KC_P, KC_C, COMBO_END};
const uint16_t PROGMEM pr_combo[] = {KC_P, KC_R, COMBO_END};
const uint16_t PROGMEM pt_combo[] = {KC_P, KC_T, COMBO_END};
const uint16_t PROGMEM pn_combo[] = {KC_P, KC_N, COMBO_END};
const uint16_t PROGMEM pw_combo[] = {KC_P, KC_W, COMBO_END};
const uint16_t PROGMEM pv_combo[] = {KC_P, KC_V, COMBO_END};
const uint16_t PROGMEM ps_combo[] = {KC_P, KC_S, COMBO_END};
const uint16_t PROGMEM ks_combo[] = {KC_K, KC_S, COMBO_END};
const uint16_t PROGMEM kw_combo[] = {KC_K, KC_W, COMBO_END};
const uint16_t PROGMEM kv_combo[] = {KC_K, KC_V, COMBO_END};
const uint16_t PROGMEM grvd_combo[] = {KC_GRV, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] =
  {
   COMBO(uh_combo, KC_ENT),
   COMBO(pc_combo, KC_LBRC),
   COMBO(pr_combo, KC_RBRC),
   COMBO(pt_combo, KC_LCBR),
   COMBO(pn_combo, KC_RCBR),
   COMBO(pw_combo, KC_EQL),
   COMBO(pv_combo, KC_SLSH),
   COMBO(ps_combo, KC_BSLS),
   COMBO(kw_combo, KC_PLUS),
   COMBO(kv_combo, KC_QUES),
   COMBO(ks_combo, KC_PIPE),
  };

// TODO add RESET
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   [L_INT] = LAYOUT_ortho_4x12_2x2u(
                    KC_GRV,           KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,  KC_Y,  KC_F,  KC_G,  KC_C,  KC_R,  KC_L,  KC_LEAD,
                    LGUI_T(KC_TAB),   KC_A,     KC_O,     KC_E,    KC_U,  KC_I,  KC_D,  KC_H,  KC_T,  KC_N,  KC_S,  KC_MINS,
                    KC_LSPO,          KC_SCLN,  KC_Q,     KC_J,    KC_K,  KC_X,  KC_B,  KC_M,  KC_W,  KC_V,  KC_Z,  KC_RSPC,
                    KC_NO,  KC_NO, MO(L_FNS),  MO(L_NUM), LT(L_CTL, KC_SPC), LT(L_ALT, KC_SPC), MO(L_NUM), MO(L_FNS), KC_NO,  KC_NO
                    ),
   [L_CTL] = LAYOUT_ortho_4x12_2x2u(
                    C(KC_GRV),  C(KC_QUOT),  C(KC_COMM),  C(KC_DOT),  KC_NO,    C(KC_Y),  C(KC_F),  KC_RIGHT,  C(KC_C),  C(KC_R),  C(KC_L),  C(KC_DEL),
                    C(KC_TAB),  C(KC_A),     C(KC_O),     C(KC_E),    C(KC_U),  C(KC_I),  KC_DEL,   KC_BSPC,   KC_UP,    KC_DOWN,  C(KC_S),  C(KC_MINS),
                    KC_LSFT,    C(KC_SCLN),  C(KC_Q),     C(KC_J),    C(KC_K),  C(KC_X),  C(KC_B),  KC_LEFT,   C(KC_W),  C(KC_V),  C(KC_Z),  KC_RSFT,
                    RESET,  KC_NO, KC_NO,  KC_NO,  KC_TRNS,  C(KC_SPC),  KC_NO,  KC_NO, KC_NO,  KC_NO
                    ),
   [L_ALT] = LAYOUT_ortho_4x12_2x2u(
                    KC_ESC,      A(KC_QUOT),  A(KC_COMM),  A(KC_DOT),  A(KC_P),  A(KC_Y),  A(KC_F),  A(KC_G),  A(KC_C),  A(KC_R),  A(KC_L),  KC_NO,
                    A(KC_TAB),   A(KC_A),     A(KC_O),     A(KC_E),    A(KC_U),  A(KC_I),  A(KC_D),  A(KC_H),  A(KC_T),  A(KC_N),  A(KC_S),  A(KC_MINS),
                    A(KC_LSPO),  A(KC_SCLN),  A(KC_Q),     A(KC_J),    A(KC_K),  A(KC_X),  A(KC_B),  A(KC_M),  A(KC_W),  A(KC_V),  A(KC_Z),  A(KC_RSPC),
                    KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_TRNS,  KC_NO,  KC_NO, KC_NO,  RESET
                    ),
   [L_NUM] = LAYOUT_ortho_4x12_2x2u(
                    KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_LBRC,  KC_RBRC,  KC_NO,    KC_NO,
                    KC_TRNS,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,   KC_6,   KC_7,   KC_8,     KC_9,     KC_0,     KC_BSLS,
                    KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_EQL,   KC_SLSH,  KC_NO,    KC_TRNS,
                    KC_NO,  KC_NO, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_NO,  KC_NO
                    ),
   [L_FNS] = LAYOUT_ortho_4x12_2x2u(
                    KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_F11,  KC_F12,
                    KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_NO,
                    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,
                    KC_NO,  KC_NO, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_NO,  KC_NO
                    )
  };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool is_ctrl = keyboard_report->mods & MOD_BIT(KC_RCTL);
  bool is_meta = keyboard_report->mods & MOD_BIT(KC_RALT);
  bool is_shift_left = keyboard_report->mods & MOD_BIT(KC_LSFT);
  bool is_shift_right = keyboard_report->mods & MOD_BIT(KC_RSFT);
  bool is_keycode_left = record->event.key.row <= 2;
  bool is_keycode_right =
    record->event.key.row >= 4 &&
    record->event.key.row <= 6;

  if ((keyboard_report->mods & (MOD_BIT(KC_RCTL) | MOD_BIT(KC_LSFT))) && keycode == KC_UP) {
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_T);
    } else {
      unregister_code(KC_T);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
    }
    return false;
  }

  // TODO unregister too?
  if ((is_ctrl || is_meta) && record->event.pressed) {
    // disable shift handed rules
    return true;
  }

  if (is_shift_left && keycode == KC_U) {
    // disable shift handed rules for SHIFT+ENTER
    return true;
  }

  if ((record->event.pressed && is_shift_left && is_keycode_left) ||
      (record->event.pressed && is_shift_right && is_keycode_right)) {
    // disallow shift on same side as key input
    return false;
  }

  // TODO disable bad keypresses (parens, etc)
  // TODO add qwerty/compat mode
  // TODO combo on cntl -- combo_enable()
  // FIX quickly typing `touch` activates combo

  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  default:
    return TAPPING_TERM;
  }
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_D) {
      register_code(KC_RCTL);
      tap_code(KC_DEL);
      unregister_code(KC_RCTL);
    }
    SEQ_ONE_KEY(KC_R) {
      clear_keyboard();
    }
  }
}

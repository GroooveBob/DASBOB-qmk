#include QMK_KEYBOARD_H

enum dasbob_layers {
  _QWERTY,
  _LOWER,
  _RAISE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */


    [_QWERTY] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH,
                 KC_DEL,  LCTL_T(KC_SPC),   MO(1),                              MO(2),   LSFT_T(KC_BSPC),  KC_RALT
    ),

    [_LOWER] = LAYOUT_split_3x5_3(
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             KC_MINS, KC_EQL,   KC_GRV,KC_QUOT, KC_BSLS,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT,                             KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                         KC_TRNS, KC_TRNS,  KC_TAB,                             KC_ENT,   KC_TRNS, KC_TRNS
    ),

    [_RAISE] = LAYOUT_split_3x5_3(
        KC_ESC,   KC_UP, XXXXXXX,  XXXXXXX, XXXXXXX,                      KC_NUM_LOCK, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS,
        KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_LGUI,                      XXXXXXX,  KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS,
        KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_PSCR,                      KC_RALT, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_0,
                        KC_TRNS,   KC_TRNS,  KC_TAB,                      KC_ENT, KC_TRNS, KC_TRNS
    ),
};

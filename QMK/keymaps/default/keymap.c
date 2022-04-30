// Copyright 2022 Florian Brandner (@Florian Brandner)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _BL,
    _GAME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        TG(_GAME),KC_APP,   KC_CALC,  KC_MAIL,  MO(_BL),
        KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_KP_4,  KC_KP_5,
        KC_CUT,   KC_COPY,  KC_PASTE, KC_INS,   KC_DEL,
        KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   KC_LSFT,
        KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_LCTL
   ),
    [_BL] = LAYOUT(
        _______,  RGB_TOG,  _______, RGB_MOD,  RGB_RMOD,
        RGB_M_P,  RGB_M_B,  RGB_M_R, RGB_M_SW, RGB_M_SN,
        RGB_M_K,  RGB_M_X,  RGB_M_G, RGB_M_T,  _______,
        RGB_HUI,  RGB_SAI,  RGB_VAI, _______,  _______,
        RGB_HUD,  RGB_SAD,  RGB_VAD, _______,  _______
    ),
    [_GAME] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_T,     KC_G,     KC_B,     KC_F,     KC_G,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,
        KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_LCTL
    )
};

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
        TG(_GAME),       KC_APP,        KC_CALC,       KC_MAIL,  MO(_BL),
        RAG(KC_KP_1),    RAG(KC_KP_2),  RAG(KC_KP_3),  LGUI(KC_LEFT),  LGUI(KC_RIGHT),
        LSG(KC_KP_7),    LSG(KC_KP_8),  LSG(KC_KP_9),  RGUI(KC_KP_1), RGUI(KC_KP_2),
        LSG(KC_KP_4),    LSG(KC_KP_5),  LSG(KC_KP_6),  RGUI(KC_KP_3), RGUI(KC_KP_4),
        LSG(KC_KP_1),    LSG(KC_KP_2),  LSG(KC_KP_3),  RGUI(KC_KP_5), RGUI(KC_KP_6)
   ),
    [_BL] = LAYOUT(
        _______,  RGB_TOG,  RGB_MOD, RGB_RMOD, _______,
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

// Copyright 2022 Florian Brandner (@Florian Brandner)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _BL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        TG(_BL),    _______,    KC_KB_VOLUME_DOWN, KC_KB_MUTE,   KC_KB_VOLUME_UP,
        LWIN(KC_1), LWIN(KC_2), LWIN(KC_3),        LWIN(KC_4),   LWIN(KC_5), // META 1..5
        KC_PGDN,    KC_HOME,    KC_PGUP,           KC_END,       KC_PGUP,
        LSG(KC_A),  KC_LEFT,    KC_DOWN,           KC_RIGHT,     LSG(KC_S),
        LWIN(KC_A), LWIN(KC_A), _______,           LWIN(KC_S),   LWIN(KC_S)
   ),
    [_BL] = LAYOUT(
        _______,  _______,  _______, _______,  _______,
        RM_TOGG,  _______,  _______, _______,  _______,
        UG_TOGG,  RM_PREV,  RM_NEXT, _______,  _______,
        RM_HUEU,  RM_SATU,  RM_VALU, RM_SPDU,  _______,
        RM_HUED,  RM_SATD,  RM_VALD, RM_SPDD,  _______
    )
};

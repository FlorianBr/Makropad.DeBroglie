// Copyright 2022 Florian Brandner (@Florian Brandner)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _BL,
    _GAME,
};

enum custom_keycodes {
    KC_CUS_1 = SAFE_RANGE,
    KC_CUS_2,
    KC_CUS_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        TG(_GAME),  KC_APP,   KC_CALC,  KC_MAIL,  MO(_BL),
        KC_PSLS,    KC_PAST,  KC_PMNS,  KC_PPLS,  KC_PENT,
        KC_KP_7,    KC_KP_8,  KC_KP_9,  KC_PDOT,  KC_CUS_1,
        KC_KP_4,    KC_KP_5,  KC_KP_6,  KC_PEQL,  KC_CUS_2,
        KC_KP_1,    KC_KP_2,  KC_KP_3,  KC_PCMM,  KC_CUS_3
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

// Custom Keycode Processing
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_CUS_1:
        if (record->event.pressed) {
            register_code(KC_RGUI);
            tap_code(KC_KP_1);
            unregister_code(KC_RGUI);
        } else {
        }
        break;
    case KC_CUS_2:
        if (record->event.pressed) {
            register_code(KC_RGUI);
            tap_code(KC_KP_2);
            unregister_code(KC_RGUI);
        } else {
        }
        break;
    case KC_CUS_3:
        if (record->event.pressed) {
            register_code(KC_RGUI);
            tap_code(KC_KP_3);
            unregister_code(KC_RGUI);
        } else {
        }
        break;
    }
  return true;
}


#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(C_S_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, LCTL_T(KC_EQL), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(4,KC_SCLN), LT(3,KC_ENT), KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, LCTL_T(KC_ESC), KC_DEL, KC_LALT, KC_LGUI, LT(1,KC_SPC), LT(1,KC_SPC), LT(2,KC_BSPC), LT(2,KC_SPC), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_ortho_4x12(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_PGDN, KC_PGUP, LT(3,KC_ENT), KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PIPE, KC_ASTR, KC_HOME, KC_END, KC_ENT, RESET, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_SPC, KC_INS, MO(5), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[2] = LAYOUT_ortho_4x12(KC_TILD, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_PLUS, KC_COMM, KC_NO, LCA(KC_U), KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PIPE, KC_ASTR, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, MO(5), KC_CAPS, KC_SPC, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[3] = LAYOUT_ortho_4x12(KC_BSLS, KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, KC_NO, KC_NO, LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), KC_NO, KC_NO, KC_NO, KC_ASTR, KC_SLSH, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, LCTL(KC_T), KC_NO, LCTL(KC_PGUP), KC_WH_U, LCTL(KC_PGDN), KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WBAK, KC_WFWD, KC_NO, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN1, KC_BTN2, KC_BTN2, KC_VOLU, KC_VOLD, KC_MUTE, KC_NO),
	[5] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_QUES, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAI, RGB_HUI, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_HUD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};

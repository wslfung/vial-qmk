/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // [0] = LAYOUT_dualarcs_number_row(
    //     KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    //     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //     KC_UP,   KC_DOWN, KC_LGUI,   KC_LALT,   KC_LGUI, KC_ENT, KC_DEL,           KC_BSPC,  KC_SPC,  MO(2), KC_LBRC,  KC_RBRC, KC_LEFT, KC_RIGHT,
    //                                                   KC_GRAVE,    KC_ESC,           KC_CAPS,  KC_APP
    // ),

    [0] = LAYOUT_dualarcs_number_row(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_BSPC, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), C_S_T(KC_F), KC_G, KC_H, C_S_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, OSL(1), OSL(2), KC_DEL, KC_SPC, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, OSL(3), OSL(2), OSL(1)
    ),

    // [1] = LAYOUT_dualarcs_number_row(
    //     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
    //                                                  _______, _______,         _______, _______
    // ),

    [1] = LAYOUT_dualarcs_number_row(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_GRV, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_RGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_dualarcs_number_row(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_dualarcs_number_row(
        KC_BRID, KC_BRIU, KC_NO, RGB_HUD, RGB_HUI, RGB_TOG, KC_CAPS, KC_NUM, KC_SCRL, KC_MUTE, KC_VOLD, KC_VOLU, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_I, KC_O, KC_P, KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_MSTP, KC_NO
    ),

    [4] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [5] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [6] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [7] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [8] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [9] = LAYOUT_dualarcs_number_row(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    )
};

void keyboard_post_init_user(void) {
    // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
    // set initial effect on keyboard start; ignore what's in EEPROM!
    rgb_matrix_mode_noeeprom(
      // RGB_MATRIX_TYPING_HEATMAP
      RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    );

    /*
    // https://docs.qmk.fm/#/feature_rgb_matrix?id=indicators-without-rgb-matrix-effect
    //
    // Indicators without RGB Matrix Effect
    //
    // If you want to just use RGB indicators without RGB matrix effect, it is not
    // possible to disable the latter because toggling RGB off will disable
    // everything. You can workaround it with solid effect and colors off using
    // this init function:
    //
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    // rgb_matrix_sethsv_noeeprom(HSV_OFF); // XXX: this throws away the color!
    HSV hsv = rgb_matrix_get_hsv();
    rgb_matrix_sethsv_noeeprom(hsv.h, hsv.s, 0); // turn off, preserving color
    */

    vial_tap_dance_entry_t td1 = { TG(1),
                                  MO(1),
                                  KC_NO,
                                  KC_NO,
                                  100 };
    vial_tap_dance_entry_t td2 = { TG(2),
                                  MO(2),
                                  KC_NO,
                                  KC_NO,
                                  100 };
    vial_tap_dance_entry_t td3 = { TG(3),
                                  MO(3),
                                  KC_NO,
                                  KC_NO,
                                  100 };
    dynamic_keymap_set_tap_dance(1, &td1); // the first value corresponds to the TD(i) slot
    dynamic_keymap_set_tap_dance(2, &td2);
    dynamic_keymap_set_tap_dance(3, &td3);

}

#ifdef VIAL_ENABLE
  void
#else
  bool
#endif
rgb_matrix_indicators_user(void) {

    switch (get_highest_layer(layer_state|default_layer_state)) {

// left
//  38  32  26  20  14  3
//  37  31  25  19  13  2
//  36  30  24  18  12  1
//  35  29  23  17  11  0
//  34  28  22  16    10  5   6
//                      8   7

// right
//        43  54  60  66  72  78 
//        42  53  59  65  71  77
//        41  52  58  64  70  76
//        40  51  57  63  69  75
//  46  45  50    56  62  68  74
//  47  48

        case 1:
            //left
            rgb_matrix_set_color(5, RGB_CYAN);
            rgb_matrix_set_color(31, RGB_MAGENTA);  
            rgb_matrix_set_color(13, RGB_MAGENTA);   
            //right
            rgb_matrix_set_color(59, RGB_WHITE);
            rgb_matrix_set_color(52, RGB_WHITE);
            rgb_matrix_set_color(58, RGB_WHITE);
            rgb_matrix_set_color(64, RGB_WHITE);
            rgb_matrix_set_color(53, RGB_GREEN);
            rgb_matrix_set_color(65, RGB_RED);
            rgb_matrix_set_color(70, RGB_GOLD);
            rgb_matrix_set_color(71, RGB_GOLD);
            rgb_matrix_set_color(42, RGB_AZURE);
            rgb_matrix_set_color(41, RGB_AZURE);
            rgb_matrix_set_color(40, RGB_MAGENTA);
            rgb_matrix_set_color(51, RGB_MAGENTA);
            rgb_matrix_set_color(57, RGB_MAGENTA);
            rgb_matrix_set_color(63, RGB_MAGENTA);
            rgb_matrix_set_color(76, RGB_CYAN);
            rgb_matrix_set_color(48, RGB_CYAN);
            break;
        case 2:
            //left
            rgb_matrix_set_color(18, RGB_WHITE);
            rgb_matrix_set_color(12, RGB_WHITE);
            rgb_matrix_set_color(19, RGB_WHITE);
            rgb_matrix_set_color(24, RGB_WHITE); 
            rgb_matrix_set_color(13, RGB_RED);
            rgb_matrix_set_color(25, RGB_GREEN);
            rgb_matrix_set_color(30, RGB_GOLD);
            rgb_matrix_set_color(31, RGB_GOLD);
            rgb_matrix_set_color(6, RGB_CYAN);
            //right
            rgb_matrix_set_color(59, RGB_WHITE);
            rgb_matrix_set_color(52, RGB_WHITE);
            rgb_matrix_set_color(58, RGB_WHITE);
            rgb_matrix_set_color(64, RGB_WHITE);
            rgb_matrix_set_color(53, RGB_WHITE);
            rgb_matrix_set_color(65, RGB_WHITE);
            rgb_matrix_set_color(63, RGB_WHITE);  
            rgb_matrix_set_color(51, RGB_WHITE);
            rgb_matrix_set_color(57, RGB_WHITE);
            rgb_matrix_set_color(45, RGB_WHITE);
            rgb_matrix_set_color(50, RGB_WHITE);
            rgb_matrix_set_color(71, RGB_GOLD);
            rgb_matrix_set_color(78, RGB_GOLD);
            rgb_matrix_set_color(47, RGB_CYAN);
            break;
        case 3:
            // left
            rgb_matrix_set_color(7, RGB_CYAN);
            rgb_matrix_set_color(32, RGB_GREEN);
            rgb_matrix_set_color(38, RGB_GOLD);            
            rgb_matrix_set_color(14, RGB_GREEN);
            rgb_matrix_set_color(20, RGB_GOLD);
            rgb_matrix_set_color(3, RGB_AZURE);            
            //right
            rgb_matrix_set_color(78, RGB_GREEN);
            rgb_matrix_set_color(72, RGB_GOLD);
            rgb_matrix_set_color(66, RGB_RED);
            rgb_matrix_set_color(45, RGB_GREEN);
            rgb_matrix_set_color(47, RGB_RED);
            rgb_matrix_set_color(46, RGB_GOLD);
            rgb_matrix_set_color(50, RGB_GOLD);
            rgb_matrix_set_color(43, RGB_GOLD);
            rgb_matrix_set_color(54, RGB_GOLD);
            rgb_matrix_set_color(60, RGB_GOLD);
            break;
        default:
            break;
    }

#ifndef VIAL_ENABLE
    return true;
#endif

}
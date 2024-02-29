/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"
#include "quantum.h"


//Referenve
//https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md
//https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
//https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_japanese.h
//https://github.com/Yowkees/keyball/blob/main/qmk_firmware/keyboards/keyball/lib/keyball/keycodes.md#japanese

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7      , KC_8     , KC_9     , KC_0     , KC_MINS  ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U      , KC_I     , KC_O     , KC_P     , JP_AT    ,
    KC_TAB   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J      , LT(3,KC_K)     , KC_L     , KC_SCLN  , JP_COLN  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_RBRC  ,              KC_NUHS, KC_N     , KC_M      , KC_COMM  , KC_DOT   , KC_SLSH  , LT(KC_RSFT,JP_BSLS)  ,
    KC_LCTL  , KC_LGUI  , KC_LALT  , KC_LALT  ,LT(1,KC_LNG2),LT(2,KC_SPC),LT(3,KC_LNG1),    KC_BSPC,LT(2,KC_ENT),LT(1,KC_LNG2),KC_RGUI, _______ , KC_RALT   , KC_RCTL
  ),

  [1] = LAYOUT_universal(
    _______, _______  , _______   , _______ , _______   , _______  ,                                       _______  ,_______       , _______     , _______      , JP_CIRC, JP_YEN    ,
    _______, _______  , _______   , _______ , _______   , _______  ,                                          _______  ,_______       , _______     , _______      , KC_HOME, KC_PGUP   ,
    _______, _______  , S(KC_LEFT), KC_UP   , S(KC_RGHT), _______  ,                                           _______  ,_______       ,LGUI(KC_UP)  , _______      , KC_END , KC_PGDN   ,
    _______, _______  , KC_LEFT   , KC_DOWN , KC_RGHT   , _______  ,_______,                 _______,     _______  , LGUI(KC_LEFT),LGUI(KC_DOWN), LGUI(KC_RGHT),_______ , S(JP_BSLS),
    _______, _______  , _______   ,_______  , _______   , _______  ,_______,                 KC_DEL  ,     _______  ,_______       , _______     , _______      , _______, _______
  ),

  [2] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4     , KC_F5    ,                                KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10  , KC_F11    ,
    _______  , KC_BSPC  , KC_P7     , KC_P8     , KC_P9   ,KC_KP_SLASH   ,                             KC_F12  , KC_BTN4  , _______  , KC_BTN5  ,  KC_HOME, KC_PGUP   ,
    _______  , KC_LGUI  , KC_P4     , KC_P5     , KC_P6   ,KC_KP_MINUS,                               _______  , KC_BTN1  , KC_UP    , KC_BTN2  , KC_END  , KC_PGDN   ,
    _______  , KC_LALT  , KC_P1     , KC_P2     , KC_P3   ,KC_KP_PLUS , KC_KP_ASTERISK,   _______   , _______  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
    _______  , KC_NUM_LOCK  , KC_P0 , KC_KP_DOT , _______ , _______  , _______  ,           KC_DEL  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , KBC_RST  , KBC_SAVE , _______  , _______  , _______  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX  ,
    _______  , CPI_I100  , CPI_D100  , CPI_I1K  , CPI_D1K  , _______  ,                                  KC_INS  , KC_BTN4  , XXXXXXX  , KC_BTN5 , XXXXXXX  , XXXXXXX  ,
    _______ , SCRL_TO  , SCRL_MO  , SCRL_DVI  , SCRL_DVD  , _______  ,                                  LSG(KC_S)  , KC_BTN1 , LSG(KC_UP) , KC_BTN2  , XXXXXXX , XXXXXXX  ,
    _______  , _______  , _______ , _______ , _______  , _______  , _______  ,            _______  ,   C(G(KC_T))  , LSG(KC_LEFT)  ,  LSG(KC_DOWN)  , LSG(KC_RIGHT)   , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______    , _______  , _______  ,            _______  , KC_BSPC  , _______  , _______  , _______  , _______  , _______
  ),

  [4] = LAYOUT_universal(
    _______  , _______  , _______    , _______   , _______  , _______  ,                                  _______    , _______    , _______    , _______    , _______   , _______   ,
    _______  , _______  , _______    , _______   , _______  , _______  ,                                  _______  , KC_BTN4  , _______    , KC_BTN5  , _______  , _______   ,
    _______  , _______  , _______    , _______   , _______  , _______   ,                                 _______  , KC_BTN1  , _______  , KC_BTN2  , _______  , _______  ,
    _______  , _______  , _______    , _______   , _______  ,_______   , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______    , _______   , _______  , _______  , _______  ,             _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    //keyball_set_scroll_mode(get_highest_layer(state) == 3);
    switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
    case 3:
        // Auto enable scroll mode when the highest layer is 3
        // remove_auto_mouse_target must be called to adjust state *before* setting enable
        state = remove_auto_mouse_layer(state, false);
        set_auto_mouse_enable(false);
        keyball_set_scroll_mode(true);
        break;
    default:
        set_auto_mouse_enable(true);
        keyball_set_scroll_mode(false);
        break;
    }

    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
}
#endif

void pointing_device_init_user(void) {
    // set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

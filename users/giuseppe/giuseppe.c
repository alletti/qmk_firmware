/*
  Copyright 2019 Giuseppe Alletti <peppe@pelo1.com>

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

#include "giuseppe.h"
#include "rgb_matrix.h"

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;

    rgb_matrix_config.enable = 1;
    rgb_matrix_config.mode = RGB_MATRIX_STARTUP_MODE;

    // Startup LED color is all white
    rgb_matrix_config.hsv = (HSV){ 0,  0, RGB_MATRIX_MAXIMUM_BRIGHTNESS };
};

// void td_caps_ctrl_finished(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         register_code(KC_LCTL);
//     } else {
//         register_code(KC_CAPS);
//     }
//     // uint16_t code = state->count == 1 ? KC_LCTL : KC_CAPS;
//     // register_code(code);
// }

// void td_caps_ctrl_reset(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         unregister_code(KC_LCTL);
//     } else {
//         unregister_code(KC_CAPS);
//     }
//     // uint16_t code = state->count == 1 ? KC_LCTL : KC_CAPS;
//     // unregister_code(code);
// }

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS_CTRL] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_CAPS)
    // [TD_CAPS_CTRL] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, td_caps_ctrl_finished, td_caps_ctrl_reset, 200)
};

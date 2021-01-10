/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

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

#pragma once

// #define USE_I2C

/* Select hand configuration */
// #define MASTER_RIGHT
// #define EE_HANDS
//
// Debouncce override
#undef DEBOUNCE
#define DEBOUNCE 20

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

/* Mouse Settings */
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_INTERVAL 40
#define MOUSEKEY_MAX_SPEED 13
#define MOUSEKEY_TIME_TO_MAX 10
#define MOUSEKEY_WHEEL_INTERVAL 50
#define MOUSEKEY_WHEEL_MAX_SPEED 18
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
#define MOUSEKEY_WHEEL_DELAY 0

// Tapping settings
#define PERMISSIVE_HOLD
#define TAPPING_TERM 180

// Unicode mode (e.g., OS-based input mode)
#define UNICODE_SELECTED_MODES UC_LNX, UC_WIN, UC_WINC

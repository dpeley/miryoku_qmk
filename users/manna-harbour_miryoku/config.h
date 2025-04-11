// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "custom_config.h"

// default but used in macros
//////This number was brought down from 200 for quicker homerow response
#undef TAPPING_TERM
#define TAPPING_TERM 190

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
//////This number was brought down from 200 for quicker homerow response
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
  #define COMBO_COUNT 8
  #define COMBO_TERM 190
  #define EXTRA_SHORT_COMBOS
#endif

/*
#############################
# idank config starts below #
#############################
*/

#pragma once

// We default to the right hand being the master.
#undef MASTER_LEFT
#undef EE_HANDS
#undef MASTER_RIGHT


// Old before shorted TRRS pin. https://docs.holykeebs.com/troubleshooting/#split-side-is-not-working
#define SERIAL_USART_TX_PIN GP1 //This is the default setting
//#define SERIAL_USART_TX_PIN GP0 //Comment this out if returning to default

#ifdef TRACKBALL_POSITION_LEFT
#define MASTER_LEFT
#else
#define MASTER_RIGHT
#endif


#ifdef TRACKBALL_POSITION_LEFT
#define POINTING_DEVICE_ROTATION_270
#endif
#ifdef TRACKBALL_POSITION_RIGHT
#define POINTING_DEVICE_ROTATION_90
#endif
#ifdef TRACKBALL_POSITION_THUMB
#endif

// Common settings to both busywait and interrupt.
#if defined(PS2_DRIVER_BUSYWAIT) || defined(PS2_DRIVER_INTERRUPT)
#define PS2_MOUSE_INVERT_X
#define PS2_MOUSE_INVERT_Y

#define PS2_CLOCK_PIN   D3
#define PS2_DATA_PIN    B4
#endif

#ifdef PS2_DRIVER_BUSYWAIT
#define PS2_MOUSE_USE_REMOTE_MODE
#endif

#ifdef PS2_DRIVER_INTERRUPT
#define PS2_INT_INIT()  do {    \
    EICRA |= ((1<<ISC31) |      \
              (0<<ISC30));      \
} while (0)
#define PS2_INT_ON()  do {      \
    EIMSK |= (1<<INT3);         \
} while (0)
#define PS2_INT_OFF() do {      \
    EIMSK &= ~(1<<INT3);        \
} while (0)
#define PS2_INT_VECT   INT3_vect
#endif

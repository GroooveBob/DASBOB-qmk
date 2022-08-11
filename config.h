// Copyright 2022 grooovebob (@grooovebob)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS { \
    { D0, F5, D1, F4, D3 }, \
    { B1, C6, F7, D4,  F6}, \
    { B6, B2, E6, B3, D7 }, \
    { F0, B5, B4, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT {  \
    { D3, F4, D1, F5, D0 }, \
    { F6, D4, F7, C6, B1}, \
    { D7, B3, E6, B2, B6 }, \
    { B4, B5, F0, NO_PIN, NO_PIN } \
}



#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define MASTER_LEFT

#pragma once

#define MASTER_LEFT

#define TAPPING_FORCE_HOLD

// TAPPING_TERM default = 200
#define TAPPING_TERM 160
#define TAPPING_TERM_PER_KEY

// #define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 240

// If you press a Mod Tap key, tap another key (press and release) and
// then release the Mod Tap key, all within the tapping term, it will
// output the "tapping" function for both keys.
//
// LSPO↓ X↓ X↑ LSPO↑ = X != (x
#define PERMISSIVE_HOLD

#define COMBO_COUNT 11
#define COMBO_TERM 110 // default = TAPPING_TERM = 200

/* Tapping this number of times holds the key until tapped once again. */
// #define ONESHOT_TAP_TOGGLE 5

/* Time (in ms) before the one shot key is released */
// #define ONESHOT_TIMEOUT 5000

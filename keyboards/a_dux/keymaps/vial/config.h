/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x87, 0xA9, 0x8A, 0x12, 0x76, 0x85, 0xE0, 0xFA}
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `A_DUX_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `A_DUX_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
#define A_DUX_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE

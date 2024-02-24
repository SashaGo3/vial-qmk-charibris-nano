/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

/* VBUS detection. */
#define USB_VBUS_PIN GP19

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 7

#    ifdef VIAL_ENABLE
/** Vial configuration. */

#        define VIAL_KEYBOARD_UID \
            { 0x44, 0x9F, 0x26, 0x53, 0xD9, 0x7B, 0x72, 0x4F }
#    endif // VIAL_ENABLE
#endif     // VIA_ENABLE

/**
 * \brief Prevent normal rollover on alphas from accidentally triggering mods.
 *
 * Ignores key presses that interrupt a mod-tap.  Must-have for Home Row mod.
 *
 * Without `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ Mod+e
 * With `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ ae
 */


/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#undef ROTATIONAL_TRANSFORM_ANGLE
#define ROTATIONAL_TRANSFORM_ANGLE -25

// Double trackball build.
// #undef POINTING_DEVICE_RIGHT
// #define POINTING_DEVICE_LEFT

#define POINTING_DEVICE_INVERT_Y
#undef POINTING_DEVICE_INVERT_X
#endif // POINTING_DEVICE_ENABLE

#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
// #define CHARYBDIS_MINIMUM_DEFAULT_DPI 800
// #define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 200

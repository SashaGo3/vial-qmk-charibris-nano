
/* Handedness. */
#define MASTER_LEFT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* RGB settings. */
#define WS2812_DI_PIN GP0

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* VBUS detection. */
#define USB_VBUS_PIN GP19



/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

#ifndef NOP_FUDGE
#    define NOP_FUDGE 1  // this just pleases the compile so the above error is easier to spot
#endif



/* Handedness. */
#define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* RGB settings. */
//#define WS2812_DI_PIN GP0
#define WS2812_DI_PIN GP0
//#define WS2812_PIO_USE_PIO1
//#define WS2812_EXTERNAL_PULLUP
//#define SERIAL_USART_TX_PIN GP0
/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* VBUS detection. */
#define USB_VBUS_PIN GP19

/* RGB matrix support. */

#define SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_LED_COUNT 42
#define RGB_MATRIX_SPLIT { 21, 21 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES

/* CRC.
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

#ifndef NOP_FUDGE
#    define NOP_FUDGE 1  // this just pleases the compile so the above error is easier to spot
#endif
 */

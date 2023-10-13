# This file intentionally left blank
# Build Options
#   change yes to no to disable
#
# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.



NKRO_ENABLE = yes           # Enable N-Key Rollover


SERIAL_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
MOUSE_SHARED_EP = no # Unify multiple HID interfaces into a single Endpoint
KEYBOARD_SHARED_EP = yes

# OPT_DEFS += -DHAL_USE_I2C=TRUE

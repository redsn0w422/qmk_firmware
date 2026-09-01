VIA_ENABLE = yes
RGBLIGHT_ENABLE = yes
BACKLIGHT_ENABLE = yes
LTO_ENABLE = yes

# These boards ship with the Atmel/LUFA DFU bootloader, not stock Caterina,
# so `qmk flash` works without a `-bl dfu` override.
BOOTLOADER = atmel-dfu

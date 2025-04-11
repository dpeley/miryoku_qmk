# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

INTROSPECTION_KEYMAP_C = manna-harbour_miryoku.c # keymaps

include users/manna-harbour_miryoku/custom_rules.mk

include users/manna-harbour_miryoku/post_rules.mk

#############################
# idank config starts below #
#############################

# SRC += $(USER_PATH)/idank.c

# Disable things we don't support that take up unnecessary space.
RGBLIGHT_SUPPORTED = no
RGB_MATRIX_SUPPORTED = no

ifeq ($(strip $(POINTING_DEVICE)), trackball)
	POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = pimoroni_trackball

	ifeq ($(strip $(TRACKBALL_RGB_RAINBOW)), yes)
		SRC += quantum/color.c $(USER_PATH)/trackball_rgb_rainbow.c
	endif

	ifeq ($(strip $(TRACKBALL_POSITION)), left)
		OPT_DEFS += -DTRACKBALL_POSITION_LEFT
	else ifeq ($(strip $(TRACKBALL_POSITION)), thumb)
		OPT_DEFS += -DTRACKBALL_POSITION_THUMB
	else
		OPT_DEFS += -DTRACKBALL_POSITION_RIGHT
	endif
endif

ifeq ($(strip $(POINTING_DEVICE)), trackpoint)
	PS2_MOUSE_ENABLE = yes
	PS2_ENABLE = yes
	PS2_DRIVER = busywait
endif

ifeq ($(strip $(OLED)), yes)
	OLED_ENABLE     = yes
	OLED_DRIVER     = ssd1306
else
	OLED_ENABLE     = no
endif

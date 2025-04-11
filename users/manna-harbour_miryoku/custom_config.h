// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined (KEYBOARD_crkbd)
#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,            K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,       XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX,            K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29,       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_TAP( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,            K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,       XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX,            K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29,       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_NAV( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,	 LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y),    LCTL(KC_F),RCS(KC_TAB),LALT(KC_LEFT),LALT(KC_RGHT),LCTL(KC_TAB),    XXX, \
XXX,            K10,        K11,        K12,        K13, LCTL(KC_A),           K15,        K16,        K17,        K18,        K19,         XXX, \
XXX,           K20, KC_BACKSPACE,  KC_ENTER,        K23,        K24,           K25,        K26,        K27,        K28,        K29,         XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_MOUSE( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,RCS(KC_TAB),LALT(KC_LEFT),LALT(KC_RGHT),LCTL(KC_TAB),       K04,    LCTL(KC_Y), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Z),         XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,    LCTL(KC_A),        K16,        K17,        K18,        K19,         XXX, \
XXX,           K20, KC_BACKSPACE,  KC_ENTER,        K23,  DF(U_NUM),     LCA(KC_G),        K26,        K27,        K28,        K29,         XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_MEDIA( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,            K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,         XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,  XXX, \
XXX,            K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,  LAG(KC_K),         XXX , \
                                        K32,        K33,        K34, KC_MEDIA_STOP,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,	        K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,       XXX, \
XXX,		    K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX, 		    K20,        K21,        K22,        K23,        K24,    DF(U_BASE),        K26,        K27,        K28,        K29,       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_SYM( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,            K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,       XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX,            K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29,       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_FUN( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,            K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09,       XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX,            K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29,       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#define MIRYOKU_LAYERMAPPING_BUTTON( \
                K00,        K01,        K02,        K03,        K04,           K05,        K06,        K07,        K08,        K09, \
                K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19, \
                K20,        K21,        K22,        K23,        K24,           K25,        K26,        K27,        K28,        K29, \
                N30,        N31,        K32,        K33,        K34,           K35,        K36,        K37,        N38,        N39  \
) \
LAYOUT_split_3x6_3( \
XXX,     LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y),    LCTL(KC_Y), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Z),       XXX, \
XXX,            K10,        K11,        K12,        K13,        K14,           K15,        K16,        K17,        K18,        K19,       XXX, \
XXX,     LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y),    LCTL(KC_Y), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Z),       XXX, \
                                        K32,        K33,        K34,           K35,        K36,        K37 \
)

#endif


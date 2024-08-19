/*
 * Copyright (c) 2024 Savoir-faire Linux
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __SSD1327_REGS_H__
#define __SSD1327_REGS_H__

/*
 * Fundamental Command Table
 */
#define SSD1327_SET_COLUMN_ADDR			0x15
#define SSD1327_SET_ROW_ADDR			0x75

#define SSD1327_SET_CONTRAST_CTRL		0x81

#define SSD1327_SET_SEGMENT_MAP_REMAPED		0xa0
#define SSD1327_SET_DISPLAY_START_LINE		0xa1
#define SSD1327_SET_DISPLAY_OFFSET		0xa2

#define SSD1327_SET_NORMAL_DISPLAY		0xa4
#define SSD1327_SET_ENTIRE_DISPLAY_ON		0xa5
#define SSD1327_SET_ENTIRE_DISPLAY_OFF		0xa6
#define SSD1327_SET_REVERSE_DISPLAY		0xa7
#define SSD1327_SET_MULTIPLEX_RATIO		0xa8

#define SSD1327_DISPLAY_OFF			0xae
#define SSD1327_DISPLAY_ON			0xaf

#define SSD1327_SET_FUNCTION_A			0xab
#define SSD1327_SET_PHASE_LENGTH		0xb1
#define SSD1327_SET_OSC_FREQ			0xb3
#define SSD1327_SET_PRECHARGE_PERIOD		0xb6
#define SSD1327_FUNCTION_SELECTION_B		0xd5

#define SSD1327_LINEAR_LUT			0xb9

#define SSD1327_SET_PRECHARGE_VOLTAGE		0xbc
#define SSD1327_SET_VCOMH			0xbe


#define SSD1327_SET_COMMAND_LOCK		0xfd

/* Time constant in ms */
#define SSD1327_RESET_DELAY			10

#endif
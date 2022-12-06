/*
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/*
 * Definitions for LTR556 als/ps sensor chip.
 */
#ifndef _LTR556_H_
#define _LTR556_H_

#include <linux/ioctl.h>

/*LTR556 als/ps sensor register related macro*/
#define LTR556_ALS_CONTR		0x80
#define LTR556_PS_CONTR			0x81
#define LTR556_PS_LED			0x82
#define LTR556_PS_N_PULSES		0x83
#define LTR556_PS_MEAS_RATE		0x84
#define LTR556_ALS_MEAS_RATE	0x85
#define LTR556_PART_ID	        0x86
#define LTR556_MANUFACTURER_ID	0x87

#define LTR556_INTERRUPT		0x8F
#define LTR556_PS_THRES_UP_0	0x90
#define LTR556_PS_THRES_UP_1	0x91
#define LTR556_PS_THRES_LOW_0	0x92
#define LTR556_PS_THRES_LOW_1	0x93

#define LTR556_PS_OFFSET_1		0x94
#define LTR556_PS_OFFSET_0		0x95

#define LTR556_ALS_THRES_UP_0	0x97
#define LTR556_ALS_THRES_UP_1	0x98
#define LTR556_ALS_THRES_LOW_0	0x99
#define LTR556_ALS_THRES_LOW_1	0x9A

#define LTR556_INTERRUPT_PERSIST 0x9E

/* 556's Read Only Registers */
#define LTR556_ALS_DATA_CH1_0	0x88
#define LTR556_ALS_DATA_CH1_1	0x89
#define LTR556_ALS_DATA_CH0_0	0x8A
#define LTR556_ALS_DATA_CH0_1	0x8B
#define LTR556_ALS_PS_STATUS	0x8C
#define LTR556_PS_DATA_0		0x8D
#define LTR556_PS_DATA_1		0x8E

/* Basic Operating Modes */
#define MODE_ON_Reset			0x02  /* for als reset */

#define MODE_ALS_Range1			0x00  /* for als gain x1 */
#define MODE_ALS_Range2			0x04  /* for als  gain x2 */
#define MODE_ALS_Range3			0x08  /* for als  gain x4 */
#define MODE_ALS_Range4			0x0C  /* for als gain x8 */
#define MODE_ALS_Range5			0x18  /* for als gain x48 */
#define MODE_ALS_Range6			0x1C  /* for als gain x96 */

#define MODE_ALS_StdBy			0x00

#define ALS_RANGE_64K			1
#define ALS_RANGE_32K			2
#define ALS_RANGE_16K			4
#define ALS_RANGE_8K			8
#define ALS_RANGE_1300			48
#define ALS_RANGE_600			96

#define MODE_PS_Gain16			0x00
#define MODE_PS_Gain32			0x08
#define MODE_PS_Gain64			0x0C

#define MODE_PS_StdBy			0x00

#define PS_RANGE16				1
#define PS_RANGE32				4
#define PS_RANGE64				8

/* Power On response time in ms */
#define PON_DELAY		200
#define WAKEUP_DELAY	10

#define ltr556_SUCCESS						0
#define ltr556_ERR_I2C						-1
#define ltr556_ERR_STATUS					-3
#define ltr556_ERR_SETUP_FAILURE				-4
#define ltr556_ERR_GETGSENSORDATA			-5
#define ltr556_ERR_IDENTIFICATION			-6

#endif

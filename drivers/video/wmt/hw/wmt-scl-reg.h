/*++
 * linux/drivers/video/wmt/hw/wmt-scl-reg.h
 * WonderMedia video post processor (VPP) driver
 *
 * Copyright c 2013  WonderMedia  Technologies, Inc.
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
 *
 * WonderMedia Technologies, Inc.
 * 4F, 533, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C
--*/

#ifndef WMT_SCL_REG_H
#define WMT_SCL_REG_H

/* feature */
#define WMT_FTBLK_SCL

/* constant */
#define WMT_SCL_RCYC_MIN	0	/* 1T */
#define WMT_SCL_H_DIV_MAX	8192
#define WMT_SCL_V_DIV_MAX	8192
#define WMT_SCL_FB_WIDTH_MAX	8192

#define WMT_SCL_SCALE_DST_H_MAX	1920 	/* bypass no limit */

/* registers */
#define REG_SCL_BASE1_BEGIN	(SCL_BASE_ADDR + 0x00)
#define REG_SCL_EN		(SCL_BASE_ADDR + 0x00)
#define REG_SCL_UPD		(SCL_BASE_ADDR + 0x04)
#define REG_SCL_SEL		(SCL_BASE_ADDR + 0x08)
#define REG_SCL_HXWIDTH		(SCL_BASE_ADDR + 0x3c)
#define REG_SCLR2_CTL		(SCL_BASE_ADDR + 0x40)
#define REG_SCLR2_YSA		(SCL_BASE_ADDR + 0x44)
#define REG_SCLR2_CSA		(SCL_BASE_ADDR + 0x48)
#define REG_SCLR2_H_SIZE	(SCL_BASE_ADDR + 0x4C)
#define REG_SCLR2_CROP		(SCL_BASE_ADDR + 0x50)
#define REG_ALFA_MD		(SCL_BASE_ADDR + 0x54)
#define REG_ALFA_FXD		(SCL_BASE_ADDR + 0x58)
#define REG_ALFA_COLORKEY	(SCL_BASE_ADDR + 0x5C)
#define REG_ALFA_COLORKEY_RGB	(SCL_BASE_ADDR + 0x60)
#define REG_SCL_VXWIDTH		(SCL_BASE_ADDR + 0x70)
#define REG_SCL_SCLUP_EN	(SCL_BASE_ADDR + 0x74)

#define REG_SCL_VSCALE1		(SCL_BASE_ADDR + 0x78)
#define REG_SCL_VSCALE2		(SCL_BASE_ADDR + 0x7c)
#define REG_SCL_VSCALE3		(SCL_BASE_ADDR + 0x80)
#define REG_SCL_HSCALE1		(SCL_BASE_ADDR + 0x84)
#define REG_SCL_HSCALE2		(SCL_BASE_ADDR + 0x88)
#define REG_SCL_HSCALE3		(SCL_BASE_ADDR + 0x8c)
#define REG_SCLR_REQ_NUM	(SCL_BASE_ADDR + 0x90)
#define REG_SCL_SCLDW		(SCL_BASE_ADDR + 0x94)
#define REG_SCL_426_SW		(SCL_BASE_ADDR + 0x98)
#define REG_SCL_VBYPASS		(SCL_BASE_ADDR + 0x9C)
/* SCL_TG */
#define REG_SCL_TG_CTL		(SCL_BASE_ADDR + 0xa0)
#define REG_SCL_TG_TOTAL	(SCL_BASE_ADDR + 0xa4)
#define REG_SCL_TG_V_ACTIVE	(SCL_BASE_ADDR + 0xa8)
#define REG_SCL_TG_H_ACTIVE	(SCL_BASE_ADDR + 0xac)
#define REG_SCL_TG_VBI		(SCL_BASE_ADDR + 0xb0)
#define REG_SCL_TG_WATCHDOG	(SCL_BASE_ADDR + 0xb4)
#define REG_SCL_TG_STS		(SCL_BASE_ADDR + 0xb8)
#define REG_SCL_TG_GOVW		(SCL_BASE_ADDR + 0xbc)
/* SCLR */
#define REG_SCLR_CTL		(SCL_BASE_ADDR + 0xc0)
#define REG_SCLR_YSA		(SCL_BASE_ADDR + 0xc4)
#define REG_SCLR_CSA		(SCL_BASE_ADDR + 0xc8)
#define REG_SCLR_H_SIZE		(SCL_BASE_ADDR + 0xcc)
#define REG_SCLR_CROP		(SCL_BASE_ADDR + 0xd0)
#define REG_SCLR_FIFO_CTL	(SCL_BASE_ADDR + 0xd4)
/* SCLW */
#define REG_SCLW_CTL		(SCL_BASE_ADDR + 0xe0)
#define REG_SCLW_YSA		(SCL_BASE_ADDR + 0xe4)
#define REG_SCLW_CSA		(SCL_BASE_ADDR + 0xe8)
#define REG_SCLW_Y_TIME		(SCL_BASE_ADDR + 0xec)
#define REG_SCLW_C_TIME		(SCL_BASE_ADDR + 0xf0)
#define REG_SCLW_FF_CTL		(SCL_BASE_ADDR + 0xf4)
#define REG_SCLW_INT		(SCL_BASE_ADDR + 0xf8)
#define REG_SCL_TRUE_BILINEAR	(SCL_BASE_ADDR + 0xfc)

#define REG_SCL_BASE1_END	(SCL_BASE_ADDR + 0xFC)

/* SCL444 CSC */
#define REG_SCL_BASE2_BEGIN	(SCL_BASE2_ADDR + 0x00)
#define REG_SCL_CSC_CTL		(SCL_BASE2_ADDR + 0x00)
#define REG_SCL_CSC1		(SCL_BASE2_ADDR + 0x04)
#define REG_SCL_CSC2		(SCL_BASE2_ADDR + 0x08)
#define REG_SCL_CSC3		(SCL_BASE2_ADDR + 0x0c)
#define REG_SCL_CSC4		(SCL_BASE2_ADDR + 0x10)
#define REG_SCL_CSC5		(SCL_BASE2_ADDR + 0x14)
#define REG_SCL_CSC6		(SCL_BASE2_ADDR + 0x18)
#define REG_SCL_ARGB_ALPHA	(SCL_BASE2_ADDR + 0x1C)
#define REG_SCL_IGS		(SCL_BASE2_ADDR + 0x20)
#define REG_SCL_R2_CSC		(SCL_BASE2_ADDR + 0x24)
#define REG_SCL_R2_CSC1		(SCL_BASE2_ADDR + 0x28)
#define REG_SCL_R2_CSC2		(SCL_BASE2_ADDR + 0x2C)
#define REG_SCL_R2_CSC3		(SCL_BASE2_ADDR + 0x30)
#define REG_SCL_R2_CSC4		(SCL_BASE2_ADDR + 0x34)
#define REG_SCL_R2_CSC5		(SCL_BASE2_ADDR + 0x38)
#define REG_SCL_R2_CSC6		(SCL_BASE2_ADDR + 0x3C)
#define REG_SCL_RECURSIVE_MODE	(SCL_BASE2_ADDR + 0xA0)
#define REG_SCL_FIELD_MODE	(SCL_BASE2_ADDR + 0xC0)
#define REG_SCL_DBLK_THRESHOLD	(SCL_BASE2_ADDR + 0xC4)
#define REG_SCL_FIELD_FLICKER	(SCL_BASE2_ADDR + 0xC8)
#define REG_SCL_FRAME_FLICKER	(SCL_BASE2_ADDR + 0xCC)
#define REG_SCL_READCYC_1T	(SCL_BASE2_ADDR + 0xD0)
#define REG_SCL_BASE2_END	(SCL_BASE2_ADDR + 0xE0)

/* REG_SCL_EN,0x00 */
#define SCL_ALU_ENABLE		REG_SCL_EN, BIT0, 0

/* REG_SCL_UPD,0x04 */
#define SCL_REG_UPDATE		REG_SCL_UPD, BIT0, 0

/* REG_SCL_SEL,0x08 */
#define SCL_REG_LEVEL		REG_SCL_SEL, BIT0, 0

/* REG_SCL_HXWIDTH,0x3c */
#define SCL_HXWIDTH		REG_SCL_HXWIDTH, 0x1FFF, 0

/* REG_SCLR2_CTL,0x40 */
#define SCL_R2_MIF_EN		REG_SCLR2_CTL, BIT0, 0
#define SCL_R2_RGB_MODE		REG_SCLR2_CTL, 0x30, 4	 /* 0-YUV,1-RGB565,3-RGB32 */
#define SCL_R2_420C_FMT		REG_SCLR2_CTL, BIT8, 8	 /* 0-frame,1-field */
#define SCL_R2_VFMT		REG_SCLR2_CTL, 0xE00, 9	 /* 0-YUV422,1-YUV420,2-YUV444,4-RGB32 */
#define SCL_R2_H264_FMT		REG_SCLR2_CTL, BIT12, 12 /* 0-MPEG,1-H264 */
#define SCL_R2_IOFMT		REG_SCLR2_CTL, BIT16, 16 /* 0-frame,1-field */
#define SCL_R2_COLOR_EN		REG_SCLR2_CTL, BIT24, 24 /* 0-disable,1-enable */
#define SCL_R2_COLOR_WIDE	REG_SCLR2_CTL, BIT25, 25 /* 0-Normal,1-Wider */
#define SCL_R2_COLOR_INV	REG_SCLR2_CTL, BIT26, 26 /* 0-Normal,1-Opposite color */

/* REG_SCLR2_YSA,0x44 */
/* REG_SCLR2_CSA,0x48 */

/* REG_SCLR2_H_SIZE,0x4C */
#define SCL_R2_FBW		REG_SCLR2_H_SIZE, 0x1FFF, 0 /* frame buffer width pixel */
#define SCL_R2_LNSIZE		REG_SCLR2_H_SIZE, 0x1FFF0000, 16 /* line width pixel */

/* REG_SCLR2_CROP,0x50 */
#define SCL_R2_HCROP		REG_SCLR2_CROP, 0x1FFF, 0
#define SCL_R2_VCROP		REG_SCLR2_CROP, 0x1FFF0000, 16

/* REG_ALFA_MD,0x54 */
#define SCL_ALPHA_SRC		REG_ALFA_MD, 0x3, 0	/* 0-RMIF1,1-RMIF2,2-Fixed ALPHA */
#define SCL_ALPHA_DST		REG_ALFA_MD, 0x300, 8 	/* 0-RMIF1,1-RMIF2,2-Fixed ALPHA */
#define SCL_ALPHA_SWAP		REG_ALFA_MD, 0x10000, 16 /* 0-(alpha,1-alpha),1:(1-alpha,alpha) */

/* REG_ALFA_FXD,0x58 */
#define SCL_ALPHA_SRC_FIXED	REG_ALFA_FXD, 0xFF, 0
#define SCL_ALPHA_DST_FIXED	REG_ALFA_FXD, 0xFF00, 8

/* REG_ALFA_COLORKEY,0x5C */
#define SCL_ALPHA_COLORKEY_ENABLE REG_ALFA_COLORKEY, BIT0, 0
#define SCL_ALPHA_COLORKEY_FROM	REG_ALFA_COLORKEY, BIT8, 8	/* 0-RMIF1,1-RMIF2 */
#define SCL_ALPHA_COLORKEY_COMP	REG_ALFA_COLORKEY, 0x30000, 16	/* 0-888,1-777,2-666,3-555 */
#define SCL_ALPHA_COLORKEY_MODE	REG_ALFA_COLORKEY, 0x7000000, 24 /* (Non-Hit,Hit):0/1-(alpha,alpha),
									2-(alpha,pix1),3-(pix1,alpha),4-(alpha,pix2),
									5-(pix2,alpha),6-(pix1,pix2),7-(pix2,pix1) */

/* REG_ALFA_COLORKEY_RGB,0x60 */
#define SCL_ALPHA_COLORKEY_R	REG_ALFA_COLORKEY_RGB, 0xFF, 0
#define SCL_ALPHA_COLORKEY_G	REG_ALFA_COLORKEY_RGB, 0xFF00, 8
#define SCL_ALPHA_COLORKEY_B	REG_ALFA_COLORKEY_RGB, 0xFF0000, 16

/* REG_SCL_VXWIDTH,0x70 */
#define SCL_VXWIDTH		REG_SCL_VXWIDTH, 0x1FFF, 0
#define SCL_DST_VXWIDTH		REG_SCL_VXWIDTH, 0x1FFF0000, 16

/* REG_SCL_SCLUP_EN,0x74 */
#define SCL_VSCLUP_ENABLE	REG_SCL_SCLUP_EN, BIT16, 16
#define SCL_HSCLUP_ENABLE	REG_SCL_SCLUP_EN, BIT0, 0

/* REG_SCL_VSCALE1,0x78 */
#define SCL_V_SUBSTEP		REG_SCL_VSCALE1, 0x1FFF0000, 16
#define SCL_V_THR		REG_SCL_VSCALE1, 0x1FFF, 0

/* REG_SCL_VSCALE2,0x7c */
#define SCL_V_STEP		REG_SCL_VSCALE2, 0x1FFF0000, 16
#define SCL_V_I_SUBSTEPCNT	REG_SCL_VSCALE2, 0x1FFF, 0

/* REG_SCL_VSCALE3,0x80 */
#define SCL_V_I_STEPCNT		REG_SCL_VSCALE3, 0x1FFFF, 0

/* REG_SCL_HSCALE1,0x84 */
#define SCL_H_SUBSTEP		REG_SCL_HSCALE1, 0x1FFF0000, 16
#define SCL_H_THR		REG_SCL_HSCALE1, 0x1FFF, 0

/* REG_SCL_HSCALE2,0x88 */
#define SCL_H_STEP		REG_SCL_HSCALE2, 0x1FFF0000, 16
#define SCL_H_I_SUBSTEPCNT	REG_SCL_HSCALE2, 0x1FFF, 0

/* REG_SCL_HSCALE3,0x8c */
#define SCL_H_I_STEPCNT		REG_SCL_HSCALE3, 0x1FFFF, 0

/* REG_SCLR_REQ_NUM,0x90 */
#define SCL_R_C_REQ_NUM		REG_SCLR_REQ_NUM, 0xFF, 0
#define SCL_R_Y_REQ_NUM		REG_SCLR_REQ_NUM, 0xFF00, 8

/* REG_SCL_SCLDW,0x94 */
#define SCL_SCLDW_METHOD	REG_SCL_SCLDW, BIT0, 0	/* (VPU path, scale dn) 0 - bilinear mode, quality better */

/* REG_SCL_426_SW,0x98 */
#define SCL_426_SW		REG_SCL_426_SW, BIT0, 0	/* 1-follow 426, 0-437 */

/* REG_SCL_VBYPASS,0x9C */
#define SCL_VBYPASS		REG_SCL_VBYPASS, BIT0, 0

/* SCL_TG */
/* REG_SCL_TG_CTL,0xa0 */
#define SCL_ONESHOT_ENABLE	REG_SCL_TG_CTL, BIT24, 24 /* sacling complete will set SCL tg enable to 0 */
#define SCL_TG_RDCYC		REG_SCL_TG_CTL, 0xFF0000, 16
#define SCL_TG_WATCHDOG_ENABLE	REG_SCL_TG_CTL, BIT8, 8
#define SCL_TG_ERR_OFF		REG_SCL_TG_CTL, BIT4, 4	/* disable TG_EN whtn tg timeout */
#define SCL_TG_ENABLE		REG_SCL_TG_CTL, BIT0, 0

/* REG_SCL_TG_TOTAL,0xa4 */
#define SCL_TG_V_ALLLINE	REG_SCL_TG_TOTAL, 0x1FFF0000, 16
#define SCL_TG_H_ALLPIXEL	REG_SCL_TG_TOTAL, 0x1FFF, 0

/* REG_SCL_TG_V_ACTIVE,0xa8 */
#define SCL_TG_V_ACTEND		REG_SCL_TG_V_ACTIVE, 0x1FFF0000, 16
#define SCL_TG_V_ACTBG		REG_SCL_TG_V_ACTIVE, 0xFF, 0
 
/* REG_SCL_TG_H_ACTIVE,0xac */
#define SCL_TG_H_ACTEND		REG_SCL_TG_H_ACTIVE, 0x1FFF0000, 16
#define SCL_TG_H_ACTBG		REG_SCL_TG_H_ACTIVE, 0x3FF, 0

/* REG_SCL_TG_VBI,0xb0 */
#define SCL_TG_PVBI		REG_SCL_TG_VBI, 0x1F00, 8
#define SCL_TG_VBIE		REG_SCL_TG_VBI, 0x7F, 0

/* REG_SCL_TG_WATCHDOG,0xb4 */
#define SCL_TG_WATCHDOG_VALUE	REG_SCL_TG_WATCHDOG, 0xFFFFFFFF, 0

/* REG_SCL_TG_STS,0xb8 */
#define SCL_INTSTS_TGERR	REG_SCL_TG_STS, BIT0, 0

/* REG_SCL_TG_GOVW,0xbc */
#define SCL_TG_GOVWTG_ENABLE	REG_SCL_TG_GOVW, BIT0, 0

/* SCLR */
/* REG_SCL_MIF_CTL,0xc0 */
#define SCLR_COLBAR_INVERSION	REG_SCLR_CTL, BIT26, 26
#define SCLR_COLBAR_MODE	REG_SCLR_CTL, BIT25, 25
#define SCLR_COLBAR_ENABLE	REG_SCLR_CTL, BIT24, 24
#define SCLR_TAR_DISP_FMT	REG_SCLR_CTL, BIT16, 16	/*0:Frame, 1:Field */
#define SCLR_MEDIAFMT_H264	REG_SCLR_CTL, BIT12, 12	/*0:MPEG, 1:H264 */
#define SCLR_COLFMT_RGB		REG_SCLR_CTL, BIT11, 11	/*0:YCbCr, 1:RGB32 */
#define SCLR_COLFMT_YUV		REG_SCLR_CTL, 0x600, 9	/*0:422,1:420,2:444*/
#define SCLR_SRC_DISP_FMT	REG_SCLR_CTL, BIT8, 8	/*420C 0:Frame, 1:Field */
#define SCLR_RGB_MODE		REG_SCLR_CTL, 0x30, 4	/*0:YC,1:RGB565,3:RGB32 */
#define SCLR_MIF_ENABLE		REG_SCLR_CTL, BIT0, 0	/*0:Disable, 1:Enable */

/* REG_SCLR_YSA,0xc4 */

/* REG_SCLR_CSA,0xc8 */

/* REG_SCLR_H_SIZE,0xcc */
#define SCLR_YPXLWID		REG_SCLR_H_SIZE, 0x1FFF0000, 16
#define SCLR_YBUFWID		REG_SCLR_H_SIZE, 0x1FFF, 0

/* REG_SCLR_CROP,0xd0 */
#define SCLR_VCROP		REG_SCLR_CROP, 0x1FFF0000, 16
#define SCLR_HCROP		REG_SCLR_CROP, 0x1FFF, 0

/* REG_SCLR_FIFO_CTL,0xd4 (W:0xf4) */
#define SCLR_INTSTS_R2MIFERR	REG_SCLR_FIFO_CTL, BIT9, 9
#define SCLR_INTSTS_R1MIFERR	REG_SCLR_FIFO_CTL, BIT8, 8
#define SCLR_FIFO_THR		REG_SCLR_FIFO_CTL, 0xF, 0

/* SCL_W */
/* REG_SCLW_CTL,0xe0 */
#define SCLW_COLFMT_RGB		REG_SCLW_CTL, BIT9, 9 /* 0-YC,1-RGB32 */
#define SCLW_COLFMT_YUV		REG_SCLW_CTL, BIT8, 8 /* 0-444,1-422 */
#define SCLW_MIF_ENABLE		REG_SCLW_CTL, BIT0, 0

/* REG_SCLW_YSA,0xe4 */

/* REG_SCLW_CSA,0xe8 */

/* REG_SCLW_Y_TIME,0xec */
#define SCLW_YPXLWID		REG_SCLW_Y_TIME, 0x1FFF0000, 16
#define SCLW_YBUFWID		REG_SCLW_Y_TIME, 0x1FFF, 0

/* REG_SCLW_C_TIME,0xf0 */
#define SCLW_CPXLWID		REG_SCLW_C_TIME, 0xFFF0000, 16
#define SCLW_CBUFWID		REG_SCLW_C_TIME, 0x1FFF, 0

/* REG_SCLW_FF_CTL,0xf4 (R:0xd4) */
#define SCLW_INTSTS_MIFRGBERR	REG_SCLW_FF_CTL, BIT16, 16
#define SCLW_INTSTS_MIFYERR	REG_SCLW_FF_CTL, BIT8, 8
#define SCLW_INTSTS_MIFCERR	REG_SCLW_FF_CTL, BIT0, 0

/* REG_SCLW_INT,0xf8 */
#define SCLW_INT_TGERR_ENABLE	REG_SCLW_INT, BIT16, 16
#define SCLW_INT_R1MIF_ENABLE	REG_SCLW_INT, BIT9, 9
#define SCLW_INT_R2MIF_ENABLE	REG_SCLW_INT, BIT8, 8
#define SCLW_INT_WMIFRGB_ENABLE	REG_SCLW_INT, BIT2, 2
#define SCLW_INT_WMIFYERR_ENABLE REG_SCLW_INT, BIT1, 1
#define SCLW_INT_WMIFCERR_ENABLE REG_SCLW_INT, BIT0, 0

/* REG_SCL_TRUE_BILINEAR,0xfc */
#define SCL_BILINEAR_H		REG_SCL_TRUE_BILINEAR, BIT0, 0
#define SCL_BILINEAR_V		REG_SCL_TRUE_BILINEAR, BIT8, 8

/* SCL Base2 */
/* REG_SCL_CSC_CTL,0x00 */
#define SCL_CSC_ENABLE		REG_SCL_CSC_CTL, BIT16, 16
#define SCL_CSC_CLAMP_ENABLE	REG_SCL_CSC_CTL, BIT8, 8 /* clamp to 16-235 */
#define SCL_CSC_MODE		REG_SCL_CSC_CTL, BIT0, 0 /* 0-RGB2YC,1-YC2RGB */

/* REG_SCL_CSC1,0x04 */
/* REG_SCL_CSC2,0x08 */
/* REG_SCL_CSC3,0x0c */
/* REG_SCL_CSC4,0x10 */
/* REG_SCL_CSC5,0x14 */
/* REG_SCL_CSC6,0x18 */

/* REG_SCL_ARGB_ALPHA,0x1C */
#define SCL_FIXED_ALPHA_ENABLE	REG_SCL_ARGB_ALPHA, BIT0, 0
#define SCL_FIXED_ALPHA_DATA	REG_SCL_ARGB_ALPHA, 0xFF00, 8

/* REG_SCL_IGS,0x20 */
#define SCL_IGS_MODE		REG_SCL_IGS, 0x3, 0 /* 0-888,1-555,2-666,3-565 */

/* REG_SCL_R2_CSC,0x24 */
#define SCL_R2_CSC_MODE		REG_SCL_R2_CSC, BIT0, 0	/* 0-CCIR/ITU-601 */
#define SCL_R2_CSC_CLAMP_EN	REG_SCL_R2_CSC, BIT8, 8	/* 0-direct,1-16-235 */
#define SCL_R2_CSC_EN		REG_SCL_R2_CSC, BIT16, 16

/* REG_SCL_R2_CSC1,0x28 */
/* REG_SCL_R2_CSC2,0x2C */
/* REG_SCL_R2_CSC3,0x30 */
/* REG_SCL_R2_CSC4,0x34 */
/* REG_SCL_R2_CSC5,0x38 */
/* REG_SCL_R2_CSC6,0x3C */

/* REG_SCL_RECURSIVE_MODE,0xA0 */
#define SCL_RECURSIVE_H		REG_SCL_RECURSIVE_MODE, BIT0, 0
#define SCL_RECURSIVE_V		REG_SCL_RECURSIVE_MODE, BIT8, 8

/* REG_SCL_FIELD_MODE,0xC0 */
#define SCL_DEBLOCK_ENABLE	REG_SCL_FIELD_MODE, BIT0, 0
#define SCL_FIELD_DEFLICKER	REG_SCL_FIELD_MODE, BIT1, 1
#define SCL_FRAME_DEFLICKER	REG_SCL_FIELD_MODE, BIT2, 2

/* REG_SCL_DBLK_THRESHOLD,0xC4 */
#define SCL_1ST_LAYER_BOUNDARY	REG_SCL_DBLK_THRESHOLD, 0xFF, 0
#define SCL_2ND_LAYER_BOUNDARY	REG_SCL_DBLK_THRESHOLD, 0xFF00, 8

/* REG_SCL_FIELD_FLICKER,0xC8 */
#define SCL_FIELD_FILTER_CONDITION	REG_SCL_FIELD_FLICKER, BIT0, 0	/* 0-up or down,1-up and down */
#define SCL_FIELD_FILTER_Y_THD		REG_SCL_FIELD_FLICKER, 0xFF00, 8
#define SCL_FIELD_FILTER_C_THD		REG_SCL_FIELD_FLICKER, 0xFF0000, 16

/* REG_SCL_FRAME_FLICKER,0xCC */
#define SCL_FRAME_FILTER_RGB		REG_SCL_FRAME_FLICKER, BIT0, 0 	/* 0-Y,1-RGB */
#define SCL_FRAME_FILTER_SAMPLER	REG_SCL_FRAME_FLICKER, 0x1F00, 8 /* 2^x */
#define SCL_FR_FILTER_SCENE_CHG_THD	REG_SCL_FRAME_FLICKER, 0xFF0000, 16

/* REG_SCL_READCYC_1T,0xD0 */
#define SCL_READCYC_1T		REG_SCL_READCYC_1T,BIT0,0
#endif /* WMT_SCL_REG_H */

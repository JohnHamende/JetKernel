/*
 *  linux/include/asm-arm/arch-s3c2410/saturn_rev00.h
 *
 *  Author:		Samsung Electronics
 *  Created:	05, Jul, 2007
 *  Copyright:	Samsung Electronics Co.Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef ASM_MACH_SATURN_REV00_H

#define ASM_MACH_SATURN_REV00_H

/*
 * Memory Configuration (Reserved Memory Setting)
 */

#define	PHYS_SIZE				(128 * 1024 * 1024)//	(208 * 1024 * 1024)		/* 208MB */

#define CONFIG_RESERVED_MEM_CMM_JPEG_MFC_POST_CAMERA

/*
 * GPIO Configuration
 */

#include <mach/gpio.h>

#define GPIO_LEVEL_LOW      		0
#define GPIO_LEVEL_HIGH     		1
#define GPIO_LEVEL_NONE     		2

#define GPIO_FLM_RXD			S3C64XX_GPA(0)
#define GPIO_FLM_RXD_AF			2

#define GPIO_FLM_TXD			S3C64XX_GPA(1)
#define GPIO_FLM_TXD_AF			2

/* S3C_GPA2 ~ S3C_GPA3 */

#define GPIO_USB_SEL			S3C64XX_GPA(2)
#define GPIO_USB_SEL_AF			1

#define GPIO_MSENSE_RST			S3C64XX_GPA(3)
#define GPIO_MSENSE_RST_AF		1

#define GPIO_BT_RXD			S3C64XX_GPA(4)
#define GPIO_BT_RXD_AF			2

#define GPIO_BT_TXD			S3C64XX_GPA(5)
#define GPIO_BT_TXD_AF			2

#define GPIO_BT_CTS			S3C64XX_GPA(6)
#define GPIO_BT_CTS_AF			2

#define GPIO_BT_RTS			S3C64XX_GPA(7)
#define GPIO_BT_RTS_AF			2

#define GPIO_PDA_RXD			S3C64XX_GPB(0)
#define GPIO_PDA_RXD_AF			2

#define GPIO_PDA_TXD			S3C64XX_GPB(1)
#define GPIO_PDA_TXD_AF			2

#define GPIO_I2C1_SCL			S3C64XX_GPB(2)
#define GPIO_I2C1_SCL_AF		6

#define GPIO_I2C1_SDA			S3C64XX_GPB(3)
#define GPIO_I2C1_SDA_AF		6

#define GPIO_TOUCH_EN			S3C64XX_GPB(4)
#define GPIO_TOUCH_EN_AF		1

#define GPIO_I2C0_SCL			S3C64XX_GPB(5)
#define GPIO_I2C0_SCL_AF		2

#define GPIO_I2C0_SDA			S3C64XX_GPB(6)
#define GPIO_I2C0_SDA_AF		2

/* S3C64XX_GPC(0) */

#define GPIO_PM_SET1			S3C64XX_GPC(1)
#define GPIO_PM_SET1_AF			1

#define GPIO_PM_SET2			S3C64XX_GPC(2)
#define GPIO_PM_SET2_AF			1

#define GPIO_PM_SET3			S3C64XX_GPC(3)
#define GPIO_PM_SET3_AF			1

#define GPIO_WLAN_CMD			S3C64XX_GPC(4)
#define GPIO_WLAN_CMD_AF		3

#define GPIO_WLAN_CLK			S3C64XX_GPC(5)
#define GPIO_WLAN_CLK_AF		3

#define GPIO_WLAN_WAKE			S3C64XX_GPC(6)
#define GPIO_WLAN_WAKE_AF		1

#define GPIO_BT_WAKE			S3C64XX_GPC(7)
#define GPIO_BT_WAKE_AF			1

#define GPIO_I2S_CLK			S3C64XX_GPD(0)
#define GPIO_I2S_CLK_AF			3

#define GPIO_BT_WLAN_REG_ON		S3C64XX_GPD(1)
#define GPIO_BT_WLAN_REG_ON_AF		1

#define GPIO_I2S_LRCLK			S3C64XX_GPD(2)
#define GPIO_I2S_LRCLK_AF		3

#define GPIO_I2S_DI			S3C64XX_GPD(3)
#define GPIO_I2S_DI_AF			3

#define GPIO_I2S_DO			S3C64XX_GPD(4)
#define GPIO_I2S_DO_AF			3

#define GPIO_BT_RST_N			S3C64XX_GPE(0)
#define GPIO_BT_RST_N_AF		1

#define GPIO_BOOT			S3C64XX_GPE(1)
#define GPIO_BOOT_AF			0

#define GPIO_WLAN_RST_N			S3C64XX_GPE(2)
#define GPIO_WLAN_RST_N_AF		1

#define GPIO_PWR_I2C_SCL		S3C64XX_GPE(3)
#define GPIO_PWR_I2C_SCL_AF		1

#define GPIO_PWR_I2C_SDA		S3C64XX_GPE(4)
#define GPIO_PWR_I2C_SDA_AF		1

#define GPIO_CAM_MCLK			S3C64XX_GPF(0)
#define GPIO_CAM_MCLK_AF		2

#define GPIO_CAM_HSYNC			S3C64XX_GPF(1)
#define GPIO_CAM_HSYNC_AF		2

#define GPIO_CAM_PCLK			S3C64XX_GPF(2)
#define GPIO_CAM_PCLK_AF		2

#define GPIO_MCAM_RST_N			S3C64XX_GPF(3)
#define GPIO_MCAM_RST_N_AF		1

#define GPIO_CAM_VSYNC			S3C64XX_GPF(4)
#define GPIO_CAM_VSYNC_AF		2

#define GPIO_CAM_D_0			S3C64XX_GPF(5)
#define GPIO_CAM_D_0_AF			2

#define GPIO_CAM_D_1			S3C64XX_GPF(6)
#define GPIO_CAM_D_1_AF			2

#define GPIO_CAM_D_2			S3C64XX_GPF(7)
#define GPIO_CAM_D_2_AF			2

#define GPIO_CAM_D_3			S3C64XX_GPF(8)
#define GPIO_CAM_D_3_AF			2

#define GPIO_CAM_D_4			S3C64XX_GPF(9)
#define GPIO_CAM_D_4_AF			2

#define GPIO_CAM_D_5			S3C64XX_GPF(10)
#define GPIO_CAM_D_5_AF			2

#define GPIO_CAM_D_6			S3C64XX_GPF(11)
#define GPIO_CAM_D_6_AF			2

#define GPIO_CAM_D_7			S3C64XX_GPF(12)
#define GPIO_CAM_D_7_AF			2

/* S3C_GPF13~14 */

#define GPIO_VIBTONE_PWM		S3C64XX_GPF(15)
#define GPIO_VIBTONE_PWM_AF		2

#define GPIO_TF_CLK			S3C64XX_GPG(0)
#define GPIO_TF_CLK_AF			2

#define GPIO_TF_CMD			S3C64XX_GPG(1)
#define GPIO_TF_CMD_AF			2

#define GPIO_TF_D_0			S3C64XX_GPG(2)
#define GPIO_TF_D_0_AF			2

#define GPIO_TF_D_1			S3C64XX_GPG(3)
#define GPIO_TF_D_1_AF			2

#define GPIO_TF_D_2			S3C64XX_GPG(4)
#define GPIO_TF_D_2_AF			2

#define GPIO_TF_D_3			S3C64XX_GPG(5)
#define GPIO_TF_D_3_AF			2

/* S3C_GPG6 */

#define GPIO_TOUCH_I2C_SCL		S3C64XX_GPH(0)
#define GPIO_TOUCH_I2C_SCL_AF		1

#define GPIO_TOUCH_I2C_SDA		S3C64XX_GPH(1)
#define GPIO_TOUCH_I2C_SDA_AF		1

#define GPIO_FM_I2C_SCL			S3C64XX_GPH(2)
#define GPIO_FM_I2C_SCL_AF		1

#define GPIO_FM_I2C_SDA			S3C64XX_GPH(3)
#define GPIO_FM_I2C_SDA_AF		1

#define GPIO_VIB_EN			S3C64XX_GPH(4)
#define GPIO_VIB_EN_AF			1

/* S3C_GPH5 */

#define GPIO_WLAN_D_0			S3C64XX_GPH(6)
#define GPIO_WLAN_D_0_AF		3

#define GPIO_WLAN_D_1			S3C64XX_GPH(7)
#define GPIO_WLAN_D_1_AF		3

#define GPIO_WLAN_D_2			S3C64XX_GPH(8)
#define GPIO_WLAN_D_2_AF		3

#define GPIO_WLAN_D_3			S3C64XX_GPH(9)
#define GPIO_WLAN_D_3_AF		3

#define GPIO_LCD_B_0			S3C64XX_GPI(0)
#define GPIO_LCD_B_0_AF			2

#define GPIO_LCD_B_1			S3C64XX_GPI(1)
#define GPIO_LCD_B_1_AF			2

#define GPIO_LCD_B_2			S3C64XX_GPI(2)
#define GPIO_LCD_B_2_AF			2

#define GPIO_LCD_B_3			S3C64XX_GPI(3)
#define GPIO_LCD_B_3_AF			2

#define GPIO_LCD_B_4			S3C64XX_GPI(4)
#define GPIO_LCD_B_4_AF			2

#define GPIO_LCD_B_5			S3C64XX_GPI(5)
#define GPIO_LCD_B_5_AF			2

#define GPIO_LCD_B_6			S3C64XX_GPI(6)
#define GPIO_LCD_B_6_AF			2

#define GPIO_LCD_B_7			S3C64XX_GPI(7)
#define GPIO_LCD_B_7_AF			2

#define GPIO_LCD_G_0			S3C64XX_GPI(8)
#define GPIO_LCD_G_0_AF			2

#define GPIO_LCD_G_1			S3C64XX_GPI(9)
#define GPIO_LCD_G_1_AF			2

#define GPIO_LCD_G_2			S3C64XX_GPI(10)
#define GPIO_LCD_G_2_AF			2

#define GPIO_LCD_G_3			S3C64XX_GPI(11)
#define GPIO_LCD_G_3_AF			2

#define GPIO_LCD_G_4			S3C64XX_GPI(12)
#define GPIO_LCD_G_4_AF			2

#define GPIO_LCD_G_5			S3C64XX_GPI(13)
#define GPIO_LCD_G_5_AF			2

#define GPIO_LCD_G_6				S3C64XX_GPI(14)
#define GPIO_LCD_G_6_AF				2

#define GPIO_LCD_G_7				S3C64XX_GPI(15)
#define GPIO_LCD_G_7_AF				2

#define GPIO_LCD_R_0			S3C64XX_GPJ(0)
#define GPIO_LCD_R_0_AF			2

#define GPIO_LCD_R_1			S3C64XX_GPJ(1)
#define GPIO_LCD_R_1_AF			2

#define GPIO_LCD_R_2			S3C64XX_GPJ(2)
#define GPIO_LCD_R_2_AF			2

#define GPIO_LCD_R_3			S3C64XX_GPJ(3)
#define GPIO_LCD_R_3_AF			2

#define GPIO_LCD_R_4			S3C64XX_GPJ(4)
#define GPIO_LCD_R_4_AF			2

#define GPIO_LCD_R_5			S3C64XX_GPJ(5)
#define GPIO_LCD_R_5_AF			2

#define GPIO_LCD_R_6				S3C64XX_GPJ(6)
#define GPIO_LCD_R_6_AF				2

#define GPIO_LCD_R_7				S3C64XX_GPJ(7)
#define GPIO_LCD_R_7_AF				2

#define GPIO_LCD_HSYNC			S3C64XX_GPJ(8)
#define GPIO_LCD_HSYNC_AF		2

#define GPIO_LCD_VSYNC			S3C64XX_GPJ(9)
#define GPIO_LCD_VSYNC_AF		2

#define GPIO_LCD_DE			S3C64XX_GPJ(10)
#define GPIO_LCD_DE_AF			2

#define GPIO_LCD_CLK			S3C64XX_GPJ(11)
#define GPIO_LCD_CLK_AF			2

#define GPIO_CHG_EN			S3C64XX_GPK(0)
#define GPIO_CHG_EN_AF			1

#define GPIO_AUDIO_EN			S3C64XX_GPK(1)
#define GPIO_AUDIO_EN_AF		1

#define GPIO_PHONE_ON			S3C64XX_GPK(2)
#define GPIO_PHONE_ON_AF		1

#define GPIO_MICBIAS_EN			S3C64XX_GPK(3)
#define GPIO_MICBIAS_EN_AF		1

#define GPIO_UART_SEL			S3C64XX_GPK(4)
#define GPIO_UART_SEL_AF		1

#define GPIO_TOUCH_RST			S3C64XX_GPK(5)
#define GPIO_TOUCH_RST_AF		1

#define GPIO_CAM_EN				S3C64XX_GPK(6)
#define GPIO_CAM_EN_AF			1

#define GPIO_PHONE_RST_N		S3C64XX_GPK(7)
#define GPIO_PHONE_RST_N_AF		1

#define GPIO_KEYSCAN_0			S3C64XX_GPK(8)
#define GPIO_KEYSCAN_0_AF		3

#define GPIO_KEYSCAN_1			S3C64XX_GPK(9)
#define GPIO_KEYSCAN_1_AF		3

#define GPIO_KEYSCAN_2			S3C64XX_GPK(10)
#define GPIO_KEYSCAN_2_AF		3

#define GPIO_KEYSCAN_3			S3C64XX_GPK(11)
#define GPIO_KEYSCAN_3_AF		3

#define GPIO_FM_RST_N			S3C64XX_GPK(12)
#define GPIO_FM_RST_N_AF		1


/* S3C64XX_GPK(13) ~ S3C64XX_GPK(14) */

#define GPIO_VREG_MSMP_26V		S3C64XX_GPK(15)
#define GPIO_VREG_MSMP_26V_AF		0

#define GPIO_KEYSENSE_0			S3C64XX_GPL(0)
#define GPIO_KEYSENSE_0_AF		3

#define GPIO_KEYSENSE_1			S3C64XX_GPL(1)
#define GPIO_KEYSENSE_1_AF		3

#define GPIO_KEYSENSE_2			S3C64XX_GPL(2)
#define GPIO_KEYSENSE_2_AF		3

#define GPIO_KEYSENSE_3			S3C64XX_GPL(3)
#define GPIO_KEYSENSE_3_AF		3

/* S3C64XX_GPL(4) ~ S3C64XX_GPL(6) */
#define GPIO_7_LED_EN			S3C64XX_GPL(4)
#define GPIO_7_LED_EN_AF		1

#define GPIO_7_LED_LDO_EN		S3C64XX_GPL(5)
#define GPIO_7_LED_LDO_EN_AF	1

#define GPIO_USIM_BOOT			S3C64XX_GPL(7)
#define GPIO_USIM_BOOT_AF		1

#define GPIO_CAM_3M_STBY_N		S3C64XX_GPL(8)
#define GPIO_CAM_3M_STBY_N_AF	1

#define GPIO_MIC_SEL_N			S3C64XX_GPL(9)
#define GPIO_MIC_SEL_N_AF		1

#define GPIO_FM_INT				S3C64XX_GPL(10)
#define GPIO_FM_INT_AF			3

#define GPIO_TA_CONNECTED_N		S3C64XX_GPL(11)
#define GPIO_TA_CONNECTED_N_AF	3

#define GPIO_TOUCH_INT_N		S3C64XX_GPL(12)
#define GPIO_TOUCH_INT_N_AF		3

#define GPIO_CP_BOOT_SEL		S3C64XX_GPL(13)
#define GPIO_CP_BOOT_SEL_AF		1

#define GPIO_BT_HOST_WAKE		S3C64XX_GPL(14)
#define GPIO_BT_HOST_WAKE_AF		3

/* S3C64XX_GPM(0) ~ S3C64XX_GPM(1) */

#define GPIO_CHG_ING_N			S3C64XX_GPM(2)
#define GPIO_CHG_ING_N_AF		3

#define GPIO_PDA_ACTIVE			S3C64XX_GPM(3)
#define GPIO_PDA_ACTIVE_AF		1

/* S3C64XX_GPM(4) ~ S3C64XX_GPM(5) */

#define GPIO_ONEDRAM_INT_N		S3C64XX_GPN(0)
#define GPIO_ONEDRAM_INT_N_AF		2

#define GPIO_WLAN_HOST_WAKE		S3C64XX_GPN(1)
#define GPIO_WLAN_HOST_WAKE_AF		2

#define GPIO_MSENSE_INT			S3C64XX_GPN(2)
#define GPIO_MSENSE_INT_AF		2

#define GPIO_ACC_INT			S3C64XX_GPN(3)
#define GPIO_ACC_INT_AF			2

#define GPIO_SIM_DETECT_N		S3C64XX_GPN(4)
#define GPIO_SIM_DETECT_N_AF		2

#define GPIO_POWER_N			S3C64XX_GPN(5)
#define GPIO_POWER_N_AF			2

#define GPIO_TF_DETECT			S3C64XX_GPN(6)
#define GPIO_TF_DETECT_AF		2

#define GPIO_PHONE_ACTIVE		S3C64XX_GPN(7)
#define GPIO_PHONE_ACTIVE_AF		2

#define GPIO_PMIC_INT_N			S3C64XX_GPN(8)
#define GPIO_PMIC_INT_N_AF		2

#define GPIO_JACK_INT_N			S3C64XX_GPN(9)
#define GPIO_JACK_INT_N_AF		2

#define GPIO_DET_35			S3C64XX_GPN(10)
#define GPIO_DET_35_AF			2

#define GPIO_EAR_SEND_END		S3C64XX_GPN(11)
#define GPIO_EAR_SEND_END_AF		2

#define GPIO_RESOUT_N			S3C64XX_GPN(12)
#define GPIO_RESOUT_N_AF		2

#define GPIO_BOOT_EINT13		S3C64XX_GPN(13)
#define GPIO_BOOT_EINT13_AF		2

#define GPIO_BOOT_EINT14		S3C64XX_GPN(14)
#define GPIO_BOOT_EINT14_AF		2

#define GPIO_BOOT_EINT15		S3C64XX_GPN(15)
#define GPIO_BOOT_EINT15_AF		2

#define GPIO_NAND_CS_N			S3C64XX_GPO(0)
#define GPIO_NAND_CS_N_AF		2

/* S3C64XX_GPO(1) */

#define GPIO_LCD_RST_N			S3C64XX_GPO(2)
#define GPIO_LCD_RST_N_AF		1

/* S3C64XX_GPO(3) */

#define GPIO_LCD_CS_N			S3C64XX_GPO(6)
#define GPIO_LCD_CS_N_AF		1

#define GPIO_LCD_SDI			S3C64XX_GPO(7)
#define GPIO_LCD_SDI_AF			1

/* S3C64XX_GPO(8) ~ S3C64XX_GPO(11) */

#define GPIO_LCD_ID			S3C64XX_GPO(12)
#define GPIO_LCD_ID_AF			0

// hsil
#define GPIO_LCD_SDO		S3C64XX_GPO(12)
#define GPIO_LCD_SDO_AF             1

#define GPIO_LCD_SCLK			S3C64XX_GPO(13)
#define GPIO_LCD_SCLK_AF		1

/* S3C64XX_GPP(0) ~ S3C64XX_GPP(12) */

#define GPIO_PDA_PS_HOLD		S3C64XX_GPP(13)
#define GPIO_PDA_PS_HOLD_AF		1

/* S3C64XX_GPP(14) ~ S3C64XX_GPQ(6) */

#endif	/* ASM_MACH_SATURN_REV00_H */

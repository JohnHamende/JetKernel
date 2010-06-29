/* linux/arch/arm/plat-s3c64xx/include/plat/regs-gpio.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C64XX - GPIO register definitions
 */

#ifndef __ASM_PLAT_S3C64XX_REGS_GPIO_H
#define __ASM_PLAT_S3C64XX_REGS_GPIO_H __FILE__

#include <plat/gpio-bank-a.h>
#include <plat/gpio-bank-b.h>
#include <plat/gpio-bank-c.h>
#include <plat/gpio-bank-d.h>
#include <plat/gpio-bank-e.h>
#include <plat/gpio-bank-f.h>
#include <plat/gpio-bank-g.h>
#include <plat/gpio-bank-h.h>
#include <plat/gpio-bank-i.h>
#include <plat/gpio-bank-j.h>
#include <plat/gpio-bank-k.h>
#include <plat/gpio-bank-l.h>
#include <plat/gpio-bank-n.h>
#include <plat/gpio-bank-m.h>
#include <plat/gpio-bank-o.h>
#include <plat/gpio-bank-p.h>
#include <plat/gpio-bank-q.h>
#include <mach/map.h>

/* Base addresses for each of the banks */

#define S3C64XX_GPIOREG(reg)	(S3C64XX_VA_GPIO + (reg))

#define S3C64XX_GPA_BASE	S3C64XX_GPIOREG(0x0000)
#define S3C64XX_GPB_BASE	S3C64XX_GPIOREG(0x0020)
#define S3C64XX_GPC_BASE	S3C64XX_GPIOREG(0x0040)
#define S3C64XX_GPD_BASE	S3C64XX_GPIOREG(0x0060)
#define S3C64XX_GPE_BASE	S3C64XX_GPIOREG(0x0080)
#define S3C64XX_GPF_BASE	S3C64XX_GPIOREG(0x00A0)
#define S3C64XX_GPG_BASE	S3C64XX_GPIOREG(0x00C0)
#define S3C64XX_GPH_BASE	S3C64XX_GPIOREG(0x00E0)
#define S3C64XX_GPI_BASE		S3C64XX_GPIOREG(0x0100)
#define S3C64XX_GPJ_BASE	S3C64XX_GPIOREG(0x0120)
#define S3C64XX_GPK_BASE	S3C64XX_GPIOREG(0x0800)
#define S3C64XX_GPL_BASE	S3C64XX_GPIOREG(0x0810)
#define S3C64XX_GPM_BASE	S3C64XX_GPIOREG(0x0820)
#define S3C64XX_GPN_BASE	S3C64XX_GPIOREG(0x0830)
#define S3C64XX_GPO_BASE	S3C64XX_GPIOREG(0x0140)
#define S3C64XX_GPP_BASE	S3C64XX_GPIOREG(0x0160)
#define S3C64XX_GPQ_BASE	S3C64XX_GPIOREG(0x0180)

/* SPCON */
#define S3C64XX_SPCON		S3C64XX_GPIOREG(0x1A0)
#define S3C64XX_SPC_BASE	S3C64XX_SPCON

#define S3C64XX_SPCON_DRVCON_CAM_MASK		(0x3 << 30)
#define S3C64XX_SPCON_DRVCON_CAM_SHIFT		(30)
#define S3C64XX_SPCON_DRVCON_CAM_2mA		(0x0 << 30)
#define S3C64XX_SPCON_DRVCON_CAM_4mA		(0x1 << 30)
#define S3C64XX_SPCON_DRVCON_CAM_7mA		(0x2 << 30)
#define S3C64XX_SPCON_DRVCON_CAM_9mA		(0x3 << 30)

#define S3C64XX_SPCON_DRVCON_HSSPI_MASK		(0x3 << 28)
#define S3C64XX_SPCON_DRVCON_HSSPI_SHIFT	(28)
#define S3C64XX_SPCON_DRVCON_HSSPI_2mA		(0x0 << 28)
#define S3C64XX_SPCON_DRVCON_HSSPI_4mA		(0x1 << 28)
#define S3C64XX_SPCON_DRVCON_HSSPI_7mA		(0x2 << 28)
#define S3C64XX_SPCON_DRVCON_HSSPI_9mA		(0x3 << 28)

#define S3C64XX_SPCON_DRVCON_HSMMC_MASK		(0x3 << 26)
#define S3C64XX_SPCON_DRVCON_HSMMC_SHIFT	(26)
#define S3C64XX_SPCON_DRVCON_HSMMC_2mA		(0x0 << 26)
#define S3C64XX_SPCON_DRVCON_HSMMC_4mA		(0x1 << 26)
#define S3C64XX_SPCON_DRVCON_HSMMC_7mA		(0x2 << 26)
#define S3C64XX_SPCON_DRVCON_HSMMC_9mA		(0x3 << 26)

#define S3C64XX_SPCON_DRVCON_LCD_MASK		(0x3 << 24)
#define S3C64XX_SPCON_DRVCON_LCD_SHIFT		(24)
#define S3C64XX_SPCON_DRVCON_LCD_2mA		(0x0 << 24)
#define S3C64XX_SPCON_DRVCON_LCD_4mA		(0x1 << 24)
#define S3C64XX_SPCON_DRVCON_LCD_7mA		(0x2 << 24)
#define S3C64XX_SPCON_DRVCON_LCD_9mA		(0x3 << 24)

#define S3C64XX_SPCON_DRVCON_MODEM_MASK		(0x3 << 22)
#define S3C64XX_SPCON_DRVCON_MODEM_SHIFT	(22)
#define S3C64XX_SPCON_DRVCON_MODEM_2mA		(0x0 << 22)
#define S3C64XX_SPCON_DRVCON_MODEM_4mA		(0x1 << 22)
#define S3C64XX_SPCON_DRVCON_MODEM_7mA		(0x2 << 22)
#define S3C64XX_SPCON_DRVCON_MODEM_9mA		(0x3 << 22)

#define S3C64XX_SPCON_nRSTOUT_OEN		(1 << 21)

#define S3C64XX_SPCON_DRVCON_SPICLK1_MASK	(0x3 << 18)
#define S3C64XX_SPCON_DRVCON_SPICLK1_SHIFT	(18)
#define S3C64XX_SPCON_DRVCON_SPICLK1_2mA	(0x0 << 18)
#define S3C64XX_SPCON_DRVCON_SPICLK1_4mA	(0x1 << 18)
#define S3C64XX_SPCON_DRVCON_SPICLK1_7mA	(0x2 << 18)
#define S3C64XX_SPCON_DRVCON_SPICLK1_9mA	(0x3 << 18)

#define S3C64XX_SPCON_MEM1_DQS_PUD_MASK		(0x3 << 16)
#define S3C64XX_SPCON_MEM1_DQS_PUD_SHIFT	(16)
#define S3C64XX_SPCON_MEM1_DQS_PUD_DISABLED	(0x0 << 16)
#define S3C64XX_SPCON_MEM1_DQS_PUD_DOWN		(0x1 << 16)
#define S3C64XX_SPCON_MEM1_DQS_PUD_UP		(0x2 << 16)

#define S3C64XX_SPCON_MEM1_D_PUD1_MASK		(0x3 << 14)
#define S3C64XX_SPCON_MEM1_D_PUD1_SHIFT		(14)
#define S3C64XX_SPCON_MEM1_D_PUD1_DISABLED	(0x0 << 14)
#define S3C64XX_SPCON_MEM1_D_PUD1_DOWN		(0x1 << 14)
#define S3C64XX_SPCON_MEM1_D_PUD1_UP		(0x2 << 14)

#define S3C64XX_SPCON_MEM1_D_PUD0_MASK		(0x3 << 12)
#define S3C64XX_SPCON_MEM1_D_PUD0_SHIFT		(12)
#define S3C64XX_SPCON_MEM1_D_PUD0_DISABLED	(0x0 << 12)
#define S3C64XX_SPCON_MEM1_D_PUD0_DOWN		(0x1 << 12)
#define S3C64XX_SPCON_MEM1_D_PUD0_UP		(0x2 << 12)

#define S3C64XX_SPCON_MEM0_D_PUD_MASK		(0x3 << 8)
#define S3C64XX_SPCON_MEM0_D_PUD_SHIFT		(8)
#define S3C64XX_SPCON_MEM0_D_PUD_DISABLED	(0x0 << 8)
#define S3C64XX_SPCON_MEM0_D_PUD_DOWN		(0x1 << 8)
#define S3C64XX_SPCON_MEM0_D_PUD_UP		(0x2 << 8)

#define S3C64XX_SPCON_USBH_DMPD			(1 << 7)
#define S3C64XX_SPCON_USBH_DPPD			(1 << 6)
#define S3C64XX_SPCON_USBH_PUSW2		(1 << 5)
#define S3C64XX_SPCON_USBH_PUSW1		(1 << 4)
#define S3C64XX_SPCON_USBH_SUSPND		(1 << 3)

#define S3C64XX_SPCON_LCD_SEL_MASK		(0x3 << 0)
#define S3C64XX_SPCON_LCD_SEL_SHIFT		(0)
#define S3C64XX_SPCON_LCD_SEL_HOST		(0x0 << 0)
#define S3C64XX_SPCON_LCD_SEL_RGB		(0x1 << 0)
#define S3C64XX_SPCON_LCD_SEL_606_656		(0x2 << 0)


/* External interrupt registers */

#define S3C64XX_EINT12CON	S3C64XX_GPIOREG(0x200)
#define S3C64XX_EINT34CON	S3C64XX_GPIOREG(0x204)
#define S3C64XX_EINT56CON	S3C64XX_GPIOREG(0x208)
#define S3C64XX_EINT78CON	S3C64XX_GPIOREG(0x20C)
#define S3C64XX_EINT9CON	S3C64XX_GPIOREG(0x210)

#define S3C64XX_EINT12FLTCON	S3C64XX_GPIOREG(0x220)
#define S3C64XX_EINT34FLTCON	S3C64XX_GPIOREG(0x224)
#define S3C64XX_EINT56FLTCON	S3C64XX_GPIOREG(0x228)
#define S3C64XX_EINT78FLTCON	S3C64XX_GPIOREG(0x22C)
#define S3C64XX_EINT9FLTCON	S3C64XX_GPIOREG(0x230)

#define S3C64XX_EINT12MASK	S3C64XX_GPIOREG(0x240)
#define S3C64XX_EINT34MASK	S3C64XX_GPIOREG(0x244)
#define S3C64XX_EINT56MASK	S3C64XX_GPIOREG(0x248)
#define S3C64XX_EINT78MASK	S3C64XX_GPIOREG(0x24C)
#define S3C64XX_EINT9MASK	S3C64XX_GPIOREG(0x250)

#define S3C64XX_EINT12PEND	S3C64XX_GPIOREG(0x260)
#define S3C64XX_EINT34PEND	S3C64XX_GPIOREG(0x264)
#define S3C64XX_EINT56PEND	S3C64XX_GPIOREG(0x268)
#define S3C64XX_EINT78PEND	S3C64XX_GPIOREG(0x26C)
#define S3C64XX_EINT9PEND	S3C64XX_GPIOREG(0x270)

#define S3C64XX_PRIORITY	S3C64XX_GPIOREG(0x280)
#define S3C64XX_PRIORITY_ARB(x)	(1 << (x))

#define S3C64XX_SERVICE		S3C64XX_GPIOREG(0x284)
#define S3C64XX_SERVICEPEND	S3C64XX_GPIOREG(0x288)

#define S3C64XX_EINT0CON0	S3C64XX_GPIOREG(0x900)
#define S3C64XX_EINT0CON1	S3C64XX_GPIOREG(0x904)
#define S3C64XX_EINT0FLTCON0	S3C64XX_GPIOREG(0x910)
#define S3C64XX_EINT0FLTCON1	S3C64XX_GPIOREG(0x914)
#define S3C64XX_EINT0FLTCON2	S3C64XX_GPIOREG(0x918)
#define S3C64XX_EINT0FLTCON3	S3C64XX_GPIOREG(0x91C)

#define S3C64XX_EINT0MASK	S3C64XX_GPIOREG(0x920)
#define S3C64XX_EINT0PEND	S3C64XX_GPIOREG(0x924)

/* GPIO sleep configuration */

#define S3C64XX_SPCONSLP	S3C64XX_GPIOREG(0x880)

#define S3C64XX_SPCONSLP_TDO_PULLDOWN	(1 << 14)
#define S3C64XX_SPCONSLP_CKE1INIT	(1 << 5)

#define S3C64XX_SPCONSLP_RSTOUT_MASK	(0x3 << 12)
#define S3C64XX_SPCONSLP_RSTOUT_OUT0	(0x0 << 12)
#define S3C64XX_SPCONSLP_RSTOUT_OUT1	(0x1 << 12)
#define S3C64XX_SPCONSLP_RSTOUT_HIZ	(0x2 << 12)

#define S3C64XX_SPCONSLP_KPCOL_MASK	(0x3 << 0)
#define S3C64XX_SPCONSLP_KPCOL_OUT0	(0x0 << 0)
#define S3C64XX_SPCONSLP_KPCOL_OUT1	(0x1 << 0)
#define S3C64XX_SPCONSLP_KPCOL_INP	(0x2 << 0)


#define S3C64XX_SLPEN		S3C64XX_GPIOREG(0x930)

#define S3C64XX_SLPEN_USE_xSLP		(1 << 0)
#define S3C64XX_SLPEN_CFG_BYSLPEN	(1 << 1)

/* values for S3C_EXTINT0 */
#define S3C64XX_EXTINT_LOWLEV	 (0x00)
#define S3C64XX_EXTINT_HILEV	 (0x01)
#define S3C64XX_EXTINT_FALLEDGE	 (0x02)
#define S3C64XX_EXTINT_RISEEDGE	 (0x04)
#define S3C64XX_EXTINT_BOTHEDGE	 (0x06)


#endif /* __ASM_PLAT_S3C64XX_REGS_GPIO_H */


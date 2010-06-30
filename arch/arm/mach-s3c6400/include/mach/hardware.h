/* linux/arch/arm/mach-s3c6400/include/mach/hardware.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C6400 - Hardware support
 */

#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H __FILE__

#ifdef CONFIG_JET_OPTION
#include <mach/instinctq.h> 
#else
#include <mach/volans.h>
#endif

#ifdef CONFIG_MACH_INSTINCTQ
#include <mach/instinctq.h> 
#endif

#endif /* __ASM_ARCH_IRQ_H */

/**
 * \brief Instance description for RTC
 *
 * Copyright (c) 2020 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2020-08-03T15:54:56Z */
#ifndef _WLR089_RTC_INSTANCE_H_
#define _WLR089_RTC_INSTANCE_H_

/* ========== Register definition for RTC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_RTC_DBGCTRL         (0x4000200E) /**< (RTC) Debug Control */
#define REG_RTC_FREQCORR        (0x40002014) /**< (RTC) Frequency Correction */
#define REG_RTC_GP              (0x40002040) /**< (RTC) General Purpose */
#define REG_RTC_GP0             (0x40002040) /**< (RTC) General Purpose 0 */
#define REG_RTC_GP1             (0x40002044) /**< (RTC) General Purpose 1 */
#define REG_RTC_MODE0_CTRLA     (0x40002000) /**< (RTC) MODE0 Control A */
#define REG_RTC_MODE0_EVCTRL    (0x40002004) /**< (RTC) MODE0 Event Control */
#define REG_RTC_MODE0_INTENCLR  (0x40002008) /**< (RTC) MODE0 Interrupt Enable Clear */
#define REG_RTC_MODE0_INTENSET  (0x4000200A) /**< (RTC) MODE0 Interrupt Enable Set */
#define REG_RTC_MODE0_INTFLAG   (0x4000200C) /**< (RTC) MODE0 Interrupt Flag Status and Clear */
#define REG_RTC_MODE0_SYNCBUSY  (0x40002010) /**< (RTC) MODE0 Synchronization Busy Status */
#define REG_RTC_MODE0_COUNT     (0x40002018) /**< (RTC) MODE0 Counter Value */
#define REG_RTC_MODE0_COMP      (0x40002020) /**< (RTC) MODE0 Compare n Value */
#define REG_RTC_MODE1_CTRLA     (0x40002000) /**< (RTC) MODE1 Control A */
#define REG_RTC_MODE1_EVCTRL    (0x40002004) /**< (RTC) MODE1 Event Control */
#define REG_RTC_MODE1_INTENCLR  (0x40002008) /**< (RTC) MODE1 Interrupt Enable Clear */
#define REG_RTC_MODE1_INTENSET  (0x4000200A) /**< (RTC) MODE1 Interrupt Enable Set */
#define REG_RTC_MODE1_INTFLAG   (0x4000200C) /**< (RTC) MODE1 Interrupt Flag Status and Clear */
#define REG_RTC_MODE1_SYNCBUSY  (0x40002010) /**< (RTC) MODE1 Synchronization Busy Status */
#define REG_RTC_MODE1_COUNT     (0x40002018) /**< (RTC) MODE1 Counter Value */
#define REG_RTC_MODE1_PER       (0x4000201C) /**< (RTC) MODE1 Counter Period */
#define REG_RTC_MODE1_COMP      (0x40002020) /**< (RTC) MODE1 Compare n Value */
#define REG_RTC_MODE1_COMP0     (0x40002020) /**< (RTC) MODE1 Compare 0 Value */
#define REG_RTC_MODE1_COMP1     (0x40002022) /**< (RTC) MODE1 Compare 1 Value */
#define REG_RTC_MODE2_CTRLA     (0x40002000) /**< (RTC) MODE2 Control A */
#define REG_RTC_MODE2_EVCTRL    (0x40002004) /**< (RTC) MODE2 Event Control */
#define REG_RTC_MODE2_INTENCLR  (0x40002008) /**< (RTC) MODE2 Interrupt Enable Clear */
#define REG_RTC_MODE2_INTENSET  (0x4000200A) /**< (RTC) MODE2 Interrupt Enable Set */
#define REG_RTC_MODE2_INTFLAG   (0x4000200C) /**< (RTC) MODE2 Interrupt Flag Status and Clear */
#define REG_RTC_MODE2_SYNCBUSY  (0x40002010) /**< (RTC) MODE2 Synchronization Busy Status */
#define REG_RTC_MODE2_CLOCK     (0x40002018) /**< (RTC) MODE2 Clock Value */
#define REG_RTC_MODE2_ALARM     (0x40002020) /**< (RTC) MODE2_ALARM Alarm n Value */
#define REG_RTC_MODE2_MASK      (0x40002024) /**< (RTC) MODE2_ALARM Alarm n Mask */

#else

#define REG_RTC_DBGCTRL         (*(__IO uint8_t*)0x4000200EU) /**< (RTC) Debug Control */
#define REG_RTC_FREQCORR        (*(__IO uint8_t*)0x40002014U) /**< (RTC) Frequency Correction */
#define REG_RTC_GP              (*(__IO uint32_t*)0x40002040U) /**< (RTC) General Purpose */
#define REG_RTC_GP0             (*(__IO uint32_t*)0x40002040U) /**< (RTC) General Purpose 0 */
#define REG_RTC_GP1             (*(__IO uint32_t*)0x40002044U) /**< (RTC) General Purpose 1 */
#define REG_RTC_MODE0_CTRLA     (*(__IO uint16_t*)0x40002000U) /**< (RTC) MODE0 Control A */
#define REG_RTC_MODE0_EVCTRL    (*(__IO uint32_t*)0x40002004U) /**< (RTC) MODE0 Event Control */
#define REG_RTC_MODE0_INTENCLR  (*(__IO uint16_t*)0x40002008U) /**< (RTC) MODE0 Interrupt Enable Clear */
#define REG_RTC_MODE0_INTENSET  (*(__IO uint16_t*)0x4000200AU) /**< (RTC) MODE0 Interrupt Enable Set */
#define REG_RTC_MODE0_INTFLAG   (*(__IO uint16_t*)0x4000200CU) /**< (RTC) MODE0 Interrupt Flag Status and Clear */
#define REG_RTC_MODE0_SYNCBUSY  (*(__I  uint32_t*)0x40002010U) /**< (RTC) MODE0 Synchronization Busy Status */
#define REG_RTC_MODE0_COUNT     (*(__IO uint32_t*)0x40002018U) /**< (RTC) MODE0 Counter Value */
#define REG_RTC_MODE0_COMP      (*(__IO uint32_t*)0x40002020U) /**< (RTC) MODE0 Compare n Value */
#define REG_RTC_MODE1_CTRLA     (*(__IO uint16_t*)0x40002000U) /**< (RTC) MODE1 Control A */
#define REG_RTC_MODE1_EVCTRL    (*(__IO uint32_t*)0x40002004U) /**< (RTC) MODE1 Event Control */
#define REG_RTC_MODE1_INTENCLR  (*(__IO uint16_t*)0x40002008U) /**< (RTC) MODE1 Interrupt Enable Clear */
#define REG_RTC_MODE1_INTENSET  (*(__IO uint16_t*)0x4000200AU) /**< (RTC) MODE1 Interrupt Enable Set */
#define REG_RTC_MODE1_INTFLAG   (*(__IO uint16_t*)0x4000200CU) /**< (RTC) MODE1 Interrupt Flag Status and Clear */
#define REG_RTC_MODE1_SYNCBUSY  (*(__I  uint32_t*)0x40002010U) /**< (RTC) MODE1 Synchronization Busy Status */
#define REG_RTC_MODE1_COUNT     (*(__IO uint16_t*)0x40002018U) /**< (RTC) MODE1 Counter Value */
#define REG_RTC_MODE1_PER       (*(__IO uint16_t*)0x4000201CU) /**< (RTC) MODE1 Counter Period */
#define REG_RTC_MODE1_COMP      (*(__IO uint16_t*)0x40002020U) /**< (RTC) MODE1 Compare n Value */
#define REG_RTC_MODE1_COMP0     (*(__IO uint16_t*)0x40002020U) /**< (RTC) MODE1 Compare 0 Value */
#define REG_RTC_MODE1_COMP1     (*(__IO uint16_t*)0x40002022U) /**< (RTC) MODE1 Compare 1 Value */
#define REG_RTC_MODE2_CTRLA     (*(__IO uint16_t*)0x40002000U) /**< (RTC) MODE2 Control A */
#define REG_RTC_MODE2_EVCTRL    (*(__IO uint32_t*)0x40002004U) /**< (RTC) MODE2 Event Control */
#define REG_RTC_MODE2_INTENCLR  (*(__IO uint16_t*)0x40002008U) /**< (RTC) MODE2 Interrupt Enable Clear */
#define REG_RTC_MODE2_INTENSET  (*(__IO uint16_t*)0x4000200AU) /**< (RTC) MODE2 Interrupt Enable Set */
#define REG_RTC_MODE2_INTFLAG   (*(__IO uint16_t*)0x4000200CU) /**< (RTC) MODE2 Interrupt Flag Status and Clear */
#define REG_RTC_MODE2_SYNCBUSY  (*(__I  uint32_t*)0x40002010U) /**< (RTC) MODE2 Synchronization Busy Status */
#define REG_RTC_MODE2_CLOCK     (*(__IO uint32_t*)0x40002018U) /**< (RTC) MODE2 Clock Value */
#define REG_RTC_MODE2_ALARM     (*(__IO uint32_t*)0x40002020U) /**< (RTC) MODE2_ALARM Alarm n Value */
#define REG_RTC_MODE2_MASK      (*(__IO uint8_t*)0x40002024U) /**< (RTC) MODE2_ALARM Alarm n Mask */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for RTC peripheral ========== */
#define RTC_ALARM_NUM                            1          /* Number of Alarms */
#define RTC_COMP16_NUM                           2          /* Number of 16-bit Comparators */
#define RTC_COMP32_NUM                           1          /* Number of 32-bit Comparators */
#define RTC_GPR_NUM                              4          /* Number of General-Purpose Registers */
#define RTC_PER_NUM                              8          /* Number of Periodic Intervals */
#define RTC_INSTANCE_ID                          8          

#endif /* _WLR089_RTC_INSTANCE_ */

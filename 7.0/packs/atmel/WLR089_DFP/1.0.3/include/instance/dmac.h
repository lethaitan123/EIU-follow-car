/**
 * \brief Instance description for DMAC
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
#ifndef _WLR089_DMAC_INSTANCE_H_
#define _WLR089_DMAC_INSTANCE_H_

/* ========== Register definition for DMAC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_DMAC_CTRL           (0x44000400) /**< (DMAC) Control */
#define REG_DMAC_CRCCTRL        (0x44000402) /**< (DMAC) CRC Control */
#define REG_DMAC_CRCDATAIN      (0x44000404) /**< (DMAC) CRC Data Input */
#define REG_DMAC_CRCCHKSUM      (0x44000408) /**< (DMAC) CRC Checksum */
#define REG_DMAC_CRCSTATUS      (0x4400040C) /**< (DMAC) CRC Status */
#define REG_DMAC_DBGCTRL        (0x4400040D) /**< (DMAC) Debug Control */
#define REG_DMAC_QOSCTRL        (0x4400040E) /**< (DMAC) QOS Control */
#define REG_DMAC_SWTRIGCTRL     (0x44000410) /**< (DMAC) Software Trigger Control */
#define REG_DMAC_PRICTRL0       (0x44000414) /**< (DMAC) Priority Control 0 */
#define REG_DMAC_INTPEND        (0x44000420) /**< (DMAC) Interrupt Pending */
#define REG_DMAC_INTSTATUS      (0x44000424) /**< (DMAC) Interrupt Status */
#define REG_DMAC_BUSYCH         (0x44000428) /**< (DMAC) Busy Channels */
#define REG_DMAC_PENDCH         (0x4400042C) /**< (DMAC) Pending Channels */
#define REG_DMAC_ACTIVE         (0x44000430) /**< (DMAC) Active Channel and Levels */
#define REG_DMAC_BASEADDR       (0x44000434) /**< (DMAC) Descriptor Memory Section Base Address */
#define REG_DMAC_WRBADDR        (0x44000438) /**< (DMAC) Write-Back Memory Section Base Address */
#define REG_DMAC_CHID           (0x4400043F) /**< (DMAC) Channel ID */
#define REG_DMAC_CHCTRLA        (0x44000440) /**< (DMAC) Channel Control A */
#define REG_DMAC_CHCTRLB        (0x44000444) /**< (DMAC) Channel Control B */
#define REG_DMAC_CHINTENCLR     (0x4400044C) /**< (DMAC) Channel Interrupt Enable Clear */
#define REG_DMAC_CHINTENSET     (0x4400044D) /**< (DMAC) Channel Interrupt Enable Set */
#define REG_DMAC_CHINTFLAG      (0x4400044E) /**< (DMAC) Channel Interrupt Flag Status and Clear */
#define REG_DMAC_CHSTATUS       (0x4400044F) /**< (DMAC) Channel Status */

#else

#define REG_DMAC_CTRL           (*(__IO uint16_t*)0x44000400U) /**< (DMAC) Control */
#define REG_DMAC_CRCCTRL        (*(__IO uint16_t*)0x44000402U) /**< (DMAC) CRC Control */
#define REG_DMAC_CRCDATAIN      (*(__IO uint32_t*)0x44000404U) /**< (DMAC) CRC Data Input */
#define REG_DMAC_CRCCHKSUM      (*(__IO uint32_t*)0x44000408U) /**< (DMAC) CRC Checksum */
#define REG_DMAC_CRCSTATUS      (*(__IO uint8_t*)0x4400040CU) /**< (DMAC) CRC Status */
#define REG_DMAC_DBGCTRL        (*(__IO uint8_t*)0x4400040DU) /**< (DMAC) Debug Control */
#define REG_DMAC_QOSCTRL        (*(__IO uint8_t*)0x4400040EU) /**< (DMAC) QOS Control */
#define REG_DMAC_SWTRIGCTRL     (*(__IO uint32_t*)0x44000410U) /**< (DMAC) Software Trigger Control */
#define REG_DMAC_PRICTRL0       (*(__IO uint32_t*)0x44000414U) /**< (DMAC) Priority Control 0 */
#define REG_DMAC_INTPEND        (*(__IO uint16_t*)0x44000420U) /**< (DMAC) Interrupt Pending */
#define REG_DMAC_INTSTATUS      (*(__I  uint32_t*)0x44000424U) /**< (DMAC) Interrupt Status */
#define REG_DMAC_BUSYCH         (*(__I  uint32_t*)0x44000428U) /**< (DMAC) Busy Channels */
#define REG_DMAC_PENDCH         (*(__I  uint32_t*)0x4400042CU) /**< (DMAC) Pending Channels */
#define REG_DMAC_ACTIVE         (*(__I  uint32_t*)0x44000430U) /**< (DMAC) Active Channel and Levels */
#define REG_DMAC_BASEADDR       (*(__IO uint32_t*)0x44000434U) /**< (DMAC) Descriptor Memory Section Base Address */
#define REG_DMAC_WRBADDR        (*(__IO uint32_t*)0x44000438U) /**< (DMAC) Write-Back Memory Section Base Address */
#define REG_DMAC_CHID           (*(__IO uint8_t*)0x4400043FU) /**< (DMAC) Channel ID */
#define REG_DMAC_CHCTRLA        (*(__IO uint8_t*)0x44000440U) /**< (DMAC) Channel Control A */
#define REG_DMAC_CHCTRLB        (*(__IO uint32_t*)0x44000444U) /**< (DMAC) Channel Control B */
#define REG_DMAC_CHINTENCLR     (*(__IO uint8_t*)0x4400044CU) /**< (DMAC) Channel Interrupt Enable Clear */
#define REG_DMAC_CHINTENSET     (*(__IO uint8_t*)0x4400044DU) /**< (DMAC) Channel Interrupt Enable Set */
#define REG_DMAC_CHINTFLAG      (*(__IO uint8_t*)0x4400044EU) /**< (DMAC) Channel Interrupt Flag Status and Clear */
#define REG_DMAC_CHSTATUS       (*(__I  uint8_t*)0x4400044FU) /**< (DMAC) Channel Status */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for DMAC peripheral ========== */
#define DMAC_CH_BITS                             4          /* Number of bits to select channel */
#define DMAC_CH_NUM                              16         /* Number of channels */
#define DMAC_EVIN_NUM                            8          /* Number of input events */
#define DMAC_EVOUT_NUM                           8          /* Number of output events */
#define DMAC_LVL_BITS                            2          /* Number of bit to select level priority */
#define DMAC_LVL_NUM                             4          /* Enable priority level number */
#define DMAC_QOSCTRL_D_RESETVALUE                2          /* QOS dmac ahb interface reset value */
#define DMAC_QOSCTRL_F_RESETVALUE                2          /* QOS dmac fetch interface reset value */
#define DMAC_QOSCTRL_WRB_RESETVALUE              2          /* QOS dmac write back interface reset value */
#define DMAC_TRIG_BITS                           6          /* Number of bits to select trigger source */
#define DMAC_TRIG_NUM                            46         /* Number of peripheral triggers */
#define DMAC_INSTANCE_ID                         129        

#endif /* _WLR089_DMAC_INSTANCE_ */

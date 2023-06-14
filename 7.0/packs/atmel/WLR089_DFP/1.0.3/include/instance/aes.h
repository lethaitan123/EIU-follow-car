/**
 * \brief Instance description for AES
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
#ifndef _WLR089_AES_INSTANCE_H_
#define _WLR089_AES_INSTANCE_H_

/* ========== Register definition for AES peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_AES_CTRLA           (0x42003400) /**< (AES) Control A */
#define REG_AES_CTRLB           (0x42003404) /**< (AES) Control B */
#define REG_AES_INTENCLR        (0x42003405) /**< (AES) Interrupt Enable Clear */
#define REG_AES_INTENSET        (0x42003406) /**< (AES) Interrupt Enable Set */
#define REG_AES_INTFLAG         (0x42003407) /**< (AES) Interrupt Flag Status */
#define REG_AES_DATABUFPTR      (0x42003408) /**< (AES) Data buffer pointer */
#define REG_AES_DBGCTRL         (0x42003409) /**< (AES) Debug control */
#define REG_AES_KEYWORD         (0x4200340C) /**< (AES) Keyword n */
#define REG_AES_KEYWORD0        (0x4200340C) /**< (AES) Keyword 0 */
#define REG_AES_KEYWORD1        (0x42003410) /**< (AES) Keyword 1 */
#define REG_AES_KEYWORD2        (0x42003414) /**< (AES) Keyword 2 */
#define REG_AES_KEYWORD3        (0x42003418) /**< (AES) Keyword 3 */
#define REG_AES_KEYWORD4        (0x4200341C) /**< (AES) Keyword 4 */
#define REG_AES_KEYWORD5        (0x42003420) /**< (AES) Keyword 5 */
#define REG_AES_KEYWORD6        (0x42003424) /**< (AES) Keyword 6 */
#define REG_AES_KEYWORD7        (0x42003428) /**< (AES) Keyword 7 */
#define REG_AES_INDATA          (0x42003438) /**< (AES) Indata */
#define REG_AES_INTVECTV        (0x4200343C) /**< (AES) Initialisation Vector n */
#define REG_AES_INTVECTV0       (0x4200343C) /**< (AES) Initialisation Vector 0 */
#define REG_AES_INTVECTV1       (0x42003440) /**< (AES) Initialisation Vector 1 */
#define REG_AES_INTVECTV2       (0x42003444) /**< (AES) Initialisation Vector 2 */
#define REG_AES_INTVECTV3       (0x42003448) /**< (AES) Initialisation Vector 3 */
#define REG_AES_HASHKEY         (0x4200345C) /**< (AES) Hash key n */
#define REG_AES_HASHKEY0        (0x4200345C) /**< (AES) Hash key 0 */
#define REG_AES_HASHKEY1        (0x42003460) /**< (AES) Hash key 1 */
#define REG_AES_HASHKEY2        (0x42003464) /**< (AES) Hash key 2 */
#define REG_AES_HASHKEY3        (0x42003468) /**< (AES) Hash key 3 */
#define REG_AES_GHASH           (0x4200346C) /**< (AES) Galois Hash n */
#define REG_AES_GHASH0          (0x4200346C) /**< (AES) Galois Hash 0 */
#define REG_AES_GHASH1          (0x42003470) /**< (AES) Galois Hash 1 */
#define REG_AES_GHASH2          (0x42003474) /**< (AES) Galois Hash 2 */
#define REG_AES_GHASH3          (0x42003478) /**< (AES) Galois Hash 3 */
#define REG_AES_CIPLEN          (0x42003480) /**< (AES) Cipher Length */
#define REG_AES_RANDSEED        (0x42003484) /**< (AES) Random Seed */

#else

#define REG_AES_CTRLA           (*(__IO uint32_t*)0x42003400U) /**< (AES) Control A */
#define REG_AES_CTRLB           (*(__IO uint8_t*)0x42003404U) /**< (AES) Control B */
#define REG_AES_INTENCLR        (*(__IO uint8_t*)0x42003405U) /**< (AES) Interrupt Enable Clear */
#define REG_AES_INTENSET        (*(__IO uint8_t*)0x42003406U) /**< (AES) Interrupt Enable Set */
#define REG_AES_INTFLAG         (*(__IO uint8_t*)0x42003407U) /**< (AES) Interrupt Flag Status */
#define REG_AES_DATABUFPTR      (*(__IO uint8_t*)0x42003408U) /**< (AES) Data buffer pointer */
#define REG_AES_DBGCTRL         (*(__O  uint8_t*)0x42003409U) /**< (AES) Debug control */
#define REG_AES_KEYWORD         (*(__O  uint32_t*)0x4200340CU) /**< (AES) Keyword n */
#define REG_AES_KEYWORD0        (*(__O  uint32_t*)0x4200340CU) /**< (AES) Keyword 0 */
#define REG_AES_KEYWORD1        (*(__O  uint32_t*)0x42003410U) /**< (AES) Keyword 1 */
#define REG_AES_KEYWORD2        (*(__O  uint32_t*)0x42003414U) /**< (AES) Keyword 2 */
#define REG_AES_KEYWORD3        (*(__O  uint32_t*)0x42003418U) /**< (AES) Keyword 3 */
#define REG_AES_KEYWORD4        (*(__O  uint32_t*)0x4200341CU) /**< (AES) Keyword 4 */
#define REG_AES_KEYWORD5        (*(__O  uint32_t*)0x42003420U) /**< (AES) Keyword 5 */
#define REG_AES_KEYWORD6        (*(__O  uint32_t*)0x42003424U) /**< (AES) Keyword 6 */
#define REG_AES_KEYWORD7        (*(__O  uint32_t*)0x42003428U) /**< (AES) Keyword 7 */
#define REG_AES_INDATA          (*(__IO uint32_t*)0x42003438U) /**< (AES) Indata */
#define REG_AES_INTVECTV        (*(__O  uint32_t*)0x4200343CU) /**< (AES) Initialisation Vector n */
#define REG_AES_INTVECTV0       (*(__O  uint32_t*)0x4200343CU) /**< (AES) Initialisation Vector 0 */
#define REG_AES_INTVECTV1       (*(__O  uint32_t*)0x42003440U) /**< (AES) Initialisation Vector 1 */
#define REG_AES_INTVECTV2       (*(__O  uint32_t*)0x42003444U) /**< (AES) Initialisation Vector 2 */
#define REG_AES_INTVECTV3       (*(__O  uint32_t*)0x42003448U) /**< (AES) Initialisation Vector 3 */
#define REG_AES_HASHKEY         (*(__IO uint32_t*)0x4200345CU) /**< (AES) Hash key n */
#define REG_AES_HASHKEY0        (*(__IO uint32_t*)0x4200345CU) /**< (AES) Hash key 0 */
#define REG_AES_HASHKEY1        (*(__IO uint32_t*)0x42003460U) /**< (AES) Hash key 1 */
#define REG_AES_HASHKEY2        (*(__IO uint32_t*)0x42003464U) /**< (AES) Hash key 2 */
#define REG_AES_HASHKEY3        (*(__IO uint32_t*)0x42003468U) /**< (AES) Hash key 3 */
#define REG_AES_GHASH           (*(__IO uint32_t*)0x4200346CU) /**< (AES) Galois Hash n */
#define REG_AES_GHASH0          (*(__IO uint32_t*)0x4200346CU) /**< (AES) Galois Hash 0 */
#define REG_AES_GHASH1          (*(__IO uint32_t*)0x42003470U) /**< (AES) Galois Hash 1 */
#define REG_AES_GHASH2          (*(__IO uint32_t*)0x42003474U) /**< (AES) Galois Hash 2 */
#define REG_AES_GHASH3          (*(__IO uint32_t*)0x42003478U) /**< (AES) Galois Hash 3 */
#define REG_AES_CIPLEN          (*(__IO uint32_t*)0x42003480U) /**< (AES) Cipher Length */
#define REG_AES_RANDSEED        (*(__IO uint32_t*)0x42003484U) /**< (AES) Random Seed */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for AES peripheral ========== */
#define AES_DMAC_ID_RD                           45         /* DMA DATA Read trigger */
#define AES_DMAC_ID_WR                           44         /* DMA DATA Write trigger */
#define AES_INSTANCE_ID                          77         

#endif /* _WLR089_AES_INSTANCE_ */

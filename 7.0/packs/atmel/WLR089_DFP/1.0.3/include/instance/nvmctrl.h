/**
 * \brief Instance description for NVMCTRL
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
#ifndef _WLR089_NVMCTRL_INSTANCE_H_
#define _WLR089_NVMCTRL_INSTANCE_H_

/* ========== Register definition for NVMCTRL peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_NVMCTRL_CTRLA       (0x41004000) /**< (NVMCTRL) Control A */
#define REG_NVMCTRL_CTRLB       (0x41004004) /**< (NVMCTRL) Control B */
#define REG_NVMCTRL_PARAM       (0x41004008) /**< (NVMCTRL) NVM Parameter */
#define REG_NVMCTRL_INTENCLR    (0x4100400C) /**< (NVMCTRL) Interrupt Enable Clear */
#define REG_NVMCTRL_INTENSET    (0x41004010) /**< (NVMCTRL) Interrupt Enable Set */
#define REG_NVMCTRL_INTFLAG     (0x41004014) /**< (NVMCTRL) Interrupt Flag Status and Clear */
#define REG_NVMCTRL_STATUS      (0x41004018) /**< (NVMCTRL) Status */
#define REG_NVMCTRL_ADDR        (0x4100401C) /**< (NVMCTRL) Address */
#define REG_NVMCTRL_LOCK        (0x41004020) /**< (NVMCTRL) Lock Section */

#else

#define REG_NVMCTRL_CTRLA       (*(__IO uint16_t*)0x41004000U) /**< (NVMCTRL) Control A */
#define REG_NVMCTRL_CTRLB       (*(__IO uint32_t*)0x41004004U) /**< (NVMCTRL) Control B */
#define REG_NVMCTRL_PARAM       (*(__IO uint32_t*)0x41004008U) /**< (NVMCTRL) NVM Parameter */
#define REG_NVMCTRL_INTENCLR    (*(__IO uint8_t*)0x4100400CU) /**< (NVMCTRL) Interrupt Enable Clear */
#define REG_NVMCTRL_INTENSET    (*(__IO uint8_t*)0x41004010U) /**< (NVMCTRL) Interrupt Enable Set */
#define REG_NVMCTRL_INTFLAG     (*(__IO uint8_t*)0x41004014U) /**< (NVMCTRL) Interrupt Flag Status and Clear */
#define REG_NVMCTRL_STATUS      (*(__IO uint16_t*)0x41004018U) /**< (NVMCTRL) Status */
#define REG_NVMCTRL_ADDR        (*(__IO uint32_t*)0x4100401CU) /**< (NVMCTRL) Address */
#define REG_NVMCTRL_LOCK        (*(__IO uint16_t*)0x41004020U) /**< (NVMCTRL) Lock Section */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for NVMCTRL peripheral ========== */
#define NVMCTRL_FACTORY_WORD_IMPLEMENTED_MASK    0XC0000007FFFFFFFF 
#define NVMCTRL_GCLK_ID                          35         /* Index of Generic Clock for test */
#define NVMCTRL_PMSB                             3          
#define NVMCTRL_PSZ_BITS                         6          
#define NVMCTRL_USER_PAGE_OFFSET                 0x00800000 
#define NVMCTRL_USER_WORD_IMPLEMENTED_MASK       0XC01FFFFFFFFFFFFF 
#define NVMCTRL_RWWEE_PAGES                      128        
#define NVMCTRL_RWW_EEPROM_ADDR                  0x00400000 /* Start address of the WWR EEPROM area */
#define NVMCTRL_RWW_EEPROM_SIZE                  8192       /* Byte size of the WWR EEPROM area */
#define NVMCTRL_FLASH_SIZE                       262144     
#define NVMCTRL_PAGE_SIZE                        64         
#define NVMCTRL_PAGES                            4096       
#define NVMCTRL_PAGES_PR_REGION                  256        
#define NVMCTRL_PSM_0_FRMFW_FWS_1_MAX_FREQ       12000000   
#define NVMCTRL_PSM_0_FRMLP_FWS_0_MAX_FREQ       18000000   
#define NVMCTRL_PSM_0_FRMLP_FWS_1_MAX_FREQ       36000000   
#define NVMCTRL_PSM_0_FRMHS_FWS_0_MAX_FREQ       25000000   
#define NVMCTRL_PSM_0_FRMHS_FWS_1_MAX_FREQ       50000000   
#define NVMCTRL_PSM_1_FRMFW_FWS_1_MAX_FREQ       12000000   
#define NVMCTRL_PSM_1_FRMLP_FWS_0_MAX_FREQ       8000000    
#define NVMCTRL_PSM_1_FRMLP_FWS_1_MAX_FREQ       12000000   
#define NVMCTRL_INSTANCE_ID                      34         

#endif /* _WLR089_NVMCTRL_INSTANCE_ */

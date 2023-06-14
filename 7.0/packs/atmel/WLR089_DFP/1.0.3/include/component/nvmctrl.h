/**
 * \brief Component description for NVMCTRL
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
#ifndef _WLR089_NVMCTRL_COMPONENT_H_
#define _WLR089_NVMCTRL_COMPONENT_H_
#define _WLR089_NVMCTRL_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_NVMCTRL b'Non-Volatile Memory Controller'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR NVMCTRL */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define NVMCTRL_U2207                      /**< (NVMCTRL) Module ID */
#define REV_NVMCTRL 0x302                  /**< (NVMCTRL) Module revision */

/* -------- NVMCTRL_CTRLA : (NVMCTRL Offset: 0x00) (R/W 16) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t CMD:7;                     /**< bit:   0..6  Command                                  */
    uint16_t :1;                        /**< bit:      7  Reserved */
    uint16_t CMDEX:8;                   /**< bit:  8..15  Command Execution                        */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} NVMCTRL_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_CTRLA_OFFSET                (0x00)                                        /**<  (NVMCTRL_CTRLA) Control A  Offset */
#define NVMCTRL_CTRLA_RESETVALUE            _U_(0x00)                                     /**<  (NVMCTRL_CTRLA) Control A  Reset Value */

#define NVMCTRL_CTRLA_CMD_Pos               0                                              /**< (NVMCTRL_CTRLA) Command Position */
#define NVMCTRL_CTRLA_CMD_Msk               (_U_(0x7F) << NVMCTRL_CTRLA_CMD_Pos)           /**< (NVMCTRL_CTRLA) Command Mask */
#define NVMCTRL_CTRLA_CMD(value)            (NVMCTRL_CTRLA_CMD_Msk & ((value) << NVMCTRL_CTRLA_CMD_Pos))
#define   NVMCTRL_CTRLA_CMD_ER_Val          _U_(0x2)                                       /**< (NVMCTRL_CTRLA) Erase Row - Erases the row addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_WP_Val          _U_(0x4)                                       /**< (NVMCTRL_CTRLA) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_EAR_Val         _U_(0x5)                                       /**< (NVMCTRL_CTRLA) Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.  */
#define   NVMCTRL_CTRLA_CMD_WAP_Val         _U_(0x6)                                       /**< (NVMCTRL_CTRLA) Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.  */
#define   NVMCTRL_CTRLA_CMD_SF_Val          _U_(0xA)                                       /**< (NVMCTRL_CTRLA) Security Flow Command  */
#define   NVMCTRL_CTRLA_CMD_WL_Val          _U_(0xF)                                       /**< (NVMCTRL_CTRLA) Write lockbits  */
#define   NVMCTRL_CTRLA_CMD_RWWEEER_Val     _U_(0x1A)                                      /**< (NVMCTRL_CTRLA) RWW EEPROM area Erase Row - Erases the row addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_RWWEEWP_Val     _U_(0x1C)                                      /**< (NVMCTRL_CTRLA) RWW EEPROM Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_LR_Val          _U_(0x40)                                      /**< (NVMCTRL_CTRLA) Lock Region - Locks the region containing the address location in the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_UR_Val          _U_(0x41)                                      /**< (NVMCTRL_CTRLA) Unlock Region - Unlocks the region containing the address location in the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_SPRM_Val        _U_(0x42)                                      /**< (NVMCTRL_CTRLA) Sets the power reduction mode.  */
#define   NVMCTRL_CTRLA_CMD_CPRM_Val        _U_(0x43)                                      /**< (NVMCTRL_CTRLA) Clears the power reduction mode.  */
#define   NVMCTRL_CTRLA_CMD_PBC_Val         _U_(0x44)                                      /**< (NVMCTRL_CTRLA) Page Buffer Clear - Clears the page buffer.  */
#define   NVMCTRL_CTRLA_CMD_SSB_Val         _U_(0x45)                                      /**< (NVMCTRL_CTRLA) Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row.  */
#define   NVMCTRL_CTRLA_CMD_INVALL_Val      _U_(0x46)                                      /**< (NVMCTRL_CTRLA) Invalidate all cache lines.  */
#define NVMCTRL_CTRLA_CMD_ER                (NVMCTRL_CTRLA_CMD_ER_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Erase Row - Erases the row addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_WP                (NVMCTRL_CTRLA_CMD_WP_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_EAR               (NVMCTRL_CTRLA_CMD_EAR_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row. Position  */
#define NVMCTRL_CTRLA_CMD_WAP               (NVMCTRL_CTRLA_CMD_WAP_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row. Position  */
#define NVMCTRL_CTRLA_CMD_SF                (NVMCTRL_CTRLA_CMD_SF_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Security Flow Command Position  */
#define NVMCTRL_CTRLA_CMD_WL                (NVMCTRL_CTRLA_CMD_WL_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Write lockbits Position  */
#define NVMCTRL_CTRLA_CMD_RWWEEER           (NVMCTRL_CTRLA_CMD_RWWEEER_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) RWW EEPROM area Erase Row - Erases the row addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_RWWEEWP           (NVMCTRL_CTRLA_CMD_RWWEEWP_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) RWW EEPROM Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_LR                (NVMCTRL_CTRLA_CMD_LR_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Lock Region - Locks the region containing the address location in the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_UR                (NVMCTRL_CTRLA_CMD_UR_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Unlock Region - Unlocks the region containing the address location in the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_SPRM              (NVMCTRL_CTRLA_CMD_SPRM_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Sets the power reduction mode. Position  */
#define NVMCTRL_CTRLA_CMD_CPRM              (NVMCTRL_CTRLA_CMD_CPRM_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Clears the power reduction mode. Position  */
#define NVMCTRL_CTRLA_CMD_PBC               (NVMCTRL_CTRLA_CMD_PBC_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Page Buffer Clear - Clears the page buffer. Position  */
#define NVMCTRL_CTRLA_CMD_SSB               (NVMCTRL_CTRLA_CMD_SSB_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row. Position  */
#define NVMCTRL_CTRLA_CMD_INVALL            (NVMCTRL_CTRLA_CMD_INVALL_Val << NVMCTRL_CTRLA_CMD_Pos)  /**< (NVMCTRL_CTRLA) Invalidate all cache lines. Position  */
#define NVMCTRL_CTRLA_CMDEX_Pos             8                                              /**< (NVMCTRL_CTRLA) Command Execution Position */
#define NVMCTRL_CTRLA_CMDEX_Msk             (_U_(0xFF) << NVMCTRL_CTRLA_CMDEX_Pos)         /**< (NVMCTRL_CTRLA) Command Execution Mask */
#define NVMCTRL_CTRLA_CMDEX(value)          (NVMCTRL_CTRLA_CMDEX_Msk & ((value) << NVMCTRL_CTRLA_CMDEX_Pos))
#define   NVMCTRL_CTRLA_CMDEX_KEY_Val       _U_(0xA5)                                      /**< (NVMCTRL_CTRLA) Execution Key  */
#define NVMCTRL_CTRLA_CMDEX_KEY             (NVMCTRL_CTRLA_CMDEX_KEY_Val << NVMCTRL_CTRLA_CMDEX_Pos)  /**< (NVMCTRL_CTRLA) Execution Key Position  */
#define NVMCTRL_CTRLA_MASK                  _U_(0xFF7F)                                    /**< \deprecated (NVMCTRL_CTRLA) Register MASK  (Use NVMCTRL_CTRLA_Msk instead)  */
#define NVMCTRL_CTRLA_Msk                   _U_(0xFF7F)                                    /**< (NVMCTRL_CTRLA) Register Mask  */


/* -------- NVMCTRL_CTRLB : (NVMCTRL Offset: 0x04) (R/W 32) Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t RWS:4;                     /**< bit:   1..4  NVM Read Wait States                     */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t MANW:1;                    /**< bit:      7  Manual Write                             */
    uint32_t SLEEPPRM:2;                /**< bit:   8..9  Power Reduction Mode during Sleep        */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t FWUP:1;                    /**< bit:     11  fast wake-up                             */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t READMODE:2;                /**< bit: 16..17  NVMCTRL Read Mode                        */
    uint32_t CACHEDIS:1;                /**< bit:     18  Cache Disable                            */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} NVMCTRL_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_CTRLB_OFFSET                (0x04)                                        /**<  (NVMCTRL_CTRLB) Control B  Offset */
#define NVMCTRL_CTRLB_RESETVALUE            _U_(0x80)                                     /**<  (NVMCTRL_CTRLB) Control B  Reset Value */

#define NVMCTRL_CTRLB_RWS_Pos               1                                              /**< (NVMCTRL_CTRLB) NVM Read Wait States Position */
#define NVMCTRL_CTRLB_RWS_Msk               (_U_(0xF) << NVMCTRL_CTRLB_RWS_Pos)            /**< (NVMCTRL_CTRLB) NVM Read Wait States Mask */
#define NVMCTRL_CTRLB_RWS(value)            (NVMCTRL_CTRLB_RWS_Msk & ((value) << NVMCTRL_CTRLB_RWS_Pos))
#define   NVMCTRL_CTRLB_RWS_SINGLE_Val      _U_(0x0)                                       /**< (NVMCTRL_CTRLB) Single Auto Wait State  */
#define   NVMCTRL_CTRLB_RWS_HALF_Val        _U_(0x1)                                       /**< (NVMCTRL_CTRLB) Half Auto Wait State  */
#define   NVMCTRL_CTRLB_RWS_DUAL_Val        _U_(0x2)                                       /**< (NVMCTRL_CTRLB) Dual Auto Wait State  */
#define NVMCTRL_CTRLB_RWS_SINGLE            (NVMCTRL_CTRLB_RWS_SINGLE_Val << NVMCTRL_CTRLB_RWS_Pos)  /**< (NVMCTRL_CTRLB) Single Auto Wait State Position  */
#define NVMCTRL_CTRLB_RWS_HALF              (NVMCTRL_CTRLB_RWS_HALF_Val << NVMCTRL_CTRLB_RWS_Pos)  /**< (NVMCTRL_CTRLB) Half Auto Wait State Position  */
#define NVMCTRL_CTRLB_RWS_DUAL              (NVMCTRL_CTRLB_RWS_DUAL_Val << NVMCTRL_CTRLB_RWS_Pos)  /**< (NVMCTRL_CTRLB) Dual Auto Wait State Position  */
#define NVMCTRL_CTRLB_MANW_Pos              7                                              /**< (NVMCTRL_CTRLB) Manual Write Position */
#define NVMCTRL_CTRLB_MANW_Msk              (_U_(0x1) << NVMCTRL_CTRLB_MANW_Pos)           /**< (NVMCTRL_CTRLB) Manual Write Mask */
#define NVMCTRL_CTRLB_MANW                  NVMCTRL_CTRLB_MANW_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_CTRLB_MANW_Msk instead */
#define NVMCTRL_CTRLB_SLEEPPRM_Pos          8                                              /**< (NVMCTRL_CTRLB) Power Reduction Mode during Sleep Position */
#define NVMCTRL_CTRLB_SLEEPPRM_Msk          (_U_(0x3) << NVMCTRL_CTRLB_SLEEPPRM_Pos)       /**< (NVMCTRL_CTRLB) Power Reduction Mode during Sleep Mask */
#define NVMCTRL_CTRLB_SLEEPPRM(value)       (NVMCTRL_CTRLB_SLEEPPRM_Msk & ((value) << NVMCTRL_CTRLB_SLEEPPRM_Pos))
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val _U_(0x0)                                       /**< (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.  */
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val _U_(0x1)                                       /**< (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.  */
#define   NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val _U_(0x3)                                       /**< (NVMCTRL_CTRLB) Auto power reduction disabled.  */
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS (NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)  /**< (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access. Position  */
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT (NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)  /**< (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep. Position  */
#define NVMCTRL_CTRLB_SLEEPPRM_DISABLED     (NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)  /**< (NVMCTRL_CTRLB) Auto power reduction disabled. Position  */
#define NVMCTRL_CTRLB_FWUP_Pos              11                                             /**< (NVMCTRL_CTRLB) fast wake-up Position */
#define NVMCTRL_CTRLB_FWUP_Msk              (_U_(0x1) << NVMCTRL_CTRLB_FWUP_Pos)           /**< (NVMCTRL_CTRLB) fast wake-up Mask */
#define NVMCTRL_CTRLB_FWUP                  NVMCTRL_CTRLB_FWUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_CTRLB_FWUP_Msk instead */
#define NVMCTRL_CTRLB_READMODE_Pos          16                                             /**< (NVMCTRL_CTRLB) NVMCTRL Read Mode Position */
#define NVMCTRL_CTRLB_READMODE_Msk          (_U_(0x3) << NVMCTRL_CTRLB_READMODE_Pos)       /**< (NVMCTRL_CTRLB) NVMCTRL Read Mode Mask */
#define NVMCTRL_CTRLB_READMODE(value)       (NVMCTRL_CTRLB_READMODE_Msk & ((value) << NVMCTRL_CTRLB_READMODE_Pos))
#define   NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val _U_(0x0)                                       /**< (NVMCTRL_CTRLB) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.  */
#define   NVMCTRL_CTRLB_READMODE_LOW_POWER_Val _U_(0x1)                                       /**< (NVMCTRL_CTRLB) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.  */
#define   NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val _U_(0x2)                                       /**< (NVMCTRL_CTRLB) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.  */
#define NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY (NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val << NVMCTRL_CTRLB_READMODE_Pos)  /**< (NVMCTRL_CTRLB) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance. Position  */
#define NVMCTRL_CTRLB_READMODE_LOW_POWER    (NVMCTRL_CTRLB_READMODE_LOW_POWER_Val << NVMCTRL_CTRLB_READMODE_Pos)  /**< (NVMCTRL_CTRLB) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time. Position  */
#define NVMCTRL_CTRLB_READMODE_DETERMINISTIC (NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val << NVMCTRL_CTRLB_READMODE_Pos)  /**< (NVMCTRL_CTRLB) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings. Position  */
#define NVMCTRL_CTRLB_CACHEDIS_Pos          18                                             /**< (NVMCTRL_CTRLB) Cache Disable Position */
#define NVMCTRL_CTRLB_CACHEDIS_Msk          (_U_(0x1) << NVMCTRL_CTRLB_CACHEDIS_Pos)       /**< (NVMCTRL_CTRLB) Cache Disable Mask */
#define NVMCTRL_CTRLB_CACHEDIS              NVMCTRL_CTRLB_CACHEDIS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_CTRLB_CACHEDIS_Msk instead */
#define NVMCTRL_CTRLB_MASK                  _U_(0x70B9E)                                   /**< \deprecated (NVMCTRL_CTRLB) Register MASK  (Use NVMCTRL_CTRLB_Msk instead)  */
#define NVMCTRL_CTRLB_Msk                   _U_(0x70B9E)                                   /**< (NVMCTRL_CTRLB) Register Mask  */


/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x08) (R/W 32) NVM Parameter -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NVMP:16;                   /**< bit:  0..15  NVM Pages                                */
    uint32_t PSZ:3;                     /**< bit: 16..18  Page Size                                */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t RWWEEP:12;                 /**< bit: 20..31  RWW EEPROM Pages                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} NVMCTRL_PARAM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_PARAM_OFFSET                (0x08)                                        /**<  (NVMCTRL_PARAM) NVM Parameter  Offset */
#define NVMCTRL_PARAM_RESETVALUE            _U_(0x00)                                     /**<  (NVMCTRL_PARAM) NVM Parameter  Reset Value */

#define NVMCTRL_PARAM_NVMP_Pos              0                                              /**< (NVMCTRL_PARAM) NVM Pages Position */
#define NVMCTRL_PARAM_NVMP_Msk              (_U_(0xFFFF) << NVMCTRL_PARAM_NVMP_Pos)        /**< (NVMCTRL_PARAM) NVM Pages Mask */
#define NVMCTRL_PARAM_NVMP(value)           (NVMCTRL_PARAM_NVMP_Msk & ((value) << NVMCTRL_PARAM_NVMP_Pos))
#define NVMCTRL_PARAM_PSZ_Pos               16                                             /**< (NVMCTRL_PARAM) Page Size Position */
#define NVMCTRL_PARAM_PSZ_Msk               (_U_(0x7) << NVMCTRL_PARAM_PSZ_Pos)            /**< (NVMCTRL_PARAM) Page Size Mask */
#define NVMCTRL_PARAM_PSZ(value)            (NVMCTRL_PARAM_PSZ_Msk & ((value) << NVMCTRL_PARAM_PSZ_Pos))
#define   NVMCTRL_PARAM_PSZ_8_Val           _U_(0x0)                                       /**< (NVMCTRL_PARAM) 8 bytes  */
#define   NVMCTRL_PARAM_PSZ_16_Val          _U_(0x1)                                       /**< (NVMCTRL_PARAM) 16 bytes  */
#define   NVMCTRL_PARAM_PSZ_32_Val          _U_(0x2)                                       /**< (NVMCTRL_PARAM) 32 bytes  */
#define   NVMCTRL_PARAM_PSZ_64_Val          _U_(0x3)                                       /**< (NVMCTRL_PARAM) 64 bytes  */
#define   NVMCTRL_PARAM_PSZ_128_Val         _U_(0x4)                                       /**< (NVMCTRL_PARAM) 128 bytes  */
#define   NVMCTRL_PARAM_PSZ_256_Val         _U_(0x5)                                       /**< (NVMCTRL_PARAM) 256 bytes  */
#define   NVMCTRL_PARAM_PSZ_512_Val         _U_(0x6)                                       /**< (NVMCTRL_PARAM) 512 bytes  */
#define   NVMCTRL_PARAM_PSZ_1024_Val        _U_(0x7)                                       /**< (NVMCTRL_PARAM) 1024 bytes  */
#define NVMCTRL_PARAM_PSZ_8                 (NVMCTRL_PARAM_PSZ_8_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 8 bytes Position  */
#define NVMCTRL_PARAM_PSZ_16                (NVMCTRL_PARAM_PSZ_16_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 16 bytes Position  */
#define NVMCTRL_PARAM_PSZ_32                (NVMCTRL_PARAM_PSZ_32_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 32 bytes Position  */
#define NVMCTRL_PARAM_PSZ_64                (NVMCTRL_PARAM_PSZ_64_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 64 bytes Position  */
#define NVMCTRL_PARAM_PSZ_128               (NVMCTRL_PARAM_PSZ_128_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 128 bytes Position  */
#define NVMCTRL_PARAM_PSZ_256               (NVMCTRL_PARAM_PSZ_256_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 256 bytes Position  */
#define NVMCTRL_PARAM_PSZ_512               (NVMCTRL_PARAM_PSZ_512_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 512 bytes Position  */
#define NVMCTRL_PARAM_PSZ_1024              (NVMCTRL_PARAM_PSZ_1024_Val << NVMCTRL_PARAM_PSZ_Pos)  /**< (NVMCTRL_PARAM) 1024 bytes Position  */
#define NVMCTRL_PARAM_RWWEEP_Pos            20                                             /**< (NVMCTRL_PARAM) RWW EEPROM Pages Position */
#define NVMCTRL_PARAM_RWWEEP_Msk            (_U_(0xFFF) << NVMCTRL_PARAM_RWWEEP_Pos)       /**< (NVMCTRL_PARAM) RWW EEPROM Pages Mask */
#define NVMCTRL_PARAM_RWWEEP(value)         (NVMCTRL_PARAM_RWWEEP_Msk & ((value) << NVMCTRL_PARAM_RWWEEP_Pos))
#define NVMCTRL_PARAM_MASK                  _U_(0xFFF7FFFF)                                /**< \deprecated (NVMCTRL_PARAM) Register MASK  (Use NVMCTRL_PARAM_Msk instead)  */
#define NVMCTRL_PARAM_Msk                   _U_(0xFFF7FFFF)                                /**< (NVMCTRL_PARAM) Register Mask  */


/* -------- NVMCTRL_INTENCLR : (NVMCTRL Offset: 0x0c) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  READY:1;                   /**< bit:      0  NVM Ready Interrupt Enable               */
    uint8_t  ERROR:1;                   /**< bit:      1  Error Interrupt Enable                   */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} NVMCTRL_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTENCLR_OFFSET             (0x0C)                                        /**<  (NVMCTRL_INTENCLR) Interrupt Enable Clear  Offset */
#define NVMCTRL_INTENCLR_RESETVALUE         _U_(0x00)                                     /**<  (NVMCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define NVMCTRL_INTENCLR_READY_Pos          0                                              /**< (NVMCTRL_INTENCLR) NVM Ready Interrupt Enable Position */
#define NVMCTRL_INTENCLR_READY_Msk          (_U_(0x1) << NVMCTRL_INTENCLR_READY_Pos)       /**< (NVMCTRL_INTENCLR) NVM Ready Interrupt Enable Mask */
#define NVMCTRL_INTENCLR_READY              NVMCTRL_INTENCLR_READY_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTENCLR_READY_Msk instead */
#define NVMCTRL_INTENCLR_ERROR_Pos          1                                              /**< (NVMCTRL_INTENCLR) Error Interrupt Enable Position */
#define NVMCTRL_INTENCLR_ERROR_Msk          (_U_(0x1) << NVMCTRL_INTENCLR_ERROR_Pos)       /**< (NVMCTRL_INTENCLR) Error Interrupt Enable Mask */
#define NVMCTRL_INTENCLR_ERROR              NVMCTRL_INTENCLR_ERROR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTENCLR_ERROR_Msk instead */
#define NVMCTRL_INTENCLR_MASK               _U_(0x03)                                      /**< \deprecated (NVMCTRL_INTENCLR) Register MASK  (Use NVMCTRL_INTENCLR_Msk instead)  */
#define NVMCTRL_INTENCLR_Msk                _U_(0x03)                                      /**< (NVMCTRL_INTENCLR) Register Mask  */


/* -------- NVMCTRL_INTENSET : (NVMCTRL Offset: 0x10) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  READY:1;                   /**< bit:      0  NVM Ready Interrupt Enable               */
    uint8_t  ERROR:1;                   /**< bit:      1  Error Interrupt Enable                   */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} NVMCTRL_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTENSET_OFFSET             (0x10)                                        /**<  (NVMCTRL_INTENSET) Interrupt Enable Set  Offset */
#define NVMCTRL_INTENSET_RESETVALUE         _U_(0x00)                                     /**<  (NVMCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define NVMCTRL_INTENSET_READY_Pos          0                                              /**< (NVMCTRL_INTENSET) NVM Ready Interrupt Enable Position */
#define NVMCTRL_INTENSET_READY_Msk          (_U_(0x1) << NVMCTRL_INTENSET_READY_Pos)       /**< (NVMCTRL_INTENSET) NVM Ready Interrupt Enable Mask */
#define NVMCTRL_INTENSET_READY              NVMCTRL_INTENSET_READY_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTENSET_READY_Msk instead */
#define NVMCTRL_INTENSET_ERROR_Pos          1                                              /**< (NVMCTRL_INTENSET) Error Interrupt Enable Position */
#define NVMCTRL_INTENSET_ERROR_Msk          (_U_(0x1) << NVMCTRL_INTENSET_ERROR_Pos)       /**< (NVMCTRL_INTENSET) Error Interrupt Enable Mask */
#define NVMCTRL_INTENSET_ERROR              NVMCTRL_INTENSET_ERROR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTENSET_ERROR_Msk instead */
#define NVMCTRL_INTENSET_MASK               _U_(0x03)                                      /**< \deprecated (NVMCTRL_INTENSET) Register MASK  (Use NVMCTRL_INTENSET_Msk instead)  */
#define NVMCTRL_INTENSET_Msk                _U_(0x03)                                      /**< (NVMCTRL_INTENSET) Register Mask  */


/* -------- NVMCTRL_INTFLAG : (NVMCTRL Offset: 0x14) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t READY:1;                   /**< bit:      0  NVM Ready                                */
    __I uint8_t ERROR:1;                   /**< bit:      1  Error                                    */
    __I uint8_t :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} NVMCTRL_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTFLAG_OFFSET              (0x14)                                        /**<  (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define NVMCTRL_INTFLAG_RESETVALUE          _U_(0x00)                                     /**<  (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define NVMCTRL_INTFLAG_READY_Pos           0                                              /**< (NVMCTRL_INTFLAG) NVM Ready Position */
#define NVMCTRL_INTFLAG_READY_Msk           (_U_(0x1) << NVMCTRL_INTFLAG_READY_Pos)        /**< (NVMCTRL_INTFLAG) NVM Ready Mask */
#define NVMCTRL_INTFLAG_READY               NVMCTRL_INTFLAG_READY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTFLAG_READY_Msk instead */
#define NVMCTRL_INTFLAG_ERROR_Pos           1                                              /**< (NVMCTRL_INTFLAG) Error Position */
#define NVMCTRL_INTFLAG_ERROR_Msk           (_U_(0x1) << NVMCTRL_INTFLAG_ERROR_Pos)        /**< (NVMCTRL_INTFLAG) Error Mask */
#define NVMCTRL_INTFLAG_ERROR               NVMCTRL_INTFLAG_ERROR_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_INTFLAG_ERROR_Msk instead */
#define NVMCTRL_INTFLAG_MASK                _U_(0x03)                                      /**< \deprecated (NVMCTRL_INTFLAG) Register MASK  (Use NVMCTRL_INTFLAG_Msk instead)  */
#define NVMCTRL_INTFLAG_Msk                 _U_(0x03)                                      /**< (NVMCTRL_INTFLAG) Register Mask  */


/* -------- NVMCTRL_STATUS : (NVMCTRL Offset: 0x18) (R/W 16) Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PRM:1;                     /**< bit:      0  Power Reduction Mode                     */
    uint16_t LOAD:1;                    /**< bit:      1  NVM Page Buffer Active Loading           */
    uint16_t PROGE:1;                   /**< bit:      2  Programming Error Status                 */
    uint16_t LOCKE:1;                   /**< bit:      3  Lock Error Status                        */
    uint16_t NVME:1;                    /**< bit:      4  NVM Error                                */
    uint16_t :3;                        /**< bit:   5..7  Reserved */
    uint16_t SB:1;                      /**< bit:      8  Security Bit Status                      */
    uint16_t :7;                        /**< bit:  9..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} NVMCTRL_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_STATUS_OFFSET               (0x18)                                        /**<  (NVMCTRL_STATUS) Status  Offset */
#define NVMCTRL_STATUS_RESETVALUE           _U_(0x00)                                     /**<  (NVMCTRL_STATUS) Status  Reset Value */

#define NVMCTRL_STATUS_PRM_Pos              0                                              /**< (NVMCTRL_STATUS) Power Reduction Mode Position */
#define NVMCTRL_STATUS_PRM_Msk              (_U_(0x1) << NVMCTRL_STATUS_PRM_Pos)           /**< (NVMCTRL_STATUS) Power Reduction Mode Mask */
#define NVMCTRL_STATUS_PRM                  NVMCTRL_STATUS_PRM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_PRM_Msk instead */
#define NVMCTRL_STATUS_LOAD_Pos             1                                              /**< (NVMCTRL_STATUS) NVM Page Buffer Active Loading Position */
#define NVMCTRL_STATUS_LOAD_Msk             (_U_(0x1) << NVMCTRL_STATUS_LOAD_Pos)          /**< (NVMCTRL_STATUS) NVM Page Buffer Active Loading Mask */
#define NVMCTRL_STATUS_LOAD                 NVMCTRL_STATUS_LOAD_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_LOAD_Msk instead */
#define NVMCTRL_STATUS_PROGE_Pos            2                                              /**< (NVMCTRL_STATUS) Programming Error Status Position */
#define NVMCTRL_STATUS_PROGE_Msk            (_U_(0x1) << NVMCTRL_STATUS_PROGE_Pos)         /**< (NVMCTRL_STATUS) Programming Error Status Mask */
#define NVMCTRL_STATUS_PROGE                NVMCTRL_STATUS_PROGE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_PROGE_Msk instead */
#define NVMCTRL_STATUS_LOCKE_Pos            3                                              /**< (NVMCTRL_STATUS) Lock Error Status Position */
#define NVMCTRL_STATUS_LOCKE_Msk            (_U_(0x1) << NVMCTRL_STATUS_LOCKE_Pos)         /**< (NVMCTRL_STATUS) Lock Error Status Mask */
#define NVMCTRL_STATUS_LOCKE                NVMCTRL_STATUS_LOCKE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_LOCKE_Msk instead */
#define NVMCTRL_STATUS_NVME_Pos             4                                              /**< (NVMCTRL_STATUS) NVM Error Position */
#define NVMCTRL_STATUS_NVME_Msk             (_U_(0x1) << NVMCTRL_STATUS_NVME_Pos)          /**< (NVMCTRL_STATUS) NVM Error Mask */
#define NVMCTRL_STATUS_NVME                 NVMCTRL_STATUS_NVME_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_NVME_Msk instead */
#define NVMCTRL_STATUS_SB_Pos               8                                              /**< (NVMCTRL_STATUS) Security Bit Status Position */
#define NVMCTRL_STATUS_SB_Msk               (_U_(0x1) << NVMCTRL_STATUS_SB_Pos)            /**< (NVMCTRL_STATUS) Security Bit Status Mask */
#define NVMCTRL_STATUS_SB                   NVMCTRL_STATUS_SB_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use NVMCTRL_STATUS_SB_Msk instead */
#define NVMCTRL_STATUS_MASK                 _U_(0x11F)                                     /**< \deprecated (NVMCTRL_STATUS) Register MASK  (Use NVMCTRL_STATUS_Msk instead)  */
#define NVMCTRL_STATUS_Msk                  _U_(0x11F)                                     /**< (NVMCTRL_STATUS) Register Mask  */


/* -------- NVMCTRL_ADDR : (NVMCTRL Offset: 0x1c) (R/W 32) Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:22;                   /**< bit:  0..21  NVM Address                              */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} NVMCTRL_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_ADDR_OFFSET                 (0x1C)                                        /**<  (NVMCTRL_ADDR) Address  Offset */
#define NVMCTRL_ADDR_RESETVALUE             _U_(0x00)                                     /**<  (NVMCTRL_ADDR) Address  Reset Value */

#define NVMCTRL_ADDR_ADDR_Pos               0                                              /**< (NVMCTRL_ADDR) NVM Address Position */
#define NVMCTRL_ADDR_ADDR_Msk               (_U_(0x3FFFFF) << NVMCTRL_ADDR_ADDR_Pos)       /**< (NVMCTRL_ADDR) NVM Address Mask */
#define NVMCTRL_ADDR_ADDR(value)            (NVMCTRL_ADDR_ADDR_Msk & ((value) << NVMCTRL_ADDR_ADDR_Pos))
#define NVMCTRL_ADDR_MASK                   _U_(0x3FFFFF)                                  /**< \deprecated (NVMCTRL_ADDR) Register MASK  (Use NVMCTRL_ADDR_Msk instead)  */
#define NVMCTRL_ADDR_Msk                    _U_(0x3FFFFF)                                  /**< (NVMCTRL_ADDR) Register Mask  */


/* -------- NVMCTRL_LOCK : (NVMCTRL Offset: 0x20) (R/W 16) Lock Section -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t LOCK:16;                   /**< bit:  0..15  Region Lock Bits                         */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} NVMCTRL_LOCK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_LOCK_OFFSET                 (0x20)                                        /**<  (NVMCTRL_LOCK) Lock Section  Offset */

#define NVMCTRL_LOCK_LOCK_Pos               0                                              /**< (NVMCTRL_LOCK) Region Lock Bits Position */
#define NVMCTRL_LOCK_LOCK_Msk               (_U_(0xFFFF) << NVMCTRL_LOCK_LOCK_Pos)         /**< (NVMCTRL_LOCK) Region Lock Bits Mask */
#define NVMCTRL_LOCK_LOCK(value)            (NVMCTRL_LOCK_LOCK_Msk & ((value) << NVMCTRL_LOCK_LOCK_Pos))
#define NVMCTRL_LOCK_MASK                   _U_(0xFFFF)                                    /**< \deprecated (NVMCTRL_LOCK) Register MASK  (Use NVMCTRL_LOCK_Msk instead)  */
#define NVMCTRL_LOCK_Msk                    _U_(0xFFFF)                                    /**< (NVMCTRL_LOCK) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief NVMCTRL hardware registers */
typedef struct {  /* Non-Volatile Memory Controller */
  __IO uint16_t CTRLA;          /**< (NVMCTRL Offset: 0x00) Control A */
  __I  uint8_t                        Reserved1[2];
  __IO uint32_t CTRLB;          /**< (NVMCTRL Offset: 0x04) Control B */
  __IO uint32_t PARAM;          /**< (NVMCTRL Offset: 0x08) NVM Parameter */
  __IO uint8_t INTENCLR;       /**< (NVMCTRL Offset: 0x0C) Interrupt Enable Clear */
  __I  uint8_t                        Reserved2[3];
  __IO uint8_t INTENSET;       /**< (NVMCTRL Offset: 0x10) Interrupt Enable Set */
  __I  uint8_t                        Reserved3[3];
  __IO uint8_t INTFLAG;        /**< (NVMCTRL Offset: 0x14) Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved4[3];
  __IO uint16_t STATUS;         /**< (NVMCTRL Offset: 0x18) Status */
  __I  uint8_t                        Reserved5[2];
  __IO uint32_t ADDR;           /**< (NVMCTRL Offset: 0x1C) Address */
  __IO uint16_t LOCK;           /**< (NVMCTRL Offset: 0x20) Lock Section */
} Nvmctrl;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief NVMCTRL hardware registers */
typedef struct {  /* Non-Volatile Memory Controller */
  __IO NVMCTRL_CTRLA_Type             CTRLA;          /**< Offset: 0x00 (R/W  16) Control A */
  __I  uint8_t                        Reserved1[2];
  __IO NVMCTRL_CTRLB_Type             CTRLB;          /**< Offset: 0x04 (R/W  32) Control B */
  __IO NVMCTRL_PARAM_Type             PARAM;          /**< Offset: 0x08 (R/W  32) NVM Parameter */
  __IO NVMCTRL_INTENCLR_Type          INTENCLR;       /**< Offset: 0x0C (R/W   8) Interrupt Enable Clear */
  __I  uint8_t                        Reserved2[3];
  __IO NVMCTRL_INTENSET_Type          INTENSET;       /**< Offset: 0x10 (R/W   8) Interrupt Enable Set */
  __I  uint8_t                        Reserved3[3];
  __IO NVMCTRL_INTFLAG_Type           INTFLAG;        /**< Offset: 0x14 (R/W   8) Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved4[3];
  __IO NVMCTRL_STATUS_Type            STATUS;         /**< Offset: 0x18 (R/W  16) Status */
  __I  uint8_t                        Reserved5[2];
  __IO NVMCTRL_ADDR_Type              ADDR;           /**< Offset: 0x1C (R/W  32) Address */
  __IO NVMCTRL_LOCK_Type              LOCK;           /**< Offset: 0x20 (R/W  16) Lock Section */
} Nvmctrl;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Non-Volatile Memory Controller' */

#endif /* _WLR089_NVMCTRL_COMPONENT_H_ */

/**
 * \brief Component description for RSTC
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
#ifndef _WLR089_RSTC_COMPONENT_H_
#define _WLR089_RSTC_COMPONENT_H_
#define _WLR089_RSTC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_RSTC b'Reset Controller'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RSTC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define RSTC_U2239                      /**< (RSTC) Module ID */
#define REV_RSTC 0x110                  /**< (RSTC) Module revision */

/* -------- RSTC_RCAUSE : (RSTC Offset: 0x00) (R/ 8) Reset Cause -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  POR:1;                     /**< bit:      0  Power On Reset                           */
    uint8_t  BOD12:1;                   /**< bit:      1  Brown Out 12 Detector Reset              */
    uint8_t  BOD33:1;                   /**< bit:      2  Brown Out 33 Detector Reset              */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  EXT:1;                     /**< bit:      4  External Reset                           */
    uint8_t  WDT:1;                     /**< bit:      5  Watchdog Reset                           */
    uint8_t  SYST:1;                    /**< bit:      6  System Reset Request                     */
    uint8_t  BACKUP:1;                  /**< bit:      7  Backup Reset                             */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  :1;                        /**< bit:      0  Reserved */
    uint8_t  BOD:2;                     /**< bit:   1..2  Brown Out x2 Detector Reset              */
    uint8_t  :5;                        /**< bit:   3..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} RSTC_RCAUSE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_RCAUSE_OFFSET                  (0x00)                                        /**<  (RSTC_RCAUSE) Reset Cause  Offset */

#define RSTC_RCAUSE_POR_Pos                 0                                              /**< (RSTC_RCAUSE) Power On Reset Position */
#define RSTC_RCAUSE_POR_Msk                 (_U_(0x1) << RSTC_RCAUSE_POR_Pos)              /**< (RSTC_RCAUSE) Power On Reset Mask */
#define RSTC_RCAUSE_POR                     RSTC_RCAUSE_POR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_POR_Msk instead */
#define RSTC_RCAUSE_BOD12_Pos               1                                              /**< (RSTC_RCAUSE) Brown Out 12 Detector Reset Position */
#define RSTC_RCAUSE_BOD12_Msk               (_U_(0x1) << RSTC_RCAUSE_BOD12_Pos)            /**< (RSTC_RCAUSE) Brown Out 12 Detector Reset Mask */
#define RSTC_RCAUSE_BOD12                   RSTC_RCAUSE_BOD12_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_BOD12_Msk instead */
#define RSTC_RCAUSE_BOD33_Pos               2                                              /**< (RSTC_RCAUSE) Brown Out 33 Detector Reset Position */
#define RSTC_RCAUSE_BOD33_Msk               (_U_(0x1) << RSTC_RCAUSE_BOD33_Pos)            /**< (RSTC_RCAUSE) Brown Out 33 Detector Reset Mask */
#define RSTC_RCAUSE_BOD33                   RSTC_RCAUSE_BOD33_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_BOD33_Msk instead */
#define RSTC_RCAUSE_EXT_Pos                 4                                              /**< (RSTC_RCAUSE) External Reset Position */
#define RSTC_RCAUSE_EXT_Msk                 (_U_(0x1) << RSTC_RCAUSE_EXT_Pos)              /**< (RSTC_RCAUSE) External Reset Mask */
#define RSTC_RCAUSE_EXT                     RSTC_RCAUSE_EXT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_EXT_Msk instead */
#define RSTC_RCAUSE_WDT_Pos                 5                                              /**< (RSTC_RCAUSE) Watchdog Reset Position */
#define RSTC_RCAUSE_WDT_Msk                 (_U_(0x1) << RSTC_RCAUSE_WDT_Pos)              /**< (RSTC_RCAUSE) Watchdog Reset Mask */
#define RSTC_RCAUSE_WDT                     RSTC_RCAUSE_WDT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_WDT_Msk instead */
#define RSTC_RCAUSE_SYST_Pos                6                                              /**< (RSTC_RCAUSE) System Reset Request Position */
#define RSTC_RCAUSE_SYST_Msk                (_U_(0x1) << RSTC_RCAUSE_SYST_Pos)             /**< (RSTC_RCAUSE) System Reset Request Mask */
#define RSTC_RCAUSE_SYST                    RSTC_RCAUSE_SYST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_SYST_Msk instead */
#define RSTC_RCAUSE_BACKUP_Pos              7                                              /**< (RSTC_RCAUSE) Backup Reset Position */
#define RSTC_RCAUSE_BACKUP_Msk              (_U_(0x1) << RSTC_RCAUSE_BACKUP_Pos)           /**< (RSTC_RCAUSE) Backup Reset Mask */
#define RSTC_RCAUSE_BACKUP                  RSTC_RCAUSE_BACKUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_RCAUSE_BACKUP_Msk instead */
#define RSTC_RCAUSE_MASK                    _U_(0xF7)                                      /**< \deprecated (RSTC_RCAUSE) Register MASK  (Use RSTC_RCAUSE_Msk instead)  */
#define RSTC_RCAUSE_Msk                     _U_(0xF7)                                      /**< (RSTC_RCAUSE) Register Mask  */

#define RSTC_RCAUSE_BOD_Pos                 1                                              /**< (RSTC_RCAUSE Position) Brown Out x2 Detector Reset */
#define RSTC_RCAUSE_BOD_Msk                 (_U_(0x3) << RSTC_RCAUSE_BOD_Pos)              /**< (RSTC_RCAUSE Mask) BOD */
#define RSTC_RCAUSE_BOD(value)              (RSTC_RCAUSE_BOD_Msk & ((value) << RSTC_RCAUSE_BOD_Pos))  

/* -------- RSTC_BKUPEXIT : (RSTC Offset: 0x02) (R/ 8) Backup Exit Source -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  EXTWAKE:1;                 /**< bit:      0  External Wakeup                          */
    uint8_t  RTC:1;                     /**< bit:      1  Real Timer Counter Interrupt             */
    uint8_t  BBPS:1;                    /**< bit:      2  Battery Backup Power Switch              */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} RSTC_BKUPEXIT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_BKUPEXIT_OFFSET                (0x02)                                        /**<  (RSTC_BKUPEXIT) Backup Exit Source  Offset */

#define RSTC_BKUPEXIT_EXTWAKE_Pos           0                                              /**< (RSTC_BKUPEXIT) External Wakeup Position */
#define RSTC_BKUPEXIT_EXTWAKE_Msk           (_U_(0x1) << RSTC_BKUPEXIT_EXTWAKE_Pos)        /**< (RSTC_BKUPEXIT) External Wakeup Mask */
#define RSTC_BKUPEXIT_EXTWAKE               RSTC_BKUPEXIT_EXTWAKE_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_BKUPEXIT_EXTWAKE_Msk instead */
#define RSTC_BKUPEXIT_RTC_Pos               1                                              /**< (RSTC_BKUPEXIT) Real Timer Counter Interrupt Position */
#define RSTC_BKUPEXIT_RTC_Msk               (_U_(0x1) << RSTC_BKUPEXIT_RTC_Pos)            /**< (RSTC_BKUPEXIT) Real Timer Counter Interrupt Mask */
#define RSTC_BKUPEXIT_RTC                   RSTC_BKUPEXIT_RTC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_BKUPEXIT_RTC_Msk instead */
#define RSTC_BKUPEXIT_BBPS_Pos              2                                              /**< (RSTC_BKUPEXIT) Battery Backup Power Switch Position */
#define RSTC_BKUPEXIT_BBPS_Msk              (_U_(0x1) << RSTC_BKUPEXIT_BBPS_Pos)           /**< (RSTC_BKUPEXIT) Battery Backup Power Switch Mask */
#define RSTC_BKUPEXIT_BBPS                  RSTC_BKUPEXIT_BBPS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use RSTC_BKUPEXIT_BBPS_Msk instead */
#define RSTC_BKUPEXIT_MASK                  _U_(0x07)                                      /**< \deprecated (RSTC_BKUPEXIT) Register MASK  (Use RSTC_BKUPEXIT_Msk instead)  */
#define RSTC_BKUPEXIT_Msk                   _U_(0x07)                                      /**< (RSTC_BKUPEXIT) Register Mask  */


/* -------- RSTC_WKDBCONF : (RSTC Offset: 0x04) (R/W 8) Wakeup Debounce Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  WKDBCNT:5;                 /**< bit:   0..4  Wakeup Debounce Counter                  */
    uint8_t  :3;                        /**< bit:   5..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} RSTC_WKDBCONF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_WKDBCONF_OFFSET                (0x04)                                        /**<  (RSTC_WKDBCONF) Wakeup Debounce Configuration  Offset */
#define RSTC_WKDBCONF_RESETVALUE            _U_(0x00)                                     /**<  (RSTC_WKDBCONF) Wakeup Debounce Configuration  Reset Value */

#define RSTC_WKDBCONF_WKDBCNT_Pos           0                                              /**< (RSTC_WKDBCONF) Wakeup Debounce Counter Position */
#define RSTC_WKDBCONF_WKDBCNT_Msk           (_U_(0x1F) << RSTC_WKDBCONF_WKDBCNT_Pos)       /**< (RSTC_WKDBCONF) Wakeup Debounce Counter Mask */
#define RSTC_WKDBCONF_WKDBCNT(value)        (RSTC_WKDBCONF_WKDBCNT_Msk & ((value) << RSTC_WKDBCONF_WKDBCNT_Pos))
#define   RSTC_WKDBCONF_WKDBCNT_OFF_Val     _U_(0x0)                                       /**< (RSTC_WKDBCONF) No debouncing.Input pin is low or high level sensitive depending on its WKPOLx bit.  */
#define   RSTC_WKDBCONF_WKDBCNT_2CK32_Val   _U_(0x1)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least two 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_3CK32_Val   _U_(0x2)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least three 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_32CK32_Val  _U_(0x3)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_512CK32_Val _U_(0x4)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least 512 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_4096CK32_Val _U_(0x5)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least 4096 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_32768CK32_Val _U_(0x6)                                       /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32768 32kHz clock period.  */
#define RSTC_WKDBCONF_WKDBCNT_OFF           (RSTC_WKDBCONF_WKDBCNT_OFF_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) No debouncing.Input pin is low or high level sensitive depending on its WKPOLx bit. Position  */
#define RSTC_WKDBCONF_WKDBCNT_2CK32         (RSTC_WKDBCONF_WKDBCNT_2CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least two 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_3CK32         (RSTC_WKDBCONF_WKDBCNT_3CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least three 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_32CK32        (RSTC_WKDBCONF_WKDBCNT_32CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_512CK32       (RSTC_WKDBCONF_WKDBCNT_512CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least 512 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_4096CK32      (RSTC_WKDBCONF_WKDBCNT_4096CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least 4096 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_32768CK32     (RSTC_WKDBCONF_WKDBCNT_32768CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos)  /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32768 32kHz clock period. Position  */
#define RSTC_WKDBCONF_MASK                  _U_(0x1F)                                      /**< \deprecated (RSTC_WKDBCONF) Register MASK  (Use RSTC_WKDBCONF_Msk instead)  */
#define RSTC_WKDBCONF_Msk                   _U_(0x1F)                                      /**< (RSTC_WKDBCONF) Register Mask  */


/* -------- RSTC_WKPOL : (RSTC Offset: 0x08) (R/W 16) Wakeup Polarity -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t WKPOL:8;                   /**< bit:   0..7  Wakeup Polarity                          */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RSTC_WKPOL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_WKPOL_OFFSET                   (0x08)                                        /**<  (RSTC_WKPOL) Wakeup Polarity  Offset */
#define RSTC_WKPOL_RESETVALUE               _U_(0x00)                                     /**<  (RSTC_WKPOL) Wakeup Polarity  Reset Value */

#define RSTC_WKPOL_WKPOL_Pos                0                                              /**< (RSTC_WKPOL) Wakeup Polarity Position */
#define RSTC_WKPOL_WKPOL_Msk                (_U_(0xFF) << RSTC_WKPOL_WKPOL_Pos)            /**< (RSTC_WKPOL) Wakeup Polarity Mask */
#define RSTC_WKPOL_WKPOL(value)             (RSTC_WKPOL_WKPOL_Msk & ((value) << RSTC_WKPOL_WKPOL_Pos))
#define RSTC_WKPOL_MASK                     _U_(0xFF)                                      /**< \deprecated (RSTC_WKPOL) Register MASK  (Use RSTC_WKPOL_Msk instead)  */
#define RSTC_WKPOL_Msk                      _U_(0xFF)                                      /**< (RSTC_WKPOL) Register Mask  */


/* -------- RSTC_WKEN : (RSTC Offset: 0x0c) (R/W 16) Wakeup Enable -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t WKEN:8;                    /**< bit:   0..7  Wakeup Enable                            */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RSTC_WKEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_WKEN_OFFSET                    (0x0C)                                        /**<  (RSTC_WKEN) Wakeup Enable  Offset */
#define RSTC_WKEN_RESETVALUE                _U_(0x00)                                     /**<  (RSTC_WKEN) Wakeup Enable  Reset Value */

#define RSTC_WKEN_WKEN_Pos                  0                                              /**< (RSTC_WKEN) Wakeup Enable Position */
#define RSTC_WKEN_WKEN_Msk                  (_U_(0xFF) << RSTC_WKEN_WKEN_Pos)              /**< (RSTC_WKEN) Wakeup Enable Mask */
#define RSTC_WKEN_WKEN(value)               (RSTC_WKEN_WKEN_Msk & ((value) << RSTC_WKEN_WKEN_Pos))
#define RSTC_WKEN_MASK                      _U_(0xFF)                                      /**< \deprecated (RSTC_WKEN) Register MASK  (Use RSTC_WKEN_Msk instead)  */
#define RSTC_WKEN_Msk                       _U_(0xFF)                                      /**< (RSTC_WKEN) Register Mask  */


/* -------- RSTC_WKCAUSE : (RSTC Offset: 0x10) (R/W 16) Wakeup Cause -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t WKCAUSE:16;                /**< bit:  0..15  Wakeup Cause                             */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RSTC_WKCAUSE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_WKCAUSE_OFFSET                 (0x10)                                        /**<  (RSTC_WKCAUSE) Wakeup Cause  Offset */
#define RSTC_WKCAUSE_RESETVALUE             _U_(0x00)                                     /**<  (RSTC_WKCAUSE) Wakeup Cause  Reset Value */

#define RSTC_WKCAUSE_WKCAUSE_Pos            0                                              /**< (RSTC_WKCAUSE) Wakeup Cause Position */
#define RSTC_WKCAUSE_WKCAUSE_Msk            (_U_(0xFFFF) << RSTC_WKCAUSE_WKCAUSE_Pos)      /**< (RSTC_WKCAUSE) Wakeup Cause Mask */
#define RSTC_WKCAUSE_WKCAUSE(value)         (RSTC_WKCAUSE_WKCAUSE_Msk & ((value) << RSTC_WKCAUSE_WKCAUSE_Pos))
#define RSTC_WKCAUSE_MASK                   _U_(0xFFFF)                                    /**< \deprecated (RSTC_WKCAUSE) Register MASK  (Use RSTC_WKCAUSE_Msk instead)  */
#define RSTC_WKCAUSE_Msk                    _U_(0xFFFF)                                    /**< (RSTC_WKCAUSE) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief RSTC hardware registers */
typedef struct {  /* Reset Controller */
  __I  uint8_t RCAUSE;         /**< (RSTC Offset: 0x00) Reset Cause */
  __I  uint8_t                        Reserved1[1];
  __I  uint8_t BKUPEXIT;       /**< (RSTC Offset: 0x02) Backup Exit Source */
  __I  uint8_t                        Reserved2[1];
  __IO uint8_t WKDBCONF;       /**< (RSTC Offset: 0x04) Wakeup Debounce Configuration */
  __I  uint8_t                        Reserved3[3];
  __IO uint16_t WKPOL;          /**< (RSTC Offset: 0x08) Wakeup Polarity */
  __I  uint8_t                        Reserved4[2];
  __IO uint16_t WKEN;           /**< (RSTC Offset: 0x0C) Wakeup Enable */
  __I  uint8_t                        Reserved5[2];
  __IO uint16_t WKCAUSE;        /**< (RSTC Offset: 0x10) Wakeup Cause */
} Rstc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief RSTC hardware registers */
typedef struct {  /* Reset Controller */
  __I  RSTC_RCAUSE_Type               RCAUSE;         /**< Offset: 0x00 (R/    8) Reset Cause */
  __I  uint8_t                        Reserved1[1];
  __I  RSTC_BKUPEXIT_Type             BKUPEXIT;       /**< Offset: 0x02 (R/    8) Backup Exit Source */
  __I  uint8_t                        Reserved2[1];
  __IO RSTC_WKDBCONF_Type             WKDBCONF;       /**< Offset: 0x04 (R/W   8) Wakeup Debounce Configuration */
  __I  uint8_t                        Reserved3[3];
  __IO RSTC_WKPOL_Type                WKPOL;          /**< Offset: 0x08 (R/W  16) Wakeup Polarity */
  __I  uint8_t                        Reserved4[2];
  __IO RSTC_WKEN_Type                 WKEN;           /**< Offset: 0x0C (R/W  16) Wakeup Enable */
  __I  uint8_t                        Reserved5[2];
  __IO RSTC_WKCAUSE_Type              WKCAUSE;        /**< Offset: 0x10 (R/W  16) Wakeup Cause */
} Rstc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Reset Controller' */

#endif /* _WLR089_RSTC_COMPONENT_H_ */

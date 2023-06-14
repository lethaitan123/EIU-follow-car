/**
 * \brief Component description for PAC
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
#ifndef _WLR089_PAC_COMPONENT_H_
#define _WLR089_PAC_COMPONENT_H_
#define _WLR089_PAC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_PAC b'Peripheral Access Controller'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PAC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PAC_U2120                      /**< (PAC) Module ID */
#define REV_PAC 0x110                  /**< (PAC) Module revision */

/* -------- PAC_WRCTRL : (PAC Offset: 0x00) (R/W 32) Write control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PERID:16;                  /**< bit:  0..15  Peripheral identifier                    */
    uint32_t KEY:8;                     /**< bit: 16..23  Peripheral access control key            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_WRCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_WRCTRL_OFFSET                   (0x00)                                        /**<  (PAC_WRCTRL) Write control  Offset */
#define PAC_WRCTRL_RESETVALUE               _U_(0x00)                                     /**<  (PAC_WRCTRL) Write control  Reset Value */

#define PAC_WRCTRL_PERID_Pos                0                                              /**< (PAC_WRCTRL) Peripheral identifier Position */
#define PAC_WRCTRL_PERID_Msk                (_U_(0xFFFF) << PAC_WRCTRL_PERID_Pos)          /**< (PAC_WRCTRL) Peripheral identifier Mask */
#define PAC_WRCTRL_PERID(value)             (PAC_WRCTRL_PERID_Msk & ((value) << PAC_WRCTRL_PERID_Pos))
#define PAC_WRCTRL_KEY_Pos                  16                                             /**< (PAC_WRCTRL) Peripheral access control key Position */
#define PAC_WRCTRL_KEY_Msk                  (_U_(0xFF) << PAC_WRCTRL_KEY_Pos)              /**< (PAC_WRCTRL) Peripheral access control key Mask */
#define PAC_WRCTRL_KEY(value)               (PAC_WRCTRL_KEY_Msk & ((value) << PAC_WRCTRL_KEY_Pos))
#define   PAC_WRCTRL_KEY_OFF_Val            _U_(0x0)                                       /**< (PAC_WRCTRL) No action  */
#define   PAC_WRCTRL_KEY_CLR_Val            _U_(0x1)                                       /**< (PAC_WRCTRL) Clear protection  */
#define   PAC_WRCTRL_KEY_SET_Val            _U_(0x2)                                       /**< (PAC_WRCTRL) Set protection  */
#define   PAC_WRCTRL_KEY_SETLCK_Val         _U_(0x3)                                       /**< (PAC_WRCTRL) Set and lock protection  */
#define PAC_WRCTRL_KEY_OFF                  (PAC_WRCTRL_KEY_OFF_Val << PAC_WRCTRL_KEY_Pos)  /**< (PAC_WRCTRL) No action Position  */
#define PAC_WRCTRL_KEY_CLR                  (PAC_WRCTRL_KEY_CLR_Val << PAC_WRCTRL_KEY_Pos)  /**< (PAC_WRCTRL) Clear protection Position  */
#define PAC_WRCTRL_KEY_SET                  (PAC_WRCTRL_KEY_SET_Val << PAC_WRCTRL_KEY_Pos)  /**< (PAC_WRCTRL) Set protection Position  */
#define PAC_WRCTRL_KEY_SETLCK               (PAC_WRCTRL_KEY_SETLCK_Val << PAC_WRCTRL_KEY_Pos)  /**< (PAC_WRCTRL) Set and lock protection Position  */
#define PAC_WRCTRL_MASK                     _U_(0xFFFFFF)                                  /**< \deprecated (PAC_WRCTRL) Register MASK  (Use PAC_WRCTRL_Msk instead)  */
#define PAC_WRCTRL_Msk                      _U_(0xFFFFFF)                                  /**< (PAC_WRCTRL) Register Mask  */


/* -------- PAC_EVCTRL : (PAC Offset: 0x04) (R/W 8) Event control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ERREO:1;                   /**< bit:      0  Peripheral acess error event output      */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PAC_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_EVCTRL_OFFSET                   (0x04)                                        /**<  (PAC_EVCTRL) Event control  Offset */
#define PAC_EVCTRL_RESETVALUE               _U_(0x00)                                     /**<  (PAC_EVCTRL) Event control  Reset Value */

#define PAC_EVCTRL_ERREO_Pos                0                                              /**< (PAC_EVCTRL) Peripheral acess error event output Position */
#define PAC_EVCTRL_ERREO_Msk                (_U_(0x1) << PAC_EVCTRL_ERREO_Pos)             /**< (PAC_EVCTRL) Peripheral acess error event output Mask */
#define PAC_EVCTRL_ERREO                    PAC_EVCTRL_ERREO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_EVCTRL_ERREO_Msk instead */
#define PAC_EVCTRL_MASK                     _U_(0x01)                                      /**< \deprecated (PAC_EVCTRL) Register MASK  (Use PAC_EVCTRL_Msk instead)  */
#define PAC_EVCTRL_Msk                      _U_(0x01)                                      /**< (PAC_EVCTRL) Register Mask  */


/* -------- PAC_INTENCLR : (PAC Offset: 0x08) (R/W 8) Interrupt enable clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ERR:1;                     /**< bit:      0  Peripheral access error interrupt disable */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PAC_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTENCLR_OFFSET                 (0x08)                                        /**<  (PAC_INTENCLR) Interrupt enable clear  Offset */
#define PAC_INTENCLR_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTENCLR) Interrupt enable clear  Reset Value */

#define PAC_INTENCLR_ERR_Pos                0                                              /**< (PAC_INTENCLR) Peripheral access error interrupt disable Position */
#define PAC_INTENCLR_ERR_Msk                (_U_(0x1) << PAC_INTENCLR_ERR_Pos)             /**< (PAC_INTENCLR) Peripheral access error interrupt disable Mask */
#define PAC_INTENCLR_ERR                    PAC_INTENCLR_ERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTENCLR_ERR_Msk instead */
#define PAC_INTENCLR_MASK                   _U_(0x01)                                      /**< \deprecated (PAC_INTENCLR) Register MASK  (Use PAC_INTENCLR_Msk instead)  */
#define PAC_INTENCLR_Msk                    _U_(0x01)                                      /**< (PAC_INTENCLR) Register Mask  */


/* -------- PAC_INTENSET : (PAC Offset: 0x09) (R/W 8) Interrupt enable set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ERR:1;                     /**< bit:      0  Peripheral access error interrupt enable */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PAC_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTENSET_OFFSET                 (0x09)                                        /**<  (PAC_INTENSET) Interrupt enable set  Offset */
#define PAC_INTENSET_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTENSET) Interrupt enable set  Reset Value */

#define PAC_INTENSET_ERR_Pos                0                                              /**< (PAC_INTENSET) Peripheral access error interrupt enable Position */
#define PAC_INTENSET_ERR_Msk                (_U_(0x1) << PAC_INTENSET_ERR_Pos)             /**< (PAC_INTENSET) Peripheral access error interrupt enable Mask */
#define PAC_INTENSET_ERR                    PAC_INTENSET_ERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTENSET_ERR_Msk instead */
#define PAC_INTENSET_MASK                   _U_(0x01)                                      /**< \deprecated (PAC_INTENSET) Register MASK  (Use PAC_INTENSET_Msk instead)  */
#define PAC_INTENSET_Msk                    _U_(0x01)                                      /**< (PAC_INTENSET) Register Mask  */


/* -------- PAC_INTFLAGAHB : (PAC Offset: 0x10) (R/W 32) Bridge interrupt flag status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t FLASH_:1;                  /**< bit:      0  FLASH                                    */
    __I uint32_t HSRAMCM0P_:1;              /**< bit:      1  HSRAMCM0P                                */
    __I uint32_t HSRAMDSU_:1;               /**< bit:      2  HSRAMDSU                                 */
    __I uint32_t HPB1_:1;                   /**< bit:      3  HPB1                                     */
    __I uint32_t H2LBRIDGES_:1;             /**< bit:      4  H2LBRIDGES                               */
    __I uint32_t :11;                       /**< bit:  5..15  Reserved */
    __I uint32_t HPB0_:1;                   /**< bit:     16  HPB0                                     */
    __I uint32_t HPB2_:1;                   /**< bit:     17  HPB2                                     */
    __I uint32_t HPB3_:1;                   /**< bit:     18  HPB3                                     */
    __I uint32_t HPB4_:1;                   /**< bit:     19  HPB4                                     */
    __I uint32_t :1;                        /**< bit:     20  Reserved */
    __I uint32_t LPRAMHS_:1;                /**< bit:     21  LPRAMHS                                  */
    __I uint32_t LPRAMPICOP_:1;             /**< bit:     22  LPRAMPICOP                               */
    __I uint32_t LPRAMDMAC_:1;              /**< bit:     23  LPRAMDMAC                                */
    __I uint32_t L2HBRIDGES_:1;             /**< bit:     24  L2HBRIDGES                               */
    __I uint32_t HSRAMLP_:1;                /**< bit:     25  HSRAMLP                                  */
    __I uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGAHB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGAHB_OFFSET               (0x10)                                        /**<  (PAC_INTFLAGAHB) Bridge interrupt flag status  Offset */
#define PAC_INTFLAGAHB_RESETVALUE           _U_(0x00)                                     /**<  (PAC_INTFLAGAHB) Bridge interrupt flag status  Reset Value */

#define PAC_INTFLAGAHB_FLASH_Pos            0                                              /**< (PAC_INTFLAGAHB) FLASH Position */
#define PAC_INTFLAGAHB_FLASH_Msk            (_U_(0x1) << PAC_INTFLAGAHB_FLASH_Pos)         /**< (PAC_INTFLAGAHB) FLASH Mask */
#define PAC_INTFLAGAHB_FLASH                PAC_INTFLAGAHB_FLASH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_FLASH_Msk instead */
#define PAC_INTFLAGAHB_HSRAMCM0P_Pos        1                                              /**< (PAC_INTFLAGAHB) HSRAMCM0P Position */
#define PAC_INTFLAGAHB_HSRAMCM0P_Msk        (_U_(0x1) << PAC_INTFLAGAHB_HSRAMCM0P_Pos)     /**< (PAC_INTFLAGAHB) HSRAMCM0P Mask */
#define PAC_INTFLAGAHB_HSRAMCM0P            PAC_INTFLAGAHB_HSRAMCM0P_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HSRAMCM0P_Msk instead */
#define PAC_INTFLAGAHB_HSRAMDSU_Pos         2                                              /**< (PAC_INTFLAGAHB) HSRAMDSU Position */
#define PAC_INTFLAGAHB_HSRAMDSU_Msk         (_U_(0x1) << PAC_INTFLAGAHB_HSRAMDSU_Pos)      /**< (PAC_INTFLAGAHB) HSRAMDSU Mask */
#define PAC_INTFLAGAHB_HSRAMDSU             PAC_INTFLAGAHB_HSRAMDSU_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HSRAMDSU_Msk instead */
#define PAC_INTFLAGAHB_HPB1_Pos             3                                              /**< (PAC_INTFLAGAHB) HPB1 Position */
#define PAC_INTFLAGAHB_HPB1_Msk             (_U_(0x1) << PAC_INTFLAGAHB_HPB1_Pos)          /**< (PAC_INTFLAGAHB) HPB1 Mask */
#define PAC_INTFLAGAHB_HPB1                 PAC_INTFLAGAHB_HPB1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HPB1_Msk instead */
#define PAC_INTFLAGAHB_H2LBRIDGES_Pos       4                                              /**< (PAC_INTFLAGAHB) H2LBRIDGES Position */
#define PAC_INTFLAGAHB_H2LBRIDGES_Msk       (_U_(0x1) << PAC_INTFLAGAHB_H2LBRIDGES_Pos)    /**< (PAC_INTFLAGAHB) H2LBRIDGES Mask */
#define PAC_INTFLAGAHB_H2LBRIDGES           PAC_INTFLAGAHB_H2LBRIDGES_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_H2LBRIDGES_Msk instead */
#define PAC_INTFLAGAHB_HPB0_Pos             16                                             /**< (PAC_INTFLAGAHB) HPB0 Position */
#define PAC_INTFLAGAHB_HPB0_Msk             (_U_(0x1) << PAC_INTFLAGAHB_HPB0_Pos)          /**< (PAC_INTFLAGAHB) HPB0 Mask */
#define PAC_INTFLAGAHB_HPB0                 PAC_INTFLAGAHB_HPB0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HPB0_Msk instead */
#define PAC_INTFLAGAHB_HPB2_Pos             17                                             /**< (PAC_INTFLAGAHB) HPB2 Position */
#define PAC_INTFLAGAHB_HPB2_Msk             (_U_(0x1) << PAC_INTFLAGAHB_HPB2_Pos)          /**< (PAC_INTFLAGAHB) HPB2 Mask */
#define PAC_INTFLAGAHB_HPB2                 PAC_INTFLAGAHB_HPB2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HPB2_Msk instead */
#define PAC_INTFLAGAHB_HPB3_Pos             18                                             /**< (PAC_INTFLAGAHB) HPB3 Position */
#define PAC_INTFLAGAHB_HPB3_Msk             (_U_(0x1) << PAC_INTFLAGAHB_HPB3_Pos)          /**< (PAC_INTFLAGAHB) HPB3 Mask */
#define PAC_INTFLAGAHB_HPB3                 PAC_INTFLAGAHB_HPB3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HPB3_Msk instead */
#define PAC_INTFLAGAHB_HPB4_Pos             19                                             /**< (PAC_INTFLAGAHB) HPB4 Position */
#define PAC_INTFLAGAHB_HPB4_Msk             (_U_(0x1) << PAC_INTFLAGAHB_HPB4_Pos)          /**< (PAC_INTFLAGAHB) HPB4 Mask */
#define PAC_INTFLAGAHB_HPB4                 PAC_INTFLAGAHB_HPB4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HPB4_Msk instead */
#define PAC_INTFLAGAHB_LPRAMHS_Pos          21                                             /**< (PAC_INTFLAGAHB) LPRAMHS Position */
#define PAC_INTFLAGAHB_LPRAMHS_Msk          (_U_(0x1) << PAC_INTFLAGAHB_LPRAMHS_Pos)       /**< (PAC_INTFLAGAHB) LPRAMHS Mask */
#define PAC_INTFLAGAHB_LPRAMHS              PAC_INTFLAGAHB_LPRAMHS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_LPRAMHS_Msk instead */
#define PAC_INTFLAGAHB_LPRAMPICOP_Pos       22                                             /**< (PAC_INTFLAGAHB) LPRAMPICOP Position */
#define PAC_INTFLAGAHB_LPRAMPICOP_Msk       (_U_(0x1) << PAC_INTFLAGAHB_LPRAMPICOP_Pos)    /**< (PAC_INTFLAGAHB) LPRAMPICOP Mask */
#define PAC_INTFLAGAHB_LPRAMPICOP           PAC_INTFLAGAHB_LPRAMPICOP_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_LPRAMPICOP_Msk instead */
#define PAC_INTFLAGAHB_LPRAMDMAC_Pos        23                                             /**< (PAC_INTFLAGAHB) LPRAMDMAC Position */
#define PAC_INTFLAGAHB_LPRAMDMAC_Msk        (_U_(0x1) << PAC_INTFLAGAHB_LPRAMDMAC_Pos)     /**< (PAC_INTFLAGAHB) LPRAMDMAC Mask */
#define PAC_INTFLAGAHB_LPRAMDMAC            PAC_INTFLAGAHB_LPRAMDMAC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_LPRAMDMAC_Msk instead */
#define PAC_INTFLAGAHB_L2HBRIDGES_Pos       24                                             /**< (PAC_INTFLAGAHB) L2HBRIDGES Position */
#define PAC_INTFLAGAHB_L2HBRIDGES_Msk       (_U_(0x1) << PAC_INTFLAGAHB_L2HBRIDGES_Pos)    /**< (PAC_INTFLAGAHB) L2HBRIDGES Mask */
#define PAC_INTFLAGAHB_L2HBRIDGES           PAC_INTFLAGAHB_L2HBRIDGES_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_L2HBRIDGES_Msk instead */
#define PAC_INTFLAGAHB_HSRAMLP_Pos          25                                             /**< (PAC_INTFLAGAHB) HSRAMLP Position */
#define PAC_INTFLAGAHB_HSRAMLP_Msk          (_U_(0x1) << PAC_INTFLAGAHB_HSRAMLP_Pos)       /**< (PAC_INTFLAGAHB) HSRAMLP Mask */
#define PAC_INTFLAGAHB_HSRAMLP              PAC_INTFLAGAHB_HSRAMLP_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGAHB_HSRAMLP_Msk instead */
#define PAC_INTFLAGAHB_MASK                 _U_(0x3EF001F)                                 /**< \deprecated (PAC_INTFLAGAHB) Register MASK  (Use PAC_INTFLAGAHB_Msk instead)  */
#define PAC_INTFLAGAHB_Msk                  _U_(0x3EF001F)                                 /**< (PAC_INTFLAGAHB) Register Mask  */


/* -------- PAC_INTFLAGA : (PAC Offset: 0x14) (R/W 32) Peripheral interrupt flag status - Bridge A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t PM_:1;                     /**< bit:      0  PM                                       */
    __I uint32_t MCLK_:1;                   /**< bit:      1  MCLK                                     */
    __I uint32_t RSTC_:1;                   /**< bit:      2  RSTC                                     */
    __I uint32_t OSCCTRL_:1;                /**< bit:      3  OSCCTRL                                  */
    __I uint32_t OSC32KCTRL_:1;             /**< bit:      4  OSC32KCTRL                               */
    __I uint32_t SUPC_:1;                   /**< bit:      5  SUPC                                     */
    __I uint32_t GCLK_:1;                   /**< bit:      6  GCLK                                     */
    __I uint32_t WDT_:1;                    /**< bit:      7  WDT                                      */
    __I uint32_t RTC_:1;                    /**< bit:      8  RTC                                      */
    __I uint32_t EIC_:1;                    /**< bit:      9  EIC                                      */
    __I uint32_t PORT_:1;                   /**< bit:     10  PORT                                     */
    __I uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGA_OFFSET                 (0x14)                                        /**<  (PAC_INTFLAGA) Peripheral interrupt flag status - Bridge A  Offset */
#define PAC_INTFLAGA_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTFLAGA) Peripheral interrupt flag status - Bridge A  Reset Value */

#define PAC_INTFLAGA_PM_Pos                 0                                              /**< (PAC_INTFLAGA) PM Position */
#define PAC_INTFLAGA_PM_Msk                 (_U_(0x1) << PAC_INTFLAGA_PM_Pos)              /**< (PAC_INTFLAGA) PM Mask */
#define PAC_INTFLAGA_PM                     PAC_INTFLAGA_PM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_PM_Msk instead */
#define PAC_INTFLAGA_MCLK_Pos               1                                              /**< (PAC_INTFLAGA) MCLK Position */
#define PAC_INTFLAGA_MCLK_Msk               (_U_(0x1) << PAC_INTFLAGA_MCLK_Pos)            /**< (PAC_INTFLAGA) MCLK Mask */
#define PAC_INTFLAGA_MCLK                   PAC_INTFLAGA_MCLK_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_MCLK_Msk instead */
#define PAC_INTFLAGA_RSTC_Pos               2                                              /**< (PAC_INTFLAGA) RSTC Position */
#define PAC_INTFLAGA_RSTC_Msk               (_U_(0x1) << PAC_INTFLAGA_RSTC_Pos)            /**< (PAC_INTFLAGA) RSTC Mask */
#define PAC_INTFLAGA_RSTC                   PAC_INTFLAGA_RSTC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_RSTC_Msk instead */
#define PAC_INTFLAGA_OSCCTRL_Pos            3                                              /**< (PAC_INTFLAGA) OSCCTRL Position */
#define PAC_INTFLAGA_OSCCTRL_Msk            (_U_(0x1) << PAC_INTFLAGA_OSCCTRL_Pos)         /**< (PAC_INTFLAGA) OSCCTRL Mask */
#define PAC_INTFLAGA_OSCCTRL                PAC_INTFLAGA_OSCCTRL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_OSCCTRL_Msk instead */
#define PAC_INTFLAGA_OSC32KCTRL_Pos         4                                              /**< (PAC_INTFLAGA) OSC32KCTRL Position */
#define PAC_INTFLAGA_OSC32KCTRL_Msk         (_U_(0x1) << PAC_INTFLAGA_OSC32KCTRL_Pos)      /**< (PAC_INTFLAGA) OSC32KCTRL Mask */
#define PAC_INTFLAGA_OSC32KCTRL             PAC_INTFLAGA_OSC32KCTRL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_OSC32KCTRL_Msk instead */
#define PAC_INTFLAGA_SUPC_Pos               5                                              /**< (PAC_INTFLAGA) SUPC Position */
#define PAC_INTFLAGA_SUPC_Msk               (_U_(0x1) << PAC_INTFLAGA_SUPC_Pos)            /**< (PAC_INTFLAGA) SUPC Mask */
#define PAC_INTFLAGA_SUPC                   PAC_INTFLAGA_SUPC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_SUPC_Msk instead */
#define PAC_INTFLAGA_GCLK_Pos               6                                              /**< (PAC_INTFLAGA) GCLK Position */
#define PAC_INTFLAGA_GCLK_Msk               (_U_(0x1) << PAC_INTFLAGA_GCLK_Pos)            /**< (PAC_INTFLAGA) GCLK Mask */
#define PAC_INTFLAGA_GCLK                   PAC_INTFLAGA_GCLK_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_GCLK_Msk instead */
#define PAC_INTFLAGA_WDT_Pos                7                                              /**< (PAC_INTFLAGA) WDT Position */
#define PAC_INTFLAGA_WDT_Msk                (_U_(0x1) << PAC_INTFLAGA_WDT_Pos)             /**< (PAC_INTFLAGA) WDT Mask */
#define PAC_INTFLAGA_WDT                    PAC_INTFLAGA_WDT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_WDT_Msk instead */
#define PAC_INTFLAGA_RTC_Pos                8                                              /**< (PAC_INTFLAGA) RTC Position */
#define PAC_INTFLAGA_RTC_Msk                (_U_(0x1) << PAC_INTFLAGA_RTC_Pos)             /**< (PAC_INTFLAGA) RTC Mask */
#define PAC_INTFLAGA_RTC                    PAC_INTFLAGA_RTC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_RTC_Msk instead */
#define PAC_INTFLAGA_EIC_Pos                9                                              /**< (PAC_INTFLAGA) EIC Position */
#define PAC_INTFLAGA_EIC_Msk                (_U_(0x1) << PAC_INTFLAGA_EIC_Pos)             /**< (PAC_INTFLAGA) EIC Mask */
#define PAC_INTFLAGA_EIC                    PAC_INTFLAGA_EIC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_EIC_Msk instead */
#define PAC_INTFLAGA_PORT_Pos               10                                             /**< (PAC_INTFLAGA) PORT Position */
#define PAC_INTFLAGA_PORT_Msk               (_U_(0x1) << PAC_INTFLAGA_PORT_Pos)            /**< (PAC_INTFLAGA) PORT Mask */
#define PAC_INTFLAGA_PORT                   PAC_INTFLAGA_PORT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGA_PORT_Msk instead */
#define PAC_INTFLAGA_MASK                   _U_(0x7FF)                                     /**< \deprecated (PAC_INTFLAGA) Register MASK  (Use PAC_INTFLAGA_Msk instead)  */
#define PAC_INTFLAGA_Msk                    _U_(0x7FF)                                     /**< (PAC_INTFLAGA) Register Mask  */


/* -------- PAC_INTFLAGB : (PAC Offset: 0x18) (R/W 32) Peripheral interrupt flag status - Bridge B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t USB_:1;                    /**< bit:      0  USB                                      */
    __I uint32_t DSU_:1;                    /**< bit:      1  DSU                                      */
    __I uint32_t NVMCTRL_:1;                /**< bit:      2  NVMCTRL                                  */
    __I uint32_t MTB_:1;                    /**< bit:      3  MTB                                      */
    __I uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGB_OFFSET                 (0x18)                                        /**<  (PAC_INTFLAGB) Peripheral interrupt flag status - Bridge B  Offset */
#define PAC_INTFLAGB_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTFLAGB) Peripheral interrupt flag status - Bridge B  Reset Value */

#define PAC_INTFLAGB_USB_Pos                0                                              /**< (PAC_INTFLAGB) USB Position */
#define PAC_INTFLAGB_USB_Msk                (_U_(0x1) << PAC_INTFLAGB_USB_Pos)             /**< (PAC_INTFLAGB) USB Mask */
#define PAC_INTFLAGB_USB                    PAC_INTFLAGB_USB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGB_USB_Msk instead */
#define PAC_INTFLAGB_DSU_Pos                1                                              /**< (PAC_INTFLAGB) DSU Position */
#define PAC_INTFLAGB_DSU_Msk                (_U_(0x1) << PAC_INTFLAGB_DSU_Pos)             /**< (PAC_INTFLAGB) DSU Mask */
#define PAC_INTFLAGB_DSU                    PAC_INTFLAGB_DSU_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGB_DSU_Msk instead */
#define PAC_INTFLAGB_NVMCTRL_Pos            2                                              /**< (PAC_INTFLAGB) NVMCTRL Position */
#define PAC_INTFLAGB_NVMCTRL_Msk            (_U_(0x1) << PAC_INTFLAGB_NVMCTRL_Pos)         /**< (PAC_INTFLAGB) NVMCTRL Mask */
#define PAC_INTFLAGB_NVMCTRL                PAC_INTFLAGB_NVMCTRL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGB_NVMCTRL_Msk instead */
#define PAC_INTFLAGB_MTB_Pos                3                                              /**< (PAC_INTFLAGB) MTB Position */
#define PAC_INTFLAGB_MTB_Msk                (_U_(0x1) << PAC_INTFLAGB_MTB_Pos)             /**< (PAC_INTFLAGB) MTB Mask */
#define PAC_INTFLAGB_MTB                    PAC_INTFLAGB_MTB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGB_MTB_Msk instead */
#define PAC_INTFLAGB_MASK                   _U_(0x0F)                                      /**< \deprecated (PAC_INTFLAGB) Register MASK  (Use PAC_INTFLAGB_Msk instead)  */
#define PAC_INTFLAGB_Msk                    _U_(0x0F)                                      /**< (PAC_INTFLAGB) Register Mask  */


/* -------- PAC_INTFLAGC : (PAC Offset: 0x1c) (R/W 32) Peripheral interrupt flag status - Bridge C -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t SERCOM0_:1;                /**< bit:      0  SERCOM0                                  */
    __I uint32_t SERCOM1_:1;                /**< bit:      1  SERCOM1                                  */
    __I uint32_t SERCOM2_:1;                /**< bit:      2  SERCOM2                                  */
    __I uint32_t SERCOM3_:1;                /**< bit:      3  SERCOM3                                  */
    __I uint32_t SERCOM4_:1;                /**< bit:      4  SERCOM4                                  */
    __I uint32_t TCC0_:1;                   /**< bit:      5  TCC0                                     */
    __I uint32_t TCC1_:1;                   /**< bit:      6  TCC1                                     */
    __I uint32_t TCC2_:1;                   /**< bit:      7  TCC2                                     */
    __I uint32_t TC0_:1;                    /**< bit:      8  TC0                                      */
    __I uint32_t TC1_:1;                    /**< bit:      9  TC1                                      */
    __I uint32_t TC2_:1;                    /**< bit:     10  TC2                                      */
    __I uint32_t TC3_:1;                    /**< bit:     11  TC3                                      */
    __I uint32_t DAC_:1;                    /**< bit:     12  DAC                                      */
    __I uint32_t AES_:1;                    /**< bit:     13  AES                                      */
    __I uint32_t TRNG_:1;                   /**< bit:     14  TRNG                                     */
    __I uint32_t :17;                       /**< bit: 15..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGC_OFFSET                 (0x1C)                                        /**<  (PAC_INTFLAGC) Peripheral interrupt flag status - Bridge C  Offset */
#define PAC_INTFLAGC_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTFLAGC) Peripheral interrupt flag status - Bridge C  Reset Value */

#define PAC_INTFLAGC_SERCOM0_Pos            0                                              /**< (PAC_INTFLAGC) SERCOM0 Position */
#define PAC_INTFLAGC_SERCOM0_Msk            (_U_(0x1) << PAC_INTFLAGC_SERCOM0_Pos)         /**< (PAC_INTFLAGC) SERCOM0 Mask */
#define PAC_INTFLAGC_SERCOM0                PAC_INTFLAGC_SERCOM0_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_SERCOM0_Msk instead */
#define PAC_INTFLAGC_SERCOM1_Pos            1                                              /**< (PAC_INTFLAGC) SERCOM1 Position */
#define PAC_INTFLAGC_SERCOM1_Msk            (_U_(0x1) << PAC_INTFLAGC_SERCOM1_Pos)         /**< (PAC_INTFLAGC) SERCOM1 Mask */
#define PAC_INTFLAGC_SERCOM1                PAC_INTFLAGC_SERCOM1_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_SERCOM1_Msk instead */
#define PAC_INTFLAGC_SERCOM2_Pos            2                                              /**< (PAC_INTFLAGC) SERCOM2 Position */
#define PAC_INTFLAGC_SERCOM2_Msk            (_U_(0x1) << PAC_INTFLAGC_SERCOM2_Pos)         /**< (PAC_INTFLAGC) SERCOM2 Mask */
#define PAC_INTFLAGC_SERCOM2                PAC_INTFLAGC_SERCOM2_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_SERCOM2_Msk instead */
#define PAC_INTFLAGC_SERCOM3_Pos            3                                              /**< (PAC_INTFLAGC) SERCOM3 Position */
#define PAC_INTFLAGC_SERCOM3_Msk            (_U_(0x1) << PAC_INTFLAGC_SERCOM3_Pos)         /**< (PAC_INTFLAGC) SERCOM3 Mask */
#define PAC_INTFLAGC_SERCOM3                PAC_INTFLAGC_SERCOM3_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_SERCOM3_Msk instead */
#define PAC_INTFLAGC_SERCOM4_Pos            4                                              /**< (PAC_INTFLAGC) SERCOM4 Position */
#define PAC_INTFLAGC_SERCOM4_Msk            (_U_(0x1) << PAC_INTFLAGC_SERCOM4_Pos)         /**< (PAC_INTFLAGC) SERCOM4 Mask */
#define PAC_INTFLAGC_SERCOM4                PAC_INTFLAGC_SERCOM4_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_SERCOM4_Msk instead */
#define PAC_INTFLAGC_TCC0_Pos               5                                              /**< (PAC_INTFLAGC) TCC0 Position */
#define PAC_INTFLAGC_TCC0_Msk               (_U_(0x1) << PAC_INTFLAGC_TCC0_Pos)            /**< (PAC_INTFLAGC) TCC0 Mask */
#define PAC_INTFLAGC_TCC0                   PAC_INTFLAGC_TCC0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TCC0_Msk instead */
#define PAC_INTFLAGC_TCC1_Pos               6                                              /**< (PAC_INTFLAGC) TCC1 Position */
#define PAC_INTFLAGC_TCC1_Msk               (_U_(0x1) << PAC_INTFLAGC_TCC1_Pos)            /**< (PAC_INTFLAGC) TCC1 Mask */
#define PAC_INTFLAGC_TCC1                   PAC_INTFLAGC_TCC1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TCC1_Msk instead */
#define PAC_INTFLAGC_TCC2_Pos               7                                              /**< (PAC_INTFLAGC) TCC2 Position */
#define PAC_INTFLAGC_TCC2_Msk               (_U_(0x1) << PAC_INTFLAGC_TCC2_Pos)            /**< (PAC_INTFLAGC) TCC2 Mask */
#define PAC_INTFLAGC_TCC2                   PAC_INTFLAGC_TCC2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TCC2_Msk instead */
#define PAC_INTFLAGC_TC0_Pos                8                                              /**< (PAC_INTFLAGC) TC0 Position */
#define PAC_INTFLAGC_TC0_Msk                (_U_(0x1) << PAC_INTFLAGC_TC0_Pos)             /**< (PAC_INTFLAGC) TC0 Mask */
#define PAC_INTFLAGC_TC0                    PAC_INTFLAGC_TC0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TC0_Msk instead */
#define PAC_INTFLAGC_TC1_Pos                9                                              /**< (PAC_INTFLAGC) TC1 Position */
#define PAC_INTFLAGC_TC1_Msk                (_U_(0x1) << PAC_INTFLAGC_TC1_Pos)             /**< (PAC_INTFLAGC) TC1 Mask */
#define PAC_INTFLAGC_TC1                    PAC_INTFLAGC_TC1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TC1_Msk instead */
#define PAC_INTFLAGC_TC2_Pos                10                                             /**< (PAC_INTFLAGC) TC2 Position */
#define PAC_INTFLAGC_TC2_Msk                (_U_(0x1) << PAC_INTFLAGC_TC2_Pos)             /**< (PAC_INTFLAGC) TC2 Mask */
#define PAC_INTFLAGC_TC2                    PAC_INTFLAGC_TC2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TC2_Msk instead */
#define PAC_INTFLAGC_TC3_Pos                11                                             /**< (PAC_INTFLAGC) TC3 Position */
#define PAC_INTFLAGC_TC3_Msk                (_U_(0x1) << PAC_INTFLAGC_TC3_Pos)             /**< (PAC_INTFLAGC) TC3 Mask */
#define PAC_INTFLAGC_TC3                    PAC_INTFLAGC_TC3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TC3_Msk instead */
#define PAC_INTFLAGC_DAC_Pos                12                                             /**< (PAC_INTFLAGC) DAC Position */
#define PAC_INTFLAGC_DAC_Msk                (_U_(0x1) << PAC_INTFLAGC_DAC_Pos)             /**< (PAC_INTFLAGC) DAC Mask */
#define PAC_INTFLAGC_DAC                    PAC_INTFLAGC_DAC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_DAC_Msk instead */
#define PAC_INTFLAGC_AES_Pos                13                                             /**< (PAC_INTFLAGC) AES Position */
#define PAC_INTFLAGC_AES_Msk                (_U_(0x1) << PAC_INTFLAGC_AES_Pos)             /**< (PAC_INTFLAGC) AES Mask */
#define PAC_INTFLAGC_AES                    PAC_INTFLAGC_AES_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_AES_Msk instead */
#define PAC_INTFLAGC_TRNG_Pos               14                                             /**< (PAC_INTFLAGC) TRNG Position */
#define PAC_INTFLAGC_TRNG_Msk               (_U_(0x1) << PAC_INTFLAGC_TRNG_Pos)            /**< (PAC_INTFLAGC) TRNG Mask */
#define PAC_INTFLAGC_TRNG                   PAC_INTFLAGC_TRNG_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGC_TRNG_Msk instead */
#define PAC_INTFLAGC_MASK                   _U_(0x7FFF)                                    /**< \deprecated (PAC_INTFLAGC) Register MASK  (Use PAC_INTFLAGC_Msk instead)  */
#define PAC_INTFLAGC_Msk                    _U_(0x7FFF)                                    /**< (PAC_INTFLAGC) Register Mask  */

#define PAC_INTFLAGC_SERCOM_Pos             0                                              /**< (PAC_INTFLAGC Position) SERCOMx */
#define PAC_INTFLAGC_SERCOM_Msk             (_U_(0x1F) << PAC_INTFLAGC_SERCOM_Pos)         /**< (PAC_INTFLAGC Mask) SERCOM */
#define PAC_INTFLAGC_SERCOM(value)          (PAC_INTFLAGC_SERCOM_Msk & ((value) << PAC_INTFLAGC_SERCOM_Pos))  
#define PAC_INTFLAGC_TCC_Pos                5                                              /**< (PAC_INTFLAGC Position) TCCx */
#define PAC_INTFLAGC_TCC_Msk                (_U_(0x7) << PAC_INTFLAGC_TCC_Pos)             /**< (PAC_INTFLAGC Mask) TCC */
#define PAC_INTFLAGC_TCC(value)             (PAC_INTFLAGC_TCC_Msk & ((value) << PAC_INTFLAGC_TCC_Pos))  
#define PAC_INTFLAGC_TC_Pos                 8                                              /**< (PAC_INTFLAGC Position) TCx */
#define PAC_INTFLAGC_TC_Msk                 (_U_(0xF) << PAC_INTFLAGC_TC_Pos)              /**< (PAC_INTFLAGC Mask) TC */
#define PAC_INTFLAGC_TC(value)              (PAC_INTFLAGC_TC_Msk & ((value) << PAC_INTFLAGC_TC_Pos))  

/* -------- PAC_INTFLAGD : (PAC Offset: 0x20) (R/W 32) Peripheral interrupt flag status - Bridge D -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t EVSYS_:1;                  /**< bit:      0  EVSYS                                    */
    __I uint32_t SERCOM5_:1;                /**< bit:      1  SERCOM5                                  */
    __I uint32_t TC4_:1;                    /**< bit:      2  TC4                                      */
    __I uint32_t ADC_:1;                    /**< bit:      3  ADC                                      */
    __I uint32_t AC_:1;                     /**< bit:      4  AC                                       */
    __I uint32_t PTC_:1;                    /**< bit:      5  PTC                                      */
    __I uint32_t OPAMP_:1;                  /**< bit:      6  OPAMP                                    */
    __I uint32_t CCL_:1;                    /**< bit:      7  CCL                                      */
    __I uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGD_OFFSET                 (0x20)                                        /**<  (PAC_INTFLAGD) Peripheral interrupt flag status - Bridge D  Offset */
#define PAC_INTFLAGD_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTFLAGD) Peripheral interrupt flag status - Bridge D  Reset Value */

#define PAC_INTFLAGD_EVSYS_Pos              0                                              /**< (PAC_INTFLAGD) EVSYS Position */
#define PAC_INTFLAGD_EVSYS_Msk              (_U_(0x1) << PAC_INTFLAGD_EVSYS_Pos)           /**< (PAC_INTFLAGD) EVSYS Mask */
#define PAC_INTFLAGD_EVSYS                  PAC_INTFLAGD_EVSYS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_EVSYS_Msk instead */
#define PAC_INTFLAGD_SERCOM5_Pos            1                                              /**< (PAC_INTFLAGD) SERCOM5 Position */
#define PAC_INTFLAGD_SERCOM5_Msk            (_U_(0x1) << PAC_INTFLAGD_SERCOM5_Pos)         /**< (PAC_INTFLAGD) SERCOM5 Mask */
#define PAC_INTFLAGD_SERCOM5                PAC_INTFLAGD_SERCOM5_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_SERCOM5_Msk instead */
#define PAC_INTFLAGD_TC4_Pos                2                                              /**< (PAC_INTFLAGD) TC4 Position */
#define PAC_INTFLAGD_TC4_Msk                (_U_(0x1) << PAC_INTFLAGD_TC4_Pos)             /**< (PAC_INTFLAGD) TC4 Mask */
#define PAC_INTFLAGD_TC4                    PAC_INTFLAGD_TC4_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_TC4_Msk instead */
#define PAC_INTFLAGD_ADC_Pos                3                                              /**< (PAC_INTFLAGD) ADC Position */
#define PAC_INTFLAGD_ADC_Msk                (_U_(0x1) << PAC_INTFLAGD_ADC_Pos)             /**< (PAC_INTFLAGD) ADC Mask */
#define PAC_INTFLAGD_ADC                    PAC_INTFLAGD_ADC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_ADC_Msk instead */
#define PAC_INTFLAGD_AC_Pos                 4                                              /**< (PAC_INTFLAGD) AC Position */
#define PAC_INTFLAGD_AC_Msk                 (_U_(0x1) << PAC_INTFLAGD_AC_Pos)              /**< (PAC_INTFLAGD) AC Mask */
#define PAC_INTFLAGD_AC                     PAC_INTFLAGD_AC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_AC_Msk instead */
#define PAC_INTFLAGD_PTC_Pos                5                                              /**< (PAC_INTFLAGD) PTC Position */
#define PAC_INTFLAGD_PTC_Msk                (_U_(0x1) << PAC_INTFLAGD_PTC_Pos)             /**< (PAC_INTFLAGD) PTC Mask */
#define PAC_INTFLAGD_PTC                    PAC_INTFLAGD_PTC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_PTC_Msk instead */
#define PAC_INTFLAGD_OPAMP_Pos              6                                              /**< (PAC_INTFLAGD) OPAMP Position */
#define PAC_INTFLAGD_OPAMP_Msk              (_U_(0x1) << PAC_INTFLAGD_OPAMP_Pos)           /**< (PAC_INTFLAGD) OPAMP Mask */
#define PAC_INTFLAGD_OPAMP                  PAC_INTFLAGD_OPAMP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_OPAMP_Msk instead */
#define PAC_INTFLAGD_CCL_Pos                7                                              /**< (PAC_INTFLAGD) CCL Position */
#define PAC_INTFLAGD_CCL_Msk                (_U_(0x1) << PAC_INTFLAGD_CCL_Pos)             /**< (PAC_INTFLAGD) CCL Mask */
#define PAC_INTFLAGD_CCL                    PAC_INTFLAGD_CCL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGD_CCL_Msk instead */
#define PAC_INTFLAGD_MASK                   _U_(0xFF)                                      /**< \deprecated (PAC_INTFLAGD) Register MASK  (Use PAC_INTFLAGD_Msk instead)  */
#define PAC_INTFLAGD_Msk                    _U_(0xFF)                                      /**< (PAC_INTFLAGD) Register Mask  */

#define PAC_INTFLAGD_SERCOM_Pos             1                                              /**< (PAC_INTFLAGD Position) SERCOM5 */
#define PAC_INTFLAGD_SERCOM_Msk             (_U_(0x1) << PAC_INTFLAGD_SERCOM_Pos)          /**< (PAC_INTFLAGD Mask) SERCOM */
#define PAC_INTFLAGD_SERCOM(value)          (PAC_INTFLAGD_SERCOM_Msk & ((value) << PAC_INTFLAGD_SERCOM_Pos))  
#define PAC_INTFLAGD_TC_Pos                 2                                              /**< (PAC_INTFLAGD Position) TC4 */
#define PAC_INTFLAGD_TC_Msk                 (_U_(0x1) << PAC_INTFLAGD_TC_Pos)              /**< (PAC_INTFLAGD Mask) TC */
#define PAC_INTFLAGD_TC(value)              (PAC_INTFLAGD_TC_Msk & ((value) << PAC_INTFLAGD_TC_Pos))  

/* -------- PAC_INTFLAGE : (PAC Offset: 0x24) (R/W 32) Peripheral interrupt flag status - Bridge E -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t PAC_:1;                    /**< bit:      0  PAC                                      */
    __I uint32_t DMAC_:1;                   /**< bit:      1  DMAC                                     */
    __I uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_INTFLAGE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGE_OFFSET                 (0x24)                                        /**<  (PAC_INTFLAGE) Peripheral interrupt flag status - Bridge E  Offset */
#define PAC_INTFLAGE_RESETVALUE             _U_(0x00)                                     /**<  (PAC_INTFLAGE) Peripheral interrupt flag status - Bridge E  Reset Value */

#define PAC_INTFLAGE_PAC_Pos                0                                              /**< (PAC_INTFLAGE) PAC Position */
#define PAC_INTFLAGE_PAC_Msk                (_U_(0x1) << PAC_INTFLAGE_PAC_Pos)             /**< (PAC_INTFLAGE) PAC Mask */
#define PAC_INTFLAGE_PAC                    PAC_INTFLAGE_PAC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGE_PAC_Msk instead */
#define PAC_INTFLAGE_DMAC_Pos               1                                              /**< (PAC_INTFLAGE) DMAC Position */
#define PAC_INTFLAGE_DMAC_Msk               (_U_(0x1) << PAC_INTFLAGE_DMAC_Pos)            /**< (PAC_INTFLAGE) DMAC Mask */
#define PAC_INTFLAGE_DMAC                   PAC_INTFLAGE_DMAC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_INTFLAGE_DMAC_Msk instead */
#define PAC_INTFLAGE_MASK                   _U_(0x03)                                      /**< \deprecated (PAC_INTFLAGE) Register MASK  (Use PAC_INTFLAGE_Msk instead)  */
#define PAC_INTFLAGE_Msk                    _U_(0x03)                                      /**< (PAC_INTFLAGE) Register Mask  */


/* -------- PAC_STATUSA : (PAC Offset: 0x34) (R/ 32) Peripheral write protection status - Bridge A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PM_:1;                     /**< bit:      0  PM APB Protect Enable                    */
    uint32_t MCLK_:1;                   /**< bit:      1  MCLK APB Protect Enable                  */
    uint32_t RSTC_:1;                   /**< bit:      2  RSTC APB Protect Enable                  */
    uint32_t OSCCTRL_:1;                /**< bit:      3  OSCCTRL APB Protect Enable               */
    uint32_t OSC32KCTRL_:1;             /**< bit:      4  OSC32KCTRL APB Protect Enable            */
    uint32_t SUPC_:1;                   /**< bit:      5  SUPC APB Protect Enable                  */
    uint32_t GCLK_:1;                   /**< bit:      6  GCLK APB Protect Enable                  */
    uint32_t WDT_:1;                    /**< bit:      7  WDT APB Protect Enable                   */
    uint32_t RTC_:1;                    /**< bit:      8  RTC APB Protect Enable                   */
    uint32_t EIC_:1;                    /**< bit:      9  EIC APB Protect Enable                   */
    uint32_t PORT_:1;                   /**< bit:     10  PORT APB Protect Enable                  */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_STATUSA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSA_OFFSET                  (0x34)                                        /**<  (PAC_STATUSA) Peripheral write protection status - Bridge A  Offset */
#define PAC_STATUSA_RESETVALUE              _U_(0x3000)                                   /**<  (PAC_STATUSA) Peripheral write protection status - Bridge A  Reset Value */

#define PAC_STATUSA_PM_Pos                  0                                              /**< (PAC_STATUSA) PM APB Protect Enable Position */
#define PAC_STATUSA_PM_Msk                  (_U_(0x1) << PAC_STATUSA_PM_Pos)               /**< (PAC_STATUSA) PM APB Protect Enable Mask */
#define PAC_STATUSA_PM                      PAC_STATUSA_PM_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_PM_Msk instead */
#define PAC_STATUSA_MCLK_Pos                1                                              /**< (PAC_STATUSA) MCLK APB Protect Enable Position */
#define PAC_STATUSA_MCLK_Msk                (_U_(0x1) << PAC_STATUSA_MCLK_Pos)             /**< (PAC_STATUSA) MCLK APB Protect Enable Mask */
#define PAC_STATUSA_MCLK                    PAC_STATUSA_MCLK_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_MCLK_Msk instead */
#define PAC_STATUSA_RSTC_Pos                2                                              /**< (PAC_STATUSA) RSTC APB Protect Enable Position */
#define PAC_STATUSA_RSTC_Msk                (_U_(0x1) << PAC_STATUSA_RSTC_Pos)             /**< (PAC_STATUSA) RSTC APB Protect Enable Mask */
#define PAC_STATUSA_RSTC                    PAC_STATUSA_RSTC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_RSTC_Msk instead */
#define PAC_STATUSA_OSCCTRL_Pos             3                                              /**< (PAC_STATUSA) OSCCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSCCTRL_Msk             (_U_(0x1) << PAC_STATUSA_OSCCTRL_Pos)          /**< (PAC_STATUSA) OSCCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSCCTRL                 PAC_STATUSA_OSCCTRL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_OSCCTRL_Msk instead */
#define PAC_STATUSA_OSC32KCTRL_Pos          4                                              /**< (PAC_STATUSA) OSC32KCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSC32KCTRL_Msk          (_U_(0x1) << PAC_STATUSA_OSC32KCTRL_Pos)       /**< (PAC_STATUSA) OSC32KCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSC32KCTRL              PAC_STATUSA_OSC32KCTRL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_OSC32KCTRL_Msk instead */
#define PAC_STATUSA_SUPC_Pos                5                                              /**< (PAC_STATUSA) SUPC APB Protect Enable Position */
#define PAC_STATUSA_SUPC_Msk                (_U_(0x1) << PAC_STATUSA_SUPC_Pos)             /**< (PAC_STATUSA) SUPC APB Protect Enable Mask */
#define PAC_STATUSA_SUPC                    PAC_STATUSA_SUPC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_SUPC_Msk instead */
#define PAC_STATUSA_GCLK_Pos                6                                              /**< (PAC_STATUSA) GCLK APB Protect Enable Position */
#define PAC_STATUSA_GCLK_Msk                (_U_(0x1) << PAC_STATUSA_GCLK_Pos)             /**< (PAC_STATUSA) GCLK APB Protect Enable Mask */
#define PAC_STATUSA_GCLK                    PAC_STATUSA_GCLK_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_GCLK_Msk instead */
#define PAC_STATUSA_WDT_Pos                 7                                              /**< (PAC_STATUSA) WDT APB Protect Enable Position */
#define PAC_STATUSA_WDT_Msk                 (_U_(0x1) << PAC_STATUSA_WDT_Pos)              /**< (PAC_STATUSA) WDT APB Protect Enable Mask */
#define PAC_STATUSA_WDT                     PAC_STATUSA_WDT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_WDT_Msk instead */
#define PAC_STATUSA_RTC_Pos                 8                                              /**< (PAC_STATUSA) RTC APB Protect Enable Position */
#define PAC_STATUSA_RTC_Msk                 (_U_(0x1) << PAC_STATUSA_RTC_Pos)              /**< (PAC_STATUSA) RTC APB Protect Enable Mask */
#define PAC_STATUSA_RTC                     PAC_STATUSA_RTC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_RTC_Msk instead */
#define PAC_STATUSA_EIC_Pos                 9                                              /**< (PAC_STATUSA) EIC APB Protect Enable Position */
#define PAC_STATUSA_EIC_Msk                 (_U_(0x1) << PAC_STATUSA_EIC_Pos)              /**< (PAC_STATUSA) EIC APB Protect Enable Mask */
#define PAC_STATUSA_EIC                     PAC_STATUSA_EIC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_EIC_Msk instead */
#define PAC_STATUSA_PORT_Pos                10                                             /**< (PAC_STATUSA) PORT APB Protect Enable Position */
#define PAC_STATUSA_PORT_Msk                (_U_(0x1) << PAC_STATUSA_PORT_Pos)             /**< (PAC_STATUSA) PORT APB Protect Enable Mask */
#define PAC_STATUSA_PORT                    PAC_STATUSA_PORT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSA_PORT_Msk instead */
#define PAC_STATUSA_MASK                    _U_(0x7FF)                                     /**< \deprecated (PAC_STATUSA) Register MASK  (Use PAC_STATUSA_Msk instead)  */
#define PAC_STATUSA_Msk                     _U_(0x7FF)                                     /**< (PAC_STATUSA) Register Mask  */


/* -------- PAC_STATUSB : (PAC Offset: 0x38) (R/ 32) Peripheral write protection status - Bridge B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USB_:1;                    /**< bit:      0  USB APB Protect Enable                   */
    uint32_t DSU_:1;                    /**< bit:      1  DSU APB Protect Enable                   */
    uint32_t NVMCTRL_:1;                /**< bit:      2  NVMCTRL APB Protect Enable               */
    uint32_t MTB_:1;                    /**< bit:      3  MTB APB Protect Enable                   */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_STATUSB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSB_OFFSET                  (0x38)                                        /**<  (PAC_STATUSB) Peripheral write protection status - Bridge B  Offset */
#define PAC_STATUSB_RESETVALUE              _U_(0x02)                                     /**<  (PAC_STATUSB) Peripheral write protection status - Bridge B  Reset Value */

#define PAC_STATUSB_USB_Pos                 0                                              /**< (PAC_STATUSB) USB APB Protect Enable Position */
#define PAC_STATUSB_USB_Msk                 (_U_(0x1) << PAC_STATUSB_USB_Pos)              /**< (PAC_STATUSB) USB APB Protect Enable Mask */
#define PAC_STATUSB_USB                     PAC_STATUSB_USB_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSB_USB_Msk instead */
#define PAC_STATUSB_DSU_Pos                 1                                              /**< (PAC_STATUSB) DSU APB Protect Enable Position */
#define PAC_STATUSB_DSU_Msk                 (_U_(0x1) << PAC_STATUSB_DSU_Pos)              /**< (PAC_STATUSB) DSU APB Protect Enable Mask */
#define PAC_STATUSB_DSU                     PAC_STATUSB_DSU_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSB_DSU_Msk instead */
#define PAC_STATUSB_NVMCTRL_Pos             2                                              /**< (PAC_STATUSB) NVMCTRL APB Protect Enable Position */
#define PAC_STATUSB_NVMCTRL_Msk             (_U_(0x1) << PAC_STATUSB_NVMCTRL_Pos)          /**< (PAC_STATUSB) NVMCTRL APB Protect Enable Mask */
#define PAC_STATUSB_NVMCTRL                 PAC_STATUSB_NVMCTRL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSB_NVMCTRL_Msk instead */
#define PAC_STATUSB_MTB_Pos                 3                                              /**< (PAC_STATUSB) MTB APB Protect Enable Position */
#define PAC_STATUSB_MTB_Msk                 (_U_(0x1) << PAC_STATUSB_MTB_Pos)              /**< (PAC_STATUSB) MTB APB Protect Enable Mask */
#define PAC_STATUSB_MTB                     PAC_STATUSB_MTB_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSB_MTB_Msk instead */
#define PAC_STATUSB_MASK                    _U_(0x0F)                                      /**< \deprecated (PAC_STATUSB) Register MASK  (Use PAC_STATUSB_Msk instead)  */
#define PAC_STATUSB_Msk                     _U_(0x0F)                                      /**< (PAC_STATUSB) Register Mask  */


/* -------- PAC_STATUSC : (PAC Offset: 0x3c) (R/ 32) Peripheral write protection status - Bridge C -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SERCOM0_:1;                /**< bit:      0  SERCOM0 APB Protect Enable               */
    uint32_t SERCOM1_:1;                /**< bit:      1  SERCOM1 APB Protect Enable               */
    uint32_t SERCOM2_:1;                /**< bit:      2  SERCOM2 APB Protect Enable               */
    uint32_t SERCOM3_:1;                /**< bit:      3  SERCOM3 APB Protect Enable               */
    uint32_t SERCOM4_:1;                /**< bit:      4  SERCOM4 APB Protect Enable               */
    uint32_t TCC0_:1;                   /**< bit:      5  TCC0 APB Protect Enable                  */
    uint32_t TCC1_:1;                   /**< bit:      6  TCC1 APB Protect Enable                  */
    uint32_t TCC2_:1;                   /**< bit:      7  TCC2 APB Protect Enable                  */
    uint32_t TC0_:1;                    /**< bit:      8  TC0 APB Protect Enable                   */
    uint32_t TC1_:1;                    /**< bit:      9  TC1 APB Protect Enable                   */
    uint32_t TC2_:1;                    /**< bit:     10  TC2 APB Protect Enable                   */
    uint32_t TC3_:1;                    /**< bit:     11  TC3 APB Protect Enable                   */
    uint32_t DAC_:1;                    /**< bit:     12  DAC APB Protect Enable                   */
    uint32_t AES_:1;                    /**< bit:     13  AES APB Protect Enable                   */
    uint32_t TRNG_:1;                   /**< bit:     14  TRNG APB Protect Enable                  */
    uint32_t :17;                       /**< bit: 15..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_STATUSC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSC_OFFSET                  (0x3C)                                        /**<  (PAC_STATUSC) Peripheral write protection status - Bridge C  Offset */
#define PAC_STATUSC_RESETVALUE              _U_(0x00)                                     /**<  (PAC_STATUSC) Peripheral write protection status - Bridge C  Reset Value */

#define PAC_STATUSC_SERCOM0_Pos             0                                              /**< (PAC_STATUSC) SERCOM0 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM0_Msk             (_U_(0x1) << PAC_STATUSC_SERCOM0_Pos)          /**< (PAC_STATUSC) SERCOM0 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM0                 PAC_STATUSC_SERCOM0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_SERCOM0_Msk instead */
#define PAC_STATUSC_SERCOM1_Pos             1                                              /**< (PAC_STATUSC) SERCOM1 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM1_Msk             (_U_(0x1) << PAC_STATUSC_SERCOM1_Pos)          /**< (PAC_STATUSC) SERCOM1 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM1                 PAC_STATUSC_SERCOM1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_SERCOM1_Msk instead */
#define PAC_STATUSC_SERCOM2_Pos             2                                              /**< (PAC_STATUSC) SERCOM2 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM2_Msk             (_U_(0x1) << PAC_STATUSC_SERCOM2_Pos)          /**< (PAC_STATUSC) SERCOM2 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM2                 PAC_STATUSC_SERCOM2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_SERCOM2_Msk instead */
#define PAC_STATUSC_SERCOM3_Pos             3                                              /**< (PAC_STATUSC) SERCOM3 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM3_Msk             (_U_(0x1) << PAC_STATUSC_SERCOM3_Pos)          /**< (PAC_STATUSC) SERCOM3 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM3                 PAC_STATUSC_SERCOM3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_SERCOM3_Msk instead */
#define PAC_STATUSC_SERCOM4_Pos             4                                              /**< (PAC_STATUSC) SERCOM4 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM4_Msk             (_U_(0x1) << PAC_STATUSC_SERCOM4_Pos)          /**< (PAC_STATUSC) SERCOM4 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM4                 PAC_STATUSC_SERCOM4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_SERCOM4_Msk instead */
#define PAC_STATUSC_TCC0_Pos                5                                              /**< (PAC_STATUSC) TCC0 APB Protect Enable Position */
#define PAC_STATUSC_TCC0_Msk                (_U_(0x1) << PAC_STATUSC_TCC0_Pos)             /**< (PAC_STATUSC) TCC0 APB Protect Enable Mask */
#define PAC_STATUSC_TCC0                    PAC_STATUSC_TCC0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TCC0_Msk instead */
#define PAC_STATUSC_TCC1_Pos                6                                              /**< (PAC_STATUSC) TCC1 APB Protect Enable Position */
#define PAC_STATUSC_TCC1_Msk                (_U_(0x1) << PAC_STATUSC_TCC1_Pos)             /**< (PAC_STATUSC) TCC1 APB Protect Enable Mask */
#define PAC_STATUSC_TCC1                    PAC_STATUSC_TCC1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TCC1_Msk instead */
#define PAC_STATUSC_TCC2_Pos                7                                              /**< (PAC_STATUSC) TCC2 APB Protect Enable Position */
#define PAC_STATUSC_TCC2_Msk                (_U_(0x1) << PAC_STATUSC_TCC2_Pos)             /**< (PAC_STATUSC) TCC2 APB Protect Enable Mask */
#define PAC_STATUSC_TCC2                    PAC_STATUSC_TCC2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TCC2_Msk instead */
#define PAC_STATUSC_TC0_Pos                 8                                              /**< (PAC_STATUSC) TC0 APB Protect Enable Position */
#define PAC_STATUSC_TC0_Msk                 (_U_(0x1) << PAC_STATUSC_TC0_Pos)              /**< (PAC_STATUSC) TC0 APB Protect Enable Mask */
#define PAC_STATUSC_TC0                     PAC_STATUSC_TC0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TC0_Msk instead */
#define PAC_STATUSC_TC1_Pos                 9                                              /**< (PAC_STATUSC) TC1 APB Protect Enable Position */
#define PAC_STATUSC_TC1_Msk                 (_U_(0x1) << PAC_STATUSC_TC1_Pos)              /**< (PAC_STATUSC) TC1 APB Protect Enable Mask */
#define PAC_STATUSC_TC1                     PAC_STATUSC_TC1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TC1_Msk instead */
#define PAC_STATUSC_TC2_Pos                 10                                             /**< (PAC_STATUSC) TC2 APB Protect Enable Position */
#define PAC_STATUSC_TC2_Msk                 (_U_(0x1) << PAC_STATUSC_TC2_Pos)              /**< (PAC_STATUSC) TC2 APB Protect Enable Mask */
#define PAC_STATUSC_TC2                     PAC_STATUSC_TC2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TC2_Msk instead */
#define PAC_STATUSC_TC3_Pos                 11                                             /**< (PAC_STATUSC) TC3 APB Protect Enable Position */
#define PAC_STATUSC_TC3_Msk                 (_U_(0x1) << PAC_STATUSC_TC3_Pos)              /**< (PAC_STATUSC) TC3 APB Protect Enable Mask */
#define PAC_STATUSC_TC3                     PAC_STATUSC_TC3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TC3_Msk instead */
#define PAC_STATUSC_DAC_Pos                 12                                             /**< (PAC_STATUSC) DAC APB Protect Enable Position */
#define PAC_STATUSC_DAC_Msk                 (_U_(0x1) << PAC_STATUSC_DAC_Pos)              /**< (PAC_STATUSC) DAC APB Protect Enable Mask */
#define PAC_STATUSC_DAC                     PAC_STATUSC_DAC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_DAC_Msk instead */
#define PAC_STATUSC_AES_Pos                 13                                             /**< (PAC_STATUSC) AES APB Protect Enable Position */
#define PAC_STATUSC_AES_Msk                 (_U_(0x1) << PAC_STATUSC_AES_Pos)              /**< (PAC_STATUSC) AES APB Protect Enable Mask */
#define PAC_STATUSC_AES                     PAC_STATUSC_AES_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_AES_Msk instead */
#define PAC_STATUSC_TRNG_Pos                14                                             /**< (PAC_STATUSC) TRNG APB Protect Enable Position */
#define PAC_STATUSC_TRNG_Msk                (_U_(0x1) << PAC_STATUSC_TRNG_Pos)             /**< (PAC_STATUSC) TRNG APB Protect Enable Mask */
#define PAC_STATUSC_TRNG                    PAC_STATUSC_TRNG_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSC_TRNG_Msk instead */
#define PAC_STATUSC_MASK                    _U_(0x7FFF)                                    /**< \deprecated (PAC_STATUSC) Register MASK  (Use PAC_STATUSC_Msk instead)  */
#define PAC_STATUSC_Msk                     _U_(0x7FFF)                                    /**< (PAC_STATUSC) Register Mask  */

#define PAC_STATUSC_SERCOM_Pos              0                                              /**< (PAC_STATUSC Position) SERCOMx APB Protect Enable */
#define PAC_STATUSC_SERCOM_Msk              (_U_(0x1F) << PAC_STATUSC_SERCOM_Pos)          /**< (PAC_STATUSC Mask) SERCOM */
#define PAC_STATUSC_SERCOM(value)           (PAC_STATUSC_SERCOM_Msk & ((value) << PAC_STATUSC_SERCOM_Pos))  
#define PAC_STATUSC_TCC_Pos                 5                                              /**< (PAC_STATUSC Position) TCCx APB Protect Enable */
#define PAC_STATUSC_TCC_Msk                 (_U_(0x7) << PAC_STATUSC_TCC_Pos)              /**< (PAC_STATUSC Mask) TCC */
#define PAC_STATUSC_TCC(value)              (PAC_STATUSC_TCC_Msk & ((value) << PAC_STATUSC_TCC_Pos))  
#define PAC_STATUSC_TC_Pos                  8                                              /**< (PAC_STATUSC Position) TCx APB Protect Enable */
#define PAC_STATUSC_TC_Msk                  (_U_(0xF) << PAC_STATUSC_TC_Pos)               /**< (PAC_STATUSC Mask) TC */
#define PAC_STATUSC_TC(value)               (PAC_STATUSC_TC_Msk & ((value) << PAC_STATUSC_TC_Pos))  

/* -------- PAC_STATUSD : (PAC Offset: 0x40) (R/ 32) Peripheral write protection status - Bridge D -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EVSYS_:1;                  /**< bit:      0  EVSYS APB Protect Enable                 */
    uint32_t SERCOM5_:1;                /**< bit:      1  SERCOM5 APB Protect Enable               */
    uint32_t TC4_:1;                    /**< bit:      2  TC4 APB Protect Enable                   */
    uint32_t ADC_:1;                    /**< bit:      3  ADC APB Protect Enable                   */
    uint32_t AC_:1;                     /**< bit:      4  AC APB Protect Enable                    */
    uint32_t PTC_:1;                    /**< bit:      5  PTC APB Protect Enable                   */
    uint32_t OPAMP_:1;                  /**< bit:      6  OPAMP APB Protect Enable                 */
    uint32_t CCL_:1;                    /**< bit:      7  CCL APB Protect Enable                   */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_STATUSD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSD_OFFSET                  (0x40)                                        /**<  (PAC_STATUSD) Peripheral write protection status - Bridge D  Offset */
#define PAC_STATUSD_RESETVALUE              _U_(0x00)                                     /**<  (PAC_STATUSD) Peripheral write protection status - Bridge D  Reset Value */

#define PAC_STATUSD_EVSYS_Pos               0                                              /**< (PAC_STATUSD) EVSYS APB Protect Enable Position */
#define PAC_STATUSD_EVSYS_Msk               (_U_(0x1) << PAC_STATUSD_EVSYS_Pos)            /**< (PAC_STATUSD) EVSYS APB Protect Enable Mask */
#define PAC_STATUSD_EVSYS                   PAC_STATUSD_EVSYS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_EVSYS_Msk instead */
#define PAC_STATUSD_SERCOM5_Pos             1                                              /**< (PAC_STATUSD) SERCOM5 APB Protect Enable Position */
#define PAC_STATUSD_SERCOM5_Msk             (_U_(0x1) << PAC_STATUSD_SERCOM5_Pos)          /**< (PAC_STATUSD) SERCOM5 APB Protect Enable Mask */
#define PAC_STATUSD_SERCOM5                 PAC_STATUSD_SERCOM5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_SERCOM5_Msk instead */
#define PAC_STATUSD_TC4_Pos                 2                                              /**< (PAC_STATUSD) TC4 APB Protect Enable Position */
#define PAC_STATUSD_TC4_Msk                 (_U_(0x1) << PAC_STATUSD_TC4_Pos)              /**< (PAC_STATUSD) TC4 APB Protect Enable Mask */
#define PAC_STATUSD_TC4                     PAC_STATUSD_TC4_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_TC4_Msk instead */
#define PAC_STATUSD_ADC_Pos                 3                                              /**< (PAC_STATUSD) ADC APB Protect Enable Position */
#define PAC_STATUSD_ADC_Msk                 (_U_(0x1) << PAC_STATUSD_ADC_Pos)              /**< (PAC_STATUSD) ADC APB Protect Enable Mask */
#define PAC_STATUSD_ADC                     PAC_STATUSD_ADC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_ADC_Msk instead */
#define PAC_STATUSD_AC_Pos                  4                                              /**< (PAC_STATUSD) AC APB Protect Enable Position */
#define PAC_STATUSD_AC_Msk                  (_U_(0x1) << PAC_STATUSD_AC_Pos)               /**< (PAC_STATUSD) AC APB Protect Enable Mask */
#define PAC_STATUSD_AC                      PAC_STATUSD_AC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_AC_Msk instead */
#define PAC_STATUSD_PTC_Pos                 5                                              /**< (PAC_STATUSD) PTC APB Protect Enable Position */
#define PAC_STATUSD_PTC_Msk                 (_U_(0x1) << PAC_STATUSD_PTC_Pos)              /**< (PAC_STATUSD) PTC APB Protect Enable Mask */
#define PAC_STATUSD_PTC                     PAC_STATUSD_PTC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_PTC_Msk instead */
#define PAC_STATUSD_OPAMP_Pos               6                                              /**< (PAC_STATUSD) OPAMP APB Protect Enable Position */
#define PAC_STATUSD_OPAMP_Msk               (_U_(0x1) << PAC_STATUSD_OPAMP_Pos)            /**< (PAC_STATUSD) OPAMP APB Protect Enable Mask */
#define PAC_STATUSD_OPAMP                   PAC_STATUSD_OPAMP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_OPAMP_Msk instead */
#define PAC_STATUSD_CCL_Pos                 7                                              /**< (PAC_STATUSD) CCL APB Protect Enable Position */
#define PAC_STATUSD_CCL_Msk                 (_U_(0x1) << PAC_STATUSD_CCL_Pos)              /**< (PAC_STATUSD) CCL APB Protect Enable Mask */
#define PAC_STATUSD_CCL                     PAC_STATUSD_CCL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSD_CCL_Msk instead */
#define PAC_STATUSD_MASK                    _U_(0xFF)                                      /**< \deprecated (PAC_STATUSD) Register MASK  (Use PAC_STATUSD_Msk instead)  */
#define PAC_STATUSD_Msk                     _U_(0xFF)                                      /**< (PAC_STATUSD) Register Mask  */

#define PAC_STATUSD_SERCOM_Pos              1                                              /**< (PAC_STATUSD Position) SERCOM5 APB Protect Enable */
#define PAC_STATUSD_SERCOM_Msk              (_U_(0x1) << PAC_STATUSD_SERCOM_Pos)           /**< (PAC_STATUSD Mask) SERCOM */
#define PAC_STATUSD_SERCOM(value)           (PAC_STATUSD_SERCOM_Msk & ((value) << PAC_STATUSD_SERCOM_Pos))  
#define PAC_STATUSD_TC_Pos                  2                                              /**< (PAC_STATUSD Position) TC4 APB Protect Enable */
#define PAC_STATUSD_TC_Msk                  (_U_(0x1) << PAC_STATUSD_TC_Pos)               /**< (PAC_STATUSD Mask) TC */
#define PAC_STATUSD_TC(value)               (PAC_STATUSD_TC_Msk & ((value) << PAC_STATUSD_TC_Pos))  

/* -------- PAC_STATUSE : (PAC Offset: 0x44) (R/ 32) Peripheral write protection status - Bridge E -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PAC_:1;                    /**< bit:      0  PAC APB Protect Enable                   */
    uint32_t DMAC_:1;                   /**< bit:      1  DMAC APB Protect Enable                  */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PAC_STATUSE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSE_OFFSET                  (0x44)                                        /**<  (PAC_STATUSE) Peripheral write protection status - Bridge E  Offset */
#define PAC_STATUSE_RESETVALUE              _U_(0x00)                                     /**<  (PAC_STATUSE) Peripheral write protection status - Bridge E  Reset Value */

#define PAC_STATUSE_PAC_Pos                 0                                              /**< (PAC_STATUSE) PAC APB Protect Enable Position */
#define PAC_STATUSE_PAC_Msk                 (_U_(0x1) << PAC_STATUSE_PAC_Pos)              /**< (PAC_STATUSE) PAC APB Protect Enable Mask */
#define PAC_STATUSE_PAC                     PAC_STATUSE_PAC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSE_PAC_Msk instead */
#define PAC_STATUSE_DMAC_Pos                1                                              /**< (PAC_STATUSE) DMAC APB Protect Enable Position */
#define PAC_STATUSE_DMAC_Msk                (_U_(0x1) << PAC_STATUSE_DMAC_Pos)             /**< (PAC_STATUSE) DMAC APB Protect Enable Mask */
#define PAC_STATUSE_DMAC                    PAC_STATUSE_DMAC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PAC_STATUSE_DMAC_Msk instead */
#define PAC_STATUSE_MASK                    _U_(0x03)                                      /**< \deprecated (PAC_STATUSE) Register MASK  (Use PAC_STATUSE_Msk instead)  */
#define PAC_STATUSE_Msk                     _U_(0x03)                                      /**< (PAC_STATUSE) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PAC hardware registers */
typedef struct {  /* Peripheral Access Controller */
  __IO uint32_t WRCTRL;         /**< (PAC Offset: 0x00) Write control */
  __IO uint8_t EVCTRL;         /**< (PAC Offset: 0x04) Event control */
  __I  uint8_t                        Reserved1[3];
  __IO uint8_t INTENCLR;       /**< (PAC Offset: 0x08) Interrupt enable clear */
  __IO uint8_t INTENSET;       /**< (PAC Offset: 0x09) Interrupt enable set */
  __I  uint8_t                        Reserved2[6];
  __IO uint32_t INTFLAGAHB;     /**< (PAC Offset: 0x10) Bridge interrupt flag status */
  __IO uint32_t INTFLAGA;       /**< (PAC Offset: 0x14) Peripheral interrupt flag status - Bridge A */
  __IO uint32_t INTFLAGB;       /**< (PAC Offset: 0x18) Peripheral interrupt flag status - Bridge B */
  __IO uint32_t INTFLAGC;       /**< (PAC Offset: 0x1C) Peripheral interrupt flag status - Bridge C */
  __IO uint32_t INTFLAGD;       /**< (PAC Offset: 0x20) Peripheral interrupt flag status - Bridge D */
  __IO uint32_t INTFLAGE;       /**< (PAC Offset: 0x24) Peripheral interrupt flag status - Bridge E */
  __I  uint8_t                        Reserved3[12];
  __I  uint32_t STATUSA;        /**< (PAC Offset: 0x34) Peripheral write protection status - Bridge A */
  __I  uint32_t STATUSB;        /**< (PAC Offset: 0x38) Peripheral write protection status - Bridge B */
  __I  uint32_t STATUSC;        /**< (PAC Offset: 0x3C) Peripheral write protection status - Bridge C */
  __I  uint32_t STATUSD;        /**< (PAC Offset: 0x40) Peripheral write protection status - Bridge D */
  __I  uint32_t STATUSE;        /**< (PAC Offset: 0x44) Peripheral write protection status - Bridge E */
} Pac;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PAC hardware registers */
typedef struct {  /* Peripheral Access Controller */
  __IO PAC_WRCTRL_Type                WRCTRL;         /**< Offset: 0x00 (R/W  32) Write control */
  __IO PAC_EVCTRL_Type                EVCTRL;         /**< Offset: 0x04 (R/W   8) Event control */
  __I  uint8_t                        Reserved1[3];
  __IO PAC_INTENCLR_Type              INTENCLR;       /**< Offset: 0x08 (R/W   8) Interrupt enable clear */
  __IO PAC_INTENSET_Type              INTENSET;       /**< Offset: 0x09 (R/W   8) Interrupt enable set */
  __I  uint8_t                        Reserved2[6];
  __IO PAC_INTFLAGAHB_Type            INTFLAGAHB;     /**< Offset: 0x10 (R/W  32) Bridge interrupt flag status */
  __IO PAC_INTFLAGA_Type              INTFLAGA;       /**< Offset: 0x14 (R/W  32) Peripheral interrupt flag status - Bridge A */
  __IO PAC_INTFLAGB_Type              INTFLAGB;       /**< Offset: 0x18 (R/W  32) Peripheral interrupt flag status - Bridge B */
  __IO PAC_INTFLAGC_Type              INTFLAGC;       /**< Offset: 0x1C (R/W  32) Peripheral interrupt flag status - Bridge C */
  __IO PAC_INTFLAGD_Type              INTFLAGD;       /**< Offset: 0x20 (R/W  32) Peripheral interrupt flag status - Bridge D */
  __IO PAC_INTFLAGE_Type              INTFLAGE;       /**< Offset: 0x24 (R/W  32) Peripheral interrupt flag status - Bridge E */
  __I  uint8_t                        Reserved3[12];
  __I  PAC_STATUSA_Type               STATUSA;        /**< Offset: 0x34 (R/   32) Peripheral write protection status - Bridge A */
  __I  PAC_STATUSB_Type               STATUSB;        /**< Offset: 0x38 (R/   32) Peripheral write protection status - Bridge B */
  __I  PAC_STATUSC_Type               STATUSC;        /**< Offset: 0x3C (R/   32) Peripheral write protection status - Bridge C */
  __I  PAC_STATUSD_Type               STATUSD;        /**< Offset: 0x40 (R/   32) Peripheral write protection status - Bridge D */
  __I  PAC_STATUSE_Type               STATUSE;        /**< Offset: 0x44 (R/   32) Peripheral write protection status - Bridge E */
} Pac;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Peripheral Access Controller' */

#endif /* _WLR089_PAC_COMPONENT_H_ */

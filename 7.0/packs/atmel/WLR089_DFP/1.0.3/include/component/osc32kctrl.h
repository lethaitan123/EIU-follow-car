/**
 * \brief Component description for OSC32KCTRL
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
#ifndef _WLR089_OSC32KCTRL_COMPONENT_H_
#define _WLR089_OSC32KCTRL_COMPONENT_H_
#define _WLR089_OSC32KCTRL_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_OSC32KCTRL b'32k Oscillators Control'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR OSC32KCTRL */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define OSC32KCTRL_U2246                      /**< (OSC32KCTRL) Module ID */
#define REV_OSC32KCTRL 0x110                  /**< (OSC32KCTRL) Module revision */

/* -------- OSC32KCTRL_INTENCLR : (OSC32KCTRL Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSC32KRDY:1;              /**< bit:      0  XOSC32K Ready Interrupt Enable           */
    uint32_t OSC32KRDY:1;               /**< bit:      1  OSC32K Ready Interrupt Enable            */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_INTENCLR_OFFSET          (0x00)                                        /**<  (OSC32KCTRL_INTENCLR) Interrupt Enable Clear  Offset */
#define OSC32KCTRL_INTENCLR_RESETVALUE      _U_(0x00)                                     /**<  (OSC32KCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define OSC32KCTRL_INTENCLR_XOSC32KRDY_Pos  0                                              /**< (OSC32KCTRL_INTENCLR) XOSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk  (_U_(0x1) << OSC32KCTRL_INTENCLR_XOSC32KRDY_Pos)  /**< (OSC32KCTRL_INTENCLR) XOSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENCLR_XOSC32KRDY      OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk instead */
#define OSC32KCTRL_INTENCLR_OSC32KRDY_Pos   1                                              /**< (OSC32KCTRL_INTENCLR) OSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENCLR_OSC32KRDY_Msk   (_U_(0x1) << OSC32KCTRL_INTENCLR_OSC32KRDY_Pos)  /**< (OSC32KCTRL_INTENCLR) OSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENCLR_OSC32KRDY       OSC32KCTRL_INTENCLR_OSC32KRDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTENCLR_OSC32KRDY_Msk instead */
#define OSC32KCTRL_INTENCLR_MASK            _U_(0x03)                                      /**< \deprecated (OSC32KCTRL_INTENCLR) Register MASK  (Use OSC32KCTRL_INTENCLR_Msk instead)  */
#define OSC32KCTRL_INTENCLR_Msk             _U_(0x03)                                      /**< (OSC32KCTRL_INTENCLR) Register Mask  */


/* -------- OSC32KCTRL_INTENSET : (OSC32KCTRL Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSC32KRDY:1;              /**< bit:      0  XOSC32K Ready Interrupt Enable           */
    uint32_t OSC32KRDY:1;               /**< bit:      1  OSC32K Ready Interrupt Enable            */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_INTENSET_OFFSET          (0x04)                                        /**<  (OSC32KCTRL_INTENSET) Interrupt Enable Set  Offset */
#define OSC32KCTRL_INTENSET_RESETVALUE      _U_(0x00)                                     /**<  (OSC32KCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define OSC32KCTRL_INTENSET_XOSC32KRDY_Pos  0                                              /**< (OSC32KCTRL_INTENSET) XOSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENSET_XOSC32KRDY_Msk  (_U_(0x1) << OSC32KCTRL_INTENSET_XOSC32KRDY_Pos)  /**< (OSC32KCTRL_INTENSET) XOSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENSET_XOSC32KRDY      OSC32KCTRL_INTENSET_XOSC32KRDY_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTENSET_XOSC32KRDY_Msk instead */
#define OSC32KCTRL_INTENSET_OSC32KRDY_Pos   1                                              /**< (OSC32KCTRL_INTENSET) OSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENSET_OSC32KRDY_Msk   (_U_(0x1) << OSC32KCTRL_INTENSET_OSC32KRDY_Pos)  /**< (OSC32KCTRL_INTENSET) OSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENSET_OSC32KRDY       OSC32KCTRL_INTENSET_OSC32KRDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTENSET_OSC32KRDY_Msk instead */
#define OSC32KCTRL_INTENSET_MASK            _U_(0x03)                                      /**< \deprecated (OSC32KCTRL_INTENSET) Register MASK  (Use OSC32KCTRL_INTENSET_Msk instead)  */
#define OSC32KCTRL_INTENSET_Msk             _U_(0x03)                                      /**< (OSC32KCTRL_INTENSET) Register Mask  */


/* -------- OSC32KCTRL_INTFLAG : (OSC32KCTRL Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t XOSC32KRDY:1;              /**< bit:      0  XOSC32K Ready                            */
    __I uint32_t OSC32KRDY:1;               /**< bit:      1  OSC32K Ready                             */
    __I uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_INTFLAG_OFFSET           (0x08)                                        /**<  (OSC32KCTRL_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define OSC32KCTRL_INTFLAG_RESETVALUE       _U_(0x00)                                     /**<  (OSC32KCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define OSC32KCTRL_INTFLAG_XOSC32KRDY_Pos   0                                              /**< (OSC32KCTRL_INTFLAG) XOSC32K Ready Position */
#define OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk   (_U_(0x1) << OSC32KCTRL_INTFLAG_XOSC32KRDY_Pos)  /**< (OSC32KCTRL_INTFLAG) XOSC32K Ready Mask */
#define OSC32KCTRL_INTFLAG_XOSC32KRDY       OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk instead */
#define OSC32KCTRL_INTFLAG_OSC32KRDY_Pos    1                                              /**< (OSC32KCTRL_INTFLAG) OSC32K Ready Position */
#define OSC32KCTRL_INTFLAG_OSC32KRDY_Msk    (_U_(0x1) << OSC32KCTRL_INTFLAG_OSC32KRDY_Pos)  /**< (OSC32KCTRL_INTFLAG) OSC32K Ready Mask */
#define OSC32KCTRL_INTFLAG_OSC32KRDY        OSC32KCTRL_INTFLAG_OSC32KRDY_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_INTFLAG_OSC32KRDY_Msk instead */
#define OSC32KCTRL_INTFLAG_MASK             _U_(0x03)                                      /**< \deprecated (OSC32KCTRL_INTFLAG) Register MASK  (Use OSC32KCTRL_INTFLAG_Msk instead)  */
#define OSC32KCTRL_INTFLAG_Msk              _U_(0x03)                                      /**< (OSC32KCTRL_INTFLAG) Register Mask  */


/* -------- OSC32KCTRL_STATUS : (OSC32KCTRL Offset: 0x0c) (R/ 32) Power and Clocks Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSC32KRDY:1;              /**< bit:      0  XOSC32K Ready                            */
    uint32_t OSC32KRDY:1;               /**< bit:      1  OSC32K Ready                             */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_STATUS_OFFSET            (0x0C)                                        /**<  (OSC32KCTRL_STATUS) Power and Clocks Status  Offset */
#define OSC32KCTRL_STATUS_RESETVALUE        _U_(0x00)                                     /**<  (OSC32KCTRL_STATUS) Power and Clocks Status  Reset Value */

#define OSC32KCTRL_STATUS_XOSC32KRDY_Pos    0                                              /**< (OSC32KCTRL_STATUS) XOSC32K Ready Position */
#define OSC32KCTRL_STATUS_XOSC32KRDY_Msk    (_U_(0x1) << OSC32KCTRL_STATUS_XOSC32KRDY_Pos)  /**< (OSC32KCTRL_STATUS) XOSC32K Ready Mask */
#define OSC32KCTRL_STATUS_XOSC32KRDY        OSC32KCTRL_STATUS_XOSC32KRDY_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_STATUS_XOSC32KRDY_Msk instead */
#define OSC32KCTRL_STATUS_OSC32KRDY_Pos     1                                              /**< (OSC32KCTRL_STATUS) OSC32K Ready Position */
#define OSC32KCTRL_STATUS_OSC32KRDY_Msk     (_U_(0x1) << OSC32KCTRL_STATUS_OSC32KRDY_Pos)  /**< (OSC32KCTRL_STATUS) OSC32K Ready Mask */
#define OSC32KCTRL_STATUS_OSC32KRDY         OSC32KCTRL_STATUS_OSC32KRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_STATUS_OSC32KRDY_Msk instead */
#define OSC32KCTRL_STATUS_MASK              _U_(0x03)                                      /**< \deprecated (OSC32KCTRL_STATUS) Register MASK  (Use OSC32KCTRL_STATUS_Msk instead)  */
#define OSC32KCTRL_STATUS_Msk               _U_(0x03)                                      /**< (OSC32KCTRL_STATUS) Register Mask  */


/* -------- OSC32KCTRL_RTCCTRL : (OSC32KCTRL Offset: 0x10) (R/W 32) Clock selection -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RTCSEL:3;                  /**< bit:   0..2  RTC Clock Selection                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_RTCCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_RTCCTRL_OFFSET           (0x10)                                        /**<  (OSC32KCTRL_RTCCTRL) Clock selection  Offset */
#define OSC32KCTRL_RTCCTRL_RESETVALUE       _U_(0x00)                                     /**<  (OSC32KCTRL_RTCCTRL) Clock selection  Reset Value */

#define OSC32KCTRL_RTCCTRL_RTCSEL_Pos       0                                              /**< (OSC32KCTRL_RTCCTRL) RTC Clock Selection Position */
#define OSC32KCTRL_RTCCTRL_RTCSEL_Msk       (_U_(0x7) << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)    /**< (OSC32KCTRL_RTCCTRL) RTC Clock Selection Mask */
#define OSC32KCTRL_RTCCTRL_RTCSEL(value)    (OSC32KCTRL_RTCCTRL_RTCSEL_Msk & ((value) << OSC32KCTRL_RTCCTRL_RTCSEL_Pos))
#define   OSC32KCTRL_RTCCTRL_RTCSEL_ULP1K_Val _U_(0x0)                                       /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32kHz internal ULP oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_ULP32K_Val _U_(0x1)                                       /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32kHz internal ULP oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K_Val _U_(0x2)                                       /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32.768kHz internal oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K_Val _U_(0x3)                                       /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32.768kHz internal oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K_Val _U_(0x4)                                       /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32.768kHz internal oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K_Val _U_(0x5)                                       /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32.768kHz external crystal oscillator  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_ULP1K     (OSC32KCTRL_RTCCTRL_RTCSEL_ULP1K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32kHz internal ULP oscillator Position  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_ULP32K    (OSC32KCTRL_RTCCTRL_RTCSEL_ULP32K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32kHz internal ULP oscillator Position  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K     (OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32.768kHz internal oscillator Position  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K    (OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32.768kHz internal oscillator Position  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K    (OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 1.024kHz from 32.768kHz internal oscillator Position  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K   (OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)  /**< (OSC32KCTRL_RTCCTRL) 32.768kHz from 32.768kHz external crystal oscillator Position  */
#define OSC32KCTRL_RTCCTRL_MASK             _U_(0x07)                                      /**< \deprecated (OSC32KCTRL_RTCCTRL) Register MASK  (Use OSC32KCTRL_RTCCTRL_Msk instead)  */
#define OSC32KCTRL_RTCCTRL_Msk              _U_(0x07)                                      /**< (OSC32KCTRL_RTCCTRL) Register Mask  */


/* -------- OSC32KCTRL_XOSC32K : (OSC32KCTRL Offset: 0x14) (R/W 32) 32kHz External Crystal Oscillator (XOSC32K) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t ENABLE:1;                  /**< bit:      1  Oscillator Enable                        */
    uint32_t XTALEN:1;                  /**< bit:      2  Crystal Oscillator Enable                */
    uint32_t EN32K:1;                   /**< bit:      3  32kHz Output Enable                      */
    uint32_t EN1K:1;                    /**< bit:      4  1kHz Output Enable                       */
    uint32_t :1;                        /**< bit:      5  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint32_t ONDEMAND:1;                /**< bit:      7  On Demand Control                        */
    uint32_t STARTUP:3;                 /**< bit:  8..10  Oscillator Start-Up Time                 */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t WRTLOCK:1;                 /**< bit:     12  Write Lock                               */
    uint32_t :19;                       /**< bit: 13..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_XOSC32K_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_XOSC32K_OFFSET           (0x14)                                        /**<  (OSC32KCTRL_XOSC32K) 32kHz External Crystal Oscillator (XOSC32K) Control  Offset */
#define OSC32KCTRL_XOSC32K_RESETVALUE       _U_(0x80)                                     /**<  (OSC32KCTRL_XOSC32K) 32kHz External Crystal Oscillator (XOSC32K) Control  Reset Value */

#define OSC32KCTRL_XOSC32K_ENABLE_Pos       1                                              /**< (OSC32KCTRL_XOSC32K) Oscillator Enable Position */
#define OSC32KCTRL_XOSC32K_ENABLE_Msk       (_U_(0x1) << OSC32KCTRL_XOSC32K_ENABLE_Pos)    /**< (OSC32KCTRL_XOSC32K) Oscillator Enable Mask */
#define OSC32KCTRL_XOSC32K_ENABLE           OSC32KCTRL_XOSC32K_ENABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_ENABLE_Msk instead */
#define OSC32KCTRL_XOSC32K_XTALEN_Pos       2                                              /**< (OSC32KCTRL_XOSC32K) Crystal Oscillator Enable Position */
#define OSC32KCTRL_XOSC32K_XTALEN_Msk       (_U_(0x1) << OSC32KCTRL_XOSC32K_XTALEN_Pos)    /**< (OSC32KCTRL_XOSC32K) Crystal Oscillator Enable Mask */
#define OSC32KCTRL_XOSC32K_XTALEN           OSC32KCTRL_XOSC32K_XTALEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_XTALEN_Msk instead */
#define OSC32KCTRL_XOSC32K_EN32K_Pos        3                                              /**< (OSC32KCTRL_XOSC32K) 32kHz Output Enable Position */
#define OSC32KCTRL_XOSC32K_EN32K_Msk        (_U_(0x1) << OSC32KCTRL_XOSC32K_EN32K_Pos)     /**< (OSC32KCTRL_XOSC32K) 32kHz Output Enable Mask */
#define OSC32KCTRL_XOSC32K_EN32K            OSC32KCTRL_XOSC32K_EN32K_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_EN32K_Msk instead */
#define OSC32KCTRL_XOSC32K_EN1K_Pos         4                                              /**< (OSC32KCTRL_XOSC32K) 1kHz Output Enable Position */
#define OSC32KCTRL_XOSC32K_EN1K_Msk         (_U_(0x1) << OSC32KCTRL_XOSC32K_EN1K_Pos)      /**< (OSC32KCTRL_XOSC32K) 1kHz Output Enable Mask */
#define OSC32KCTRL_XOSC32K_EN1K             OSC32KCTRL_XOSC32K_EN1K_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_EN1K_Msk instead */
#define OSC32KCTRL_XOSC32K_RUNSTDBY_Pos     6                                              /**< (OSC32KCTRL_XOSC32K) Run in Standby Position */
#define OSC32KCTRL_XOSC32K_RUNSTDBY_Msk     (_U_(0x1) << OSC32KCTRL_XOSC32K_RUNSTDBY_Pos)  /**< (OSC32KCTRL_XOSC32K) Run in Standby Mask */
#define OSC32KCTRL_XOSC32K_RUNSTDBY         OSC32KCTRL_XOSC32K_RUNSTDBY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_RUNSTDBY_Msk instead */
#define OSC32KCTRL_XOSC32K_ONDEMAND_Pos     7                                              /**< (OSC32KCTRL_XOSC32K) On Demand Control Position */
#define OSC32KCTRL_XOSC32K_ONDEMAND_Msk     (_U_(0x1) << OSC32KCTRL_XOSC32K_ONDEMAND_Pos)  /**< (OSC32KCTRL_XOSC32K) On Demand Control Mask */
#define OSC32KCTRL_XOSC32K_ONDEMAND         OSC32KCTRL_XOSC32K_ONDEMAND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_ONDEMAND_Msk instead */
#define OSC32KCTRL_XOSC32K_STARTUP_Pos      8                                              /**< (OSC32KCTRL_XOSC32K) Oscillator Start-Up Time Position */
#define OSC32KCTRL_XOSC32K_STARTUP_Msk      (_U_(0x7) << OSC32KCTRL_XOSC32K_STARTUP_Pos)   /**< (OSC32KCTRL_XOSC32K) Oscillator Start-Up Time Mask */
#define OSC32KCTRL_XOSC32K_STARTUP(value)   (OSC32KCTRL_XOSC32K_STARTUP_Msk & ((value) << OSC32KCTRL_XOSC32K_STARTUP_Pos))
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE2048_Val _U_(0x0)                                       /**< (OSC32KCTRL_XOSC32K) 62.5 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE4096_Val _U_(0x1)                                       /**< (OSC32KCTRL_XOSC32K) 125 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE16384_Val _U_(0x2)                                       /**< (OSC32KCTRL_XOSC32K) 500 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE32768_Val _U_(0x3)                                       /**< (OSC32KCTRL_XOSC32K) 1000 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE65536_Val _U_(0x4)                                       /**< (OSC32KCTRL_XOSC32K) 2000 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE131072_Val _U_(0x5)                                       /**< (OSC32KCTRL_XOSC32K) 4000 ms  */
#define   OSC32KCTRL_XOSC32K_STARTUP_CYCLE262144_Val _U_(0x6)                                       /**< (OSC32KCTRL_XOSC32K) 8000 ms  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE2048 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE2048_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 62.5 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE4096 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE4096_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 125 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE16384 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE16384_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 500 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE32768 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE32768_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 1000 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE65536 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE65536_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 2000 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE131072 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE131072_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 4000 ms Position  */
#define OSC32KCTRL_XOSC32K_STARTUP_CYCLE262144 (OSC32KCTRL_XOSC32K_STARTUP_CYCLE262144_Val << OSC32KCTRL_XOSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_XOSC32K) 8000 ms Position  */
#define OSC32KCTRL_XOSC32K_WRTLOCK_Pos      12                                             /**< (OSC32KCTRL_XOSC32K) Write Lock Position */
#define OSC32KCTRL_XOSC32K_WRTLOCK_Msk      (_U_(0x1) << OSC32KCTRL_XOSC32K_WRTLOCK_Pos)   /**< (OSC32KCTRL_XOSC32K) Write Lock Mask */
#define OSC32KCTRL_XOSC32K_WRTLOCK          OSC32KCTRL_XOSC32K_WRTLOCK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_XOSC32K_WRTLOCK_Msk instead */
#define OSC32KCTRL_XOSC32K_MASK             _U_(0x17DE)                                    /**< \deprecated (OSC32KCTRL_XOSC32K) Register MASK  (Use OSC32KCTRL_XOSC32K_Msk instead)  */
#define OSC32KCTRL_XOSC32K_Msk              _U_(0x17DE)                                    /**< (OSC32KCTRL_XOSC32K) Register Mask  */


/* -------- OSC32KCTRL_OSC32K : (OSC32KCTRL Offset: 0x18) (R/W 32) 32kHz Internal Oscillator (OSC32K) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t ENABLE:1;                  /**< bit:      1  Oscillator Enable                        */
    uint32_t EN32K:1;                   /**< bit:      2  32kHz Output Enable                      */
    uint32_t EN1K:1;                    /**< bit:      3  1kHz Output Enable                       */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint32_t ONDEMAND:1;                /**< bit:      7  On Demand Control                        */
    uint32_t STARTUP:3;                 /**< bit:  8..10  Oscillator Start-Up Time                 */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t WRTLOCK:1;                 /**< bit:     12  Write Lock                               */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t CALIB:7;                   /**< bit: 16..22  Oscillator Calibration                   */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_OSC32K_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_OSC32K_OFFSET            (0x18)                                        /**<  (OSC32KCTRL_OSC32K) 32kHz Internal Oscillator (OSC32K) Control  Offset */
#define OSC32KCTRL_OSC32K_RESETVALUE        _U_(0x3F0080)                                 /**<  (OSC32KCTRL_OSC32K) 32kHz Internal Oscillator (OSC32K) Control  Reset Value */

#define OSC32KCTRL_OSC32K_ENABLE_Pos        1                                              /**< (OSC32KCTRL_OSC32K) Oscillator Enable Position */
#define OSC32KCTRL_OSC32K_ENABLE_Msk        (_U_(0x1) << OSC32KCTRL_OSC32K_ENABLE_Pos)     /**< (OSC32KCTRL_OSC32K) Oscillator Enable Mask */
#define OSC32KCTRL_OSC32K_ENABLE            OSC32KCTRL_OSC32K_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_ENABLE_Msk instead */
#define OSC32KCTRL_OSC32K_EN32K_Pos         2                                              /**< (OSC32KCTRL_OSC32K) 32kHz Output Enable Position */
#define OSC32KCTRL_OSC32K_EN32K_Msk         (_U_(0x1) << OSC32KCTRL_OSC32K_EN32K_Pos)      /**< (OSC32KCTRL_OSC32K) 32kHz Output Enable Mask */
#define OSC32KCTRL_OSC32K_EN32K             OSC32KCTRL_OSC32K_EN32K_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_EN32K_Msk instead */
#define OSC32KCTRL_OSC32K_EN1K_Pos          3                                              /**< (OSC32KCTRL_OSC32K) 1kHz Output Enable Position */
#define OSC32KCTRL_OSC32K_EN1K_Msk          (_U_(0x1) << OSC32KCTRL_OSC32K_EN1K_Pos)       /**< (OSC32KCTRL_OSC32K) 1kHz Output Enable Mask */
#define OSC32KCTRL_OSC32K_EN1K              OSC32KCTRL_OSC32K_EN1K_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_EN1K_Msk instead */
#define OSC32KCTRL_OSC32K_RUNSTDBY_Pos      6                                              /**< (OSC32KCTRL_OSC32K) Run in Standby Position */
#define OSC32KCTRL_OSC32K_RUNSTDBY_Msk      (_U_(0x1) << OSC32KCTRL_OSC32K_RUNSTDBY_Pos)   /**< (OSC32KCTRL_OSC32K) Run in Standby Mask */
#define OSC32KCTRL_OSC32K_RUNSTDBY          OSC32KCTRL_OSC32K_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_RUNSTDBY_Msk instead */
#define OSC32KCTRL_OSC32K_ONDEMAND_Pos      7                                              /**< (OSC32KCTRL_OSC32K) On Demand Control Position */
#define OSC32KCTRL_OSC32K_ONDEMAND_Msk      (_U_(0x1) << OSC32KCTRL_OSC32K_ONDEMAND_Pos)   /**< (OSC32KCTRL_OSC32K) On Demand Control Mask */
#define OSC32KCTRL_OSC32K_ONDEMAND          OSC32KCTRL_OSC32K_ONDEMAND_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_ONDEMAND_Msk instead */
#define OSC32KCTRL_OSC32K_STARTUP_Pos       8                                              /**< (OSC32KCTRL_OSC32K) Oscillator Start-Up Time Position */
#define OSC32KCTRL_OSC32K_STARTUP_Msk       (_U_(0x7) << OSC32KCTRL_OSC32K_STARTUP_Pos)    /**< (OSC32KCTRL_OSC32K) Oscillator Start-Up Time Mask */
#define OSC32KCTRL_OSC32K_STARTUP(value)    (OSC32KCTRL_OSC32K_STARTUP_Msk & ((value) << OSC32KCTRL_OSC32K_STARTUP_Pos))
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE3_Val _U_(0x0)                                       /**< (OSC32KCTRL_OSC32K) 0.092 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE4_Val _U_(0x1)                                       /**< (OSC32KCTRL_OSC32K) 0.122 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE6_Val _U_(0x2)                                       /**< (OSC32KCTRL_OSC32K) 0.183 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE10_Val _U_(0x3)                                       /**< (OSC32KCTRL_OSC32K) 0.305 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE18_Val _U_(0x4)                                       /**< (OSC32KCTRL_OSC32K) 0.549 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE34_Val _U_(0x5)                                       /**< (OSC32KCTRL_OSC32K) 1.038 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE66_Val _U_(0x6)                                       /**< (OSC32KCTRL_OSC32K) 2.014 ms  */
#define   OSC32KCTRL_OSC32K_STARTUP_CYCLE130_Val _U_(0x7)                                       /**< (OSC32KCTRL_OSC32K) 3.967 ms  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE3    (OSC32KCTRL_OSC32K_STARTUP_CYCLE3_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 0.092 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE4    (OSC32KCTRL_OSC32K_STARTUP_CYCLE4_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 0.122 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE6    (OSC32KCTRL_OSC32K_STARTUP_CYCLE6_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 0.183 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE10   (OSC32KCTRL_OSC32K_STARTUP_CYCLE10_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 0.305 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE18   (OSC32KCTRL_OSC32K_STARTUP_CYCLE18_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 0.549 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE34   (OSC32KCTRL_OSC32K_STARTUP_CYCLE34_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 1.038 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE66   (OSC32KCTRL_OSC32K_STARTUP_CYCLE66_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 2.014 ms Position  */
#define OSC32KCTRL_OSC32K_STARTUP_CYCLE130  (OSC32KCTRL_OSC32K_STARTUP_CYCLE130_Val << OSC32KCTRL_OSC32K_STARTUP_Pos)  /**< (OSC32KCTRL_OSC32K) 3.967 ms Position  */
#define OSC32KCTRL_OSC32K_WRTLOCK_Pos       12                                             /**< (OSC32KCTRL_OSC32K) Write Lock Position */
#define OSC32KCTRL_OSC32K_WRTLOCK_Msk       (_U_(0x1) << OSC32KCTRL_OSC32K_WRTLOCK_Pos)    /**< (OSC32KCTRL_OSC32K) Write Lock Mask */
#define OSC32KCTRL_OSC32K_WRTLOCK           OSC32KCTRL_OSC32K_WRTLOCK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSC32K_WRTLOCK_Msk instead */
#define OSC32KCTRL_OSC32K_CALIB_Pos         16                                             /**< (OSC32KCTRL_OSC32K) Oscillator Calibration Position */
#define OSC32KCTRL_OSC32K_CALIB_Msk         (_U_(0x7F) << OSC32KCTRL_OSC32K_CALIB_Pos)     /**< (OSC32KCTRL_OSC32K) Oscillator Calibration Mask */
#define OSC32KCTRL_OSC32K_CALIB(value)      (OSC32KCTRL_OSC32K_CALIB_Msk & ((value) << OSC32KCTRL_OSC32K_CALIB_Pos))
#define OSC32KCTRL_OSC32K_MASK              _U_(0x7F17CE)                                  /**< \deprecated (OSC32KCTRL_OSC32K) Register MASK  (Use OSC32KCTRL_OSC32K_Msk instead)  */
#define OSC32KCTRL_OSC32K_Msk               _U_(0x7F17CE)                                  /**< (OSC32KCTRL_OSC32K) Register Mask  */


/* -------- OSC32KCTRL_OSCULP32K : (OSC32KCTRL Offset: 0x1c) (R/W 32) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t CALIB:5;                   /**< bit:  8..12  Oscillator Calibration                   */
    uint32_t :2;                        /**< bit: 13..14  Reserved */
    uint32_t WRTLOCK:1;                 /**< bit:     15  Write Lock                               */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSC32KCTRL_OSCULP32K_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSC32KCTRL_OSCULP32K_OFFSET         (0x1C)                                        /**<  (OSC32KCTRL_OSCULP32K) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control  Offset */

#define OSC32KCTRL_OSCULP32K_CALIB_Pos      8                                              /**< (OSC32KCTRL_OSCULP32K) Oscillator Calibration Position */
#define OSC32KCTRL_OSCULP32K_CALIB_Msk      (_U_(0x1F) << OSC32KCTRL_OSCULP32K_CALIB_Pos)  /**< (OSC32KCTRL_OSCULP32K) Oscillator Calibration Mask */
#define OSC32KCTRL_OSCULP32K_CALIB(value)   (OSC32KCTRL_OSCULP32K_CALIB_Msk & ((value) << OSC32KCTRL_OSCULP32K_CALIB_Pos))
#define OSC32KCTRL_OSCULP32K_WRTLOCK_Pos    15                                             /**< (OSC32KCTRL_OSCULP32K) Write Lock Position */
#define OSC32KCTRL_OSCULP32K_WRTLOCK_Msk    (_U_(0x1) << OSC32KCTRL_OSCULP32K_WRTLOCK_Pos)  /**< (OSC32KCTRL_OSCULP32K) Write Lock Mask */
#define OSC32KCTRL_OSCULP32K_WRTLOCK        OSC32KCTRL_OSCULP32K_WRTLOCK_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSC32KCTRL_OSCULP32K_WRTLOCK_Msk instead */
#define OSC32KCTRL_OSCULP32K_MASK           _U_(0x9F00)                                    /**< \deprecated (OSC32KCTRL_OSCULP32K) Register MASK  (Use OSC32KCTRL_OSCULP32K_Msk instead)  */
#define OSC32KCTRL_OSCULP32K_Msk            _U_(0x9F00)                                    /**< (OSC32KCTRL_OSCULP32K) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief OSC32KCTRL hardware registers */
typedef struct {  /* 32k Oscillators Control */
  __IO uint32_t INTENCLR;       /**< (OSC32KCTRL Offset: 0x00) Interrupt Enable Clear */
  __IO uint32_t INTENSET;       /**< (OSC32KCTRL Offset: 0x04) Interrupt Enable Set */
  __IO uint32_t INTFLAG;        /**< (OSC32KCTRL Offset: 0x08) Interrupt Flag Status and Clear */
  __I  uint32_t STATUS;         /**< (OSC32KCTRL Offset: 0x0C) Power and Clocks Status */
  __IO uint32_t RTCCTRL;        /**< (OSC32KCTRL Offset: 0x10) Clock selection */
  __IO uint32_t XOSC32K;        /**< (OSC32KCTRL Offset: 0x14) 32kHz External Crystal Oscillator (XOSC32K) Control */
  __IO uint32_t OSC32K;         /**< (OSC32KCTRL Offset: 0x18) 32kHz Internal Oscillator (OSC32K) Control */
  __IO uint32_t OSCULP32K;      /**< (OSC32KCTRL Offset: 0x1C) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control */
} Osc32kctrl;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief OSC32KCTRL hardware registers */
typedef struct {  /* 32k Oscillators Control */
  __IO OSC32KCTRL_INTENCLR_Type       INTENCLR;       /**< Offset: 0x00 (R/W  32) Interrupt Enable Clear */
  __IO OSC32KCTRL_INTENSET_Type       INTENSET;       /**< Offset: 0x04 (R/W  32) Interrupt Enable Set */
  __IO OSC32KCTRL_INTFLAG_Type        INTFLAG;        /**< Offset: 0x08 (R/W  32) Interrupt Flag Status and Clear */
  __I  OSC32KCTRL_STATUS_Type         STATUS;         /**< Offset: 0x0C (R/   32) Power and Clocks Status */
  __IO OSC32KCTRL_RTCCTRL_Type        RTCCTRL;        /**< Offset: 0x10 (R/W  32) Clock selection */
  __IO OSC32KCTRL_XOSC32K_Type        XOSC32K;        /**< Offset: 0x14 (R/W  32) 32kHz External Crystal Oscillator (XOSC32K) Control */
  __IO OSC32KCTRL_OSC32K_Type         OSC32K;         /**< Offset: 0x18 (R/W  32) 32kHz Internal Oscillator (OSC32K) Control */
  __IO OSC32KCTRL_OSCULP32K_Type      OSCULP32K;      /**< Offset: 0x1C (R/W  32) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control */
} Osc32kctrl;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of 32k Oscillators Control' */

#endif /* _WLR089_OSC32KCTRL_COMPONENT_H_ */

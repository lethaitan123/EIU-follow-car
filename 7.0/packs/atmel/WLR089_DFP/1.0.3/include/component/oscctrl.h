/**
 * \brief Component description for OSCCTRL
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
#ifndef _WLR089_OSCCTRL_COMPONENT_H_
#define _WLR089_OSCCTRL_COMPONENT_H_
#define _WLR089_OSCCTRL_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_OSCCTRL b'Oscillators Control'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR OSCCTRL */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define OSCCTRL_U2119                      /**< (OSCCTRL) Module ID */
#define REV_OSCCTRL 0x110                  /**< (OSCCTRL) Module revision */

/* -------- OSCCTRL_INTENCLR : (OSCCTRL Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSCRDY:1;                 /**< bit:      0  XOSC Ready Interrupt Enable              */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t OSC16MRDY:1;               /**< bit:      4  OSC16M Ready Interrupt Enable            */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t DFLLRDY:1;                 /**< bit:      8  DFLL Ready Interrupt Enable              */
    uint32_t DFLLOOB:1;                 /**< bit:      9  DFLL Out Of Bounds Interrupt Enable      */
    uint32_t DFLLLCKF:1;                /**< bit:     10  DFLL Lock Fine Interrupt Enable          */
    uint32_t DFLLLCKC:1;                /**< bit:     11  DFLL Lock Coarse Interrupt Enable        */
    uint32_t DFLLRCS:1;                 /**< bit:     12  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DPLLLCKR:1;                /**< bit:     16  DPLL Lock Rise Interrupt Enable          */
    uint32_t DPLLLCKF:1;                /**< bit:     17  DPLL Lock Fall Interrupt Enable          */
    uint32_t DPLLLTO:1;                 /**< bit:     18  DPLL Time Out Interrupt Enable           */
    uint32_t DPLLLDRTO:1;               /**< bit:     19  DPLL Ratio Ready Interrupt Enable        */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENCLR_OFFSET             (0x00)                                        /**<  (OSCCTRL_INTENCLR) Interrupt Enable Clear  Offset */
#define OSCCTRL_INTENCLR_RESETVALUE         _U_(0x00)                                     /**<  (OSCCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define OSCCTRL_INTENCLR_XOSCRDY_Pos        0                                              /**< (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_XOSCRDY_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_XOSCRDY_Pos)     /**< (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_XOSCRDY            OSCCTRL_INTENCLR_XOSCRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_XOSCRDY_Msk instead */
#define OSCCTRL_INTENCLR_OSC16MRDY_Pos      4                                              /**< (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_OSC16MRDY_Msk      (_U_(0x1) << OSCCTRL_INTENCLR_OSC16MRDY_Pos)   /**< (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_OSC16MRDY          OSCCTRL_INTENCLR_OSC16MRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_OSC16MRDY_Msk instead */
#define OSCCTRL_INTENCLR_DFLLRDY_Pos        8                                              /**< (OSCCTRL_INTENCLR) DFLL Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLRDY_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_DFLLRDY_Pos)     /**< (OSCCTRL_INTENCLR) DFLL Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLRDY            OSCCTRL_INTENCLR_DFLLRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DFLLRDY_Msk instead */
#define OSCCTRL_INTENCLR_DFLLOOB_Pos        9                                              /**< (OSCCTRL_INTENCLR) DFLL Out Of Bounds Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLOOB_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_DFLLOOB_Pos)     /**< (OSCCTRL_INTENCLR) DFLL Out Of Bounds Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLOOB            OSCCTRL_INTENCLR_DFLLOOB_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DFLLOOB_Msk instead */
#define OSCCTRL_INTENCLR_DFLLLCKF_Pos       10                                             /**< (OSCCTRL_INTENCLR) DFLL Lock Fine Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLLCKF_Msk       (_U_(0x1) << OSCCTRL_INTENCLR_DFLLLCKF_Pos)    /**< (OSCCTRL_INTENCLR) DFLL Lock Fine Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLLCKF           OSCCTRL_INTENCLR_DFLLLCKF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DFLLLCKF_Msk instead */
#define OSCCTRL_INTENCLR_DFLLLCKC_Pos       11                                             /**< (OSCCTRL_INTENCLR) DFLL Lock Coarse Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLLCKC_Msk       (_U_(0x1) << OSCCTRL_INTENCLR_DFLLLCKC_Pos)    /**< (OSCCTRL_INTENCLR) DFLL Lock Coarse Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLLCKC           OSCCTRL_INTENCLR_DFLLLCKC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DFLLLCKC_Msk instead */
#define OSCCTRL_INTENCLR_DFLLRCS_Pos        12                                             /**< (OSCCTRL_INTENCLR) DFLL Reference Clock Stopped Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLRCS_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_DFLLRCS_Pos)     /**< (OSCCTRL_INTENCLR) DFLL Reference Clock Stopped Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLRCS            OSCCTRL_INTENCLR_DFLLRCS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DFLLRCS_Msk instead */
#define OSCCTRL_INTENCLR_DPLLLCKR_Pos       16                                             /**< (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLCKR_Msk       (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKR_Pos)    /**< (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLCKR           OSCCTRL_INTENCLR_DPLLLCKR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DPLLLCKR_Msk instead */
#define OSCCTRL_INTENCLR_DPLLLCKF_Pos       17                                             /**< (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLCKF_Msk       (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKF_Pos)    /**< (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLCKF           OSCCTRL_INTENCLR_DPLLLCKF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DPLLLCKF_Msk instead */
#define OSCCTRL_INTENCLR_DPLLLTO_Pos        18                                             /**< (OSCCTRL_INTENCLR) DPLL Time Out Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLTO_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLTO_Pos)     /**< (OSCCTRL_INTENCLR) DPLL Time Out Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLTO            OSCCTRL_INTENCLR_DPLLLTO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DPLLLTO_Msk instead */
#define OSCCTRL_INTENCLR_DPLLLDRTO_Pos      19                                             /**< (OSCCTRL_INTENCLR) DPLL Ratio Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLDRTO_Msk      (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLDRTO_Pos)   /**< (OSCCTRL_INTENCLR) DPLL Ratio Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLDRTO          OSCCTRL_INTENCLR_DPLLLDRTO_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENCLR_DPLLLDRTO_Msk instead */
#define OSCCTRL_INTENCLR_MASK               _U_(0xF1F11)                                   /**< \deprecated (OSCCTRL_INTENCLR) Register MASK  (Use OSCCTRL_INTENCLR_Msk instead)  */
#define OSCCTRL_INTENCLR_Msk                _U_(0xF1F11)                                   /**< (OSCCTRL_INTENCLR) Register Mask  */


/* -------- OSCCTRL_INTENSET : (OSCCTRL Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSCRDY:1;                 /**< bit:      0  XOSC Ready Interrupt Enable              */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t OSC16MRDY:1;               /**< bit:      4  OSC16M Ready Interrupt Enable            */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t DFLLRDY:1;                 /**< bit:      8  DFLL Ready Interrupt Enable              */
    uint32_t DFLLOOB:1;                 /**< bit:      9  DFLL Out Of Bounds Interrupt Enable      */
    uint32_t DFLLLCKF:1;                /**< bit:     10  DFLL Lock Fine Interrupt Enable          */
    uint32_t DFLLLCKC:1;                /**< bit:     11  DFLL Lock Coarse Interrupt Enable        */
    uint32_t DFLLRCS:1;                 /**< bit:     12  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DPLLLCKR:1;                /**< bit:     16  DPLL Lock Rise Interrupt Enable          */
    uint32_t DPLLLCKF:1;                /**< bit:     17  DPLL Lock Fall Interrupt Enable          */
    uint32_t DPLLLTO:1;                 /**< bit:     18  DPLL Time Out Interrupt Enable           */
    uint32_t DPLLLDRTO:1;               /**< bit:     19  DPLL Ratio Ready Interrupt Enable        */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENSET_OFFSET             (0x04)                                        /**<  (OSCCTRL_INTENSET) Interrupt Enable Set  Offset */
#define OSCCTRL_INTENSET_RESETVALUE         _U_(0x00)                                     /**<  (OSCCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define OSCCTRL_INTENSET_XOSCRDY_Pos        0                                              /**< (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_XOSCRDY_Msk        (_U_(0x1) << OSCCTRL_INTENSET_XOSCRDY_Pos)     /**< (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_XOSCRDY            OSCCTRL_INTENSET_XOSCRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_XOSCRDY_Msk instead */
#define OSCCTRL_INTENSET_OSC16MRDY_Pos      4                                              /**< (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_OSC16MRDY_Msk      (_U_(0x1) << OSCCTRL_INTENSET_OSC16MRDY_Pos)   /**< (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_OSC16MRDY          OSCCTRL_INTENSET_OSC16MRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_OSC16MRDY_Msk instead */
#define OSCCTRL_INTENSET_DFLLRDY_Pos        8                                              /**< (OSCCTRL_INTENSET) DFLL Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLRDY_Msk        (_U_(0x1) << OSCCTRL_INTENSET_DFLLRDY_Pos)     /**< (OSCCTRL_INTENSET) DFLL Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLRDY            OSCCTRL_INTENSET_DFLLRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DFLLRDY_Msk instead */
#define OSCCTRL_INTENSET_DFLLOOB_Pos        9                                              /**< (OSCCTRL_INTENSET) DFLL Out Of Bounds Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLOOB_Msk        (_U_(0x1) << OSCCTRL_INTENSET_DFLLOOB_Pos)     /**< (OSCCTRL_INTENSET) DFLL Out Of Bounds Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLOOB            OSCCTRL_INTENSET_DFLLOOB_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DFLLOOB_Msk instead */
#define OSCCTRL_INTENSET_DFLLLCKF_Pos       10                                             /**< (OSCCTRL_INTENSET) DFLL Lock Fine Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLLCKF_Msk       (_U_(0x1) << OSCCTRL_INTENSET_DFLLLCKF_Pos)    /**< (OSCCTRL_INTENSET) DFLL Lock Fine Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLLCKF           OSCCTRL_INTENSET_DFLLLCKF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DFLLLCKF_Msk instead */
#define OSCCTRL_INTENSET_DFLLLCKC_Pos       11                                             /**< (OSCCTRL_INTENSET) DFLL Lock Coarse Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLLCKC_Msk       (_U_(0x1) << OSCCTRL_INTENSET_DFLLLCKC_Pos)    /**< (OSCCTRL_INTENSET) DFLL Lock Coarse Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLLCKC           OSCCTRL_INTENSET_DFLLLCKC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DFLLLCKC_Msk instead */
#define OSCCTRL_INTENSET_DFLLRCS_Pos        12                                             /**< (OSCCTRL_INTENSET) DFLL Reference Clock Stopped Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLRCS_Msk        (_U_(0x1) << OSCCTRL_INTENSET_DFLLRCS_Pos)     /**< (OSCCTRL_INTENSET) DFLL Reference Clock Stopped Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLRCS            OSCCTRL_INTENSET_DFLLRCS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DFLLRCS_Msk instead */
#define OSCCTRL_INTENSET_DPLLLCKR_Pos       16                                             /**< (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLCKR_Msk       (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKR_Pos)    /**< (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLCKR           OSCCTRL_INTENSET_DPLLLCKR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DPLLLCKR_Msk instead */
#define OSCCTRL_INTENSET_DPLLLCKF_Pos       17                                             /**< (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLCKF_Msk       (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKF_Pos)    /**< (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLCKF           OSCCTRL_INTENSET_DPLLLCKF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DPLLLCKF_Msk instead */
#define OSCCTRL_INTENSET_DPLLLTO_Pos        18                                             /**< (OSCCTRL_INTENSET) DPLL Time Out Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLTO_Msk        (_U_(0x1) << OSCCTRL_INTENSET_DPLLLTO_Pos)     /**< (OSCCTRL_INTENSET) DPLL Time Out Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLTO            OSCCTRL_INTENSET_DPLLLTO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DPLLLTO_Msk instead */
#define OSCCTRL_INTENSET_DPLLLDRTO_Pos      19                                             /**< (OSCCTRL_INTENSET) DPLL Ratio Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLDRTO_Msk      (_U_(0x1) << OSCCTRL_INTENSET_DPLLLDRTO_Pos)   /**< (OSCCTRL_INTENSET) DPLL Ratio Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLDRTO          OSCCTRL_INTENSET_DPLLLDRTO_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTENSET_DPLLLDRTO_Msk instead */
#define OSCCTRL_INTENSET_MASK               _U_(0xF1F11)                                   /**< \deprecated (OSCCTRL_INTENSET) Register MASK  (Use OSCCTRL_INTENSET_Msk instead)  */
#define OSCCTRL_INTENSET_Msk                _U_(0xF1F11)                                   /**< (OSCCTRL_INTENSET) Register Mask  */


/* -------- OSCCTRL_INTFLAG : (OSCCTRL Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t XOSCRDY:1;                 /**< bit:      0  XOSC Ready                               */
    __I uint32_t :3;                        /**< bit:   1..3  Reserved */
    __I uint32_t OSC16MRDY:1;               /**< bit:      4  OSC16M Ready                             */
    __I uint32_t :3;                        /**< bit:   5..7  Reserved */
    __I uint32_t DFLLRDY:1;                 /**< bit:      8  DFLL Ready                               */
    __I uint32_t DFLLOOB:1;                 /**< bit:      9  DFLL Out Of Bounds                       */
    __I uint32_t DFLLLCKF:1;                /**< bit:     10  DFLL Lock Fine                           */
    __I uint32_t DFLLLCKC:1;                /**< bit:     11  DFLL Lock Coarse                         */
    __I uint32_t DFLLRCS:1;                 /**< bit:     12  DFLL Reference Clock Stopped             */
    __I uint32_t :3;                        /**< bit: 13..15  Reserved */
    __I uint32_t DPLLLCKR:1;                /**< bit:     16  DPLL Lock Rise                           */
    __I uint32_t DPLLLCKF:1;                /**< bit:     17  DPLL Lock Fall                           */
    __I uint32_t DPLLLTO:1;                 /**< bit:     18  DPLL Timeout                             */
    __I uint32_t DPLLLDRTO:1;               /**< bit:     19  DPLL Ratio Ready                         */
    __I uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTFLAG_OFFSET              (0x08)                                        /**<  (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define OSCCTRL_INTFLAG_RESETVALUE          _U_(0x00)                                     /**<  (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define OSCCTRL_INTFLAG_XOSCRDY_Pos         0                                              /**< (OSCCTRL_INTFLAG) XOSC Ready Position */
#define OSCCTRL_INTFLAG_XOSCRDY_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_XOSCRDY_Pos)      /**< (OSCCTRL_INTFLAG) XOSC Ready Mask */
#define OSCCTRL_INTFLAG_XOSCRDY             OSCCTRL_INTFLAG_XOSCRDY_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_XOSCRDY_Msk instead */
#define OSCCTRL_INTFLAG_OSC16MRDY_Pos       4                                              /**< (OSCCTRL_INTFLAG) OSC16M Ready Position */
#define OSCCTRL_INTFLAG_OSC16MRDY_Msk       (_U_(0x1) << OSCCTRL_INTFLAG_OSC16MRDY_Pos)    /**< (OSCCTRL_INTFLAG) OSC16M Ready Mask */
#define OSCCTRL_INTFLAG_OSC16MRDY           OSCCTRL_INTFLAG_OSC16MRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_OSC16MRDY_Msk instead */
#define OSCCTRL_INTFLAG_DFLLRDY_Pos         8                                              /**< (OSCCTRL_INTFLAG) DFLL Ready Position */
#define OSCCTRL_INTFLAG_DFLLRDY_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_DFLLRDY_Pos)      /**< (OSCCTRL_INTFLAG) DFLL Ready Mask */
#define OSCCTRL_INTFLAG_DFLLRDY             OSCCTRL_INTFLAG_DFLLRDY_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DFLLRDY_Msk instead */
#define OSCCTRL_INTFLAG_DFLLOOB_Pos         9                                              /**< (OSCCTRL_INTFLAG) DFLL Out Of Bounds Position */
#define OSCCTRL_INTFLAG_DFLLOOB_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_DFLLOOB_Pos)      /**< (OSCCTRL_INTFLAG) DFLL Out Of Bounds Mask */
#define OSCCTRL_INTFLAG_DFLLOOB             OSCCTRL_INTFLAG_DFLLOOB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DFLLOOB_Msk instead */
#define OSCCTRL_INTFLAG_DFLLLCKF_Pos        10                                             /**< (OSCCTRL_INTFLAG) DFLL Lock Fine Position */
#define OSCCTRL_INTFLAG_DFLLLCKF_Msk        (_U_(0x1) << OSCCTRL_INTFLAG_DFLLLCKF_Pos)     /**< (OSCCTRL_INTFLAG) DFLL Lock Fine Mask */
#define OSCCTRL_INTFLAG_DFLLLCKF            OSCCTRL_INTFLAG_DFLLLCKF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DFLLLCKF_Msk instead */
#define OSCCTRL_INTFLAG_DFLLLCKC_Pos        11                                             /**< (OSCCTRL_INTFLAG) DFLL Lock Coarse Position */
#define OSCCTRL_INTFLAG_DFLLLCKC_Msk        (_U_(0x1) << OSCCTRL_INTFLAG_DFLLLCKC_Pos)     /**< (OSCCTRL_INTFLAG) DFLL Lock Coarse Mask */
#define OSCCTRL_INTFLAG_DFLLLCKC            OSCCTRL_INTFLAG_DFLLLCKC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DFLLLCKC_Msk instead */
#define OSCCTRL_INTFLAG_DFLLRCS_Pos         12                                             /**< (OSCCTRL_INTFLAG) DFLL Reference Clock Stopped Position */
#define OSCCTRL_INTFLAG_DFLLRCS_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_DFLLRCS_Pos)      /**< (OSCCTRL_INTFLAG) DFLL Reference Clock Stopped Mask */
#define OSCCTRL_INTFLAG_DFLLRCS             OSCCTRL_INTFLAG_DFLLRCS_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DFLLRCS_Msk instead */
#define OSCCTRL_INTFLAG_DPLLLCKR_Pos        16                                             /**< (OSCCTRL_INTFLAG) DPLL Lock Rise Position */
#define OSCCTRL_INTFLAG_DPLLLCKR_Msk        (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKR_Pos)     /**< (OSCCTRL_INTFLAG) DPLL Lock Rise Mask */
#define OSCCTRL_INTFLAG_DPLLLCKR            OSCCTRL_INTFLAG_DPLLLCKR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DPLLLCKR_Msk instead */
#define OSCCTRL_INTFLAG_DPLLLCKF_Pos        17                                             /**< (OSCCTRL_INTFLAG) DPLL Lock Fall Position */
#define OSCCTRL_INTFLAG_DPLLLCKF_Msk        (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKF_Pos)     /**< (OSCCTRL_INTFLAG) DPLL Lock Fall Mask */
#define OSCCTRL_INTFLAG_DPLLLCKF            OSCCTRL_INTFLAG_DPLLLCKF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DPLLLCKF_Msk instead */
#define OSCCTRL_INTFLAG_DPLLLTO_Pos         18                                             /**< (OSCCTRL_INTFLAG) DPLL Timeout Position */
#define OSCCTRL_INTFLAG_DPLLLTO_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLTO_Pos)      /**< (OSCCTRL_INTFLAG) DPLL Timeout Mask */
#define OSCCTRL_INTFLAG_DPLLLTO             OSCCTRL_INTFLAG_DPLLLTO_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DPLLLTO_Msk instead */
#define OSCCTRL_INTFLAG_DPLLLDRTO_Pos       19                                             /**< (OSCCTRL_INTFLAG) DPLL Ratio Ready Position */
#define OSCCTRL_INTFLAG_DPLLLDRTO_Msk       (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLDRTO_Pos)    /**< (OSCCTRL_INTFLAG) DPLL Ratio Ready Mask */
#define OSCCTRL_INTFLAG_DPLLLDRTO           OSCCTRL_INTFLAG_DPLLLDRTO_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_INTFLAG_DPLLLDRTO_Msk instead */
#define OSCCTRL_INTFLAG_MASK                _U_(0xF1F11)                                   /**< \deprecated (OSCCTRL_INTFLAG) Register MASK  (Use OSCCTRL_INTFLAG_Msk instead)  */
#define OSCCTRL_INTFLAG_Msk                 _U_(0xF1F11)                                   /**< (OSCCTRL_INTFLAG) Register Mask  */


/* -------- OSCCTRL_STATUS : (OSCCTRL Offset: 0x0c) (R/ 32) Power and Clocks Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XOSCRDY:1;                 /**< bit:      0  XOSC Ready                               */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t OSC16MRDY:1;               /**< bit:      4  OSC16M Ready                             */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t DFLLRDY:1;                 /**< bit:      8  DFLL Ready                               */
    uint32_t DFLLOOB:1;                 /**< bit:      9  DFLL Out Of Bounds                       */
    uint32_t DFLLLCKF:1;                /**< bit:     10  DFLL Lock Fine                           */
    uint32_t DFLLLCKC:1;                /**< bit:     11  DFLL Lock Coarse                         */
    uint32_t DFLLRCS:1;                 /**< bit:     12  DFLL Reference Clock Stopped             */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DPLLLCKR:1;                /**< bit:     16  DPLL Lock Rise                           */
    uint32_t DPLLLCKF:1;                /**< bit:     17  DPLL Lock Fall                           */
    uint32_t DPLLTO:1;                  /**< bit:     18  DPLL Timeout                             */
    uint32_t DPLLLDRTO:1;               /**< bit:     19  DPLL Ratio Ready                         */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_STATUS_OFFSET               (0x0C)                                        /**<  (OSCCTRL_STATUS) Power and Clocks Status  Offset */
#define OSCCTRL_STATUS_RESETVALUE           _U_(0x00)                                     /**<  (OSCCTRL_STATUS) Power and Clocks Status  Reset Value */

#define OSCCTRL_STATUS_XOSCRDY_Pos          0                                              /**< (OSCCTRL_STATUS) XOSC Ready Position */
#define OSCCTRL_STATUS_XOSCRDY_Msk          (_U_(0x1) << OSCCTRL_STATUS_XOSCRDY_Pos)       /**< (OSCCTRL_STATUS) XOSC Ready Mask */
#define OSCCTRL_STATUS_XOSCRDY              OSCCTRL_STATUS_XOSCRDY_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_XOSCRDY_Msk instead */
#define OSCCTRL_STATUS_OSC16MRDY_Pos        4                                              /**< (OSCCTRL_STATUS) OSC16M Ready Position */
#define OSCCTRL_STATUS_OSC16MRDY_Msk        (_U_(0x1) << OSCCTRL_STATUS_OSC16MRDY_Pos)     /**< (OSCCTRL_STATUS) OSC16M Ready Mask */
#define OSCCTRL_STATUS_OSC16MRDY            OSCCTRL_STATUS_OSC16MRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_OSC16MRDY_Msk instead */
#define OSCCTRL_STATUS_DFLLRDY_Pos          8                                              /**< (OSCCTRL_STATUS) DFLL Ready Position */
#define OSCCTRL_STATUS_DFLLRDY_Msk          (_U_(0x1) << OSCCTRL_STATUS_DFLLRDY_Pos)       /**< (OSCCTRL_STATUS) DFLL Ready Mask */
#define OSCCTRL_STATUS_DFLLRDY              OSCCTRL_STATUS_DFLLRDY_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DFLLRDY_Msk instead */
#define OSCCTRL_STATUS_DFLLOOB_Pos          9                                              /**< (OSCCTRL_STATUS) DFLL Out Of Bounds Position */
#define OSCCTRL_STATUS_DFLLOOB_Msk          (_U_(0x1) << OSCCTRL_STATUS_DFLLOOB_Pos)       /**< (OSCCTRL_STATUS) DFLL Out Of Bounds Mask */
#define OSCCTRL_STATUS_DFLLOOB              OSCCTRL_STATUS_DFLLOOB_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DFLLOOB_Msk instead */
#define OSCCTRL_STATUS_DFLLLCKF_Pos         10                                             /**< (OSCCTRL_STATUS) DFLL Lock Fine Position */
#define OSCCTRL_STATUS_DFLLLCKF_Msk         (_U_(0x1) << OSCCTRL_STATUS_DFLLLCKF_Pos)      /**< (OSCCTRL_STATUS) DFLL Lock Fine Mask */
#define OSCCTRL_STATUS_DFLLLCKF             OSCCTRL_STATUS_DFLLLCKF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DFLLLCKF_Msk instead */
#define OSCCTRL_STATUS_DFLLLCKC_Pos         11                                             /**< (OSCCTRL_STATUS) DFLL Lock Coarse Position */
#define OSCCTRL_STATUS_DFLLLCKC_Msk         (_U_(0x1) << OSCCTRL_STATUS_DFLLLCKC_Pos)      /**< (OSCCTRL_STATUS) DFLL Lock Coarse Mask */
#define OSCCTRL_STATUS_DFLLLCKC             OSCCTRL_STATUS_DFLLLCKC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DFLLLCKC_Msk instead */
#define OSCCTRL_STATUS_DFLLRCS_Pos          12                                             /**< (OSCCTRL_STATUS) DFLL Reference Clock Stopped Position */
#define OSCCTRL_STATUS_DFLLRCS_Msk          (_U_(0x1) << OSCCTRL_STATUS_DFLLRCS_Pos)       /**< (OSCCTRL_STATUS) DFLL Reference Clock Stopped Mask */
#define OSCCTRL_STATUS_DFLLRCS              OSCCTRL_STATUS_DFLLRCS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DFLLRCS_Msk instead */
#define OSCCTRL_STATUS_DPLLLCKR_Pos         16                                             /**< (OSCCTRL_STATUS) DPLL Lock Rise Position */
#define OSCCTRL_STATUS_DPLLLCKR_Msk         (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKR_Pos)      /**< (OSCCTRL_STATUS) DPLL Lock Rise Mask */
#define OSCCTRL_STATUS_DPLLLCKR             OSCCTRL_STATUS_DPLLLCKR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DPLLLCKR_Msk instead */
#define OSCCTRL_STATUS_DPLLLCKF_Pos         17                                             /**< (OSCCTRL_STATUS) DPLL Lock Fall Position */
#define OSCCTRL_STATUS_DPLLLCKF_Msk         (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKF_Pos)      /**< (OSCCTRL_STATUS) DPLL Lock Fall Mask */
#define OSCCTRL_STATUS_DPLLLCKF             OSCCTRL_STATUS_DPLLLCKF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DPLLLCKF_Msk instead */
#define OSCCTRL_STATUS_DPLLTO_Pos           18                                             /**< (OSCCTRL_STATUS) DPLL Timeout Position */
#define OSCCTRL_STATUS_DPLLTO_Msk           (_U_(0x1) << OSCCTRL_STATUS_DPLLTO_Pos)        /**< (OSCCTRL_STATUS) DPLL Timeout Mask */
#define OSCCTRL_STATUS_DPLLTO               OSCCTRL_STATUS_DPLLTO_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DPLLTO_Msk instead */
#define OSCCTRL_STATUS_DPLLLDRTO_Pos        19                                             /**< (OSCCTRL_STATUS) DPLL Ratio Ready Position */
#define OSCCTRL_STATUS_DPLLLDRTO_Msk        (_U_(0x1) << OSCCTRL_STATUS_DPLLLDRTO_Pos)     /**< (OSCCTRL_STATUS) DPLL Ratio Ready Mask */
#define OSCCTRL_STATUS_DPLLLDRTO            OSCCTRL_STATUS_DPLLLDRTO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_STATUS_DPLLLDRTO_Msk instead */
#define OSCCTRL_STATUS_MASK                 _U_(0xF1F11)                                   /**< \deprecated (OSCCTRL_STATUS) Register MASK  (Use OSCCTRL_STATUS_Msk instead)  */
#define OSCCTRL_STATUS_Msk                  _U_(0xF1F11)                                   /**< (OSCCTRL_STATUS) Register Mask  */


/* -------- OSCCTRL_XOSCCTRL : (OSCCTRL Offset: 0x10) (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :1;                        /**< bit:      0  Reserved */
    uint16_t ENABLE:1;                  /**< bit:      1  Oscillator Enable                        */
    uint16_t XTALEN:1;                  /**< bit:      2  Crystal Oscillator Enable                */
    uint16_t :3;                        /**< bit:   3..5  Reserved */
    uint16_t RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint16_t ONDEMAND:1;                /**< bit:      7  On Demand Control                        */
    uint16_t GAIN:3;                    /**< bit:  8..10  Oscillator Gain                          */
    uint16_t AMPGC:1;                   /**< bit:     11  Automatic Amplitude Gain Control         */
    uint16_t STARTUP:4;                 /**< bit: 12..15  Start-Up Time                            */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} OSCCTRL_XOSCCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_XOSCCTRL_OFFSET             (0x10)                                        /**<  (OSCCTRL_XOSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control  Offset */
#define OSCCTRL_XOSCCTRL_RESETVALUE         _U_(0x80)                                     /**<  (OSCCTRL_XOSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control  Reset Value */

#define OSCCTRL_XOSCCTRL_ENABLE_Pos         1                                              /**< (OSCCTRL_XOSCCTRL) Oscillator Enable Position */
#define OSCCTRL_XOSCCTRL_ENABLE_Msk         (_U_(0x1) << OSCCTRL_XOSCCTRL_ENABLE_Pos)      /**< (OSCCTRL_XOSCCTRL) Oscillator Enable Mask */
#define OSCCTRL_XOSCCTRL_ENABLE             OSCCTRL_XOSCCTRL_ENABLE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_XOSCCTRL_ENABLE_Msk instead */
#define OSCCTRL_XOSCCTRL_XTALEN_Pos         2                                              /**< (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable Position */
#define OSCCTRL_XOSCCTRL_XTALEN_Msk         (_U_(0x1) << OSCCTRL_XOSCCTRL_XTALEN_Pos)      /**< (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable Mask */
#define OSCCTRL_XOSCCTRL_XTALEN             OSCCTRL_XOSCCTRL_XTALEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_XOSCCTRL_XTALEN_Msk instead */
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Pos       6                                              /**< (OSCCTRL_XOSCCTRL) Run in Standby Position */
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Msk       (_U_(0x1) << OSCCTRL_XOSCCTRL_RUNSTDBY_Pos)    /**< (OSCCTRL_XOSCCTRL) Run in Standby Mask */
#define OSCCTRL_XOSCCTRL_RUNSTDBY           OSCCTRL_XOSCCTRL_RUNSTDBY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_XOSCCTRL_RUNSTDBY_Msk instead */
#define OSCCTRL_XOSCCTRL_ONDEMAND_Pos       7                                              /**< (OSCCTRL_XOSCCTRL) On Demand Control Position */
#define OSCCTRL_XOSCCTRL_ONDEMAND_Msk       (_U_(0x1) << OSCCTRL_XOSCCTRL_ONDEMAND_Pos)    /**< (OSCCTRL_XOSCCTRL) On Demand Control Mask */
#define OSCCTRL_XOSCCTRL_ONDEMAND           OSCCTRL_XOSCCTRL_ONDEMAND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_XOSCCTRL_ONDEMAND_Msk instead */
#define OSCCTRL_XOSCCTRL_GAIN_Pos           8                                              /**< (OSCCTRL_XOSCCTRL) Oscillator Gain Position */
#define OSCCTRL_XOSCCTRL_GAIN_Msk           (_U_(0x7) << OSCCTRL_XOSCCTRL_GAIN_Pos)        /**< (OSCCTRL_XOSCCTRL) Oscillator Gain Mask */
#define OSCCTRL_XOSCCTRL_GAIN(value)        (OSCCTRL_XOSCCTRL_GAIN_Msk & ((value) << OSCCTRL_XOSCCTRL_GAIN_Pos))
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN2_Val   _U_(0x0)                                       /**< (OSCCTRL_XOSCCTRL) 2 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN4_Val   _U_(0x1)                                       /**< (OSCCTRL_XOSCCTRL) 4 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN8_Val   _U_(0x2)                                       /**< (OSCCTRL_XOSCCTRL) 8 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN16_Val  _U_(0x3)                                       /**< (OSCCTRL_XOSCCTRL) 16 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN30_Val  _U_(0x4)                                       /**< (OSCCTRL_XOSCCTRL) 30 MHz  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN2         (OSCCTRL_XOSCCTRL_GAIN_GAIN2_Val << OSCCTRL_XOSCCTRL_GAIN_Pos)  /**< (OSCCTRL_XOSCCTRL) 2 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN4         (OSCCTRL_XOSCCTRL_GAIN_GAIN4_Val << OSCCTRL_XOSCCTRL_GAIN_Pos)  /**< (OSCCTRL_XOSCCTRL) 4 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN8         (OSCCTRL_XOSCCTRL_GAIN_GAIN8_Val << OSCCTRL_XOSCCTRL_GAIN_Pos)  /**< (OSCCTRL_XOSCCTRL) 8 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN16        (OSCCTRL_XOSCCTRL_GAIN_GAIN16_Val << OSCCTRL_XOSCCTRL_GAIN_Pos)  /**< (OSCCTRL_XOSCCTRL) 16 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN30        (OSCCTRL_XOSCCTRL_GAIN_GAIN30_Val << OSCCTRL_XOSCCTRL_GAIN_Pos)  /**< (OSCCTRL_XOSCCTRL) 30 MHz Position  */
#define OSCCTRL_XOSCCTRL_AMPGC_Pos          11                                             /**< (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control Position */
#define OSCCTRL_XOSCCTRL_AMPGC_Msk          (_U_(0x1) << OSCCTRL_XOSCCTRL_AMPGC_Pos)       /**< (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control Mask */
#define OSCCTRL_XOSCCTRL_AMPGC              OSCCTRL_XOSCCTRL_AMPGC_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_XOSCCTRL_AMPGC_Msk instead */
#define OSCCTRL_XOSCCTRL_STARTUP_Pos        12                                             /**< (OSCCTRL_XOSCCTRL) Start-Up Time Position */
#define OSCCTRL_XOSCCTRL_STARTUP_Msk        (_U_(0xF) << OSCCTRL_XOSCCTRL_STARTUP_Pos)     /**< (OSCCTRL_XOSCCTRL) Start-Up Time Mask */
#define OSCCTRL_XOSCCTRL_STARTUP(value)     (OSCCTRL_XOSCCTRL_STARTUP_Msk & ((value) << OSCCTRL_XOSCCTRL_STARTUP_Pos))
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE1_Val _U_(0x0)                                       /**< (OSCCTRL_XOSCCTRL) 31 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE2_Val _U_(0x1)                                       /**< (OSCCTRL_XOSCCTRL) 61 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE4_Val _U_(0x2)                                       /**< (OSCCTRL_XOSCCTRL) 122 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE8_Val _U_(0x3)                                       /**< (OSCCTRL_XOSCCTRL) 244 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE16_Val _U_(0x4)                                       /**< (OSCCTRL_XOSCCTRL) 488 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE32_Val _U_(0x5)                                       /**< (OSCCTRL_XOSCCTRL) 977 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE64_Val _U_(0x6)                                       /**< (OSCCTRL_XOSCCTRL) 1953 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE128_Val _U_(0x7)                                       /**< (OSCCTRL_XOSCCTRL) 3906 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE256_Val _U_(0x8)                                       /**< (OSCCTRL_XOSCCTRL) 7813 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE512_Val _U_(0x9)                                       /**< (OSCCTRL_XOSCCTRL) 15625 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024_Val _U_(0xA)                                       /**< (OSCCTRL_XOSCCTRL) 31250 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048_Val _U_(0xB)                                       /**< (OSCCTRL_XOSCCTRL) 62500 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096_Val _U_(0xC)                                       /**< (OSCCTRL_XOSCCTRL) 125000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192_Val _U_(0xD)                                       /**< (OSCCTRL_XOSCCTRL) 250000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384_Val _U_(0xE)                                       /**< (OSCCTRL_XOSCCTRL) 500000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768_Val _U_(0xF)                                       /**< (OSCCTRL_XOSCCTRL) 1000000 us  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE1     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE1_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 31 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE2     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE2_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 61 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE4     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE4_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 122 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE8     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE8_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 244 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE16    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE16_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 488 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE32    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE32_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 977 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE64    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE64_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 1953 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE128   (OSCCTRL_XOSCCTRL_STARTUP_CYCLE128_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 3906 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE256   (OSCCTRL_XOSCCTRL_STARTUP_CYCLE256_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 7813 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE512   (OSCCTRL_XOSCCTRL_STARTUP_CYCLE512_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 15625 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024  (OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 31250 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048  (OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 62500 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096  (OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 125000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192  (OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 250000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384 (OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 500000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768 (OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos)  /**< (OSCCTRL_XOSCCTRL) 1000000 us Position  */
#define OSCCTRL_XOSCCTRL_MASK               _U_(0xFFC6)                                    /**< \deprecated (OSCCTRL_XOSCCTRL) Register MASK  (Use OSCCTRL_XOSCCTRL_Msk instead)  */
#define OSCCTRL_XOSCCTRL_Msk                _U_(0xFFC6)                                    /**< (OSCCTRL_XOSCCTRL) Register Mask  */


/* -------- OSCCTRL_OSC16MCTRL : (OSCCTRL Offset: 0x14) (R/W 8) 16MHz Internal Oscillator (OSC16M) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :1;                        /**< bit:      0  Reserved */
    uint8_t  ENABLE:1;                  /**< bit:      1  Oscillator Enable                        */
    uint8_t  FSEL:2;                    /**< bit:   2..3  Oscillator Frequency Select              */
    uint8_t  :2;                        /**< bit:   4..5  Reserved */
    uint8_t  RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint8_t  ONDEMAND:1;                /**< bit:      7  On Demand Control                        */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_OSC16MCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_OSC16MCTRL_OFFSET           (0x14)                                        /**<  (OSCCTRL_OSC16MCTRL) 16MHz Internal Oscillator (OSC16M) Control  Offset */
#define OSCCTRL_OSC16MCTRL_RESETVALUE       _U_(0x82)                                     /**<  (OSCCTRL_OSC16MCTRL) 16MHz Internal Oscillator (OSC16M) Control  Reset Value */

#define OSCCTRL_OSC16MCTRL_ENABLE_Pos       1                                              /**< (OSCCTRL_OSC16MCTRL) Oscillator Enable Position */
#define OSCCTRL_OSC16MCTRL_ENABLE_Msk       (_U_(0x1) << OSCCTRL_OSC16MCTRL_ENABLE_Pos)    /**< (OSCCTRL_OSC16MCTRL) Oscillator Enable Mask */
#define OSCCTRL_OSC16MCTRL_ENABLE           OSCCTRL_OSC16MCTRL_ENABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_OSC16MCTRL_ENABLE_Msk instead */
#define OSCCTRL_OSC16MCTRL_FSEL_Pos         2                                              /**< (OSCCTRL_OSC16MCTRL) Oscillator Frequency Select Position */
#define OSCCTRL_OSC16MCTRL_FSEL_Msk         (_U_(0x3) << OSCCTRL_OSC16MCTRL_FSEL_Pos)      /**< (OSCCTRL_OSC16MCTRL) Oscillator Frequency Select Mask */
#define OSCCTRL_OSC16MCTRL_FSEL(value)      (OSCCTRL_OSC16MCTRL_FSEL_Msk & ((value) << OSCCTRL_OSC16MCTRL_FSEL_Pos))
#define   OSCCTRL_OSC16MCTRL_FSEL_4_Val     _U_(0x0)                                       /**< (OSCCTRL_OSC16MCTRL) 4MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_8_Val     _U_(0x1)                                       /**< (OSCCTRL_OSC16MCTRL) 8MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_12_Val    _U_(0x2)                                       /**< (OSCCTRL_OSC16MCTRL) 12MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_16_Val    _U_(0x3)                                       /**< (OSCCTRL_OSC16MCTRL) 16MHz  */
#define OSCCTRL_OSC16MCTRL_FSEL_4           (OSCCTRL_OSC16MCTRL_FSEL_4_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)  /**< (OSCCTRL_OSC16MCTRL) 4MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_8           (OSCCTRL_OSC16MCTRL_FSEL_8_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)  /**< (OSCCTRL_OSC16MCTRL) 8MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_12          (OSCCTRL_OSC16MCTRL_FSEL_12_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)  /**< (OSCCTRL_OSC16MCTRL) 12MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_16          (OSCCTRL_OSC16MCTRL_FSEL_16_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)  /**< (OSCCTRL_OSC16MCTRL) 16MHz Position  */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos     6                                              /**< (OSCCTRL_OSC16MCTRL) Run in Standby Position */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk     (_U_(0x1) << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos)  /**< (OSCCTRL_OSC16MCTRL) Run in Standby Mask */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY         OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk instead */
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Pos     7                                              /**< (OSCCTRL_OSC16MCTRL) On Demand Control Position */
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Msk     (_U_(0x1) << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos)  /**< (OSCCTRL_OSC16MCTRL) On Demand Control Mask */
#define OSCCTRL_OSC16MCTRL_ONDEMAND         OSCCTRL_OSC16MCTRL_ONDEMAND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_OSC16MCTRL_ONDEMAND_Msk instead */
#define OSCCTRL_OSC16MCTRL_MASK             _U_(0xCE)                                      /**< \deprecated (OSCCTRL_OSC16MCTRL) Register MASK  (Use OSCCTRL_OSC16MCTRL_Msk instead)  */
#define OSCCTRL_OSC16MCTRL_Msk              _U_(0xCE)                                      /**< (OSCCTRL_OSC16MCTRL) Register Mask  */


/* -------- OSCCTRL_DFLLCTRL : (OSCCTRL Offset: 0x18) (R/W 16) DFLL48M Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :1;                        /**< bit:      0  Reserved */
    uint16_t ENABLE:1;                  /**< bit:      1  DFLL Enable                              */
    uint16_t MODE:1;                    /**< bit:      2  Operating Mode Selection                 */
    uint16_t STABLE:1;                  /**< bit:      3  Stable DFLL Frequency                    */
    uint16_t LLAW:1;                    /**< bit:      4  Lose Lock After Wake                     */
    uint16_t USBCRM:1;                  /**< bit:      5  USB Clock Recovery Mode                  */
    uint16_t RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint16_t ONDEMAND:1;                /**< bit:      7  On Demand Control                        */
    uint16_t CCDIS:1;                   /**< bit:      8  Chill Cycle Disable                      */
    uint16_t QLDIS:1;                   /**< bit:      9  Quick Lock Disable                       */
    uint16_t BPLCKC:1;                  /**< bit:     10  Bypass Coarse Lock                       */
    uint16_t WAITLOCK:1;                /**< bit:     11  Wait Lock                                */
    uint16_t :4;                        /**< bit: 12..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} OSCCTRL_DFLLCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLCTRL_OFFSET             (0x18)                                        /**<  (OSCCTRL_DFLLCTRL) DFLL48M Control  Offset */
#define OSCCTRL_DFLLCTRL_RESETVALUE         _U_(0x80)                                     /**<  (OSCCTRL_DFLLCTRL) DFLL48M Control  Reset Value */

#define OSCCTRL_DFLLCTRL_ENABLE_Pos         1                                              /**< (OSCCTRL_DFLLCTRL) DFLL Enable Position */
#define OSCCTRL_DFLLCTRL_ENABLE_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_ENABLE_Pos)      /**< (OSCCTRL_DFLLCTRL) DFLL Enable Mask */
#define OSCCTRL_DFLLCTRL_ENABLE             OSCCTRL_DFLLCTRL_ENABLE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_ENABLE_Msk instead */
#define OSCCTRL_DFLLCTRL_MODE_Pos           2                                              /**< (OSCCTRL_DFLLCTRL) Operating Mode Selection Position */
#define OSCCTRL_DFLLCTRL_MODE_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_MODE_Pos)        /**< (OSCCTRL_DFLLCTRL) Operating Mode Selection Mask */
#define OSCCTRL_DFLLCTRL_MODE               OSCCTRL_DFLLCTRL_MODE_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_MODE_Msk instead */
#define OSCCTRL_DFLLCTRL_STABLE_Pos         3                                              /**< (OSCCTRL_DFLLCTRL) Stable DFLL Frequency Position */
#define OSCCTRL_DFLLCTRL_STABLE_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_STABLE_Pos)      /**< (OSCCTRL_DFLLCTRL) Stable DFLL Frequency Mask */
#define OSCCTRL_DFLLCTRL_STABLE             OSCCTRL_DFLLCTRL_STABLE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_STABLE_Msk instead */
#define OSCCTRL_DFLLCTRL_LLAW_Pos           4                                              /**< (OSCCTRL_DFLLCTRL) Lose Lock After Wake Position */
#define OSCCTRL_DFLLCTRL_LLAW_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_LLAW_Pos)        /**< (OSCCTRL_DFLLCTRL) Lose Lock After Wake Mask */
#define OSCCTRL_DFLLCTRL_LLAW               OSCCTRL_DFLLCTRL_LLAW_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_LLAW_Msk instead */
#define OSCCTRL_DFLLCTRL_USBCRM_Pos         5                                              /**< (OSCCTRL_DFLLCTRL) USB Clock Recovery Mode Position */
#define OSCCTRL_DFLLCTRL_USBCRM_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_USBCRM_Pos)      /**< (OSCCTRL_DFLLCTRL) USB Clock Recovery Mode Mask */
#define OSCCTRL_DFLLCTRL_USBCRM             OSCCTRL_DFLLCTRL_USBCRM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_USBCRM_Msk instead */
#define OSCCTRL_DFLLCTRL_RUNSTDBY_Pos       6                                              /**< (OSCCTRL_DFLLCTRL) Run in Standby Position */
#define OSCCTRL_DFLLCTRL_RUNSTDBY_Msk       (_U_(0x1) << OSCCTRL_DFLLCTRL_RUNSTDBY_Pos)    /**< (OSCCTRL_DFLLCTRL) Run in Standby Mask */
#define OSCCTRL_DFLLCTRL_RUNSTDBY           OSCCTRL_DFLLCTRL_RUNSTDBY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_RUNSTDBY_Msk instead */
#define OSCCTRL_DFLLCTRL_ONDEMAND_Pos       7                                              /**< (OSCCTRL_DFLLCTRL) On Demand Control Position */
#define OSCCTRL_DFLLCTRL_ONDEMAND_Msk       (_U_(0x1) << OSCCTRL_DFLLCTRL_ONDEMAND_Pos)    /**< (OSCCTRL_DFLLCTRL) On Demand Control Mask */
#define OSCCTRL_DFLLCTRL_ONDEMAND           OSCCTRL_DFLLCTRL_ONDEMAND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_ONDEMAND_Msk instead */
#define OSCCTRL_DFLLCTRL_CCDIS_Pos          8                                              /**< (OSCCTRL_DFLLCTRL) Chill Cycle Disable Position */
#define OSCCTRL_DFLLCTRL_CCDIS_Msk          (_U_(0x1) << OSCCTRL_DFLLCTRL_CCDIS_Pos)       /**< (OSCCTRL_DFLLCTRL) Chill Cycle Disable Mask */
#define OSCCTRL_DFLLCTRL_CCDIS              OSCCTRL_DFLLCTRL_CCDIS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_CCDIS_Msk instead */
#define OSCCTRL_DFLLCTRL_QLDIS_Pos          9                                              /**< (OSCCTRL_DFLLCTRL) Quick Lock Disable Position */
#define OSCCTRL_DFLLCTRL_QLDIS_Msk          (_U_(0x1) << OSCCTRL_DFLLCTRL_QLDIS_Pos)       /**< (OSCCTRL_DFLLCTRL) Quick Lock Disable Mask */
#define OSCCTRL_DFLLCTRL_QLDIS              OSCCTRL_DFLLCTRL_QLDIS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_QLDIS_Msk instead */
#define OSCCTRL_DFLLCTRL_BPLCKC_Pos         10                                             /**< (OSCCTRL_DFLLCTRL) Bypass Coarse Lock Position */
#define OSCCTRL_DFLLCTRL_BPLCKC_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_BPLCKC_Pos)      /**< (OSCCTRL_DFLLCTRL) Bypass Coarse Lock Mask */
#define OSCCTRL_DFLLCTRL_BPLCKC             OSCCTRL_DFLLCTRL_BPLCKC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_BPLCKC_Msk instead */
#define OSCCTRL_DFLLCTRL_WAITLOCK_Pos       11                                             /**< (OSCCTRL_DFLLCTRL) Wait Lock Position */
#define OSCCTRL_DFLLCTRL_WAITLOCK_Msk       (_U_(0x1) << OSCCTRL_DFLLCTRL_WAITLOCK_Pos)    /**< (OSCCTRL_DFLLCTRL) Wait Lock Mask */
#define OSCCTRL_DFLLCTRL_WAITLOCK           OSCCTRL_DFLLCTRL_WAITLOCK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLCTRL_WAITLOCK_Msk instead */
#define OSCCTRL_DFLLCTRL_MASK               _U_(0xFFE)                                     /**< \deprecated (OSCCTRL_DFLLCTRL) Register MASK  (Use OSCCTRL_DFLLCTRL_Msk instead)  */
#define OSCCTRL_DFLLCTRL_Msk                _U_(0xFFE)                                     /**< (OSCCTRL_DFLLCTRL) Register Mask  */


/* -------- OSCCTRL_DFLLVAL : (OSCCTRL Offset: 0x1c) (R/W 32) DFLL48M Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FINE:10;                   /**< bit:   0..9  Fine Value                               */
    uint32_t COARSE:6;                  /**< bit: 10..15  Coarse Value                             */
    uint32_t DIFF:16;                   /**< bit: 16..31  Multiplication Ratio Difference          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_DFLLVAL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLVAL_OFFSET              (0x1C)                                        /**<  (OSCCTRL_DFLLVAL) DFLL48M Value  Offset */
#define OSCCTRL_DFLLVAL_RESETVALUE          _U_(0x00)                                     /**<  (OSCCTRL_DFLLVAL) DFLL48M Value  Reset Value */

#define OSCCTRL_DFLLVAL_FINE_Pos            0                                              /**< (OSCCTRL_DFLLVAL) Fine Value Position */
#define OSCCTRL_DFLLVAL_FINE_Msk            (_U_(0x3FF) << OSCCTRL_DFLLVAL_FINE_Pos)       /**< (OSCCTRL_DFLLVAL) Fine Value Mask */
#define OSCCTRL_DFLLVAL_FINE(value)         (OSCCTRL_DFLLVAL_FINE_Msk & ((value) << OSCCTRL_DFLLVAL_FINE_Pos))
#define OSCCTRL_DFLLVAL_COARSE_Pos          10                                             /**< (OSCCTRL_DFLLVAL) Coarse Value Position */
#define OSCCTRL_DFLLVAL_COARSE_Msk          (_U_(0x3F) << OSCCTRL_DFLLVAL_COARSE_Pos)      /**< (OSCCTRL_DFLLVAL) Coarse Value Mask */
#define OSCCTRL_DFLLVAL_COARSE(value)       (OSCCTRL_DFLLVAL_COARSE_Msk & ((value) << OSCCTRL_DFLLVAL_COARSE_Pos))
#define OSCCTRL_DFLLVAL_DIFF_Pos            16                                             /**< (OSCCTRL_DFLLVAL) Multiplication Ratio Difference Position */
#define OSCCTRL_DFLLVAL_DIFF_Msk            (_U_(0xFFFF) << OSCCTRL_DFLLVAL_DIFF_Pos)      /**< (OSCCTRL_DFLLVAL) Multiplication Ratio Difference Mask */
#define OSCCTRL_DFLLVAL_DIFF(value)         (OSCCTRL_DFLLVAL_DIFF_Msk & ((value) << OSCCTRL_DFLLVAL_DIFF_Pos))
#define OSCCTRL_DFLLVAL_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (OSCCTRL_DFLLVAL) Register MASK  (Use OSCCTRL_DFLLVAL_Msk instead)  */
#define OSCCTRL_DFLLVAL_Msk                 _U_(0xFFFFFFFF)                                /**< (OSCCTRL_DFLLVAL) Register Mask  */


/* -------- OSCCTRL_DFLLMUL : (OSCCTRL Offset: 0x20) (R/W 32) DFLL48M Multiplier -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MUL:16;                    /**< bit:  0..15  DFLL Multiply Factor                     */
    uint32_t FSTEP:10;                  /**< bit: 16..25  Fine Maximum Step                        */
    uint32_t CSTEP:6;                   /**< bit: 26..31  Coarse Maximum Step                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_DFLLMUL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLMUL_OFFSET              (0x20)                                        /**<  (OSCCTRL_DFLLMUL) DFLL48M Multiplier  Offset */
#define OSCCTRL_DFLLMUL_RESETVALUE          _U_(0x00)                                     /**<  (OSCCTRL_DFLLMUL) DFLL48M Multiplier  Reset Value */

#define OSCCTRL_DFLLMUL_MUL_Pos             0                                              /**< (OSCCTRL_DFLLMUL) DFLL Multiply Factor Position */
#define OSCCTRL_DFLLMUL_MUL_Msk             (_U_(0xFFFF) << OSCCTRL_DFLLMUL_MUL_Pos)       /**< (OSCCTRL_DFLLMUL) DFLL Multiply Factor Mask */
#define OSCCTRL_DFLLMUL_MUL(value)          (OSCCTRL_DFLLMUL_MUL_Msk & ((value) << OSCCTRL_DFLLMUL_MUL_Pos))
#define OSCCTRL_DFLLMUL_FSTEP_Pos           16                                             /**< (OSCCTRL_DFLLMUL) Fine Maximum Step Position */
#define OSCCTRL_DFLLMUL_FSTEP_Msk           (_U_(0x3FF) << OSCCTRL_DFLLMUL_FSTEP_Pos)      /**< (OSCCTRL_DFLLMUL) Fine Maximum Step Mask */
#define OSCCTRL_DFLLMUL_FSTEP(value)        (OSCCTRL_DFLLMUL_FSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_FSTEP_Pos))
#define OSCCTRL_DFLLMUL_CSTEP_Pos           26                                             /**< (OSCCTRL_DFLLMUL) Coarse Maximum Step Position */
#define OSCCTRL_DFLLMUL_CSTEP_Msk           (_U_(0x3F) << OSCCTRL_DFLLMUL_CSTEP_Pos)       /**< (OSCCTRL_DFLLMUL) Coarse Maximum Step Mask */
#define OSCCTRL_DFLLMUL_CSTEP(value)        (OSCCTRL_DFLLMUL_CSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_CSTEP_Pos))
#define OSCCTRL_DFLLMUL_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (OSCCTRL_DFLLMUL) Register MASK  (Use OSCCTRL_DFLLMUL_Msk instead)  */
#define OSCCTRL_DFLLMUL_Msk                 _U_(0xFFFFFFFF)                                /**< (OSCCTRL_DFLLMUL) Register Mask  */


/* -------- OSCCTRL_DFLLSYNC : (OSCCTRL Offset: 0x24) (R/W 8) DFLL48M Synchronization -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :7;                        /**< bit:   0..6  Reserved */
    uint8_t  READREQ:1;                 /**< bit:      7  Read Request                             */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_DFLLSYNC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLSYNC_OFFSET             (0x24)                                        /**<  (OSCCTRL_DFLLSYNC) DFLL48M Synchronization  Offset */
#define OSCCTRL_DFLLSYNC_RESETVALUE         _U_(0x00)                                     /**<  (OSCCTRL_DFLLSYNC) DFLL48M Synchronization  Reset Value */

#define OSCCTRL_DFLLSYNC_READREQ_Pos        7                                              /**< (OSCCTRL_DFLLSYNC) Read Request Position */
#define OSCCTRL_DFLLSYNC_READREQ_Msk        (_U_(0x1) << OSCCTRL_DFLLSYNC_READREQ_Pos)     /**< (OSCCTRL_DFLLSYNC) Read Request Mask */
#define OSCCTRL_DFLLSYNC_READREQ            OSCCTRL_DFLLSYNC_READREQ_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DFLLSYNC_READREQ_Msk instead */
#define OSCCTRL_DFLLSYNC_MASK               _U_(0x80)                                      /**< \deprecated (OSCCTRL_DFLLSYNC) Register MASK  (Use OSCCTRL_DFLLSYNC_Msk instead)  */
#define OSCCTRL_DFLLSYNC_Msk                _U_(0x80)                                      /**< (OSCCTRL_DFLLSYNC) Register Mask  */


/* -------- OSCCTRL_DPLLCTRLA : (OSCCTRL Offset: 0x28) (R/W 8) DPLL Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :1;                        /**< bit:      0  Reserved */
    uint8_t  ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint8_t  :4;                        /**< bit:   2..5  Reserved */
    uint8_t  RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint8_t  ONDEMAND:1;                /**< bit:      7  On Demand                                */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_DPLLCTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLA_OFFSET            (0x28)                                        /**<  (OSCCTRL_DPLLCTRLA) DPLL Control  Offset */
#define OSCCTRL_DPLLCTRLA_RESETVALUE        _U_(0x80)                                     /**<  (OSCCTRL_DPLLCTRLA) DPLL Control  Reset Value */

#define OSCCTRL_DPLLCTRLA_ENABLE_Pos        1                                              /**< (OSCCTRL_DPLLCTRLA) Enable Position */
#define OSCCTRL_DPLLCTRLA_ENABLE_Msk        (_U_(0x1) << OSCCTRL_DPLLCTRLA_ENABLE_Pos)     /**< (OSCCTRL_DPLLCTRLA) Enable Mask */
#define OSCCTRL_DPLLCTRLA_ENABLE            OSCCTRL_DPLLCTRLA_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLA_ENABLE_Msk instead */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos      6                                              /**< (OSCCTRL_DPLLCTRLA) Run in Standby Position */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Msk      (_U_(0x1) << OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos)   /**< (OSCCTRL_DPLLCTRLA) Run in Standby Mask */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY          OSCCTRL_DPLLCTRLA_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLA_RUNSTDBY_Msk instead */
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Pos      7                                              /**< (OSCCTRL_DPLLCTRLA) On Demand Position */
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Msk      (_U_(0x1) << OSCCTRL_DPLLCTRLA_ONDEMAND_Pos)   /**< (OSCCTRL_DPLLCTRLA) On Demand Mask */
#define OSCCTRL_DPLLCTRLA_ONDEMAND          OSCCTRL_DPLLCTRLA_ONDEMAND_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLA_ONDEMAND_Msk instead */
#define OSCCTRL_DPLLCTRLA_MASK              _U_(0xC2)                                      /**< \deprecated (OSCCTRL_DPLLCTRLA) Register MASK  (Use OSCCTRL_DPLLCTRLA_Msk instead)  */
#define OSCCTRL_DPLLCTRLA_Msk               _U_(0xC2)                                      /**< (OSCCTRL_DPLLCTRLA) Register Mask  */


/* -------- OSCCTRL_DPLLRATIO : (OSCCTRL Offset: 0x2c) (R/W 32) DPLL Ratio Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LDR:12;                    /**< bit:  0..11  Loop Divider Ratio                       */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t LDRFRAC:4;                 /**< bit: 16..19  Loop Divider Ratio Fractional Part       */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_DPLLRATIO_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLRATIO_OFFSET            (0x2C)                                        /**<  (OSCCTRL_DPLLRATIO) DPLL Ratio Control  Offset */
#define OSCCTRL_DPLLRATIO_RESETVALUE        _U_(0x00)                                     /**<  (OSCCTRL_DPLLRATIO) DPLL Ratio Control  Reset Value */

#define OSCCTRL_DPLLRATIO_LDR_Pos           0                                              /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Position */
#define OSCCTRL_DPLLRATIO_LDR_Msk           (_U_(0xFFF) << OSCCTRL_DPLLRATIO_LDR_Pos)      /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Mask */
#define OSCCTRL_DPLLRATIO_LDR(value)        (OSCCTRL_DPLLRATIO_LDR_Msk & ((value) << OSCCTRL_DPLLRATIO_LDR_Pos))
#define OSCCTRL_DPLLRATIO_LDRFRAC_Pos       16                                             /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part Position */
#define OSCCTRL_DPLLRATIO_LDRFRAC_Msk       (_U_(0xF) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos)    /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part Mask */
#define OSCCTRL_DPLLRATIO_LDRFRAC(value)    (OSCCTRL_DPLLRATIO_LDRFRAC_Msk & ((value) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos))
#define OSCCTRL_DPLLRATIO_MASK              _U_(0xF0FFF)                                   /**< \deprecated (OSCCTRL_DPLLRATIO) Register MASK  (Use OSCCTRL_DPLLRATIO_Msk instead)  */
#define OSCCTRL_DPLLRATIO_Msk               _U_(0xF0FFF)                                   /**< (OSCCTRL_DPLLRATIO) Register Mask  */


/* -------- OSCCTRL_DPLLCTRLB : (OSCCTRL Offset: 0x30) (R/W 32) Digital Core Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FILTER:2;                  /**< bit:   0..1  Proportional Integral Filter Selection   */
    uint32_t LPEN:1;                    /**< bit:      2  Low-Power Enable                         */
    uint32_t WUF:1;                     /**< bit:      3  Wake Up Fast                             */
    uint32_t REFCLK:2;                  /**< bit:   4..5  Reference Clock Selection                */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t LTIME:3;                   /**< bit:  8..10  Lock Time                                */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t LBYPASS:1;                 /**< bit:     12  Lock Bypass                              */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DIV:11;                    /**< bit: 16..26  Clock Divider                            */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} OSCCTRL_DPLLCTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLB_OFFSET            (0x30)                                        /**<  (OSCCTRL_DPLLCTRLB) Digital Core Configuration  Offset */
#define OSCCTRL_DPLLCTRLB_RESETVALUE        _U_(0x00)                                     /**<  (OSCCTRL_DPLLCTRLB) Digital Core Configuration  Reset Value */

#define OSCCTRL_DPLLCTRLB_FILTER_Pos        0                                              /**< (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection Position */
#define OSCCTRL_DPLLCTRLB_FILTER_Msk        (_U_(0x3) << OSCCTRL_DPLLCTRLB_FILTER_Pos)     /**< (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection Mask */
#define OSCCTRL_DPLLCTRLB_FILTER(value)     (OSCCTRL_DPLLCTRLB_FILTER_Msk & ((value) << OSCCTRL_DPLLCTRLB_FILTER_Pos))
#define   OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val _U_(0x0)                                       /**< (OSCCTRL_DPLLCTRLB) Default filter mode  */
#define   OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val _U_(0x1)                                       /**< (OSCCTRL_DPLLCTRLB) Low bandwidth filter  */
#define   OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val _U_(0x2)                                       /**< (OSCCTRL_DPLLCTRLB) High bandwidth filter  */
#define   OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val _U_(0x3)                                       /**< (OSCCTRL_DPLLCTRLB) High damping filter  */
#define OSCCTRL_DPLLCTRLB_FILTER_DEFAULT    (OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)  /**< (OSCCTRL_DPLLCTRLB) Default filter mode Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_LBFILT     (OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)  /**< (OSCCTRL_DPLLCTRLB) Low bandwidth filter Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_HBFILT     (OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)  /**< (OSCCTRL_DPLLCTRLB) High bandwidth filter Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_HDFILT     (OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)  /**< (OSCCTRL_DPLLCTRLB) High damping filter Position  */
#define OSCCTRL_DPLLCTRLB_LPEN_Pos          2                                              /**< (OSCCTRL_DPLLCTRLB) Low-Power Enable Position */
#define OSCCTRL_DPLLCTRLB_LPEN_Msk          (_U_(0x1) << OSCCTRL_DPLLCTRLB_LPEN_Pos)       /**< (OSCCTRL_DPLLCTRLB) Low-Power Enable Mask */
#define OSCCTRL_DPLLCTRLB_LPEN              OSCCTRL_DPLLCTRLB_LPEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLB_LPEN_Msk instead */
#define OSCCTRL_DPLLCTRLB_WUF_Pos           3                                              /**< (OSCCTRL_DPLLCTRLB) Wake Up Fast Position */
#define OSCCTRL_DPLLCTRLB_WUF_Msk           (_U_(0x1) << OSCCTRL_DPLLCTRLB_WUF_Pos)        /**< (OSCCTRL_DPLLCTRLB) Wake Up Fast Mask */
#define OSCCTRL_DPLLCTRLB_WUF               OSCCTRL_DPLLCTRLB_WUF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLB_WUF_Msk instead */
#define OSCCTRL_DPLLCTRLB_REFCLK_Pos        4                                              /**< (OSCCTRL_DPLLCTRLB) Reference Clock Selection Position */
#define OSCCTRL_DPLLCTRLB_REFCLK_Msk        (_U_(0x3) << OSCCTRL_DPLLCTRLB_REFCLK_Pos)     /**< (OSCCTRL_DPLLCTRLB) Reference Clock Selection Mask */
#define OSCCTRL_DPLLCTRLB_REFCLK(value)     (OSCCTRL_DPLLCTRLB_REFCLK_Msk & ((value) << OSCCTRL_DPLLCTRLB_REFCLK_Pos))
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val _U_(0x0)                                       /**< (OSCCTRL_DPLLCTRLB) XOSC32K clock reference  */
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val _U_(0x1)                                       /**< (OSCCTRL_DPLLCTRLB) XOSC clock reference  */
#define   OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val _U_(0x2)                                       /**< (OSCCTRL_DPLLCTRLB) GCLK clock reference  */
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K    (OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)  /**< (OSCCTRL_DPLLCTRLB) XOSC32K clock reference Position  */
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC       (OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)  /**< (OSCCTRL_DPLLCTRLB) XOSC clock reference Position  */
#define OSCCTRL_DPLLCTRLB_REFCLK_GCLK       (OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)  /**< (OSCCTRL_DPLLCTRLB) GCLK clock reference Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_Pos         8                                              /**< (OSCCTRL_DPLLCTRLB) Lock Time Position */
#define OSCCTRL_DPLLCTRLB_LTIME_Msk         (_U_(0x7) << OSCCTRL_DPLLCTRLB_LTIME_Pos)      /**< (OSCCTRL_DPLLCTRLB) Lock Time Mask */
#define OSCCTRL_DPLLCTRLB_LTIME(value)      (OSCCTRL_DPLLCTRLB_LTIME_Msk & ((value) << OSCCTRL_DPLLCTRLB_LTIME_Pos))
#define   OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val _U_(0x0)                                       /**< (OSCCTRL_DPLLCTRLB) No time-out. Automatic lock.  */
#define   OSCCTRL_DPLLCTRLB_LTIME_8MS_Val   _U_(0x4)                                       /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 8ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_9MS_Val   _U_(0x5)                                       /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 9ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_10MS_Val  _U_(0x6)                                       /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 10ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_11MS_Val  _U_(0x7)                                       /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 11ms  */
#define OSCCTRL_DPLLCTRLB_LTIME_DEFAULT     (OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)  /**< (OSCCTRL_DPLLCTRLB) No time-out. Automatic lock. Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_8MS         (OSCCTRL_DPLLCTRLB_LTIME_8MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)  /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 8ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_9MS         (OSCCTRL_DPLLCTRLB_LTIME_9MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)  /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 9ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_10MS        (OSCCTRL_DPLLCTRLB_LTIME_10MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)  /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 10ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_11MS        (OSCCTRL_DPLLCTRLB_LTIME_11MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)  /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 11ms Position  */
#define OSCCTRL_DPLLCTRLB_LBYPASS_Pos       12                                             /**< (OSCCTRL_DPLLCTRLB) Lock Bypass Position */
#define OSCCTRL_DPLLCTRLB_LBYPASS_Msk       (_U_(0x1) << OSCCTRL_DPLLCTRLB_LBYPASS_Pos)    /**< (OSCCTRL_DPLLCTRLB) Lock Bypass Mask */
#define OSCCTRL_DPLLCTRLB_LBYPASS           OSCCTRL_DPLLCTRLB_LBYPASS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLCTRLB_LBYPASS_Msk instead */
#define OSCCTRL_DPLLCTRLB_DIV_Pos           16                                             /**< (OSCCTRL_DPLLCTRLB) Clock Divider Position */
#define OSCCTRL_DPLLCTRLB_DIV_Msk           (_U_(0x7FF) << OSCCTRL_DPLLCTRLB_DIV_Pos)      /**< (OSCCTRL_DPLLCTRLB) Clock Divider Mask */
#define OSCCTRL_DPLLCTRLB_DIV(value)        (OSCCTRL_DPLLCTRLB_DIV_Msk & ((value) << OSCCTRL_DPLLCTRLB_DIV_Pos))
#define OSCCTRL_DPLLCTRLB_MASK              _U_(0x7FF173F)                                 /**< \deprecated (OSCCTRL_DPLLCTRLB) Register MASK  (Use OSCCTRL_DPLLCTRLB_Msk instead)  */
#define OSCCTRL_DPLLCTRLB_Msk               _U_(0x7FF173F)                                 /**< (OSCCTRL_DPLLCTRLB) Register Mask  */


/* -------- OSCCTRL_DPLLPRESC : (OSCCTRL Offset: 0x34) (R/W 8) DPLL Prescaler -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PRESC:2;                   /**< bit:   0..1  Output Clock Prescaler                   */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_DPLLPRESC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLPRESC_OFFSET            (0x34)                                        /**<  (OSCCTRL_DPLLPRESC) DPLL Prescaler  Offset */
#define OSCCTRL_DPLLPRESC_RESETVALUE        _U_(0x00)                                     /**<  (OSCCTRL_DPLLPRESC) DPLL Prescaler  Reset Value */

#define OSCCTRL_DPLLPRESC_PRESC_Pos         0                                              /**< (OSCCTRL_DPLLPRESC) Output Clock Prescaler Position */
#define OSCCTRL_DPLLPRESC_PRESC_Msk         (_U_(0x3) << OSCCTRL_DPLLPRESC_PRESC_Pos)      /**< (OSCCTRL_DPLLPRESC) Output Clock Prescaler Mask */
#define OSCCTRL_DPLLPRESC_PRESC(value)      (OSCCTRL_DPLLPRESC_PRESC_Msk & ((value) << OSCCTRL_DPLLPRESC_PRESC_Pos))
#define   OSCCTRL_DPLLPRESC_PRESC_DIV1_Val  _U_(0x0)                                       /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 1  */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV2_Val  _U_(0x1)                                       /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 2  */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV4_Val  _U_(0x2)                                       /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 4  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV1        (OSCCTRL_DPLLPRESC_PRESC_DIV1_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)  /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 1 Position  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV2        (OSCCTRL_DPLLPRESC_PRESC_DIV2_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)  /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 2 Position  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV4        (OSCCTRL_DPLLPRESC_PRESC_DIV4_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)  /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 4 Position  */
#define OSCCTRL_DPLLPRESC_MASK              _U_(0x03)                                      /**< \deprecated (OSCCTRL_DPLLPRESC) Register MASK  (Use OSCCTRL_DPLLPRESC_Msk instead)  */
#define OSCCTRL_DPLLPRESC_Msk               _U_(0x03)                                      /**< (OSCCTRL_DPLLPRESC) Register Mask  */


/* -------- OSCCTRL_DPLLSYNCBUSY : (OSCCTRL Offset: 0x38) (R/ 8) DPLL Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :1;                        /**< bit:      0  Reserved */
    uint8_t  ENABLE:1;                  /**< bit:      1  DPLL Enable Synchronization Status       */
    uint8_t  DPLLRATIO:1;               /**< bit:      2  DPLL Ratio Synchronization Status        */
    uint8_t  DPLLPRESC:1;               /**< bit:      3  DPLL Prescaler Synchronization Status    */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_DPLLSYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSYNCBUSY_OFFSET         (0x38)                                        /**<  (OSCCTRL_DPLLSYNCBUSY) DPLL Synchronization Busy  Offset */
#define OSCCTRL_DPLLSYNCBUSY_RESETVALUE     _U_(0x00)                                     /**<  (OSCCTRL_DPLLSYNCBUSY) DPLL Synchronization Busy  Reset Value */

#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos     1                                              /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk     (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos)  /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE         OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk instead */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos  2                                              /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Ratio Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk  (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos)  /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Ratio Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO      OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk instead */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos  3                                              /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk  (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos)  /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC      OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk instead */
#define OSCCTRL_DPLLSYNCBUSY_MASK           _U_(0x0E)                                      /**< \deprecated (OSCCTRL_DPLLSYNCBUSY) Register MASK  (Use OSCCTRL_DPLLSYNCBUSY_Msk instead)  */
#define OSCCTRL_DPLLSYNCBUSY_Msk            _U_(0x0E)                                      /**< (OSCCTRL_DPLLSYNCBUSY) Register Mask  */


/* -------- OSCCTRL_DPLLSTATUS : (OSCCTRL Offset: 0x3c) (R/ 8) DPLL Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  LOCK:1;                    /**< bit:      0  DPLL Lock Status                         */
    uint8_t  CLKRDY:1;                  /**< bit:      1  DPLL Clock Ready                         */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} OSCCTRL_DPLLSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSTATUS_OFFSET           (0x3C)                                        /**<  (OSCCTRL_DPLLSTATUS) DPLL Status  Offset */
#define OSCCTRL_DPLLSTATUS_RESETVALUE       _U_(0x00)                                     /**<  (OSCCTRL_DPLLSTATUS) DPLL Status  Reset Value */

#define OSCCTRL_DPLLSTATUS_LOCK_Pos         0                                              /**< (OSCCTRL_DPLLSTATUS) DPLL Lock Status Position */
#define OSCCTRL_DPLLSTATUS_LOCK_Msk         (_U_(0x1) << OSCCTRL_DPLLSTATUS_LOCK_Pos)      /**< (OSCCTRL_DPLLSTATUS) DPLL Lock Status Mask */
#define OSCCTRL_DPLLSTATUS_LOCK             OSCCTRL_DPLLSTATUS_LOCK_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLSTATUS_LOCK_Msk instead */
#define OSCCTRL_DPLLSTATUS_CLKRDY_Pos       1                                              /**< (OSCCTRL_DPLLSTATUS) DPLL Clock Ready Position */
#define OSCCTRL_DPLLSTATUS_CLKRDY_Msk       (_U_(0x1) << OSCCTRL_DPLLSTATUS_CLKRDY_Pos)    /**< (OSCCTRL_DPLLSTATUS) DPLL Clock Ready Mask */
#define OSCCTRL_DPLLSTATUS_CLKRDY           OSCCTRL_DPLLSTATUS_CLKRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use OSCCTRL_DPLLSTATUS_CLKRDY_Msk instead */
#define OSCCTRL_DPLLSTATUS_MASK             _U_(0x03)                                      /**< \deprecated (OSCCTRL_DPLLSTATUS) Register MASK  (Use OSCCTRL_DPLLSTATUS_Msk instead)  */
#define OSCCTRL_DPLLSTATUS_Msk              _U_(0x03)                                      /**< (OSCCTRL_DPLLSTATUS) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief OSCCTRL hardware registers */
typedef struct {  /* Oscillators Control */
  __IO uint32_t INTENCLR;       /**< (OSCCTRL Offset: 0x00) Interrupt Enable Clear */
  __IO uint32_t INTENSET;       /**< (OSCCTRL Offset: 0x04) Interrupt Enable Set */
  __IO uint32_t INTFLAG;        /**< (OSCCTRL Offset: 0x08) Interrupt Flag Status and Clear */
  __I  uint32_t STATUS;         /**< (OSCCTRL Offset: 0x0C) Power and Clocks Status */
  __IO uint16_t XOSCCTRL;       /**< (OSCCTRL Offset: 0x10) External Multipurpose Crystal Oscillator (XOSC) Control */
  __I  uint8_t                        Reserved1[2];
  __IO uint8_t OSC16MCTRL;     /**< (OSCCTRL Offset: 0x14) 16MHz Internal Oscillator (OSC16M) Control */
  __I  uint8_t                        Reserved2[3];
  __IO uint16_t DFLLCTRL;       /**< (OSCCTRL Offset: 0x18) DFLL48M Control */
  __I  uint8_t                        Reserved3[2];
  __IO uint32_t DFLLVAL;        /**< (OSCCTRL Offset: 0x1C) DFLL48M Value */
  __IO uint32_t DFLLMUL;        /**< (OSCCTRL Offset: 0x20) DFLL48M Multiplier */
  __IO uint8_t DFLLSYNC;       /**< (OSCCTRL Offset: 0x24) DFLL48M Synchronization */
  __I  uint8_t                        Reserved4[3];
  __IO uint8_t DPLLCTRLA;      /**< (OSCCTRL Offset: 0x28) DPLL Control */
  __I  uint8_t                        Reserved5[3];
  __IO uint32_t DPLLRATIO;      /**< (OSCCTRL Offset: 0x2C) DPLL Ratio Control */
  __IO uint32_t DPLLCTRLB;      /**< (OSCCTRL Offset: 0x30) Digital Core Configuration */
  __IO uint8_t DPLLPRESC;      /**< (OSCCTRL Offset: 0x34) DPLL Prescaler */
  __I  uint8_t                        Reserved6[3];
  __I  uint8_t DPLLSYNCBUSY;   /**< (OSCCTRL Offset: 0x38) DPLL Synchronization Busy */
  __I  uint8_t                        Reserved7[3];
  __I  uint8_t DPLLSTATUS;     /**< (OSCCTRL Offset: 0x3C) DPLL Status */
} Oscctrl;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief OSCCTRL hardware registers */
typedef struct {  /* Oscillators Control */
  __IO OSCCTRL_INTENCLR_Type          INTENCLR;       /**< Offset: 0x00 (R/W  32) Interrupt Enable Clear */
  __IO OSCCTRL_INTENSET_Type          INTENSET;       /**< Offset: 0x04 (R/W  32) Interrupt Enable Set */
  __IO OSCCTRL_INTFLAG_Type           INTFLAG;        /**< Offset: 0x08 (R/W  32) Interrupt Flag Status and Clear */
  __I  OSCCTRL_STATUS_Type            STATUS;         /**< Offset: 0x0C (R/   32) Power and Clocks Status */
  __IO OSCCTRL_XOSCCTRL_Type          XOSCCTRL;       /**< Offset: 0x10 (R/W  16) External Multipurpose Crystal Oscillator (XOSC) Control */
  __I  uint8_t                        Reserved1[2];
  __IO OSCCTRL_OSC16MCTRL_Type        OSC16MCTRL;     /**< Offset: 0x14 (R/W   8) 16MHz Internal Oscillator (OSC16M) Control */
  __I  uint8_t                        Reserved2[3];
  __IO OSCCTRL_DFLLCTRL_Type          DFLLCTRL;       /**< Offset: 0x18 (R/W  16) DFLL48M Control */
  __I  uint8_t                        Reserved3[2];
  __IO OSCCTRL_DFLLVAL_Type           DFLLVAL;        /**< Offset: 0x1C (R/W  32) DFLL48M Value */
  __IO OSCCTRL_DFLLMUL_Type           DFLLMUL;        /**< Offset: 0x20 (R/W  32) DFLL48M Multiplier */
  __IO OSCCTRL_DFLLSYNC_Type          DFLLSYNC;       /**< Offset: 0x24 (R/W   8) DFLL48M Synchronization */
  __I  uint8_t                        Reserved4[3];
  __IO OSCCTRL_DPLLCTRLA_Type         DPLLCTRLA;      /**< Offset: 0x28 (R/W   8) DPLL Control */
  __I  uint8_t                        Reserved5[3];
  __IO OSCCTRL_DPLLRATIO_Type         DPLLRATIO;      /**< Offset: 0x2C (R/W  32) DPLL Ratio Control */
  __IO OSCCTRL_DPLLCTRLB_Type         DPLLCTRLB;      /**< Offset: 0x30 (R/W  32) Digital Core Configuration */
  __IO OSCCTRL_DPLLPRESC_Type         DPLLPRESC;      /**< Offset: 0x34 (R/W   8) DPLL Prescaler */
  __I  uint8_t                        Reserved6[3];
  __I  OSCCTRL_DPLLSYNCBUSY_Type      DPLLSYNCBUSY;   /**< Offset: 0x38 (R/    8) DPLL Synchronization Busy */
  __I  uint8_t                        Reserved7[3];
  __I  OSCCTRL_DPLLSTATUS_Type        DPLLSTATUS;     /**< Offset: 0x3C (R/    8) DPLL Status */
} Oscctrl;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Oscillators Control' */

#endif /* _WLR089_OSCCTRL_COMPONENT_H_ */

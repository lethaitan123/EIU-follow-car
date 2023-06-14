/**
 * \brief Component description for MCLK
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
#ifndef _WLR089_MCLK_COMPONENT_H_
#define _WLR089_MCLK_COMPONENT_H_
#define _WLR089_MCLK_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_MCLK b'Main Clock'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MCLK */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define MCLK_U2234                      /**< (MCLK) Module ID */
#define REV_MCLK 0x101                  /**< (MCLK) Module revision */

/* -------- MCLK_CTRLA : (MCLK Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_CTRLA_OFFSET                   (0x00)                                        /**<  (MCLK_CTRLA) Control A  Offset */
#define MCLK_CTRLA_RESETVALUE               _U_(0x00)                                     /**<  (MCLK_CTRLA) Control A  Reset Value */

#define MCLK_CTRLA_MASK                     _U_(0x00)                                      /**< \deprecated (MCLK_CTRLA) Register MASK  (Use MCLK_CTRLA_Msk instead)  */
#define MCLK_CTRLA_Msk                      _U_(0x00)                                      /**< (MCLK_CTRLA) Register Mask  */


/* -------- MCLK_INTENCLR : (MCLK Offset: 0x01) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CKRDY:1;                   /**< bit:      0  Clock Ready Interrupt Enable             */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENCLR_OFFSET                (0x01)                                        /**<  (MCLK_INTENCLR) Interrupt Enable Clear  Offset */
#define MCLK_INTENCLR_RESETVALUE            _U_(0x00)                                     /**<  (MCLK_INTENCLR) Interrupt Enable Clear  Reset Value */

#define MCLK_INTENCLR_CKRDY_Pos             0                                              /**< (MCLK_INTENCLR) Clock Ready Interrupt Enable Position */
#define MCLK_INTENCLR_CKRDY_Msk             (_U_(0x1) << MCLK_INTENCLR_CKRDY_Pos)          /**< (MCLK_INTENCLR) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENCLR_CKRDY                 MCLK_INTENCLR_CKRDY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_INTENCLR_CKRDY_Msk instead */
#define MCLK_INTENCLR_MASK                  _U_(0x01)                                      /**< \deprecated (MCLK_INTENCLR) Register MASK  (Use MCLK_INTENCLR_Msk instead)  */
#define MCLK_INTENCLR_Msk                   _U_(0x01)                                      /**< (MCLK_INTENCLR) Register Mask  */


/* -------- MCLK_INTENSET : (MCLK Offset: 0x02) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CKRDY:1;                   /**< bit:      0  Clock Ready Interrupt Enable             */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENSET_OFFSET                (0x02)                                        /**<  (MCLK_INTENSET) Interrupt Enable Set  Offset */
#define MCLK_INTENSET_RESETVALUE            _U_(0x00)                                     /**<  (MCLK_INTENSET) Interrupt Enable Set  Reset Value */

#define MCLK_INTENSET_CKRDY_Pos             0                                              /**< (MCLK_INTENSET) Clock Ready Interrupt Enable Position */
#define MCLK_INTENSET_CKRDY_Msk             (_U_(0x1) << MCLK_INTENSET_CKRDY_Pos)          /**< (MCLK_INTENSET) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENSET_CKRDY                 MCLK_INTENSET_CKRDY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_INTENSET_CKRDY_Msk instead */
#define MCLK_INTENSET_MASK                  _U_(0x01)                                      /**< \deprecated (MCLK_INTENSET) Register MASK  (Use MCLK_INTENSET_Msk instead)  */
#define MCLK_INTENSET_Msk                   _U_(0x01)                                      /**< (MCLK_INTENSET) Register Mask  */


/* -------- MCLK_INTFLAG : (MCLK Offset: 0x03) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t CKRDY:1;                   /**< bit:      0  Clock Ready                              */
    __I uint8_t :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTFLAG_OFFSET                 (0x03)                                        /**<  (MCLK_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define MCLK_INTFLAG_RESETVALUE             _U_(0x01)                                     /**<  (MCLK_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define MCLK_INTFLAG_CKRDY_Pos              0                                              /**< (MCLK_INTFLAG) Clock Ready Position */
#define MCLK_INTFLAG_CKRDY_Msk              (_U_(0x1) << MCLK_INTFLAG_CKRDY_Pos)           /**< (MCLK_INTFLAG) Clock Ready Mask */
#define MCLK_INTFLAG_CKRDY                  MCLK_INTFLAG_CKRDY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_INTFLAG_CKRDY_Msk instead */
#define MCLK_INTFLAG_MASK                   _U_(0x01)                                      /**< \deprecated (MCLK_INTFLAG) Register MASK  (Use MCLK_INTFLAG_Msk instead)  */
#define MCLK_INTFLAG_Msk                    _U_(0x01)                                      /**< (MCLK_INTFLAG) Register Mask  */


/* -------- MCLK_CPUDIV : (MCLK Offset: 0x04) (R/W 8) CPU Clock Division -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CPUDIV:8;                  /**< bit:   0..7  CPU Clock Division Factor                */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_CPUDIV_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_CPUDIV_OFFSET                  (0x04)                                        /**<  (MCLK_CPUDIV) CPU Clock Division  Offset */
#define MCLK_CPUDIV_RESETVALUE              _U_(0x01)                                     /**<  (MCLK_CPUDIV) CPU Clock Division  Reset Value */

#define MCLK_CPUDIV_CPUDIV_Pos              0                                              /**< (MCLK_CPUDIV) CPU Clock Division Factor Position */
#define MCLK_CPUDIV_CPUDIV_Msk              (_U_(0xFF) << MCLK_CPUDIV_CPUDIV_Pos)          /**< (MCLK_CPUDIV) CPU Clock Division Factor Mask */
#define MCLK_CPUDIV_CPUDIV(value)           (MCLK_CPUDIV_CPUDIV_Msk & ((value) << MCLK_CPUDIV_CPUDIV_Pos))
#define   MCLK_CPUDIV_CPUDIV_DIV1_Val       _U_(0x1)                                       /**< (MCLK_CPUDIV) Divide by 1  */
#define   MCLK_CPUDIV_CPUDIV_DIV2_Val       _U_(0x2)                                       /**< (MCLK_CPUDIV) Divide by 2  */
#define   MCLK_CPUDIV_CPUDIV_DIV4_Val       _U_(0x4)                                       /**< (MCLK_CPUDIV) Divide by 4  */
#define   MCLK_CPUDIV_CPUDIV_DIV8_Val       _U_(0x8)                                       /**< (MCLK_CPUDIV) Divide by 8  */
#define   MCLK_CPUDIV_CPUDIV_DIV16_Val      _U_(0x10)                                      /**< (MCLK_CPUDIV) Divide by 16  */
#define   MCLK_CPUDIV_CPUDIV_DIV32_Val      _U_(0x20)                                      /**< (MCLK_CPUDIV) Divide by 32  */
#define   MCLK_CPUDIV_CPUDIV_DIV64_Val      _U_(0x40)                                      /**< (MCLK_CPUDIV) Divide by 64  */
#define   MCLK_CPUDIV_CPUDIV_DIV128_Val     _U_(0x80)                                      /**< (MCLK_CPUDIV) Divide by 128  */
#define MCLK_CPUDIV_CPUDIV_DIV1             (MCLK_CPUDIV_CPUDIV_DIV1_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 1 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV2             (MCLK_CPUDIV_CPUDIV_DIV2_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 2 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV4             (MCLK_CPUDIV_CPUDIV_DIV4_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 4 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV8             (MCLK_CPUDIV_CPUDIV_DIV8_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 8 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV16            (MCLK_CPUDIV_CPUDIV_DIV16_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 16 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV32            (MCLK_CPUDIV_CPUDIV_DIV32_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 32 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV64            (MCLK_CPUDIV_CPUDIV_DIV64_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 64 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV128           (MCLK_CPUDIV_CPUDIV_DIV128_Val << MCLK_CPUDIV_CPUDIV_Pos)  /**< (MCLK_CPUDIV) Divide by 128 Position  */
#define MCLK_CPUDIV_MASK                    _U_(0xFF)                                      /**< \deprecated (MCLK_CPUDIV) Register MASK  (Use MCLK_CPUDIV_Msk instead)  */
#define MCLK_CPUDIV_Msk                     _U_(0xFF)                                      /**< (MCLK_CPUDIV) Register Mask  */


/* -------- MCLK_LPDIV : (MCLK Offset: 0x05) (R/W 8) Low-Power Clock Division -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  LPDIV:8;                   /**< bit:   0..7  Low-Power Clock Division Factor          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_LPDIV_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_LPDIV_OFFSET                   (0x05)                                        /**<  (MCLK_LPDIV) Low-Power Clock Division  Offset */
#define MCLK_LPDIV_RESETVALUE               _U_(0x01)                                     /**<  (MCLK_LPDIV) Low-Power Clock Division  Reset Value */

#define MCLK_LPDIV_LPDIV_Pos                0                                              /**< (MCLK_LPDIV) Low-Power Clock Division Factor Position */
#define MCLK_LPDIV_LPDIV_Msk                (_U_(0xFF) << MCLK_LPDIV_LPDIV_Pos)            /**< (MCLK_LPDIV) Low-Power Clock Division Factor Mask */
#define MCLK_LPDIV_LPDIV(value)             (MCLK_LPDIV_LPDIV_Msk & ((value) << MCLK_LPDIV_LPDIV_Pos))
#define   MCLK_LPDIV_LPDIV_DIV1_Val         _U_(0x1)                                       /**< (MCLK_LPDIV) Divide by 1  */
#define   MCLK_LPDIV_LPDIV_DIV2_Val         _U_(0x2)                                       /**< (MCLK_LPDIV) Divide by 2  */
#define   MCLK_LPDIV_LPDIV_DIV4_Val         _U_(0x4)                                       /**< (MCLK_LPDIV) Divide by 4  */
#define   MCLK_LPDIV_LPDIV_DIV8_Val         _U_(0x8)                                       /**< (MCLK_LPDIV) Divide by 8  */
#define   MCLK_LPDIV_LPDIV_DIV16_Val        _U_(0x10)                                      /**< (MCLK_LPDIV) Divide by 16  */
#define   MCLK_LPDIV_LPDIV_DIV32_Val        _U_(0x20)                                      /**< (MCLK_LPDIV) Divide by 32  */
#define   MCLK_LPDIV_LPDIV_DIV64_Val        _U_(0x40)                                      /**< (MCLK_LPDIV) Divide by 64  */
#define   MCLK_LPDIV_LPDIV_DIV128_Val       _U_(0x80)                                      /**< (MCLK_LPDIV) Divide by 128  */
#define MCLK_LPDIV_LPDIV_DIV1               (MCLK_LPDIV_LPDIV_DIV1_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 1 Position  */
#define MCLK_LPDIV_LPDIV_DIV2               (MCLK_LPDIV_LPDIV_DIV2_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 2 Position  */
#define MCLK_LPDIV_LPDIV_DIV4               (MCLK_LPDIV_LPDIV_DIV4_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 4 Position  */
#define MCLK_LPDIV_LPDIV_DIV8               (MCLK_LPDIV_LPDIV_DIV8_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 8 Position  */
#define MCLK_LPDIV_LPDIV_DIV16              (MCLK_LPDIV_LPDIV_DIV16_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 16 Position  */
#define MCLK_LPDIV_LPDIV_DIV32              (MCLK_LPDIV_LPDIV_DIV32_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 32 Position  */
#define MCLK_LPDIV_LPDIV_DIV64              (MCLK_LPDIV_LPDIV_DIV64_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 64 Position  */
#define MCLK_LPDIV_LPDIV_DIV128             (MCLK_LPDIV_LPDIV_DIV128_Val << MCLK_LPDIV_LPDIV_Pos)  /**< (MCLK_LPDIV) Divide by 128 Position  */
#define MCLK_LPDIV_MASK                     _U_(0xFF)                                      /**< \deprecated (MCLK_LPDIV) Register MASK  (Use MCLK_LPDIV_Msk instead)  */
#define MCLK_LPDIV_Msk                      _U_(0xFF)                                      /**< (MCLK_LPDIV) Register Mask  */


/* -------- MCLK_BUPDIV : (MCLK Offset: 0x06) (R/W 8) Backup Clock Division -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  BUPDIV:8;                  /**< bit:   0..7  Backup Clock Division Factor             */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} MCLK_BUPDIV_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_BUPDIV_OFFSET                  (0x06)                                        /**<  (MCLK_BUPDIV) Backup Clock Division  Offset */
#define MCLK_BUPDIV_RESETVALUE              _U_(0x01)                                     /**<  (MCLK_BUPDIV) Backup Clock Division  Reset Value */

#define MCLK_BUPDIV_BUPDIV_Pos              0                                              /**< (MCLK_BUPDIV) Backup Clock Division Factor Position */
#define MCLK_BUPDIV_BUPDIV_Msk              (_U_(0xFF) << MCLK_BUPDIV_BUPDIV_Pos)          /**< (MCLK_BUPDIV) Backup Clock Division Factor Mask */
#define MCLK_BUPDIV_BUPDIV(value)           (MCLK_BUPDIV_BUPDIV_Msk & ((value) << MCLK_BUPDIV_BUPDIV_Pos))
#define   MCLK_BUPDIV_BUPDIV_DIV1_Val       _U_(0x1)                                       /**< (MCLK_BUPDIV) Divide by 1  */
#define   MCLK_BUPDIV_BUPDIV_DIV2_Val       _U_(0x2)                                       /**< (MCLK_BUPDIV) Divide by 2  */
#define   MCLK_BUPDIV_BUPDIV_DIV4_Val       _U_(0x4)                                       /**< (MCLK_BUPDIV) Divide by 4  */
#define   MCLK_BUPDIV_BUPDIV_DIV8_Val       _U_(0x8)                                       /**< (MCLK_BUPDIV) Divide by 8  */
#define   MCLK_BUPDIV_BUPDIV_DIV16_Val      _U_(0x10)                                      /**< (MCLK_BUPDIV) Divide by 16  */
#define   MCLK_BUPDIV_BUPDIV_DIV32_Val      _U_(0x20)                                      /**< (MCLK_BUPDIV) Divide by 32  */
#define   MCLK_BUPDIV_BUPDIV_DIV64_Val      _U_(0x40)                                      /**< (MCLK_BUPDIV) Divide by 64  */
#define   MCLK_BUPDIV_BUPDIV_DIV128_Val     _U_(0x80)                                      /**< (MCLK_BUPDIV) Divide by 128  */
#define MCLK_BUPDIV_BUPDIV_DIV1             (MCLK_BUPDIV_BUPDIV_DIV1_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 1 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV2             (MCLK_BUPDIV_BUPDIV_DIV2_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 2 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV4             (MCLK_BUPDIV_BUPDIV_DIV4_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 4 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV8             (MCLK_BUPDIV_BUPDIV_DIV8_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 8 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV16            (MCLK_BUPDIV_BUPDIV_DIV16_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 16 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV32            (MCLK_BUPDIV_BUPDIV_DIV32_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 32 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV64            (MCLK_BUPDIV_BUPDIV_DIV64_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 64 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV128           (MCLK_BUPDIV_BUPDIV_DIV128_Val << MCLK_BUPDIV_BUPDIV_Pos)  /**< (MCLK_BUPDIV) Divide by 128 Position  */
#define MCLK_BUPDIV_MASK                    _U_(0xFF)                                      /**< \deprecated (MCLK_BUPDIV) Register MASK  (Use MCLK_BUPDIV_Msk instead)  */
#define MCLK_BUPDIV_Msk                     _U_(0xFF)                                      /**< (MCLK_BUPDIV) Register Mask  */


/* -------- MCLK_AHBMASK : (MCLK Offset: 0x10) (R/W 32) AHB Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HPB0_:1;                   /**< bit:      0  HPB0 AHB Clock Mask                      */
    uint32_t HPB1_:1;                   /**< bit:      1  HPB1 AHB Clock Mask                      */
    uint32_t HPB2_:1;                   /**< bit:      2  HPB2 AHB Clock Mask                      */
    uint32_t HPB3_:1;                   /**< bit:      3  HPB3 AHB Clock Mask                      */
    uint32_t HPB4_:1;                   /**< bit:      4  HPB4 AHB Clock Mask                      */
    uint32_t DSU_:1;                    /**< bit:      5  DSU AHB Clock Mask                       */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t NVMCTRL_:1;                /**< bit:      8  NVMCTRL AHB Clock Mask                   */
    uint32_t HSRAM_:1;                  /**< bit:      9  HSRAM AHB Clock Mask                     */
    uint32_t LPRAM_:1;                  /**< bit:     10  LPRAM AHB Clock Mask                     */
    uint32_t DMAC_:1;                   /**< bit:     11  DMAC AHB Clock Mask                      */
    uint32_t USB_:1;                    /**< bit:     12  USB AHB Clock Mask                       */
    uint32_t :1;                        /**< bit:     13  Reserved */
    uint32_t PAC_:1;                    /**< bit:     14  PAC AHB Clock Mask                       */
    uint32_t NVMCTRL_PICACHU_:1;        /**< bit:     15  NVMCTRL_PICACHU AHB Clock Mask           */
    uint32_t L2HBRIDGES_H_:1;           /**< bit:     16  L2HBRIDGES_H AHB Clock Mask              */
    uint32_t H2LBRIDGES_H_:1;           /**< bit:     17  H2LBRIDGES_H AHB Clock Mask              */
    uint32_t HSRAM_AHBSETUPKEEPER_:1;   /**< bit:     18  HSRAM_AHBSETUPKEEPER AHB Clock Mask      */
    uint32_t HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_:1;  /**< bit:     19  HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE AHB Clock Mask */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_AHBMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_AHBMASK_OFFSET                 (0x10)                                        /**<  (MCLK_AHBMASK) AHB Mask  Offset */
#define MCLK_AHBMASK_RESETVALUE             _U_(0xFFFFF)                                  /**<  (MCLK_AHBMASK) AHB Mask  Reset Value */

#define MCLK_AHBMASK_HPB0_Pos               0                                              /**< (MCLK_AHBMASK) HPB0 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB0_Msk               (_U_(0x1) << MCLK_AHBMASK_HPB0_Pos)            /**< (MCLK_AHBMASK) HPB0 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB0                   MCLK_AHBMASK_HPB0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HPB0_Msk instead */
#define MCLK_AHBMASK_HPB1_Pos               1                                              /**< (MCLK_AHBMASK) HPB1 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB1_Msk               (_U_(0x1) << MCLK_AHBMASK_HPB1_Pos)            /**< (MCLK_AHBMASK) HPB1 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB1                   MCLK_AHBMASK_HPB1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HPB1_Msk instead */
#define MCLK_AHBMASK_HPB2_Pos               2                                              /**< (MCLK_AHBMASK) HPB2 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB2_Msk               (_U_(0x1) << MCLK_AHBMASK_HPB2_Pos)            /**< (MCLK_AHBMASK) HPB2 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB2                   MCLK_AHBMASK_HPB2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HPB2_Msk instead */
#define MCLK_AHBMASK_HPB3_Pos               3                                              /**< (MCLK_AHBMASK) HPB3 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB3_Msk               (_U_(0x1) << MCLK_AHBMASK_HPB3_Pos)            /**< (MCLK_AHBMASK) HPB3 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB3                   MCLK_AHBMASK_HPB3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HPB3_Msk instead */
#define MCLK_AHBMASK_HPB4_Pos               4                                              /**< (MCLK_AHBMASK) HPB4 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB4_Msk               (_U_(0x1) << MCLK_AHBMASK_HPB4_Pos)            /**< (MCLK_AHBMASK) HPB4 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB4                   MCLK_AHBMASK_HPB4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HPB4_Msk instead */
#define MCLK_AHBMASK_DSU_Pos                5                                              /**< (MCLK_AHBMASK) DSU AHB Clock Mask Position */
#define MCLK_AHBMASK_DSU_Msk                (_U_(0x1) << MCLK_AHBMASK_DSU_Pos)             /**< (MCLK_AHBMASK) DSU AHB Clock Mask Mask */
#define MCLK_AHBMASK_DSU                    MCLK_AHBMASK_DSU_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_DSU_Msk instead */
#define MCLK_AHBMASK_NVMCTRL_Pos            8                                              /**< (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_Msk            (_U_(0x1) << MCLK_AHBMASK_NVMCTRL_Pos)         /**< (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL                MCLK_AHBMASK_NVMCTRL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_NVMCTRL_Msk instead */
#define MCLK_AHBMASK_HSRAM_Pos              9                                              /**< (MCLK_AHBMASK) HSRAM AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_Msk              (_U_(0x1) << MCLK_AHBMASK_HSRAM_Pos)           /**< (MCLK_AHBMASK) HSRAM AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM                  MCLK_AHBMASK_HSRAM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HSRAM_Msk instead */
#define MCLK_AHBMASK_LPRAM_Pos              10                                             /**< (MCLK_AHBMASK) LPRAM AHB Clock Mask Position */
#define MCLK_AHBMASK_LPRAM_Msk              (_U_(0x1) << MCLK_AHBMASK_LPRAM_Pos)           /**< (MCLK_AHBMASK) LPRAM AHB Clock Mask Mask */
#define MCLK_AHBMASK_LPRAM                  MCLK_AHBMASK_LPRAM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_LPRAM_Msk instead */
#define MCLK_AHBMASK_DMAC_Pos               11                                             /**< (MCLK_AHBMASK) DMAC AHB Clock Mask Position */
#define MCLK_AHBMASK_DMAC_Msk               (_U_(0x1) << MCLK_AHBMASK_DMAC_Pos)            /**< (MCLK_AHBMASK) DMAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_DMAC                   MCLK_AHBMASK_DMAC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_DMAC_Msk instead */
#define MCLK_AHBMASK_USB_Pos                12                                             /**< (MCLK_AHBMASK) USB AHB Clock Mask Position */
#define MCLK_AHBMASK_USB_Msk                (_U_(0x1) << MCLK_AHBMASK_USB_Pos)             /**< (MCLK_AHBMASK) USB AHB Clock Mask Mask */
#define MCLK_AHBMASK_USB                    MCLK_AHBMASK_USB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_USB_Msk instead */
#define MCLK_AHBMASK_PAC_Pos                14                                             /**< (MCLK_AHBMASK) PAC AHB Clock Mask Position */
#define MCLK_AHBMASK_PAC_Msk                (_U_(0x1) << MCLK_AHBMASK_PAC_Pos)             /**< (MCLK_AHBMASK) PAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_PAC                    MCLK_AHBMASK_PAC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_PAC_Msk instead */
#define MCLK_AHBMASK_NVMCTRL_PICACHU_Pos    15                                             /**< (MCLK_AHBMASK) NVMCTRL_PICACHU AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_PICACHU_Msk    (_U_(0x1) << MCLK_AHBMASK_NVMCTRL_PICACHU_Pos)  /**< (MCLK_AHBMASK) NVMCTRL_PICACHU AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL_PICACHU        MCLK_AHBMASK_NVMCTRL_PICACHU_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_NVMCTRL_PICACHU_Msk instead */
#define MCLK_AHBMASK_L2HBRIDGES_H_Pos       16                                             /**< (MCLK_AHBMASK) L2HBRIDGES_H AHB Clock Mask Position */
#define MCLK_AHBMASK_L2HBRIDGES_H_Msk       (_U_(0x1) << MCLK_AHBMASK_L2HBRIDGES_H_Pos)    /**< (MCLK_AHBMASK) L2HBRIDGES_H AHB Clock Mask Mask */
#define MCLK_AHBMASK_L2HBRIDGES_H           MCLK_AHBMASK_L2HBRIDGES_H_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_L2HBRIDGES_H_Msk instead */
#define MCLK_AHBMASK_H2LBRIDGES_H_Pos       17                                             /**< (MCLK_AHBMASK) H2LBRIDGES_H AHB Clock Mask Position */
#define MCLK_AHBMASK_H2LBRIDGES_H_Msk       (_U_(0x1) << MCLK_AHBMASK_H2LBRIDGES_H_Pos)    /**< (MCLK_AHBMASK) H2LBRIDGES_H AHB Clock Mask Mask */
#define MCLK_AHBMASK_H2LBRIDGES_H           MCLK_AHBMASK_H2LBRIDGES_H_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_H2LBRIDGES_H_Msk instead */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Pos 18                                             /**< (MCLK_AHBMASK) HSRAM_AHBSETUPKEEPER AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Msk (_U_(0x1) << MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Pos)  /**< (MCLK_AHBMASK) HSRAM_AHBSETUPKEEPER AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER   MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Msk instead */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Pos 19                                             /**< (MCLK_AHBMASK) HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Msk (_U_(0x1) << MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Pos)  /**< (MCLK_AHBMASK) HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Msk  /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Msk instead */
#define MCLK_AHBMASK_MASK                   _U_(0xFDF3F)                                   /**< \deprecated (MCLK_AHBMASK) Register MASK  (Use MCLK_AHBMASK_Msk instead)  */
#define MCLK_AHBMASK_Msk                    _U_(0xFDF3F)                                   /**< (MCLK_AHBMASK) Register Mask  */

#define MCLK_AHBMASK_HPB_Pos                0                                              /**< (MCLK_AHBMASK Position) HPBx AHB Clock Mask */
#define MCLK_AHBMASK_HPB_Msk                (_U_(0x1F) << MCLK_AHBMASK_HPB_Pos)            /**< (MCLK_AHBMASK Mask) HPB */
#define MCLK_AHBMASK_HPB(value)             (MCLK_AHBMASK_HPB_Msk & ((value) << MCLK_AHBMASK_HPB_Pos))  

/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PM_:1;                     /**< bit:      0  PM APB Clock Enable                      */
    uint32_t MCLK_:1;                   /**< bit:      1  MCLK APB Clock Enable                    */
    uint32_t RSTC_:1;                   /**< bit:      2  RSTC APB Clock Enable                    */
    uint32_t OSCCTRL_:1;                /**< bit:      3  OSCCTRL APB Clock Enable                 */
    uint32_t OSC32KCTRL_:1;             /**< bit:      4  OSC32KCTRL APB Clock Enable              */
    uint32_t SUPC_:1;                   /**< bit:      5  SUPC APB Clock Enable                    */
    uint32_t GCLK_:1;                   /**< bit:      6  GCLK APB Clock Enable                    */
    uint32_t WDT_:1;                    /**< bit:      7  WDT APB Clock Enable                     */
    uint32_t RTC_:1;                    /**< bit:      8  RTC APB Clock Enable                     */
    uint32_t EIC_:1;                    /**< bit:      9  EIC APB Clock Enable                     */
    uint32_t PORT_:1;                   /**< bit:     10  PORT APB Clock Enable                    */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_APBAMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBAMASK_OFFSET                (0x14)                                        /**<  (MCLK_APBAMASK) APBA Mask  Offset */
#define MCLK_APBAMASK_RESETVALUE            _U_(0x1FFF)                                   /**<  (MCLK_APBAMASK) APBA Mask  Reset Value */

#define MCLK_APBAMASK_PM_Pos                0                                              /**< (MCLK_APBAMASK) PM APB Clock Enable Position */
#define MCLK_APBAMASK_PM_Msk                (_U_(0x1) << MCLK_APBAMASK_PM_Pos)             /**< (MCLK_APBAMASK) PM APB Clock Enable Mask */
#define MCLK_APBAMASK_PM                    MCLK_APBAMASK_PM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_PM_Msk instead */
#define MCLK_APBAMASK_MCLK_Pos              1                                              /**< (MCLK_APBAMASK) MCLK APB Clock Enable Position */
#define MCLK_APBAMASK_MCLK_Msk              (_U_(0x1) << MCLK_APBAMASK_MCLK_Pos)           /**< (MCLK_APBAMASK) MCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_MCLK                  MCLK_APBAMASK_MCLK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_MCLK_Msk instead */
#define MCLK_APBAMASK_RSTC_Pos              2                                              /**< (MCLK_APBAMASK) RSTC APB Clock Enable Position */
#define MCLK_APBAMASK_RSTC_Msk              (_U_(0x1) << MCLK_APBAMASK_RSTC_Pos)           /**< (MCLK_APBAMASK) RSTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RSTC                  MCLK_APBAMASK_RSTC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_RSTC_Msk instead */
#define MCLK_APBAMASK_OSCCTRL_Pos           3                                              /**< (MCLK_APBAMASK) OSCCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSCCTRL_Msk           (_U_(0x1) << MCLK_APBAMASK_OSCCTRL_Pos)        /**< (MCLK_APBAMASK) OSCCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSCCTRL               MCLK_APBAMASK_OSCCTRL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_OSCCTRL_Msk instead */
#define MCLK_APBAMASK_OSC32KCTRL_Pos        4                                              /**< (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSC32KCTRL_Msk        (_U_(0x1) << MCLK_APBAMASK_OSC32KCTRL_Pos)     /**< (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSC32KCTRL            MCLK_APBAMASK_OSC32KCTRL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_OSC32KCTRL_Msk instead */
#define MCLK_APBAMASK_SUPC_Pos              5                                              /**< (MCLK_APBAMASK) SUPC APB Clock Enable Position */
#define MCLK_APBAMASK_SUPC_Msk              (_U_(0x1) << MCLK_APBAMASK_SUPC_Pos)           /**< (MCLK_APBAMASK) SUPC APB Clock Enable Mask */
#define MCLK_APBAMASK_SUPC                  MCLK_APBAMASK_SUPC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_SUPC_Msk instead */
#define MCLK_APBAMASK_GCLK_Pos              6                                              /**< (MCLK_APBAMASK) GCLK APB Clock Enable Position */
#define MCLK_APBAMASK_GCLK_Msk              (_U_(0x1) << MCLK_APBAMASK_GCLK_Pos)           /**< (MCLK_APBAMASK) GCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_GCLK                  MCLK_APBAMASK_GCLK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_GCLK_Msk instead */
#define MCLK_APBAMASK_WDT_Pos               7                                              /**< (MCLK_APBAMASK) WDT APB Clock Enable Position */
#define MCLK_APBAMASK_WDT_Msk               (_U_(0x1) << MCLK_APBAMASK_WDT_Pos)            /**< (MCLK_APBAMASK) WDT APB Clock Enable Mask */
#define MCLK_APBAMASK_WDT                   MCLK_APBAMASK_WDT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_WDT_Msk instead */
#define MCLK_APBAMASK_RTC_Pos               8                                              /**< (MCLK_APBAMASK) RTC APB Clock Enable Position */
#define MCLK_APBAMASK_RTC_Msk               (_U_(0x1) << MCLK_APBAMASK_RTC_Pos)            /**< (MCLK_APBAMASK) RTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RTC                   MCLK_APBAMASK_RTC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_RTC_Msk instead */
#define MCLK_APBAMASK_EIC_Pos               9                                              /**< (MCLK_APBAMASK) EIC APB Clock Enable Position */
#define MCLK_APBAMASK_EIC_Msk               (_U_(0x1) << MCLK_APBAMASK_EIC_Pos)            /**< (MCLK_APBAMASK) EIC APB Clock Enable Mask */
#define MCLK_APBAMASK_EIC                   MCLK_APBAMASK_EIC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_EIC_Msk instead */
#define MCLK_APBAMASK_PORT_Pos              10                                             /**< (MCLK_APBAMASK) PORT APB Clock Enable Position */
#define MCLK_APBAMASK_PORT_Msk              (_U_(0x1) << MCLK_APBAMASK_PORT_Pos)           /**< (MCLK_APBAMASK) PORT APB Clock Enable Mask */
#define MCLK_APBAMASK_PORT                  MCLK_APBAMASK_PORT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBAMASK_PORT_Msk instead */
#define MCLK_APBAMASK_MASK                  _U_(0x7FF)                                     /**< \deprecated (MCLK_APBAMASK) Register MASK  (Use MCLK_APBAMASK_Msk instead)  */
#define MCLK_APBAMASK_Msk                   _U_(0x7FF)                                     /**< (MCLK_APBAMASK) Register Mask  */


/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USB_:1;                    /**< bit:      0  USB APB Clock Enable                     */
    uint32_t DSU_:1;                    /**< bit:      1  DSU APB Clock Enable                     */
    uint32_t NVMCTRL_:1;                /**< bit:      2  NVMCTRL APB Clock Enable                 */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_APBBMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBBMASK_OFFSET                (0x18)                                        /**<  (MCLK_APBBMASK) APBB Mask  Offset */
#define MCLK_APBBMASK_RESETVALUE            _U_(0x17)                                     /**<  (MCLK_APBBMASK) APBB Mask  Reset Value */

#define MCLK_APBBMASK_USB_Pos               0                                              /**< (MCLK_APBBMASK) USB APB Clock Enable Position */
#define MCLK_APBBMASK_USB_Msk               (_U_(0x1) << MCLK_APBBMASK_USB_Pos)            /**< (MCLK_APBBMASK) USB APB Clock Enable Mask */
#define MCLK_APBBMASK_USB                   MCLK_APBBMASK_USB_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBBMASK_USB_Msk instead */
#define MCLK_APBBMASK_DSU_Pos               1                                              /**< (MCLK_APBBMASK) DSU APB Clock Enable Position */
#define MCLK_APBBMASK_DSU_Msk               (_U_(0x1) << MCLK_APBBMASK_DSU_Pos)            /**< (MCLK_APBBMASK) DSU APB Clock Enable Mask */
#define MCLK_APBBMASK_DSU                   MCLK_APBBMASK_DSU_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBBMASK_DSU_Msk instead */
#define MCLK_APBBMASK_NVMCTRL_Pos           2                                              /**< (MCLK_APBBMASK) NVMCTRL APB Clock Enable Position */
#define MCLK_APBBMASK_NVMCTRL_Msk           (_U_(0x1) << MCLK_APBBMASK_NVMCTRL_Pos)        /**< (MCLK_APBBMASK) NVMCTRL APB Clock Enable Mask */
#define MCLK_APBBMASK_NVMCTRL               MCLK_APBBMASK_NVMCTRL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBBMASK_NVMCTRL_Msk instead */
#define MCLK_APBBMASK_MASK                  _U_(0x07)                                      /**< \deprecated (MCLK_APBBMASK) Register MASK  (Use MCLK_APBBMASK_Msk instead)  */
#define MCLK_APBBMASK_Msk                   _U_(0x07)                                      /**< (MCLK_APBBMASK) Register Mask  */


/* -------- MCLK_APBCMASK : (MCLK Offset: 0x1c) (R/W 32) APBC Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SERCOM0_:1;                /**< bit:      0  SERCOM0 APB Clock Enable                 */
    uint32_t SERCOM1_:1;                /**< bit:      1  SERCOM1 APB Clock Enable                 */
    uint32_t SERCOM2_:1;                /**< bit:      2  SERCOM2 APB Clock Enable                 */
    uint32_t SERCOM3_:1;                /**< bit:      3  SERCOM3 APB Clock Enable                 */
    uint32_t SERCOM4_:1;                /**< bit:      4  SERCOM4 APB Clock Enable                 */
    uint32_t TCC0_:1;                   /**< bit:      5  TCC0 APB Clock Enable                    */
    uint32_t TCC1_:1;                   /**< bit:      6  TCC1 APB Clock Enable                    */
    uint32_t TCC2_:1;                   /**< bit:      7  TCC2 APB Clock Enable                    */
    uint32_t TC0_:1;                    /**< bit:      8  TC0 APB Clock Enable                     */
    uint32_t TC1_:1;                    /**< bit:      9  TC1 APB Clock Enable                     */
    uint32_t TC2_:1;                    /**< bit:     10  TC2 APB Clock Enable                     */
    uint32_t TC3_:1;                    /**< bit:     11  TC3 APB Clock Enable                     */
    uint32_t DAC_:1;                    /**< bit:     12  DAC APB Clock Enable                     */
    uint32_t AES_:1;                    /**< bit:     13  AES APB Clock Enable                     */
    uint32_t TRNG_:1;                   /**< bit:     14  TRNG APB Clock Enable                    */
    uint32_t :17;                       /**< bit: 15..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_APBCMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBCMASK_OFFSET                (0x1C)                                        /**<  (MCLK_APBCMASK) APBC Mask  Offset */
#define MCLK_APBCMASK_RESETVALUE            _U_(0x7FFF)                                   /**<  (MCLK_APBCMASK) APBC Mask  Reset Value */

#define MCLK_APBCMASK_SERCOM0_Pos           0                                              /**< (MCLK_APBCMASK) SERCOM0 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM0_Msk           (_U_(0x1) << MCLK_APBCMASK_SERCOM0_Pos)        /**< (MCLK_APBCMASK) SERCOM0 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM0               MCLK_APBCMASK_SERCOM0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_SERCOM0_Msk instead */
#define MCLK_APBCMASK_SERCOM1_Pos           1                                              /**< (MCLK_APBCMASK) SERCOM1 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM1_Msk           (_U_(0x1) << MCLK_APBCMASK_SERCOM1_Pos)        /**< (MCLK_APBCMASK) SERCOM1 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM1               MCLK_APBCMASK_SERCOM1_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_SERCOM1_Msk instead */
#define MCLK_APBCMASK_SERCOM2_Pos           2                                              /**< (MCLK_APBCMASK) SERCOM2 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM2_Msk           (_U_(0x1) << MCLK_APBCMASK_SERCOM2_Pos)        /**< (MCLK_APBCMASK) SERCOM2 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM2               MCLK_APBCMASK_SERCOM2_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_SERCOM2_Msk instead */
#define MCLK_APBCMASK_SERCOM3_Pos           3                                              /**< (MCLK_APBCMASK) SERCOM3 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM3_Msk           (_U_(0x1) << MCLK_APBCMASK_SERCOM3_Pos)        /**< (MCLK_APBCMASK) SERCOM3 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM3               MCLK_APBCMASK_SERCOM3_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_SERCOM3_Msk instead */
#define MCLK_APBCMASK_SERCOM4_Pos           4                                              /**< (MCLK_APBCMASK) SERCOM4 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM4_Msk           (_U_(0x1) << MCLK_APBCMASK_SERCOM4_Pos)        /**< (MCLK_APBCMASK) SERCOM4 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM4               MCLK_APBCMASK_SERCOM4_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_SERCOM4_Msk instead */
#define MCLK_APBCMASK_TCC0_Pos              5                                              /**< (MCLK_APBCMASK) TCC0 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC0_Msk              (_U_(0x1) << MCLK_APBCMASK_TCC0_Pos)           /**< (MCLK_APBCMASK) TCC0 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC0                  MCLK_APBCMASK_TCC0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TCC0_Msk instead */
#define MCLK_APBCMASK_TCC1_Pos              6                                              /**< (MCLK_APBCMASK) TCC1 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC1_Msk              (_U_(0x1) << MCLK_APBCMASK_TCC1_Pos)           /**< (MCLK_APBCMASK) TCC1 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC1                  MCLK_APBCMASK_TCC1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TCC1_Msk instead */
#define MCLK_APBCMASK_TCC2_Pos              7                                              /**< (MCLK_APBCMASK) TCC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC2_Msk              (_U_(0x1) << MCLK_APBCMASK_TCC2_Pos)           /**< (MCLK_APBCMASK) TCC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC2                  MCLK_APBCMASK_TCC2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TCC2_Msk instead */
#define MCLK_APBCMASK_TC0_Pos               8                                              /**< (MCLK_APBCMASK) TC0 APB Clock Enable Position */
#define MCLK_APBCMASK_TC0_Msk               (_U_(0x1) << MCLK_APBCMASK_TC0_Pos)            /**< (MCLK_APBCMASK) TC0 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC0                   MCLK_APBCMASK_TC0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TC0_Msk instead */
#define MCLK_APBCMASK_TC1_Pos               9                                              /**< (MCLK_APBCMASK) TC1 APB Clock Enable Position */
#define MCLK_APBCMASK_TC1_Msk               (_U_(0x1) << MCLK_APBCMASK_TC1_Pos)            /**< (MCLK_APBCMASK) TC1 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC1                   MCLK_APBCMASK_TC1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TC1_Msk instead */
#define MCLK_APBCMASK_TC2_Pos               10                                             /**< (MCLK_APBCMASK) TC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TC2_Msk               (_U_(0x1) << MCLK_APBCMASK_TC2_Pos)            /**< (MCLK_APBCMASK) TC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC2                   MCLK_APBCMASK_TC2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TC2_Msk instead */
#define MCLK_APBCMASK_TC3_Pos               11                                             /**< (MCLK_APBCMASK) TC3 APB Clock Enable Position */
#define MCLK_APBCMASK_TC3_Msk               (_U_(0x1) << MCLK_APBCMASK_TC3_Pos)            /**< (MCLK_APBCMASK) TC3 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC3                   MCLK_APBCMASK_TC3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TC3_Msk instead */
#define MCLK_APBCMASK_DAC_Pos               12                                             /**< (MCLK_APBCMASK) DAC APB Clock Enable Position */
#define MCLK_APBCMASK_DAC_Msk               (_U_(0x1) << MCLK_APBCMASK_DAC_Pos)            /**< (MCLK_APBCMASK) DAC APB Clock Enable Mask */
#define MCLK_APBCMASK_DAC                   MCLK_APBCMASK_DAC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_DAC_Msk instead */
#define MCLK_APBCMASK_AES_Pos               13                                             /**< (MCLK_APBCMASK) AES APB Clock Enable Position */
#define MCLK_APBCMASK_AES_Msk               (_U_(0x1) << MCLK_APBCMASK_AES_Pos)            /**< (MCLK_APBCMASK) AES APB Clock Enable Mask */
#define MCLK_APBCMASK_AES                   MCLK_APBCMASK_AES_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_AES_Msk instead */
#define MCLK_APBCMASK_TRNG_Pos              14                                             /**< (MCLK_APBCMASK) TRNG APB Clock Enable Position */
#define MCLK_APBCMASK_TRNG_Msk              (_U_(0x1) << MCLK_APBCMASK_TRNG_Pos)           /**< (MCLK_APBCMASK) TRNG APB Clock Enable Mask */
#define MCLK_APBCMASK_TRNG                  MCLK_APBCMASK_TRNG_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBCMASK_TRNG_Msk instead */
#define MCLK_APBCMASK_MASK                  _U_(0x7FFF)                                    /**< \deprecated (MCLK_APBCMASK) Register MASK  (Use MCLK_APBCMASK_Msk instead)  */
#define MCLK_APBCMASK_Msk                   _U_(0x7FFF)                                    /**< (MCLK_APBCMASK) Register Mask  */

#define MCLK_APBCMASK_SERCOM_Pos            0                                              /**< (MCLK_APBCMASK Position) SERCOMx APB Clock Enable */
#define MCLK_APBCMASK_SERCOM_Msk            (_U_(0x1F) << MCLK_APBCMASK_SERCOM_Pos)        /**< (MCLK_APBCMASK Mask) SERCOM */
#define MCLK_APBCMASK_SERCOM(value)         (MCLK_APBCMASK_SERCOM_Msk & ((value) << MCLK_APBCMASK_SERCOM_Pos))  
#define MCLK_APBCMASK_TCC_Pos               5                                              /**< (MCLK_APBCMASK Position) TCCx APB Clock Enable */
#define MCLK_APBCMASK_TCC_Msk               (_U_(0x7) << MCLK_APBCMASK_TCC_Pos)            /**< (MCLK_APBCMASK Mask) TCC */
#define MCLK_APBCMASK_TCC(value)            (MCLK_APBCMASK_TCC_Msk & ((value) << MCLK_APBCMASK_TCC_Pos))  
#define MCLK_APBCMASK_TC_Pos                8                                              /**< (MCLK_APBCMASK Position) TCx APB Clock Enable */
#define MCLK_APBCMASK_TC_Msk                (_U_(0xF) << MCLK_APBCMASK_TC_Pos)             /**< (MCLK_APBCMASK Mask) TC */
#define MCLK_APBCMASK_TC(value)             (MCLK_APBCMASK_TC_Msk & ((value) << MCLK_APBCMASK_TC_Pos))  

/* -------- MCLK_APBDMASK : (MCLK Offset: 0x20) (R/W 32) APBD Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EVSYS_:1;                  /**< bit:      0  EVSYS APB Clock Enable                   */
    uint32_t SERCOM5_:1;                /**< bit:      1  SERCOM5 APB Clock Enable                 */
    uint32_t TC4_:1;                    /**< bit:      2  TC4 APB Clock Enable                     */
    uint32_t ADC_:1;                    /**< bit:      3  ADC APB Clock Enable                     */
    uint32_t AC_:1;                     /**< bit:      4  AC APB Clock Enable                      */
    uint32_t PTC_:1;                    /**< bit:      5  PTC APB Clock Enable                     */
    uint32_t OPAMP_:1;                  /**< bit:      6  OPAMP APB Clock Enable                   */
    uint32_t CCL_:1;                    /**< bit:      7  CCL APB Clock Enable                     */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_APBDMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBDMASK_OFFSET                (0x20)                                        /**<  (MCLK_APBDMASK) APBD Mask  Offset */
#define MCLK_APBDMASK_RESETVALUE            _U_(0xFF)                                     /**<  (MCLK_APBDMASK) APBD Mask  Reset Value */

#define MCLK_APBDMASK_EVSYS_Pos             0                                              /**< (MCLK_APBDMASK) EVSYS APB Clock Enable Position */
#define MCLK_APBDMASK_EVSYS_Msk             (_U_(0x1) << MCLK_APBDMASK_EVSYS_Pos)          /**< (MCLK_APBDMASK) EVSYS APB Clock Enable Mask */
#define MCLK_APBDMASK_EVSYS                 MCLK_APBDMASK_EVSYS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_EVSYS_Msk instead */
#define MCLK_APBDMASK_SERCOM5_Pos           1                                              /**< (MCLK_APBDMASK) SERCOM5 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM5_Msk           (_U_(0x1) << MCLK_APBDMASK_SERCOM5_Pos)        /**< (MCLK_APBDMASK) SERCOM5 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM5               MCLK_APBDMASK_SERCOM5_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_SERCOM5_Msk instead */
#define MCLK_APBDMASK_TC4_Pos               2                                              /**< (MCLK_APBDMASK) TC4 APB Clock Enable Position */
#define MCLK_APBDMASK_TC4_Msk               (_U_(0x1) << MCLK_APBDMASK_TC4_Pos)            /**< (MCLK_APBDMASK) TC4 APB Clock Enable Mask */
#define MCLK_APBDMASK_TC4                   MCLK_APBDMASK_TC4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_TC4_Msk instead */
#define MCLK_APBDMASK_ADC_Pos               3                                              /**< (MCLK_APBDMASK) ADC APB Clock Enable Position */
#define MCLK_APBDMASK_ADC_Msk               (_U_(0x1) << MCLK_APBDMASK_ADC_Pos)            /**< (MCLK_APBDMASK) ADC APB Clock Enable Mask */
#define MCLK_APBDMASK_ADC                   MCLK_APBDMASK_ADC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_ADC_Msk instead */
#define MCLK_APBDMASK_AC_Pos                4                                              /**< (MCLK_APBDMASK) AC APB Clock Enable Position */
#define MCLK_APBDMASK_AC_Msk                (_U_(0x1) << MCLK_APBDMASK_AC_Pos)             /**< (MCLK_APBDMASK) AC APB Clock Enable Mask */
#define MCLK_APBDMASK_AC                    MCLK_APBDMASK_AC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_AC_Msk instead */
#define MCLK_APBDMASK_PTC_Pos               5                                              /**< (MCLK_APBDMASK) PTC APB Clock Enable Position */
#define MCLK_APBDMASK_PTC_Msk               (_U_(0x1) << MCLK_APBDMASK_PTC_Pos)            /**< (MCLK_APBDMASK) PTC APB Clock Enable Mask */
#define MCLK_APBDMASK_PTC                   MCLK_APBDMASK_PTC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_PTC_Msk instead */
#define MCLK_APBDMASK_OPAMP_Pos             6                                              /**< (MCLK_APBDMASK) OPAMP APB Clock Enable Position */
#define MCLK_APBDMASK_OPAMP_Msk             (_U_(0x1) << MCLK_APBDMASK_OPAMP_Pos)          /**< (MCLK_APBDMASK) OPAMP APB Clock Enable Mask */
#define MCLK_APBDMASK_OPAMP                 MCLK_APBDMASK_OPAMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_OPAMP_Msk instead */
#define MCLK_APBDMASK_CCL_Pos               7                                              /**< (MCLK_APBDMASK) CCL APB Clock Enable Position */
#define MCLK_APBDMASK_CCL_Msk               (_U_(0x1) << MCLK_APBDMASK_CCL_Pos)            /**< (MCLK_APBDMASK) CCL APB Clock Enable Mask */
#define MCLK_APBDMASK_CCL                   MCLK_APBDMASK_CCL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBDMASK_CCL_Msk instead */
#define MCLK_APBDMASK_MASK                  _U_(0xFF)                                      /**< \deprecated (MCLK_APBDMASK) Register MASK  (Use MCLK_APBDMASK_Msk instead)  */
#define MCLK_APBDMASK_Msk                   _U_(0xFF)                                      /**< (MCLK_APBDMASK) Register Mask  */

#define MCLK_APBDMASK_SERCOM_Pos            1                                              /**< (MCLK_APBDMASK Position) SERCOM5 APB Clock Enable */
#define MCLK_APBDMASK_SERCOM_Msk            (_U_(0x1) << MCLK_APBDMASK_SERCOM_Pos)         /**< (MCLK_APBDMASK Mask) SERCOM */
#define MCLK_APBDMASK_SERCOM(value)         (MCLK_APBDMASK_SERCOM_Msk & ((value) << MCLK_APBDMASK_SERCOM_Pos))  
#define MCLK_APBDMASK_TC_Pos                2                                              /**< (MCLK_APBDMASK Position) TC4 APB Clock Enable */
#define MCLK_APBDMASK_TC_Msk                (_U_(0x1) << MCLK_APBDMASK_TC_Pos)             /**< (MCLK_APBDMASK Mask) TC */
#define MCLK_APBDMASK_TC(value)             (MCLK_APBDMASK_TC_Msk & ((value) << MCLK_APBDMASK_TC_Pos))  

/* -------- MCLK_APBEMASK : (MCLK Offset: 0x24) (R/W 32) APBE Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PAC_:1;                    /**< bit:      0  PAC APB Clock Enable                     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MCLK_APBEMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBEMASK_OFFSET                (0x24)                                        /**<  (MCLK_APBEMASK) APBE Mask  Offset */
#define MCLK_APBEMASK_RESETVALUE            _U_(0x0D)                                     /**<  (MCLK_APBEMASK) APBE Mask  Reset Value */

#define MCLK_APBEMASK_PAC_Pos               0                                              /**< (MCLK_APBEMASK) PAC APB Clock Enable Position */
#define MCLK_APBEMASK_PAC_Msk               (_U_(0x1) << MCLK_APBEMASK_PAC_Pos)            /**< (MCLK_APBEMASK) PAC APB Clock Enable Mask */
#define MCLK_APBEMASK_PAC                   MCLK_APBEMASK_PAC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCLK_APBEMASK_PAC_Msk instead */
#define MCLK_APBEMASK_MASK                  _U_(0x01)                                      /**< \deprecated (MCLK_APBEMASK) Register MASK  (Use MCLK_APBEMASK_Msk instead)  */
#define MCLK_APBEMASK_Msk                   _U_(0x01)                                      /**< (MCLK_APBEMASK) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief MCLK hardware registers */
typedef struct {  /* Main Clock */
  __IO uint8_t CTRLA;          /**< (MCLK Offset: 0x00) Control A */
  __IO uint8_t INTENCLR;       /**< (MCLK Offset: 0x01) Interrupt Enable Clear */
  __IO uint8_t INTENSET;       /**< (MCLK Offset: 0x02) Interrupt Enable Set */
  __IO uint8_t INTFLAG;        /**< (MCLK Offset: 0x03) Interrupt Flag Status and Clear */
  __IO uint8_t CPUDIV;         /**< (MCLK Offset: 0x04) CPU Clock Division */
  __IO uint8_t LPDIV;          /**< (MCLK Offset: 0x05) Low-Power Clock Division */
  __IO uint8_t BUPDIV;         /**< (MCLK Offset: 0x06) Backup Clock Division */
  __I  uint8_t                        Reserved1[9];
  __IO uint32_t AHBMASK;        /**< (MCLK Offset: 0x10) AHB Mask */
  __IO uint32_t APBAMASK;       /**< (MCLK Offset: 0x14) APBA Mask */
  __IO uint32_t APBBMASK;       /**< (MCLK Offset: 0x18) APBB Mask */
  __IO uint32_t APBCMASK;       /**< (MCLK Offset: 0x1C) APBC Mask */
  __IO uint32_t APBDMASK;       /**< (MCLK Offset: 0x20) APBD Mask */
  __IO uint32_t APBEMASK;       /**< (MCLK Offset: 0x24) APBE Mask */
} Mclk;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief MCLK hardware registers */
typedef struct {  /* Main Clock */
  __IO MCLK_CTRLA_Type                CTRLA;          /**< Offset: 0x00 (R/W   8) Control A */
  __IO MCLK_INTENCLR_Type             INTENCLR;       /**< Offset: 0x01 (R/W   8) Interrupt Enable Clear */
  __IO MCLK_INTENSET_Type             INTENSET;       /**< Offset: 0x02 (R/W   8) Interrupt Enable Set */
  __IO MCLK_INTFLAG_Type              INTFLAG;        /**< Offset: 0x03 (R/W   8) Interrupt Flag Status and Clear */
  __IO MCLK_CPUDIV_Type               CPUDIV;         /**< Offset: 0x04 (R/W   8) CPU Clock Division */
  __IO MCLK_LPDIV_Type                LPDIV;          /**< Offset: 0x05 (R/W   8) Low-Power Clock Division */
  __IO MCLK_BUPDIV_Type               BUPDIV;         /**< Offset: 0x06 (R/W   8) Backup Clock Division */
  __I  uint8_t                        Reserved1[9];
  __IO MCLK_AHBMASK_Type              AHBMASK;        /**< Offset: 0x10 (R/W  32) AHB Mask */
  __IO MCLK_APBAMASK_Type             APBAMASK;       /**< Offset: 0x14 (R/W  32) APBA Mask */
  __IO MCLK_APBBMASK_Type             APBBMASK;       /**< Offset: 0x18 (R/W  32) APBB Mask */
  __IO MCLK_APBCMASK_Type             APBCMASK;       /**< Offset: 0x1C (R/W  32) APBC Mask */
  __IO MCLK_APBDMASK_Type             APBDMASK;       /**< Offset: 0x20 (R/W  32) APBD Mask */
  __IO MCLK_APBEMASK_Type             APBEMASK;       /**< Offset: 0x24 (R/W  32) APBE Mask */
} Mclk;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Main Clock' */

#endif /* _WLR089_MCLK_COMPONENT_H_ */

/**
 * \brief Component description for AES
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
#ifndef _WLR089_AES_COMPONENT_H_
#define _WLR089_AES_COMPONENT_H_
#define _WLR089_AES_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_AES b'Advanced Encryption Standard'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AES */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define AES_U2238                      /**< (AES) Module ID */
#define REV_AES 0x200                  /**< (AES) Module revision */

/* -------- AES_CTRLA : (AES Offset: 0x00) (R/W 32) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t AESMODE:3;                 /**< bit:   2..4  AES Modes of operation                   */
    uint32_t CFBS:3;                    /**< bit:   5..7  CFB Types                                */
    uint32_t KEYSIZE:2;                 /**< bit:   8..9  Keysize                                  */
    uint32_t CIPHER:1;                  /**< bit:     10  Cipher mode                              */
    uint32_t STARTMODE:1;               /**< bit:     11  Start mode                               */
    uint32_t LOD:1;                     /**< bit:     12  LOD Enable                               */
    uint32_t KEYGEN:1;                  /**< bit:     13  Last key generation                      */
    uint32_t XORKEY:1;                  /**< bit:     14  Xor Key operation                        */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t CTYPE:4;                   /**< bit: 16..19  Counter measure types                    */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AES_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CTRLA_OFFSET                    (0x00)                                        /**<  (AES_CTRLA) Control A  Offset */
#define AES_CTRLA_RESETVALUE                _U_(0x00)                                     /**<  (AES_CTRLA) Control A  Reset Value */

#define AES_CTRLA_SWRST_Pos                 0                                              /**< (AES_CTRLA) Software Reset Position */
#define AES_CTRLA_SWRST_Msk                 (_U_(0x1) << AES_CTRLA_SWRST_Pos)              /**< (AES_CTRLA) Software Reset Mask */
#define AES_CTRLA_SWRST                     AES_CTRLA_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_SWRST_Msk instead */
#define AES_CTRLA_ENABLE_Pos                1                                              /**< (AES_CTRLA) Enable Position */
#define AES_CTRLA_ENABLE_Msk                (_U_(0x1) << AES_CTRLA_ENABLE_Pos)             /**< (AES_CTRLA) Enable Mask */
#define AES_CTRLA_ENABLE                    AES_CTRLA_ENABLE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_ENABLE_Msk instead */
#define AES_CTRLA_AESMODE_Pos               2                                              /**< (AES_CTRLA) AES Modes of operation Position */
#define AES_CTRLA_AESMODE_Msk               (_U_(0x7) << AES_CTRLA_AESMODE_Pos)            /**< (AES_CTRLA) AES Modes of operation Mask */
#define AES_CTRLA_AESMODE(value)            (AES_CTRLA_AESMODE_Msk & ((value) << AES_CTRLA_AESMODE_Pos))
#define AES_CTRLA_CFBS_Pos                  5                                              /**< (AES_CTRLA) CFB Types Position */
#define AES_CTRLA_CFBS_Msk                  (_U_(0x7) << AES_CTRLA_CFBS_Pos)               /**< (AES_CTRLA) CFB Types Mask */
#define AES_CTRLA_CFBS(value)               (AES_CTRLA_CFBS_Msk & ((value) << AES_CTRLA_CFBS_Pos))
#define AES_CTRLA_KEYSIZE_Pos               8                                              /**< (AES_CTRLA) Keysize Position */
#define AES_CTRLA_KEYSIZE_Msk               (_U_(0x3) << AES_CTRLA_KEYSIZE_Pos)            /**< (AES_CTRLA) Keysize Mask */
#define AES_CTRLA_KEYSIZE(value)            (AES_CTRLA_KEYSIZE_Msk & ((value) << AES_CTRLA_KEYSIZE_Pos))
#define AES_CTRLA_CIPHER_Pos                10                                             /**< (AES_CTRLA) Cipher mode Position */
#define AES_CTRLA_CIPHER_Msk                (_U_(0x1) << AES_CTRLA_CIPHER_Pos)             /**< (AES_CTRLA) Cipher mode Mask */
#define AES_CTRLA_CIPHER                    AES_CTRLA_CIPHER_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_CIPHER_Msk instead */
#define AES_CTRLA_STARTMODE_Pos             11                                             /**< (AES_CTRLA) Start mode Position */
#define AES_CTRLA_STARTMODE_Msk             (_U_(0x1) << AES_CTRLA_STARTMODE_Pos)          /**< (AES_CTRLA) Start mode Mask */
#define AES_CTRLA_STARTMODE                 AES_CTRLA_STARTMODE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_STARTMODE_Msk instead */
#define AES_CTRLA_LOD_Pos                   12                                             /**< (AES_CTRLA) LOD Enable Position */
#define AES_CTRLA_LOD_Msk                   (_U_(0x1) << AES_CTRLA_LOD_Pos)                /**< (AES_CTRLA) LOD Enable Mask */
#define AES_CTRLA_LOD                       AES_CTRLA_LOD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_LOD_Msk instead */
#define AES_CTRLA_KEYGEN_Pos                13                                             /**< (AES_CTRLA) Last key generation Position */
#define AES_CTRLA_KEYGEN_Msk                (_U_(0x1) << AES_CTRLA_KEYGEN_Pos)             /**< (AES_CTRLA) Last key generation Mask */
#define AES_CTRLA_KEYGEN                    AES_CTRLA_KEYGEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_KEYGEN_Msk instead */
#define AES_CTRLA_XORKEY_Pos                14                                             /**< (AES_CTRLA) Xor Key operation Position */
#define AES_CTRLA_XORKEY_Msk                (_U_(0x1) << AES_CTRLA_XORKEY_Pos)             /**< (AES_CTRLA) Xor Key operation Mask */
#define AES_CTRLA_XORKEY                    AES_CTRLA_XORKEY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLA_XORKEY_Msk instead */
#define AES_CTRLA_CTYPE_Pos                 16                                             /**< (AES_CTRLA) Counter measure types Position */
#define AES_CTRLA_CTYPE_Msk                 (_U_(0xF) << AES_CTRLA_CTYPE_Pos)              /**< (AES_CTRLA) Counter measure types Mask */
#define AES_CTRLA_CTYPE(value)              (AES_CTRLA_CTYPE_Msk & ((value) << AES_CTRLA_CTYPE_Pos))
#define AES_CTRLA_MASK                      _U_(0xF7FFF)                                   /**< \deprecated (AES_CTRLA) Register MASK  (Use AES_CTRLA_Msk instead)  */
#define AES_CTRLA_Msk                       _U_(0xF7FFF)                                   /**< (AES_CTRLA) Register Mask  */


/* -------- AES_CTRLB : (AES Offset: 0x04) (R/W 8) Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  START:1;                   /**< bit:      0  Manual Start                             */
    uint8_t  NEWMSG:1;                  /**< bit:      1  New message                              */
    uint8_t  EOM:1;                     /**< bit:      2  End of message                           */
    uint8_t  GFMUL:1;                   /**< bit:      3  GF Multiplication                        */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CTRLB_OFFSET                    (0x04)                                        /**<  (AES_CTRLB) Control B  Offset */
#define AES_CTRLB_RESETVALUE                _U_(0x00)                                     /**<  (AES_CTRLB) Control B  Reset Value */

#define AES_CTRLB_START_Pos                 0                                              /**< (AES_CTRLB) Manual Start Position */
#define AES_CTRLB_START_Msk                 (_U_(0x1) << AES_CTRLB_START_Pos)              /**< (AES_CTRLB) Manual Start Mask */
#define AES_CTRLB_START                     AES_CTRLB_START_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLB_START_Msk instead */
#define AES_CTRLB_NEWMSG_Pos                1                                              /**< (AES_CTRLB) New message Position */
#define AES_CTRLB_NEWMSG_Msk                (_U_(0x1) << AES_CTRLB_NEWMSG_Pos)             /**< (AES_CTRLB) New message Mask */
#define AES_CTRLB_NEWMSG                    AES_CTRLB_NEWMSG_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLB_NEWMSG_Msk instead */
#define AES_CTRLB_EOM_Pos                   2                                              /**< (AES_CTRLB) End of message Position */
#define AES_CTRLB_EOM_Msk                   (_U_(0x1) << AES_CTRLB_EOM_Pos)                /**< (AES_CTRLB) End of message Mask */
#define AES_CTRLB_EOM                       AES_CTRLB_EOM_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLB_EOM_Msk instead */
#define AES_CTRLB_GFMUL_Pos                 3                                              /**< (AES_CTRLB) GF Multiplication Position */
#define AES_CTRLB_GFMUL_Msk                 (_U_(0x1) << AES_CTRLB_GFMUL_Pos)              /**< (AES_CTRLB) GF Multiplication Mask */
#define AES_CTRLB_GFMUL                     AES_CTRLB_GFMUL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_CTRLB_GFMUL_Msk instead */
#define AES_CTRLB_MASK                      _U_(0x0F)                                      /**< \deprecated (AES_CTRLB) Register MASK  (Use AES_CTRLB_Msk instead)  */
#define AES_CTRLB_Msk                       _U_(0x0F)                                      /**< (AES_CTRLB) Register Mask  */


/* -------- AES_INTENCLR : (AES Offset: 0x05) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ENCCMP:1;                  /**< bit:      0  Encryption Complete                      */
    uint8_t  GFMCMP:1;                  /**< bit:      1  GF Multiplication Complete               */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTENCLR_OFFSET                 (0x05)                                        /**<  (AES_INTENCLR) Interrupt Enable Clear  Offset */
#define AES_INTENCLR_RESETVALUE             _U_(0x00)                                     /**<  (AES_INTENCLR) Interrupt Enable Clear  Reset Value */

#define AES_INTENCLR_ENCCMP_Pos             0                                              /**< (AES_INTENCLR) Encryption Complete Position */
#define AES_INTENCLR_ENCCMP_Msk             (_U_(0x1) << AES_INTENCLR_ENCCMP_Pos)          /**< (AES_INTENCLR) Encryption Complete Mask */
#define AES_INTENCLR_ENCCMP                 AES_INTENCLR_ENCCMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTENCLR_ENCCMP_Msk instead */
#define AES_INTENCLR_GFMCMP_Pos             1                                              /**< (AES_INTENCLR) GF Multiplication Complete Position */
#define AES_INTENCLR_GFMCMP_Msk             (_U_(0x1) << AES_INTENCLR_GFMCMP_Pos)          /**< (AES_INTENCLR) GF Multiplication Complete Mask */
#define AES_INTENCLR_GFMCMP                 AES_INTENCLR_GFMCMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTENCLR_GFMCMP_Msk instead */
#define AES_INTENCLR_MASK                   _U_(0x03)                                      /**< \deprecated (AES_INTENCLR) Register MASK  (Use AES_INTENCLR_Msk instead)  */
#define AES_INTENCLR_Msk                    _U_(0x03)                                      /**< (AES_INTENCLR) Register Mask  */


/* -------- AES_INTENSET : (AES Offset: 0x06) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ENCCMP:1;                  /**< bit:      0  Encryption Complete                      */
    uint8_t  GFMCMP:1;                  /**< bit:      1  GF Multiplication Complete               */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTENSET_OFFSET                 (0x06)                                        /**<  (AES_INTENSET) Interrupt Enable Set  Offset */
#define AES_INTENSET_RESETVALUE             _U_(0x00)                                     /**<  (AES_INTENSET) Interrupt Enable Set  Reset Value */

#define AES_INTENSET_ENCCMP_Pos             0                                              /**< (AES_INTENSET) Encryption Complete Position */
#define AES_INTENSET_ENCCMP_Msk             (_U_(0x1) << AES_INTENSET_ENCCMP_Pos)          /**< (AES_INTENSET) Encryption Complete Mask */
#define AES_INTENSET_ENCCMP                 AES_INTENSET_ENCCMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTENSET_ENCCMP_Msk instead */
#define AES_INTENSET_GFMCMP_Pos             1                                              /**< (AES_INTENSET) GF Multiplication Complete Position */
#define AES_INTENSET_GFMCMP_Msk             (_U_(0x1) << AES_INTENSET_GFMCMP_Pos)          /**< (AES_INTENSET) GF Multiplication Complete Mask */
#define AES_INTENSET_GFMCMP                 AES_INTENSET_GFMCMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTENSET_GFMCMP_Msk instead */
#define AES_INTENSET_MASK                   _U_(0x03)                                      /**< \deprecated (AES_INTENSET) Register MASK  (Use AES_INTENSET_Msk instead)  */
#define AES_INTENSET_Msk                    _U_(0x03)                                      /**< (AES_INTENSET) Register Mask  */


/* -------- AES_INTFLAG : (AES Offset: 0x07) (R/W 8) Interrupt Flag Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t ENCCMP:1;                  /**< bit:      0  Encryption Complete                      */
    __I uint8_t GFMCMP:1;                  /**< bit:      1  GF Multiplication Complete               */
    __I uint8_t :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTFLAG_OFFSET                  (0x07)                                        /**<  (AES_INTFLAG) Interrupt Flag Status  Offset */
#define AES_INTFLAG_RESETVALUE              _U_(0x00)                                     /**<  (AES_INTFLAG) Interrupt Flag Status  Reset Value */

#define AES_INTFLAG_ENCCMP_Pos              0                                              /**< (AES_INTFLAG) Encryption Complete Position */
#define AES_INTFLAG_ENCCMP_Msk              (_U_(0x1) << AES_INTFLAG_ENCCMP_Pos)           /**< (AES_INTFLAG) Encryption Complete Mask */
#define AES_INTFLAG_ENCCMP                  AES_INTFLAG_ENCCMP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTFLAG_ENCCMP_Msk instead */
#define AES_INTFLAG_GFMCMP_Pos              1                                              /**< (AES_INTFLAG) GF Multiplication Complete Position */
#define AES_INTFLAG_GFMCMP_Msk              (_U_(0x1) << AES_INTFLAG_GFMCMP_Pos)           /**< (AES_INTFLAG) GF Multiplication Complete Mask */
#define AES_INTFLAG_GFMCMP                  AES_INTFLAG_GFMCMP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_INTFLAG_GFMCMP_Msk instead */
#define AES_INTFLAG_MASK                    _U_(0x03)                                      /**< \deprecated (AES_INTFLAG) Register MASK  (Use AES_INTFLAG_Msk instead)  */
#define AES_INTFLAG_Msk                     _U_(0x03)                                      /**< (AES_INTFLAG) Register Mask  */


/* -------- AES_DATABUFPTR : (AES Offset: 0x08) (R/W 8) Data buffer pointer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  INDATAPTR:2;               /**< bit:   0..1  Input Data Pointer                       */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_DATABUFPTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_DATABUFPTR_OFFSET               (0x08)                                        /**<  (AES_DATABUFPTR) Data buffer pointer  Offset */
#define AES_DATABUFPTR_RESETVALUE           _U_(0x00)                                     /**<  (AES_DATABUFPTR) Data buffer pointer  Reset Value */

#define AES_DATABUFPTR_INDATAPTR_Pos        0                                              /**< (AES_DATABUFPTR) Input Data Pointer Position */
#define AES_DATABUFPTR_INDATAPTR_Msk        (_U_(0x3) << AES_DATABUFPTR_INDATAPTR_Pos)     /**< (AES_DATABUFPTR) Input Data Pointer Mask */
#define AES_DATABUFPTR_INDATAPTR(value)     (AES_DATABUFPTR_INDATAPTR_Msk & ((value) << AES_DATABUFPTR_INDATAPTR_Pos))
#define AES_DATABUFPTR_MASK                 _U_(0x03)                                      /**< \deprecated (AES_DATABUFPTR) Register MASK  (Use AES_DATABUFPTR_Msk instead)  */
#define AES_DATABUFPTR_Msk                  _U_(0x03)                                      /**< (AES_DATABUFPTR) Register Mask  */


/* -------- AES_DBGCTRL : (AES Offset: 0x09) (/W 8) Debug control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGRUN:1;                  /**< bit:      0  Debug Run                                */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} AES_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_DBGCTRL_OFFSET                  (0x09)                                        /**<  (AES_DBGCTRL) Debug control  Offset */
#define AES_DBGCTRL_RESETVALUE              _U_(0x00)                                     /**<  (AES_DBGCTRL) Debug control  Reset Value */

#define AES_DBGCTRL_DBGRUN_Pos              0                                              /**< (AES_DBGCTRL) Debug Run Position */
#define AES_DBGCTRL_DBGRUN_Msk              (_U_(0x1) << AES_DBGCTRL_DBGRUN_Pos)           /**< (AES_DBGCTRL) Debug Run Mask */
#define AES_DBGCTRL_DBGRUN                  AES_DBGCTRL_DBGRUN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use AES_DBGCTRL_DBGRUN_Msk instead */
#define AES_DBGCTRL_MASK                    _U_(0x01)                                      /**< \deprecated (AES_DBGCTRL) Register MASK  (Use AES_DBGCTRL_Msk instead)  */
#define AES_DBGCTRL_Msk                     _U_(0x01)                                      /**< (AES_DBGCTRL) Register Mask  */


/* -------- AES_KEYWORD : (AES Offset: 0x0c) (/W 32) Keyword n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_KEYWORD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_KEYWORD_OFFSET                  (0x0C)                                        /**<  (AES_KEYWORD) Keyword n  Offset */
#define AES_KEYWORD_RESETVALUE              _U_(0x00)                                     /**<  (AES_KEYWORD) Keyword n  Reset Value */

#define AES_KEYWORD_MASK                    _U_(0x00)                                      /**< \deprecated (AES_KEYWORD) Register MASK  (Use AES_KEYWORD_Msk instead)  */
#define AES_KEYWORD_Msk                     _U_(0x00)                                      /**< (AES_KEYWORD) Register Mask  */


/* -------- AES_INDATA : (AES Offset: 0x38) (R/W 32) Indata -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_INDATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INDATA_OFFSET                   (0x38)                                        /**<  (AES_INDATA) Indata  Offset */
#define AES_INDATA_RESETVALUE               _U_(0x00)                                     /**<  (AES_INDATA) Indata  Reset Value */

#define AES_INDATA_MASK                     _U_(0x00)                                      /**< \deprecated (AES_INDATA) Register MASK  (Use AES_INDATA_Msk instead)  */
#define AES_INDATA_Msk                      _U_(0x00)                                      /**< (AES_INDATA) Register Mask  */


/* -------- AES_INTVECTV : (AES Offset: 0x3c) (/W 32) Initialisation Vector n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_INTVECTV_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTVECTV_OFFSET                 (0x3C)                                        /**<  (AES_INTVECTV) Initialisation Vector n  Offset */
#define AES_INTVECTV_RESETVALUE             _U_(0x00)                                     /**<  (AES_INTVECTV) Initialisation Vector n  Reset Value */

#define AES_INTVECTV_MASK                   _U_(0x00)                                      /**< \deprecated (AES_INTVECTV) Register MASK  (Use AES_INTVECTV_Msk instead)  */
#define AES_INTVECTV_Msk                    _U_(0x00)                                      /**< (AES_INTVECTV) Register Mask  */


/* -------- AES_HASHKEY : (AES Offset: 0x5c) (R/W 32) Hash key n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_HASHKEY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_HASHKEY_OFFSET                  (0x5C)                                        /**<  (AES_HASHKEY) Hash key n  Offset */
#define AES_HASHKEY_RESETVALUE              _U_(0x00)                                     /**<  (AES_HASHKEY) Hash key n  Reset Value */

#define AES_HASHKEY_MASK                    _U_(0x00)                                      /**< \deprecated (AES_HASHKEY) Register MASK  (Use AES_HASHKEY_Msk instead)  */
#define AES_HASHKEY_Msk                     _U_(0x00)                                      /**< (AES_HASHKEY) Register Mask  */


/* -------- AES_GHASH : (AES Offset: 0x6c) (R/W 32) Galois Hash n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_GHASH_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_GHASH_OFFSET                    (0x6C)                                        /**<  (AES_GHASH) Galois Hash n  Offset */
#define AES_GHASH_RESETVALUE                _U_(0x00)                                     /**<  (AES_GHASH) Galois Hash n  Reset Value */

#define AES_GHASH_MASK                      _U_(0x00)                                      /**< \deprecated (AES_GHASH) Register MASK  (Use AES_GHASH_Msk instead)  */
#define AES_GHASH_Msk                       _U_(0x00)                                      /**< (AES_GHASH) Register Mask  */


/* -------- AES_CIPLEN : (AES Offset: 0x80) (R/W 32) Cipher Length -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_CIPLEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CIPLEN_OFFSET                   (0x80)                                        /**<  (AES_CIPLEN) Cipher Length  Offset */
#define AES_CIPLEN_RESETVALUE               _U_(0x00)                                     /**<  (AES_CIPLEN) Cipher Length  Reset Value */

#define AES_CIPLEN_MASK                     _U_(0x00)                                      /**< \deprecated (AES_CIPLEN) Register MASK  (Use AES_CIPLEN_Msk instead)  */
#define AES_CIPLEN_Msk                      _U_(0x00)                                      /**< (AES_CIPLEN) Register Mask  */


/* -------- AES_RANDSEED : (AES Offset: 0x84) (R/W 32) Random Seed -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} AES_RANDSEED_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_RANDSEED_OFFSET                 (0x84)                                        /**<  (AES_RANDSEED) Random Seed  Offset */
#define AES_RANDSEED_RESETVALUE             _U_(0x00)                                     /**<  (AES_RANDSEED) Random Seed  Reset Value */

#define AES_RANDSEED_MASK                   _U_(0x00)                                      /**< \deprecated (AES_RANDSEED) Register MASK  (Use AES_RANDSEED_Msk instead)  */
#define AES_RANDSEED_Msk                    _U_(0x00)                                      /**< (AES_RANDSEED) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief AES hardware registers */
typedef struct {  /* Advanced Encryption Standard */
  __IO uint32_t CTRLA;          /**< (AES Offset: 0x00) Control A */
  __IO uint8_t CTRLB;          /**< (AES Offset: 0x04) Control B */
  __IO uint8_t INTENCLR;       /**< (AES Offset: 0x05) Interrupt Enable Clear */
  __IO uint8_t INTENSET;       /**< (AES Offset: 0x06) Interrupt Enable Set */
  __IO uint8_t INTFLAG;        /**< (AES Offset: 0x07) Interrupt Flag Status */
  __IO uint8_t DATABUFPTR;     /**< (AES Offset: 0x08) Data buffer pointer */
  __O  uint8_t DBGCTRL;        /**< (AES Offset: 0x09) Debug control */
  __I  uint8_t                        Reserved1[2];
  __O  uint32_t KEYWORD[8];     /**< (AES Offset: 0x0C) Keyword n */
  __I  uint8_t                        Reserved2[12];
  __IO uint32_t INDATA;         /**< (AES Offset: 0x38) Indata */
  __O  uint32_t INTVECTV[4];    /**< (AES Offset: 0x3C) Initialisation Vector n */
  __I  uint8_t                        Reserved3[16];
  __IO uint32_t HASHKEY[4];     /**< (AES Offset: 0x5C) Hash key n */
  __IO uint32_t GHASH[4];       /**< (AES Offset: 0x6C) Galois Hash n */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t CIPLEN;         /**< (AES Offset: 0x80) Cipher Length */
  __IO uint32_t RANDSEED;       /**< (AES Offset: 0x84) Random Seed */
} Aes;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief AES hardware registers */
typedef struct {  /* Advanced Encryption Standard */
  __IO AES_CTRLA_Type                 CTRLA;          /**< Offset: 0x00 (R/W  32) Control A */
  __IO AES_CTRLB_Type                 CTRLB;          /**< Offset: 0x04 (R/W   8) Control B */
  __IO AES_INTENCLR_Type              INTENCLR;       /**< Offset: 0x05 (R/W   8) Interrupt Enable Clear */
  __IO AES_INTENSET_Type              INTENSET;       /**< Offset: 0x06 (R/W   8) Interrupt Enable Set */
  __IO AES_INTFLAG_Type               INTFLAG;        /**< Offset: 0x07 (R/W   8) Interrupt Flag Status */
  __IO AES_DATABUFPTR_Type            DATABUFPTR;     /**< Offset: 0x08 (R/W   8) Data buffer pointer */
  __O  AES_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x09 ( /W   8) Debug control */
  __I  uint8_t                        Reserved1[2];
  __O  AES_KEYWORD_Type               KEYWORD[8];     /**< Offset: 0x0C ( /W  32) Keyword n */
  __I  uint8_t                        Reserved2[12];
  __IO AES_INDATA_Type                INDATA;         /**< Offset: 0x38 (R/W  32) Indata */
  __O  AES_INTVECTV_Type              INTVECTV[4];    /**< Offset: 0x3C ( /W  32) Initialisation Vector n */
  __I  uint8_t                        Reserved3[16];
  __IO AES_HASHKEY_Type               HASHKEY[4];     /**< Offset: 0x5C (R/W  32) Hash key n */
  __IO AES_GHASH_Type                 GHASH[4];       /**< Offset: 0x6C (R/W  32) Galois Hash n */
  __I  uint8_t                        Reserved4[4];
  __IO AES_CIPLEN_Type                CIPLEN;         /**< Offset: 0x80 (R/W  32) Cipher Length */
  __IO AES_RANDSEED_Type              RANDSEED;       /**< Offset: 0x84 (R/W  32) Random Seed */
} Aes;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Advanced Encryption Standard' */

#endif /* _WLR089_AES_COMPONENT_H_ */

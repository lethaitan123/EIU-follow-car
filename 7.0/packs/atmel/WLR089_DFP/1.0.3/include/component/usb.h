/**
 * \brief Component description for USB
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
#ifndef _WLR089_USB_COMPONENT_H_
#define _WLR089_USB_COMPONENT_H_
#define _WLR089_USB_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_USB b'Universal Serial Bus'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR USB */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define USB_U2222                      /**< (USB) Module ID */
#define REV_USB 0x111                  /**< (USB) Module revision */

/* -------- USB_DEVICE_ADDR : (USB Offset: 0x00) (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  Adress of data buffer                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} USB_DEVICE_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_ADDR_OFFSET              (0x00)                                        /**<  (USB_DEVICE_ADDR) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer  Offset */

#define USB_DEVICE_ADDR_ADDR_Pos            0                                              /**< (USB_DEVICE_ADDR) Adress of data buffer Position */
#define USB_DEVICE_ADDR_ADDR_Msk            (_U_(0xFFFFFFFF) << USB_DEVICE_ADDR_ADDR_Pos)  /**< (USB_DEVICE_ADDR) Adress of data buffer Mask */
#define USB_DEVICE_ADDR_ADDR(value)         (USB_DEVICE_ADDR_ADDR_Msk & ((value) << USB_DEVICE_ADDR_ADDR_Pos))
#define USB_DEVICE_ADDR_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (USB_DEVICE_ADDR) Register MASK  (Use USB_DEVICE_ADDR_Msk instead)  */
#define USB_DEVICE_ADDR_Msk                 _U_(0xFFFFFFFF)                                /**< (USB_DEVICE_ADDR) Register Mask  */


/* -------- USB_DEVICE_PCKSIZE : (USB Offset: 0x04) (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Packet Size -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BYTE_COUNT:14;             /**< bit:  0..13  Byte Count                               */
    uint32_t MULTI_PACKET_SIZE:14;      /**< bit: 14..27  Multi Packet In or Out size              */
    uint32_t SIZE:3;                    /**< bit: 28..30  Enpoint size                             */
    uint32_t AUTO_ZLP:1;                /**< bit:     31  Automatic Zero Length Packet             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} USB_DEVICE_PCKSIZE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_PCKSIZE_OFFSET           (0x04)                                        /**<  (USB_DEVICE_PCKSIZE) DEVICE_DESC_BANK Endpoint Bank, Packet Size  Offset */

#define USB_DEVICE_PCKSIZE_BYTE_COUNT_Pos   0                                              /**< (USB_DEVICE_PCKSIZE) Byte Count Position */
#define USB_DEVICE_PCKSIZE_BYTE_COUNT_Msk   (_U_(0x3FFF) << USB_DEVICE_PCKSIZE_BYTE_COUNT_Pos)  /**< (USB_DEVICE_PCKSIZE) Byte Count Mask */
#define USB_DEVICE_PCKSIZE_BYTE_COUNT(value) (USB_DEVICE_PCKSIZE_BYTE_COUNT_Msk & ((value) << USB_DEVICE_PCKSIZE_BYTE_COUNT_Pos))
#define USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Pos 14                                             /**< (USB_DEVICE_PCKSIZE) Multi Packet In or Out size Position */
#define USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Msk (_U_(0x3FFF) << USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Pos)  /**< (USB_DEVICE_PCKSIZE) Multi Packet In or Out size Mask */
#define USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE(value) (USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Msk & ((value) << USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Pos))
#define USB_DEVICE_PCKSIZE_SIZE_Pos         28                                             /**< (USB_DEVICE_PCKSIZE) Enpoint size Position */
#define USB_DEVICE_PCKSIZE_SIZE_Msk         (_U_(0x7) << USB_DEVICE_PCKSIZE_SIZE_Pos)      /**< (USB_DEVICE_PCKSIZE) Enpoint size Mask */
#define USB_DEVICE_PCKSIZE_SIZE(value)      (USB_DEVICE_PCKSIZE_SIZE_Msk & ((value) << USB_DEVICE_PCKSIZE_SIZE_Pos))
#define USB_DEVICE_PCKSIZE_AUTO_ZLP_Pos     31                                             /**< (USB_DEVICE_PCKSIZE) Automatic Zero Length Packet Position */
#define USB_DEVICE_PCKSIZE_AUTO_ZLP_Msk     (_U_(0x1) << USB_DEVICE_PCKSIZE_AUTO_ZLP_Pos)  /**< (USB_DEVICE_PCKSIZE) Automatic Zero Length Packet Mask */
#define USB_DEVICE_PCKSIZE_AUTO_ZLP         USB_DEVICE_PCKSIZE_AUTO_ZLP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_PCKSIZE_AUTO_ZLP_Msk instead */
#define USB_DEVICE_PCKSIZE_MASK             _U_(0xFFFFFFFF)                                /**< \deprecated (USB_DEVICE_PCKSIZE) Register MASK  (Use USB_DEVICE_PCKSIZE_Msk instead)  */
#define USB_DEVICE_PCKSIZE_Msk              _U_(0xFFFFFFFF)                                /**< (USB_DEVICE_PCKSIZE) Register Mask  */


/* -------- USB_DEVICE_EXTREG : (USB Offset: 0x08) (R/W 16) DEVICE_DESC_BANK Endpoint Bank, Extended -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SUBPID:4;                  /**< bit:   0..3  SUBPID field send with extended token    */
    uint16_t VARIABLE:11;               /**< bit:  4..14  Variable field send with extended token  */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_EXTREG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EXTREG_OFFSET            (0x08)                                        /**<  (USB_DEVICE_EXTREG) DEVICE_DESC_BANK Endpoint Bank, Extended  Offset */

#define USB_DEVICE_EXTREG_SUBPID_Pos        0                                              /**< (USB_DEVICE_EXTREG) SUBPID field send with extended token Position */
#define USB_DEVICE_EXTREG_SUBPID_Msk        (_U_(0xF) << USB_DEVICE_EXTREG_SUBPID_Pos)     /**< (USB_DEVICE_EXTREG) SUBPID field send with extended token Mask */
#define USB_DEVICE_EXTREG_SUBPID(value)     (USB_DEVICE_EXTREG_SUBPID_Msk & ((value) << USB_DEVICE_EXTREG_SUBPID_Pos))
#define USB_DEVICE_EXTREG_VARIABLE_Pos      4                                              /**< (USB_DEVICE_EXTREG) Variable field send with extended token Position */
#define USB_DEVICE_EXTREG_VARIABLE_Msk      (_U_(0x7FF) << USB_DEVICE_EXTREG_VARIABLE_Pos)  /**< (USB_DEVICE_EXTREG) Variable field send with extended token Mask */
#define USB_DEVICE_EXTREG_VARIABLE(value)   (USB_DEVICE_EXTREG_VARIABLE_Msk & ((value) << USB_DEVICE_EXTREG_VARIABLE_Pos))
#define USB_DEVICE_EXTREG_MASK              _U_(0x7FFF)                                    /**< \deprecated (USB_DEVICE_EXTREG) Register MASK  (Use USB_DEVICE_EXTREG_Msk instead)  */
#define USB_DEVICE_EXTREG_Msk               _U_(0x7FFF)                                    /**< (USB_DEVICE_EXTREG) Register Mask  */


/* -------- USB_DEVICE_STATUS_BK : (USB Offset: 0x0a) (R/W 8) DEVICE_DESC_BANK Enpoint Bank, Status of Bank -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CRCERR:1;                  /**< bit:      0  CRC Error Status                         */
    uint8_t  ERRORFLOW:1;               /**< bit:      1  Error Flow Status                        */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_STATUS_BK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_STATUS_BK_OFFSET         (0x0A)                                        /**<  (USB_DEVICE_STATUS_BK) DEVICE_DESC_BANK Enpoint Bank, Status of Bank  Offset */

#define USB_DEVICE_STATUS_BK_CRCERR_Pos     0                                              /**< (USB_DEVICE_STATUS_BK) CRC Error Status Position */
#define USB_DEVICE_STATUS_BK_CRCERR_Msk     (_U_(0x1) << USB_DEVICE_STATUS_BK_CRCERR_Pos)  /**< (USB_DEVICE_STATUS_BK) CRC Error Status Mask */
#define USB_DEVICE_STATUS_BK_CRCERR         USB_DEVICE_STATUS_BK_CRCERR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_STATUS_BK_CRCERR_Msk instead */
#define USB_DEVICE_STATUS_BK_ERRORFLOW_Pos  1                                              /**< (USB_DEVICE_STATUS_BK) Error Flow Status Position */
#define USB_DEVICE_STATUS_BK_ERRORFLOW_Msk  (_U_(0x1) << USB_DEVICE_STATUS_BK_ERRORFLOW_Pos)  /**< (USB_DEVICE_STATUS_BK) Error Flow Status Mask */
#define USB_DEVICE_STATUS_BK_ERRORFLOW      USB_DEVICE_STATUS_BK_ERRORFLOW_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_STATUS_BK_ERRORFLOW_Msk instead */
#define USB_DEVICE_STATUS_BK_MASK           _U_(0x03)                                      /**< \deprecated (USB_DEVICE_STATUS_BK) Register MASK  (Use USB_DEVICE_STATUS_BK_Msk instead)  */
#define USB_DEVICE_STATUS_BK_Msk            _U_(0x03)                                      /**< (USB_DEVICE_STATUS_BK) Register Mask  */


/* -------- USB_HOST_ADDR : (USB Offset: 0x00) (R/W 32) HOST_DESC_BANK Host Bank, Adress of Data Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  Adress of data buffer                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} USB_HOST_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_ADDR_OFFSET                (0x00)                                        /**<  (USB_HOST_ADDR) HOST_DESC_BANK Host Bank, Adress of Data Buffer  Offset */

#define USB_HOST_ADDR_ADDR_Pos              0                                              /**< (USB_HOST_ADDR) Adress of data buffer Position */
#define USB_HOST_ADDR_ADDR_Msk              (_U_(0xFFFFFFFF) << USB_HOST_ADDR_ADDR_Pos)    /**< (USB_HOST_ADDR) Adress of data buffer Mask */
#define USB_HOST_ADDR_ADDR(value)           (USB_HOST_ADDR_ADDR_Msk & ((value) << USB_HOST_ADDR_ADDR_Pos))
#define USB_HOST_ADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (USB_HOST_ADDR) Register MASK  (Use USB_HOST_ADDR_Msk instead)  */
#define USB_HOST_ADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (USB_HOST_ADDR) Register Mask  */


/* -------- USB_HOST_PCKSIZE : (USB Offset: 0x04) (R/W 32) HOST_DESC_BANK Host Bank, Packet Size -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BYTE_COUNT:14;             /**< bit:  0..13  Byte Count                               */
    uint32_t MULTI_PACKET_SIZE:14;      /**< bit: 14..27  Multi Packet In or Out size              */
    uint32_t SIZE:3;                    /**< bit: 28..30  Pipe size                                */
    uint32_t AUTO_ZLP:1;                /**< bit:     31  Automatic Zero Length Packet             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} USB_HOST_PCKSIZE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PCKSIZE_OFFSET             (0x04)                                        /**<  (USB_HOST_PCKSIZE) HOST_DESC_BANK Host Bank, Packet Size  Offset */

#define USB_HOST_PCKSIZE_BYTE_COUNT_Pos     0                                              /**< (USB_HOST_PCKSIZE) Byte Count Position */
#define USB_HOST_PCKSIZE_BYTE_COUNT_Msk     (_U_(0x3FFF) << USB_HOST_PCKSIZE_BYTE_COUNT_Pos)  /**< (USB_HOST_PCKSIZE) Byte Count Mask */
#define USB_HOST_PCKSIZE_BYTE_COUNT(value)  (USB_HOST_PCKSIZE_BYTE_COUNT_Msk & ((value) << USB_HOST_PCKSIZE_BYTE_COUNT_Pos))
#define USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Pos 14                                             /**< (USB_HOST_PCKSIZE) Multi Packet In or Out size Position */
#define USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Msk (_U_(0x3FFF) << USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Pos)  /**< (USB_HOST_PCKSIZE) Multi Packet In or Out size Mask */
#define USB_HOST_PCKSIZE_MULTI_PACKET_SIZE(value) (USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Msk & ((value) << USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Pos))
#define USB_HOST_PCKSIZE_SIZE_Pos           28                                             /**< (USB_HOST_PCKSIZE) Pipe size Position */
#define USB_HOST_PCKSIZE_SIZE_Msk           (_U_(0x7) << USB_HOST_PCKSIZE_SIZE_Pos)        /**< (USB_HOST_PCKSIZE) Pipe size Mask */
#define USB_HOST_PCKSIZE_SIZE(value)        (USB_HOST_PCKSIZE_SIZE_Msk & ((value) << USB_HOST_PCKSIZE_SIZE_Pos))
#define USB_HOST_PCKSIZE_AUTO_ZLP_Pos       31                                             /**< (USB_HOST_PCKSIZE) Automatic Zero Length Packet Position */
#define USB_HOST_PCKSIZE_AUTO_ZLP_Msk       (_U_(0x1) << USB_HOST_PCKSIZE_AUTO_ZLP_Pos)    /**< (USB_HOST_PCKSIZE) Automatic Zero Length Packet Mask */
#define USB_HOST_PCKSIZE_AUTO_ZLP           USB_HOST_PCKSIZE_AUTO_ZLP_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PCKSIZE_AUTO_ZLP_Msk instead */
#define USB_HOST_PCKSIZE_MASK               _U_(0xFFFFFFFF)                                /**< \deprecated (USB_HOST_PCKSIZE) Register MASK  (Use USB_HOST_PCKSIZE_Msk instead)  */
#define USB_HOST_PCKSIZE_Msk                _U_(0xFFFFFFFF)                                /**< (USB_HOST_PCKSIZE) Register Mask  */


/* -------- USB_HOST_EXTREG : (USB Offset: 0x08) (R/W 16) HOST_DESC_BANK Host Bank, Extended -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SUBPID:4;                  /**< bit:   0..3  SUBPID field send with extended token    */
    uint16_t VARIABLE:11;               /**< bit:  4..14  Variable field send with extended token  */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_EXTREG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_EXTREG_OFFSET              (0x08)                                        /**<  (USB_HOST_EXTREG) HOST_DESC_BANK Host Bank, Extended  Offset */

#define USB_HOST_EXTREG_SUBPID_Pos          0                                              /**< (USB_HOST_EXTREG) SUBPID field send with extended token Position */
#define USB_HOST_EXTREG_SUBPID_Msk          (_U_(0xF) << USB_HOST_EXTREG_SUBPID_Pos)       /**< (USB_HOST_EXTREG) SUBPID field send with extended token Mask */
#define USB_HOST_EXTREG_SUBPID(value)       (USB_HOST_EXTREG_SUBPID_Msk & ((value) << USB_HOST_EXTREG_SUBPID_Pos))
#define USB_HOST_EXTREG_VARIABLE_Pos        4                                              /**< (USB_HOST_EXTREG) Variable field send with extended token Position */
#define USB_HOST_EXTREG_VARIABLE_Msk        (_U_(0x7FF) << USB_HOST_EXTREG_VARIABLE_Pos)   /**< (USB_HOST_EXTREG) Variable field send with extended token Mask */
#define USB_HOST_EXTREG_VARIABLE(value)     (USB_HOST_EXTREG_VARIABLE_Msk & ((value) << USB_HOST_EXTREG_VARIABLE_Pos))
#define USB_HOST_EXTREG_MASK                _U_(0x7FFF)                                    /**< \deprecated (USB_HOST_EXTREG) Register MASK  (Use USB_HOST_EXTREG_Msk instead)  */
#define USB_HOST_EXTREG_Msk                 _U_(0x7FFF)                                    /**< (USB_HOST_EXTREG) Register Mask  */


/* -------- USB_HOST_STATUS_BK : (USB Offset: 0x0a) (R/W 8) HOST_DESC_BANK Host Bank, Status of Bank -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CRCERR:1;                  /**< bit:      0  CRC Error Status                         */
    uint8_t  ERRORFLOW:1;               /**< bit:      1  Error Flow Status                        */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_STATUS_BK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_STATUS_BK_OFFSET           (0x0A)                                        /**<  (USB_HOST_STATUS_BK) HOST_DESC_BANK Host Bank, Status of Bank  Offset */

#define USB_HOST_STATUS_BK_CRCERR_Pos       0                                              /**< (USB_HOST_STATUS_BK) CRC Error Status Position */
#define USB_HOST_STATUS_BK_CRCERR_Msk       (_U_(0x1) << USB_HOST_STATUS_BK_CRCERR_Pos)    /**< (USB_HOST_STATUS_BK) CRC Error Status Mask */
#define USB_HOST_STATUS_BK_CRCERR           USB_HOST_STATUS_BK_CRCERR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_BK_CRCERR_Msk instead */
#define USB_HOST_STATUS_BK_ERRORFLOW_Pos    1                                              /**< (USB_HOST_STATUS_BK) Error Flow Status Position */
#define USB_HOST_STATUS_BK_ERRORFLOW_Msk    (_U_(0x1) << USB_HOST_STATUS_BK_ERRORFLOW_Pos)  /**< (USB_HOST_STATUS_BK) Error Flow Status Mask */
#define USB_HOST_STATUS_BK_ERRORFLOW        USB_HOST_STATUS_BK_ERRORFLOW_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_BK_ERRORFLOW_Msk instead */
#define USB_HOST_STATUS_BK_MASK             _U_(0x03)                                      /**< \deprecated (USB_HOST_STATUS_BK) Register MASK  (Use USB_HOST_STATUS_BK_Msk instead)  */
#define USB_HOST_STATUS_BK_Msk              _U_(0x03)                                      /**< (USB_HOST_STATUS_BK) Register Mask  */


/* -------- USB_HOST_CTRL_PIPE : (USB Offset: 0x0c) (R/W 16) HOST_DESC_BANK Host Bank, Host Control Pipe -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PDADDR:7;                  /**< bit:   0..6  Pipe Device Adress                       */
    uint16_t :1;                        /**< bit:      7  Reserved */
    uint16_t PEPNUM:4;                  /**< bit:  8..11  Pipe Endpoint Number                     */
    uint16_t PERMAX:4;                  /**< bit: 12..15  Pipe Error Max Number                    */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_CTRL_PIPE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_CTRL_PIPE_OFFSET           (0x0C)                                        /**<  (USB_HOST_CTRL_PIPE) HOST_DESC_BANK Host Bank, Host Control Pipe  Offset */
#define USB_HOST_CTRL_PIPE_RESETVALUE       _U_(0x00)                                     /**<  (USB_HOST_CTRL_PIPE) HOST_DESC_BANK Host Bank, Host Control Pipe  Reset Value */

#define USB_HOST_CTRL_PIPE_PDADDR_Pos       0                                              /**< (USB_HOST_CTRL_PIPE) Pipe Device Adress Position */
#define USB_HOST_CTRL_PIPE_PDADDR_Msk       (_U_(0x7F) << USB_HOST_CTRL_PIPE_PDADDR_Pos)   /**< (USB_HOST_CTRL_PIPE) Pipe Device Adress Mask */
#define USB_HOST_CTRL_PIPE_PDADDR(value)    (USB_HOST_CTRL_PIPE_PDADDR_Msk & ((value) << USB_HOST_CTRL_PIPE_PDADDR_Pos))
#define USB_HOST_CTRL_PIPE_PEPNUM_Pos       8                                              /**< (USB_HOST_CTRL_PIPE) Pipe Endpoint Number Position */
#define USB_HOST_CTRL_PIPE_PEPNUM_Msk       (_U_(0xF) << USB_HOST_CTRL_PIPE_PEPNUM_Pos)    /**< (USB_HOST_CTRL_PIPE) Pipe Endpoint Number Mask */
#define USB_HOST_CTRL_PIPE_PEPNUM(value)    (USB_HOST_CTRL_PIPE_PEPNUM_Msk & ((value) << USB_HOST_CTRL_PIPE_PEPNUM_Pos))
#define USB_HOST_CTRL_PIPE_PERMAX_Pos       12                                             /**< (USB_HOST_CTRL_PIPE) Pipe Error Max Number Position */
#define USB_HOST_CTRL_PIPE_PERMAX_Msk       (_U_(0xF) << USB_HOST_CTRL_PIPE_PERMAX_Pos)    /**< (USB_HOST_CTRL_PIPE) Pipe Error Max Number Mask */
#define USB_HOST_CTRL_PIPE_PERMAX(value)    (USB_HOST_CTRL_PIPE_PERMAX_Msk & ((value) << USB_HOST_CTRL_PIPE_PERMAX_Pos))
#define USB_HOST_CTRL_PIPE_MASK             _U_(0xFF7F)                                    /**< \deprecated (USB_HOST_CTRL_PIPE) Register MASK  (Use USB_HOST_CTRL_PIPE_Msk instead)  */
#define USB_HOST_CTRL_PIPE_Msk              _U_(0xFF7F)                                    /**< (USB_HOST_CTRL_PIPE) Register Mask  */


/* -------- USB_HOST_STATUS_PIPE : (USB Offset: 0x0e) (R/W 16) HOST_DESC_BANK Host Bank, Host Status Pipe -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DTGLER:1;                  /**< bit:      0  Data Toggle Error                        */
    uint16_t DAPIDER:1;                 /**< bit:      1  Data PID Error                           */
    uint16_t PIDER:1;                   /**< bit:      2  PID Error                                */
    uint16_t TOUTER:1;                  /**< bit:      3  Time Out Error                           */
    uint16_t CRC16ER:1;                 /**< bit:      4  CRC16 Error                              */
    uint16_t ERCNT:3;                   /**< bit:   5..7  Pipe Error Count                         */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_STATUS_PIPE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_STATUS_PIPE_OFFSET         (0x0E)                                        /**<  (USB_HOST_STATUS_PIPE) HOST_DESC_BANK Host Bank, Host Status Pipe  Offset */

#define USB_HOST_STATUS_PIPE_DTGLER_Pos     0                                              /**< (USB_HOST_STATUS_PIPE) Data Toggle Error Position */
#define USB_HOST_STATUS_PIPE_DTGLER_Msk     (_U_(0x1) << USB_HOST_STATUS_PIPE_DTGLER_Pos)  /**< (USB_HOST_STATUS_PIPE) Data Toggle Error Mask */
#define USB_HOST_STATUS_PIPE_DTGLER         USB_HOST_STATUS_PIPE_DTGLER_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_PIPE_DTGLER_Msk instead */
#define USB_HOST_STATUS_PIPE_DAPIDER_Pos    1                                              /**< (USB_HOST_STATUS_PIPE) Data PID Error Position */
#define USB_HOST_STATUS_PIPE_DAPIDER_Msk    (_U_(0x1) << USB_HOST_STATUS_PIPE_DAPIDER_Pos)  /**< (USB_HOST_STATUS_PIPE) Data PID Error Mask */
#define USB_HOST_STATUS_PIPE_DAPIDER        USB_HOST_STATUS_PIPE_DAPIDER_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_PIPE_DAPIDER_Msk instead */
#define USB_HOST_STATUS_PIPE_PIDER_Pos      2                                              /**< (USB_HOST_STATUS_PIPE) PID Error Position */
#define USB_HOST_STATUS_PIPE_PIDER_Msk      (_U_(0x1) << USB_HOST_STATUS_PIPE_PIDER_Pos)   /**< (USB_HOST_STATUS_PIPE) PID Error Mask */
#define USB_HOST_STATUS_PIPE_PIDER          USB_HOST_STATUS_PIPE_PIDER_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_PIPE_PIDER_Msk instead */
#define USB_HOST_STATUS_PIPE_TOUTER_Pos     3                                              /**< (USB_HOST_STATUS_PIPE) Time Out Error Position */
#define USB_HOST_STATUS_PIPE_TOUTER_Msk     (_U_(0x1) << USB_HOST_STATUS_PIPE_TOUTER_Pos)  /**< (USB_HOST_STATUS_PIPE) Time Out Error Mask */
#define USB_HOST_STATUS_PIPE_TOUTER         USB_HOST_STATUS_PIPE_TOUTER_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_PIPE_TOUTER_Msk instead */
#define USB_HOST_STATUS_PIPE_CRC16ER_Pos    4                                              /**< (USB_HOST_STATUS_PIPE) CRC16 Error Position */
#define USB_HOST_STATUS_PIPE_CRC16ER_Msk    (_U_(0x1) << USB_HOST_STATUS_PIPE_CRC16ER_Pos)  /**< (USB_HOST_STATUS_PIPE) CRC16 Error Mask */
#define USB_HOST_STATUS_PIPE_CRC16ER        USB_HOST_STATUS_PIPE_CRC16ER_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_STATUS_PIPE_CRC16ER_Msk instead */
#define USB_HOST_STATUS_PIPE_ERCNT_Pos      5                                              /**< (USB_HOST_STATUS_PIPE) Pipe Error Count Position */
#define USB_HOST_STATUS_PIPE_ERCNT_Msk      (_U_(0x7) << USB_HOST_STATUS_PIPE_ERCNT_Pos)   /**< (USB_HOST_STATUS_PIPE) Pipe Error Count Mask */
#define USB_HOST_STATUS_PIPE_ERCNT(value)   (USB_HOST_STATUS_PIPE_ERCNT_Msk & ((value) << USB_HOST_STATUS_PIPE_ERCNT_Pos))
#define USB_HOST_STATUS_PIPE_MASK           _U_(0xFF)                                      /**< \deprecated (USB_HOST_STATUS_PIPE) Register MASK  (Use USB_HOST_STATUS_PIPE_Msk instead)  */
#define USB_HOST_STATUS_PIPE_Msk            _U_(0xFF)                                      /**< (USB_HOST_STATUS_PIPE) Register Mask  */


/* -------- USB_DEVICE_EPCFG : (USB Offset: 0x00) (R/W 8) DEVICE_ENDPOINT End Point Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  EPTYPE0:3;                 /**< bit:   0..2  End Point Type0                          */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  EPTYPE1:3;                 /**< bit:   4..6  End Point Type1                          */
    uint8_t  NYETDIS:1;                 /**< bit:      7  NYET Token Disable                       */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPCFG_OFFSET             (0x00)                                        /**<  (USB_DEVICE_EPCFG) DEVICE_ENDPOINT End Point Configuration  Offset */
#define USB_DEVICE_EPCFG_RESETVALUE         _U_(0x00)                                     /**<  (USB_DEVICE_EPCFG) DEVICE_ENDPOINT End Point Configuration  Reset Value */

#define USB_DEVICE_EPCFG_EPTYPE0_Pos        0                                              /**< (USB_DEVICE_EPCFG) End Point Type0 Position */
#define USB_DEVICE_EPCFG_EPTYPE0_Msk        (_U_(0x7) << USB_DEVICE_EPCFG_EPTYPE0_Pos)     /**< (USB_DEVICE_EPCFG) End Point Type0 Mask */
#define USB_DEVICE_EPCFG_EPTYPE0(value)     (USB_DEVICE_EPCFG_EPTYPE0_Msk & ((value) << USB_DEVICE_EPCFG_EPTYPE0_Pos))
#define USB_DEVICE_EPCFG_EPTYPE1_Pos        4                                              /**< (USB_DEVICE_EPCFG) End Point Type1 Position */
#define USB_DEVICE_EPCFG_EPTYPE1_Msk        (_U_(0x7) << USB_DEVICE_EPCFG_EPTYPE1_Pos)     /**< (USB_DEVICE_EPCFG) End Point Type1 Mask */
#define USB_DEVICE_EPCFG_EPTYPE1(value)     (USB_DEVICE_EPCFG_EPTYPE1_Msk & ((value) << USB_DEVICE_EPCFG_EPTYPE1_Pos))
#define USB_DEVICE_EPCFG_NYETDIS_Pos        7                                              /**< (USB_DEVICE_EPCFG) NYET Token Disable Position */
#define USB_DEVICE_EPCFG_NYETDIS_Msk        (_U_(0x1) << USB_DEVICE_EPCFG_NYETDIS_Pos)     /**< (USB_DEVICE_EPCFG) NYET Token Disable Mask */
#define USB_DEVICE_EPCFG_NYETDIS            USB_DEVICE_EPCFG_NYETDIS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPCFG_NYETDIS_Msk instead */
#define USB_DEVICE_EPCFG_MASK               _U_(0xF7)                                      /**< \deprecated (USB_DEVICE_EPCFG) Register MASK  (Use USB_DEVICE_EPCFG_Msk instead)  */
#define USB_DEVICE_EPCFG_Msk                _U_(0xF7)                                      /**< (USB_DEVICE_EPCFG) Register Mask  */


/* -------- USB_DEVICE_EPSTATUSCLR : (USB Offset: 0x04) (/W 8) DEVICE_ENDPOINT End Point Pipe Status Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGLOUT:1;                 /**< bit:      0  Data Toggle OUT Clear                    */
    uint8_t  DTGLIN:1;                  /**< bit:      1  Data Toggle IN Clear                     */
    uint8_t  CURBK:1;                   /**< bit:      2  Current Bank Clear                       */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  STALLRQ0:1;                /**< bit:      4  Stall 0 Request Clear                    */
    uint8_t  STALLRQ1:1;                /**< bit:      5  Stall 1 Request Clear                    */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 Ready Clear                       */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 Ready Clear                       */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  :4;                        /**< bit:   0..3  Reserved */
    uint8_t  STALLRQ:2;                 /**< bit:   4..5  Stall x Request Clear                    */
    uint8_t  :2;                        /**< bit:   6..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPSTATUSCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPSTATUSCLR_OFFSET       (0x04)                                        /**<  (USB_DEVICE_EPSTATUSCLR) DEVICE_ENDPOINT End Point Pipe Status Clear  Offset */
#define USB_DEVICE_EPSTATUSCLR_RESETVALUE   _U_(0x00)                                     /**<  (USB_DEVICE_EPSTATUSCLR) DEVICE_ENDPOINT End Point Pipe Status Clear  Reset Value */

#define USB_DEVICE_EPSTATUSCLR_DTGLOUT_Pos  0                                              /**< (USB_DEVICE_EPSTATUSCLR) Data Toggle OUT Clear Position */
#define USB_DEVICE_EPSTATUSCLR_DTGLOUT_Msk  (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_DTGLOUT_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Data Toggle OUT Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_DTGLOUT      USB_DEVICE_EPSTATUSCLR_DTGLOUT_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_DTGLOUT_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_DTGLIN_Pos   1                                              /**< (USB_DEVICE_EPSTATUSCLR) Data Toggle IN Clear Position */
#define USB_DEVICE_EPSTATUSCLR_DTGLIN_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_DTGLIN_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Data Toggle IN Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_DTGLIN       USB_DEVICE_EPSTATUSCLR_DTGLIN_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_DTGLIN_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_CURBK_Pos    2                                              /**< (USB_DEVICE_EPSTATUSCLR) Current Bank Clear Position */
#define USB_DEVICE_EPSTATUSCLR_CURBK_Msk    (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_CURBK_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Current Bank Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_CURBK        USB_DEVICE_EPSTATUSCLR_CURBK_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_CURBK_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ0_Pos 4                                              /**< (USB_DEVICE_EPSTATUSCLR) Stall 0 Request Clear Position */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ0_Msk (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_STALLRQ0_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Stall 0 Request Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ0     USB_DEVICE_EPSTATUSCLR_STALLRQ0_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_STALLRQ0_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ1_Pos 5                                              /**< (USB_DEVICE_EPSTATUSCLR) Stall 1 Request Clear Position */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ1_Msk (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_STALLRQ1_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Stall 1 Request Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ1     USB_DEVICE_EPSTATUSCLR_STALLRQ1_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_STALLRQ1_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_BK0RDY_Pos   6                                              /**< (USB_DEVICE_EPSTATUSCLR) Bank 0 Ready Clear Position */
#define USB_DEVICE_EPSTATUSCLR_BK0RDY_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_BK0RDY_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Bank 0 Ready Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_BK0RDY       USB_DEVICE_EPSTATUSCLR_BK0RDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_BK0RDY_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_BK1RDY_Pos   7                                              /**< (USB_DEVICE_EPSTATUSCLR) Bank 1 Ready Clear Position */
#define USB_DEVICE_EPSTATUSCLR_BK1RDY_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSCLR_BK1RDY_Pos)  /**< (USB_DEVICE_EPSTATUSCLR) Bank 1 Ready Clear Mask */
#define USB_DEVICE_EPSTATUSCLR_BK1RDY       USB_DEVICE_EPSTATUSCLR_BK1RDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSCLR_BK1RDY_Msk instead */
#define USB_DEVICE_EPSTATUSCLR_MASK         _U_(0xF7)                                      /**< \deprecated (USB_DEVICE_EPSTATUSCLR) Register MASK  (Use USB_DEVICE_EPSTATUSCLR_Msk instead)  */
#define USB_DEVICE_EPSTATUSCLR_Msk          _U_(0xF7)                                      /**< (USB_DEVICE_EPSTATUSCLR) Register Mask  */

#define USB_DEVICE_EPSTATUSCLR_STALLRQ_Pos  4                                              /**< (USB_DEVICE_EPSTATUSCLR Position) Stall x Request Clear */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ_Msk  (_U_(0x3) << USB_DEVICE_EPSTATUSCLR_STALLRQ_Pos)  /**< (USB_DEVICE_EPSTATUSCLR Mask) STALLRQ */
#define USB_DEVICE_EPSTATUSCLR_STALLRQ(value) (USB_DEVICE_EPSTATUSCLR_STALLRQ_Msk & ((value) << USB_DEVICE_EPSTATUSCLR_STALLRQ_Pos))  

/* -------- USB_DEVICE_EPSTATUSSET : (USB Offset: 0x05) (/W 8) DEVICE_ENDPOINT End Point Pipe Status Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGLOUT:1;                 /**< bit:      0  Data Toggle OUT Set                      */
    uint8_t  DTGLIN:1;                  /**< bit:      1  Data Toggle IN Set                       */
    uint8_t  CURBK:1;                   /**< bit:      2  Current Bank Set                         */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  STALLRQ0:1;                /**< bit:      4  Stall 0 Request Set                      */
    uint8_t  STALLRQ1:1;                /**< bit:      5  Stall 1 Request Set                      */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 Ready Set                         */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 Ready Set                         */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  :4;                        /**< bit:   0..3  Reserved */
    uint8_t  STALLRQ:2;                 /**< bit:   4..5  Stall x Request Set                      */
    uint8_t  :2;                        /**< bit:   6..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPSTATUSSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPSTATUSSET_OFFSET       (0x05)                                        /**<  (USB_DEVICE_EPSTATUSSET) DEVICE_ENDPOINT End Point Pipe Status Set  Offset */
#define USB_DEVICE_EPSTATUSSET_RESETVALUE   _U_(0x00)                                     /**<  (USB_DEVICE_EPSTATUSSET) DEVICE_ENDPOINT End Point Pipe Status Set  Reset Value */

#define USB_DEVICE_EPSTATUSSET_DTGLOUT_Pos  0                                              /**< (USB_DEVICE_EPSTATUSSET) Data Toggle OUT Set Position */
#define USB_DEVICE_EPSTATUSSET_DTGLOUT_Msk  (_U_(0x1) << USB_DEVICE_EPSTATUSSET_DTGLOUT_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Data Toggle OUT Set Mask */
#define USB_DEVICE_EPSTATUSSET_DTGLOUT      USB_DEVICE_EPSTATUSSET_DTGLOUT_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_DTGLOUT_Msk instead */
#define USB_DEVICE_EPSTATUSSET_DTGLIN_Pos   1                                              /**< (USB_DEVICE_EPSTATUSSET) Data Toggle IN Set Position */
#define USB_DEVICE_EPSTATUSSET_DTGLIN_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSSET_DTGLIN_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Data Toggle IN Set Mask */
#define USB_DEVICE_EPSTATUSSET_DTGLIN       USB_DEVICE_EPSTATUSSET_DTGLIN_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_DTGLIN_Msk instead */
#define USB_DEVICE_EPSTATUSSET_CURBK_Pos    2                                              /**< (USB_DEVICE_EPSTATUSSET) Current Bank Set Position */
#define USB_DEVICE_EPSTATUSSET_CURBK_Msk    (_U_(0x1) << USB_DEVICE_EPSTATUSSET_CURBK_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Current Bank Set Mask */
#define USB_DEVICE_EPSTATUSSET_CURBK        USB_DEVICE_EPSTATUSSET_CURBK_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_CURBK_Msk instead */
#define USB_DEVICE_EPSTATUSSET_STALLRQ0_Pos 4                                              /**< (USB_DEVICE_EPSTATUSSET) Stall 0 Request Set Position */
#define USB_DEVICE_EPSTATUSSET_STALLRQ0_Msk (_U_(0x1) << USB_DEVICE_EPSTATUSSET_STALLRQ0_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Stall 0 Request Set Mask */
#define USB_DEVICE_EPSTATUSSET_STALLRQ0     USB_DEVICE_EPSTATUSSET_STALLRQ0_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_STALLRQ0_Msk instead */
#define USB_DEVICE_EPSTATUSSET_STALLRQ1_Pos 5                                              /**< (USB_DEVICE_EPSTATUSSET) Stall 1 Request Set Position */
#define USB_DEVICE_EPSTATUSSET_STALLRQ1_Msk (_U_(0x1) << USB_DEVICE_EPSTATUSSET_STALLRQ1_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Stall 1 Request Set Mask */
#define USB_DEVICE_EPSTATUSSET_STALLRQ1     USB_DEVICE_EPSTATUSSET_STALLRQ1_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_STALLRQ1_Msk instead */
#define USB_DEVICE_EPSTATUSSET_BK0RDY_Pos   6                                              /**< (USB_DEVICE_EPSTATUSSET) Bank 0 Ready Set Position */
#define USB_DEVICE_EPSTATUSSET_BK0RDY_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSSET_BK0RDY_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Bank 0 Ready Set Mask */
#define USB_DEVICE_EPSTATUSSET_BK0RDY       USB_DEVICE_EPSTATUSSET_BK0RDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_BK0RDY_Msk instead */
#define USB_DEVICE_EPSTATUSSET_BK1RDY_Pos   7                                              /**< (USB_DEVICE_EPSTATUSSET) Bank 1 Ready Set Position */
#define USB_DEVICE_EPSTATUSSET_BK1RDY_Msk   (_U_(0x1) << USB_DEVICE_EPSTATUSSET_BK1RDY_Pos)  /**< (USB_DEVICE_EPSTATUSSET) Bank 1 Ready Set Mask */
#define USB_DEVICE_EPSTATUSSET_BK1RDY       USB_DEVICE_EPSTATUSSET_BK1RDY_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUSSET_BK1RDY_Msk instead */
#define USB_DEVICE_EPSTATUSSET_MASK         _U_(0xF7)                                      /**< \deprecated (USB_DEVICE_EPSTATUSSET) Register MASK  (Use USB_DEVICE_EPSTATUSSET_Msk instead)  */
#define USB_DEVICE_EPSTATUSSET_Msk          _U_(0xF7)                                      /**< (USB_DEVICE_EPSTATUSSET) Register Mask  */

#define USB_DEVICE_EPSTATUSSET_STALLRQ_Pos  4                                              /**< (USB_DEVICE_EPSTATUSSET Position) Stall x Request Set */
#define USB_DEVICE_EPSTATUSSET_STALLRQ_Msk  (_U_(0x3) << USB_DEVICE_EPSTATUSSET_STALLRQ_Pos)  /**< (USB_DEVICE_EPSTATUSSET Mask) STALLRQ */
#define USB_DEVICE_EPSTATUSSET_STALLRQ(value) (USB_DEVICE_EPSTATUSSET_STALLRQ_Msk & ((value) << USB_DEVICE_EPSTATUSSET_STALLRQ_Pos))  

/* -------- USB_DEVICE_EPSTATUS : (USB Offset: 0x06) (R/ 8) DEVICE_ENDPOINT End Point Pipe Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGLOUT:1;                 /**< bit:      0  Data Toggle Out                          */
    uint8_t  DTGLIN:1;                  /**< bit:      1  Data Toggle In                           */
    uint8_t  CURBK:1;                   /**< bit:      2  Current Bank                             */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  STALLRQ0:1;                /**< bit:      4  Stall 0 Request                          */
    uint8_t  STALLRQ1:1;                /**< bit:      5  Stall 1 Request                          */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 ready                             */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 ready                             */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  :4;                        /**< bit:   0..3  Reserved */
    uint8_t  STALLRQ:2;                 /**< bit:   4..5  Stall x Request                          */
    uint8_t  :2;                        /**< bit:   6..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPSTATUS_OFFSET          (0x06)                                        /**<  (USB_DEVICE_EPSTATUS) DEVICE_ENDPOINT End Point Pipe Status  Offset */
#define USB_DEVICE_EPSTATUS_RESETVALUE      _U_(0x00)                                     /**<  (USB_DEVICE_EPSTATUS) DEVICE_ENDPOINT End Point Pipe Status  Reset Value */

#define USB_DEVICE_EPSTATUS_DTGLOUT_Pos     0                                              /**< (USB_DEVICE_EPSTATUS) Data Toggle Out Position */
#define USB_DEVICE_EPSTATUS_DTGLOUT_Msk     (_U_(0x1) << USB_DEVICE_EPSTATUS_DTGLOUT_Pos)  /**< (USB_DEVICE_EPSTATUS) Data Toggle Out Mask */
#define USB_DEVICE_EPSTATUS_DTGLOUT         USB_DEVICE_EPSTATUS_DTGLOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_DTGLOUT_Msk instead */
#define USB_DEVICE_EPSTATUS_DTGLIN_Pos      1                                              /**< (USB_DEVICE_EPSTATUS) Data Toggle In Position */
#define USB_DEVICE_EPSTATUS_DTGLIN_Msk      (_U_(0x1) << USB_DEVICE_EPSTATUS_DTGLIN_Pos)   /**< (USB_DEVICE_EPSTATUS) Data Toggle In Mask */
#define USB_DEVICE_EPSTATUS_DTGLIN          USB_DEVICE_EPSTATUS_DTGLIN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_DTGLIN_Msk instead */
#define USB_DEVICE_EPSTATUS_CURBK_Pos       2                                              /**< (USB_DEVICE_EPSTATUS) Current Bank Position */
#define USB_DEVICE_EPSTATUS_CURBK_Msk       (_U_(0x1) << USB_DEVICE_EPSTATUS_CURBK_Pos)    /**< (USB_DEVICE_EPSTATUS) Current Bank Mask */
#define USB_DEVICE_EPSTATUS_CURBK           USB_DEVICE_EPSTATUS_CURBK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_CURBK_Msk instead */
#define USB_DEVICE_EPSTATUS_STALLRQ0_Pos    4                                              /**< (USB_DEVICE_EPSTATUS) Stall 0 Request Position */
#define USB_DEVICE_EPSTATUS_STALLRQ0_Msk    (_U_(0x1) << USB_DEVICE_EPSTATUS_STALLRQ0_Pos)  /**< (USB_DEVICE_EPSTATUS) Stall 0 Request Mask */
#define USB_DEVICE_EPSTATUS_STALLRQ0        USB_DEVICE_EPSTATUS_STALLRQ0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_STALLRQ0_Msk instead */
#define USB_DEVICE_EPSTATUS_STALLRQ1_Pos    5                                              /**< (USB_DEVICE_EPSTATUS) Stall 1 Request Position */
#define USB_DEVICE_EPSTATUS_STALLRQ1_Msk    (_U_(0x1) << USB_DEVICE_EPSTATUS_STALLRQ1_Pos)  /**< (USB_DEVICE_EPSTATUS) Stall 1 Request Mask */
#define USB_DEVICE_EPSTATUS_STALLRQ1        USB_DEVICE_EPSTATUS_STALLRQ1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_STALLRQ1_Msk instead */
#define USB_DEVICE_EPSTATUS_BK0RDY_Pos      6                                              /**< (USB_DEVICE_EPSTATUS) Bank 0 ready Position */
#define USB_DEVICE_EPSTATUS_BK0RDY_Msk      (_U_(0x1) << USB_DEVICE_EPSTATUS_BK0RDY_Pos)   /**< (USB_DEVICE_EPSTATUS) Bank 0 ready Mask */
#define USB_DEVICE_EPSTATUS_BK0RDY          USB_DEVICE_EPSTATUS_BK0RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_BK0RDY_Msk instead */
#define USB_DEVICE_EPSTATUS_BK1RDY_Pos      7                                              /**< (USB_DEVICE_EPSTATUS) Bank 1 ready Position */
#define USB_DEVICE_EPSTATUS_BK1RDY_Msk      (_U_(0x1) << USB_DEVICE_EPSTATUS_BK1RDY_Pos)   /**< (USB_DEVICE_EPSTATUS) Bank 1 ready Mask */
#define USB_DEVICE_EPSTATUS_BK1RDY          USB_DEVICE_EPSTATUS_BK1RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPSTATUS_BK1RDY_Msk instead */
#define USB_DEVICE_EPSTATUS_MASK            _U_(0xF7)                                      /**< \deprecated (USB_DEVICE_EPSTATUS) Register MASK  (Use USB_DEVICE_EPSTATUS_Msk instead)  */
#define USB_DEVICE_EPSTATUS_Msk             _U_(0xF7)                                      /**< (USB_DEVICE_EPSTATUS) Register Mask  */

#define USB_DEVICE_EPSTATUS_STALLRQ_Pos     4                                              /**< (USB_DEVICE_EPSTATUS Position) Stall x Request */
#define USB_DEVICE_EPSTATUS_STALLRQ_Msk     (_U_(0x3) << USB_DEVICE_EPSTATUS_STALLRQ_Pos)  /**< (USB_DEVICE_EPSTATUS Mask) STALLRQ */
#define USB_DEVICE_EPSTATUS_STALLRQ(value)  (USB_DEVICE_EPSTATUS_STALLRQ_Msk & ((value) << USB_DEVICE_EPSTATUS_STALLRQ_Pos))  

/* -------- USB_DEVICE_EPINTFLAG : (USB Offset: 0x07) (R/W 8) DEVICE_ENDPOINT End Point Interrupt Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t TRCPT0:1;                  /**< bit:      0  Transfer Complete 0                      */
    __I uint8_t TRCPT1:1;                  /**< bit:      1  Transfer Complete 1                      */
    __I uint8_t TRFAIL0:1;                 /**< bit:      2  Error Flow 0                             */
    __I uint8_t TRFAIL1:1;                 /**< bit:      3  Error Flow 1                             */
    __I uint8_t RXSTP:1;                   /**< bit:      4  Received Setup                           */
    __I uint8_t STALL0:1;                  /**< bit:      5  Stall 0 In/out                           */
    __I uint8_t STALL1:1;                  /**< bit:      6  Stall 1 In/out                           */
    __I uint8_t :1;                        /**< bit:      7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint8_t TRCPT:2;                   /**< bit:   0..1  Transfer Complete x                      */
    __I uint8_t TRFAIL:2;                  /**< bit:   2..3  Error Flow x                             */
    __I uint8_t :1;                        /**< bit:      4  Reserved */
    __I uint8_t STALL:2;                   /**< bit:   5..6  Stall x In/out                           */
    __I uint8_t :1;                        /**< bit:      7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPINTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPINTFLAG_OFFSET         (0x07)                                        /**<  (USB_DEVICE_EPINTFLAG) DEVICE_ENDPOINT End Point Interrupt Flag  Offset */
#define USB_DEVICE_EPINTFLAG_RESETVALUE     _U_(0x00)                                     /**<  (USB_DEVICE_EPINTFLAG) DEVICE_ENDPOINT End Point Interrupt Flag  Reset Value */

#define USB_DEVICE_EPINTFLAG_TRCPT0_Pos     0                                              /**< (USB_DEVICE_EPINTFLAG) Transfer Complete 0 Position */
#define USB_DEVICE_EPINTFLAG_TRCPT0_Msk     (_U_(0x1) << USB_DEVICE_EPINTFLAG_TRCPT0_Pos)  /**< (USB_DEVICE_EPINTFLAG) Transfer Complete 0 Mask */
#define USB_DEVICE_EPINTFLAG_TRCPT0         USB_DEVICE_EPINTFLAG_TRCPT0_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_TRCPT0_Msk instead */
#define USB_DEVICE_EPINTFLAG_TRCPT1_Pos     1                                              /**< (USB_DEVICE_EPINTFLAG) Transfer Complete 1 Position */
#define USB_DEVICE_EPINTFLAG_TRCPT1_Msk     (_U_(0x1) << USB_DEVICE_EPINTFLAG_TRCPT1_Pos)  /**< (USB_DEVICE_EPINTFLAG) Transfer Complete 1 Mask */
#define USB_DEVICE_EPINTFLAG_TRCPT1         USB_DEVICE_EPINTFLAG_TRCPT1_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_TRCPT1_Msk instead */
#define USB_DEVICE_EPINTFLAG_TRFAIL0_Pos    2                                              /**< (USB_DEVICE_EPINTFLAG) Error Flow 0 Position */
#define USB_DEVICE_EPINTFLAG_TRFAIL0_Msk    (_U_(0x1) << USB_DEVICE_EPINTFLAG_TRFAIL0_Pos)  /**< (USB_DEVICE_EPINTFLAG) Error Flow 0 Mask */
#define USB_DEVICE_EPINTFLAG_TRFAIL0        USB_DEVICE_EPINTFLAG_TRFAIL0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_TRFAIL0_Msk instead */
#define USB_DEVICE_EPINTFLAG_TRFAIL1_Pos    3                                              /**< (USB_DEVICE_EPINTFLAG) Error Flow 1 Position */
#define USB_DEVICE_EPINTFLAG_TRFAIL1_Msk    (_U_(0x1) << USB_DEVICE_EPINTFLAG_TRFAIL1_Pos)  /**< (USB_DEVICE_EPINTFLAG) Error Flow 1 Mask */
#define USB_DEVICE_EPINTFLAG_TRFAIL1        USB_DEVICE_EPINTFLAG_TRFAIL1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_TRFAIL1_Msk instead */
#define USB_DEVICE_EPINTFLAG_RXSTP_Pos      4                                              /**< (USB_DEVICE_EPINTFLAG) Received Setup Position */
#define USB_DEVICE_EPINTFLAG_RXSTP_Msk      (_U_(0x1) << USB_DEVICE_EPINTFLAG_RXSTP_Pos)   /**< (USB_DEVICE_EPINTFLAG) Received Setup Mask */
#define USB_DEVICE_EPINTFLAG_RXSTP          USB_DEVICE_EPINTFLAG_RXSTP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_RXSTP_Msk instead */
#define USB_DEVICE_EPINTFLAG_STALL0_Pos     5                                              /**< (USB_DEVICE_EPINTFLAG) Stall 0 In/out Position */
#define USB_DEVICE_EPINTFLAG_STALL0_Msk     (_U_(0x1) << USB_DEVICE_EPINTFLAG_STALL0_Pos)  /**< (USB_DEVICE_EPINTFLAG) Stall 0 In/out Mask */
#define USB_DEVICE_EPINTFLAG_STALL0         USB_DEVICE_EPINTFLAG_STALL0_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_STALL0_Msk instead */
#define USB_DEVICE_EPINTFLAG_STALL1_Pos     6                                              /**< (USB_DEVICE_EPINTFLAG) Stall 1 In/out Position */
#define USB_DEVICE_EPINTFLAG_STALL1_Msk     (_U_(0x1) << USB_DEVICE_EPINTFLAG_STALL1_Pos)  /**< (USB_DEVICE_EPINTFLAG) Stall 1 In/out Mask */
#define USB_DEVICE_EPINTFLAG_STALL1         USB_DEVICE_EPINTFLAG_STALL1_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTFLAG_STALL1_Msk instead */
#define USB_DEVICE_EPINTFLAG_MASK           _U_(0x7F)                                      /**< \deprecated (USB_DEVICE_EPINTFLAG) Register MASK  (Use USB_DEVICE_EPINTFLAG_Msk instead)  */
#define USB_DEVICE_EPINTFLAG_Msk            _U_(0x7F)                                      /**< (USB_DEVICE_EPINTFLAG) Register Mask  */

#define USB_DEVICE_EPINTFLAG_TRCPT_Pos      0                                              /**< (USB_DEVICE_EPINTFLAG Position) Transfer Complete x */
#define USB_DEVICE_EPINTFLAG_TRCPT_Msk      (_U_(0x3) << USB_DEVICE_EPINTFLAG_TRCPT_Pos)   /**< (USB_DEVICE_EPINTFLAG Mask) TRCPT */
#define USB_DEVICE_EPINTFLAG_TRCPT(value)   (USB_DEVICE_EPINTFLAG_TRCPT_Msk & ((value) << USB_DEVICE_EPINTFLAG_TRCPT_Pos))  
#define USB_DEVICE_EPINTFLAG_TRFAIL_Pos     2                                              /**< (USB_DEVICE_EPINTFLAG Position) Error Flow x */
#define USB_DEVICE_EPINTFLAG_TRFAIL_Msk     (_U_(0x3) << USB_DEVICE_EPINTFLAG_TRFAIL_Pos)  /**< (USB_DEVICE_EPINTFLAG Mask) TRFAIL */
#define USB_DEVICE_EPINTFLAG_TRFAIL(value)  (USB_DEVICE_EPINTFLAG_TRFAIL_Msk & ((value) << USB_DEVICE_EPINTFLAG_TRFAIL_Pos))  
#define USB_DEVICE_EPINTFLAG_STALL_Pos      5                                              /**< (USB_DEVICE_EPINTFLAG Position) Stall x In/out */
#define USB_DEVICE_EPINTFLAG_STALL_Msk      (_U_(0x3) << USB_DEVICE_EPINTFLAG_STALL_Pos)   /**< (USB_DEVICE_EPINTFLAG Mask) STALL */
#define USB_DEVICE_EPINTFLAG_STALL(value)   (USB_DEVICE_EPINTFLAG_STALL_Msk & ((value) << USB_DEVICE_EPINTFLAG_STALL_Pos))  

/* -------- USB_DEVICE_EPINTENCLR : (USB Offset: 0x08) (R/W 8) DEVICE_ENDPOINT End Point Interrupt Clear Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TRCPT0:1;                  /**< bit:      0  Transfer Complete 0 Interrupt Disable    */
    uint8_t  TRCPT1:1;                  /**< bit:      1  Transfer Complete 1 Interrupt Disable    */
    uint8_t  TRFAIL0:1;                 /**< bit:      2  Error Flow 0 Interrupt Disable           */
    uint8_t  TRFAIL1:1;                 /**< bit:      3  Error Flow 1 Interrupt Disable           */
    uint8_t  RXSTP:1;                   /**< bit:      4  Received Setup Interrupt Disable         */
    uint8_t  STALL0:1;                  /**< bit:      5  Stall 0 In/Out Interrupt Disable         */
    uint8_t  STALL1:1;                  /**< bit:      6  Stall 1 In/Out Interrupt Disable         */
    uint8_t  :1;                        /**< bit:      7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  TRCPT:2;                   /**< bit:   0..1  Transfer Complete x Interrupt Disable    */
    uint8_t  TRFAIL:2;                  /**< bit:   2..3  Error Flow x Interrupt Disable           */
    uint8_t  :1;                        /**< bit:      4  Reserved */
    uint8_t  STALL:2;                   /**< bit:   5..6  Stall x In/Out Interrupt Disable         */
    uint8_t  :1;                        /**< bit:      7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPINTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPINTENCLR_OFFSET        (0x08)                                        /**<  (USB_DEVICE_EPINTENCLR) DEVICE_ENDPOINT End Point Interrupt Clear Flag  Offset */
#define USB_DEVICE_EPINTENCLR_RESETVALUE    _U_(0x00)                                     /**<  (USB_DEVICE_EPINTENCLR) DEVICE_ENDPOINT End Point Interrupt Clear Flag  Reset Value */

#define USB_DEVICE_EPINTENCLR_TRCPT0_Pos    0                                              /**< (USB_DEVICE_EPINTENCLR) Transfer Complete 0 Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_TRCPT0_Msk    (_U_(0x1) << USB_DEVICE_EPINTENCLR_TRCPT0_Pos)  /**< (USB_DEVICE_EPINTENCLR) Transfer Complete 0 Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_TRCPT0        USB_DEVICE_EPINTENCLR_TRCPT0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_TRCPT0_Msk instead */
#define USB_DEVICE_EPINTENCLR_TRCPT1_Pos    1                                              /**< (USB_DEVICE_EPINTENCLR) Transfer Complete 1 Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_TRCPT1_Msk    (_U_(0x1) << USB_DEVICE_EPINTENCLR_TRCPT1_Pos)  /**< (USB_DEVICE_EPINTENCLR) Transfer Complete 1 Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_TRCPT1        USB_DEVICE_EPINTENCLR_TRCPT1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_TRCPT1_Msk instead */
#define USB_DEVICE_EPINTENCLR_TRFAIL0_Pos   2                                              /**< (USB_DEVICE_EPINTENCLR) Error Flow 0 Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_TRFAIL0_Msk   (_U_(0x1) << USB_DEVICE_EPINTENCLR_TRFAIL0_Pos)  /**< (USB_DEVICE_EPINTENCLR) Error Flow 0 Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_TRFAIL0       USB_DEVICE_EPINTENCLR_TRFAIL0_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_TRFAIL0_Msk instead */
#define USB_DEVICE_EPINTENCLR_TRFAIL1_Pos   3                                              /**< (USB_DEVICE_EPINTENCLR) Error Flow 1 Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_TRFAIL1_Msk   (_U_(0x1) << USB_DEVICE_EPINTENCLR_TRFAIL1_Pos)  /**< (USB_DEVICE_EPINTENCLR) Error Flow 1 Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_TRFAIL1       USB_DEVICE_EPINTENCLR_TRFAIL1_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_TRFAIL1_Msk instead */
#define USB_DEVICE_EPINTENCLR_RXSTP_Pos     4                                              /**< (USB_DEVICE_EPINTENCLR) Received Setup Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_RXSTP_Msk     (_U_(0x1) << USB_DEVICE_EPINTENCLR_RXSTP_Pos)  /**< (USB_DEVICE_EPINTENCLR) Received Setup Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_RXSTP         USB_DEVICE_EPINTENCLR_RXSTP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_RXSTP_Msk instead */
#define USB_DEVICE_EPINTENCLR_STALL0_Pos    5                                              /**< (USB_DEVICE_EPINTENCLR) Stall 0 In/Out Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_STALL0_Msk    (_U_(0x1) << USB_DEVICE_EPINTENCLR_STALL0_Pos)  /**< (USB_DEVICE_EPINTENCLR) Stall 0 In/Out Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_STALL0        USB_DEVICE_EPINTENCLR_STALL0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_STALL0_Msk instead */
#define USB_DEVICE_EPINTENCLR_STALL1_Pos    6                                              /**< (USB_DEVICE_EPINTENCLR) Stall 1 In/Out Interrupt Disable Position */
#define USB_DEVICE_EPINTENCLR_STALL1_Msk    (_U_(0x1) << USB_DEVICE_EPINTENCLR_STALL1_Pos)  /**< (USB_DEVICE_EPINTENCLR) Stall 1 In/Out Interrupt Disable Mask */
#define USB_DEVICE_EPINTENCLR_STALL1        USB_DEVICE_EPINTENCLR_STALL1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENCLR_STALL1_Msk instead */
#define USB_DEVICE_EPINTENCLR_MASK          _U_(0x7F)                                      /**< \deprecated (USB_DEVICE_EPINTENCLR) Register MASK  (Use USB_DEVICE_EPINTENCLR_Msk instead)  */
#define USB_DEVICE_EPINTENCLR_Msk           _U_(0x7F)                                      /**< (USB_DEVICE_EPINTENCLR) Register Mask  */

#define USB_DEVICE_EPINTENCLR_TRCPT_Pos     0                                              /**< (USB_DEVICE_EPINTENCLR Position) Transfer Complete x Interrupt Disable */
#define USB_DEVICE_EPINTENCLR_TRCPT_Msk     (_U_(0x3) << USB_DEVICE_EPINTENCLR_TRCPT_Pos)  /**< (USB_DEVICE_EPINTENCLR Mask) TRCPT */
#define USB_DEVICE_EPINTENCLR_TRCPT(value)  (USB_DEVICE_EPINTENCLR_TRCPT_Msk & ((value) << USB_DEVICE_EPINTENCLR_TRCPT_Pos))  
#define USB_DEVICE_EPINTENCLR_TRFAIL_Pos    2                                              /**< (USB_DEVICE_EPINTENCLR Position) Error Flow x Interrupt Disable */
#define USB_DEVICE_EPINTENCLR_TRFAIL_Msk    (_U_(0x3) << USB_DEVICE_EPINTENCLR_TRFAIL_Pos)  /**< (USB_DEVICE_EPINTENCLR Mask) TRFAIL */
#define USB_DEVICE_EPINTENCLR_TRFAIL(value) (USB_DEVICE_EPINTENCLR_TRFAIL_Msk & ((value) << USB_DEVICE_EPINTENCLR_TRFAIL_Pos))  
#define USB_DEVICE_EPINTENCLR_STALL_Pos     5                                              /**< (USB_DEVICE_EPINTENCLR Position) Stall x In/Out Interrupt Disable */
#define USB_DEVICE_EPINTENCLR_STALL_Msk     (_U_(0x3) << USB_DEVICE_EPINTENCLR_STALL_Pos)  /**< (USB_DEVICE_EPINTENCLR Mask) STALL */
#define USB_DEVICE_EPINTENCLR_STALL(value)  (USB_DEVICE_EPINTENCLR_STALL_Msk & ((value) << USB_DEVICE_EPINTENCLR_STALL_Pos))  

/* -------- USB_DEVICE_EPINTENSET : (USB Offset: 0x09) (R/W 8) DEVICE_ENDPOINT End Point Interrupt Set Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TRCPT0:1;                  /**< bit:      0  Transfer Complete 0 Interrupt Enable     */
    uint8_t  TRCPT1:1;                  /**< bit:      1  Transfer Complete 1 Interrupt Enable     */
    uint8_t  TRFAIL0:1;                 /**< bit:      2  Error Flow 0 Interrupt Enable            */
    uint8_t  TRFAIL1:1;                 /**< bit:      3  Error Flow 1 Interrupt Enable            */
    uint8_t  RXSTP:1;                   /**< bit:      4  Received Setup Interrupt Enable          */
    uint8_t  STALL0:1;                  /**< bit:      5  Stall 0 In/out Interrupt enable          */
    uint8_t  STALL1:1;                  /**< bit:      6  Stall 1 In/out Interrupt enable          */
    uint8_t  :1;                        /**< bit:      7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  TRCPT:2;                   /**< bit:   0..1  Transfer Complete x Interrupt Enable     */
    uint8_t  TRFAIL:2;                  /**< bit:   2..3  Error Flow x Interrupt Enable            */
    uint8_t  :1;                        /**< bit:      4  Reserved */
    uint8_t  STALL:2;                   /**< bit:   5..6  Stall x In/out Interrupt enable          */
    uint8_t  :1;                        /**< bit:      7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_EPINTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPINTENSET_OFFSET        (0x09)                                        /**<  (USB_DEVICE_EPINTENSET) DEVICE_ENDPOINT End Point Interrupt Set Flag  Offset */
#define USB_DEVICE_EPINTENSET_RESETVALUE    _U_(0x00)                                     /**<  (USB_DEVICE_EPINTENSET) DEVICE_ENDPOINT End Point Interrupt Set Flag  Reset Value */

#define USB_DEVICE_EPINTENSET_TRCPT0_Pos    0                                              /**< (USB_DEVICE_EPINTENSET) Transfer Complete 0 Interrupt Enable Position */
#define USB_DEVICE_EPINTENSET_TRCPT0_Msk    (_U_(0x1) << USB_DEVICE_EPINTENSET_TRCPT0_Pos)  /**< (USB_DEVICE_EPINTENSET) Transfer Complete 0 Interrupt Enable Mask */
#define USB_DEVICE_EPINTENSET_TRCPT0        USB_DEVICE_EPINTENSET_TRCPT0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_TRCPT0_Msk instead */
#define USB_DEVICE_EPINTENSET_TRCPT1_Pos    1                                              /**< (USB_DEVICE_EPINTENSET) Transfer Complete 1 Interrupt Enable Position */
#define USB_DEVICE_EPINTENSET_TRCPT1_Msk    (_U_(0x1) << USB_DEVICE_EPINTENSET_TRCPT1_Pos)  /**< (USB_DEVICE_EPINTENSET) Transfer Complete 1 Interrupt Enable Mask */
#define USB_DEVICE_EPINTENSET_TRCPT1        USB_DEVICE_EPINTENSET_TRCPT1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_TRCPT1_Msk instead */
#define USB_DEVICE_EPINTENSET_TRFAIL0_Pos   2                                              /**< (USB_DEVICE_EPINTENSET) Error Flow 0 Interrupt Enable Position */
#define USB_DEVICE_EPINTENSET_TRFAIL0_Msk   (_U_(0x1) << USB_DEVICE_EPINTENSET_TRFAIL0_Pos)  /**< (USB_DEVICE_EPINTENSET) Error Flow 0 Interrupt Enable Mask */
#define USB_DEVICE_EPINTENSET_TRFAIL0       USB_DEVICE_EPINTENSET_TRFAIL0_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_TRFAIL0_Msk instead */
#define USB_DEVICE_EPINTENSET_TRFAIL1_Pos   3                                              /**< (USB_DEVICE_EPINTENSET) Error Flow 1 Interrupt Enable Position */
#define USB_DEVICE_EPINTENSET_TRFAIL1_Msk   (_U_(0x1) << USB_DEVICE_EPINTENSET_TRFAIL1_Pos)  /**< (USB_DEVICE_EPINTENSET) Error Flow 1 Interrupt Enable Mask */
#define USB_DEVICE_EPINTENSET_TRFAIL1       USB_DEVICE_EPINTENSET_TRFAIL1_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_TRFAIL1_Msk instead */
#define USB_DEVICE_EPINTENSET_RXSTP_Pos     4                                              /**< (USB_DEVICE_EPINTENSET) Received Setup Interrupt Enable Position */
#define USB_DEVICE_EPINTENSET_RXSTP_Msk     (_U_(0x1) << USB_DEVICE_EPINTENSET_RXSTP_Pos)  /**< (USB_DEVICE_EPINTENSET) Received Setup Interrupt Enable Mask */
#define USB_DEVICE_EPINTENSET_RXSTP         USB_DEVICE_EPINTENSET_RXSTP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_RXSTP_Msk instead */
#define USB_DEVICE_EPINTENSET_STALL0_Pos    5                                              /**< (USB_DEVICE_EPINTENSET) Stall 0 In/out Interrupt enable Position */
#define USB_DEVICE_EPINTENSET_STALL0_Msk    (_U_(0x1) << USB_DEVICE_EPINTENSET_STALL0_Pos)  /**< (USB_DEVICE_EPINTENSET) Stall 0 In/out Interrupt enable Mask */
#define USB_DEVICE_EPINTENSET_STALL0        USB_DEVICE_EPINTENSET_STALL0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_STALL0_Msk instead */
#define USB_DEVICE_EPINTENSET_STALL1_Pos    6                                              /**< (USB_DEVICE_EPINTENSET) Stall 1 In/out Interrupt enable Position */
#define USB_DEVICE_EPINTENSET_STALL1_Msk    (_U_(0x1) << USB_DEVICE_EPINTENSET_STALL1_Pos)  /**< (USB_DEVICE_EPINTENSET) Stall 1 In/out Interrupt enable Mask */
#define USB_DEVICE_EPINTENSET_STALL1        USB_DEVICE_EPINTENSET_STALL1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTENSET_STALL1_Msk instead */
#define USB_DEVICE_EPINTENSET_MASK          _U_(0x7F)                                      /**< \deprecated (USB_DEVICE_EPINTENSET) Register MASK  (Use USB_DEVICE_EPINTENSET_Msk instead)  */
#define USB_DEVICE_EPINTENSET_Msk           _U_(0x7F)                                      /**< (USB_DEVICE_EPINTENSET) Register Mask  */

#define USB_DEVICE_EPINTENSET_TRCPT_Pos     0                                              /**< (USB_DEVICE_EPINTENSET Position) Transfer Complete x Interrupt Enable */
#define USB_DEVICE_EPINTENSET_TRCPT_Msk     (_U_(0x3) << USB_DEVICE_EPINTENSET_TRCPT_Pos)  /**< (USB_DEVICE_EPINTENSET Mask) TRCPT */
#define USB_DEVICE_EPINTENSET_TRCPT(value)  (USB_DEVICE_EPINTENSET_TRCPT_Msk & ((value) << USB_DEVICE_EPINTENSET_TRCPT_Pos))  
#define USB_DEVICE_EPINTENSET_TRFAIL_Pos    2                                              /**< (USB_DEVICE_EPINTENSET Position) Error Flow x Interrupt Enable */
#define USB_DEVICE_EPINTENSET_TRFAIL_Msk    (_U_(0x3) << USB_DEVICE_EPINTENSET_TRFAIL_Pos)  /**< (USB_DEVICE_EPINTENSET Mask) TRFAIL */
#define USB_DEVICE_EPINTENSET_TRFAIL(value) (USB_DEVICE_EPINTENSET_TRFAIL_Msk & ((value) << USB_DEVICE_EPINTENSET_TRFAIL_Pos))  
#define USB_DEVICE_EPINTENSET_STALL_Pos     5                                              /**< (USB_DEVICE_EPINTENSET Position) Stall x In/out Interrupt enable */
#define USB_DEVICE_EPINTENSET_STALL_Msk     (_U_(0x3) << USB_DEVICE_EPINTENSET_STALL_Pos)  /**< (USB_DEVICE_EPINTENSET Mask) STALL */
#define USB_DEVICE_EPINTENSET_STALL(value)  (USB_DEVICE_EPINTENSET_STALL_Msk & ((value) << USB_DEVICE_EPINTENSET_STALL_Pos))  

/* -------- USB_HOST_PCFG : (USB Offset: 0x00) (R/W 8) HOST_PIPE End Point Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PTOKEN:2;                  /**< bit:   0..1  Pipe Token                               */
    uint8_t  BK:1;                      /**< bit:      2  Pipe Bank                                */
    uint8_t  PTYPE:3;                   /**< bit:   3..5  Pipe Type                                */
    uint8_t  :2;                        /**< bit:   6..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PCFG_OFFSET                (0x00)                                        /**<  (USB_HOST_PCFG) HOST_PIPE End Point Configuration  Offset */
#define USB_HOST_PCFG_RESETVALUE            _U_(0x00)                                     /**<  (USB_HOST_PCFG) HOST_PIPE End Point Configuration  Reset Value */

#define USB_HOST_PCFG_PTOKEN_Pos            0                                              /**< (USB_HOST_PCFG) Pipe Token Position */
#define USB_HOST_PCFG_PTOKEN_Msk            (_U_(0x3) << USB_HOST_PCFG_PTOKEN_Pos)         /**< (USB_HOST_PCFG) Pipe Token Mask */
#define USB_HOST_PCFG_PTOKEN(value)         (USB_HOST_PCFG_PTOKEN_Msk & ((value) << USB_HOST_PCFG_PTOKEN_Pos))
#define USB_HOST_PCFG_BK_Pos                2                                              /**< (USB_HOST_PCFG) Pipe Bank Position */
#define USB_HOST_PCFG_BK_Msk                (_U_(0x1) << USB_HOST_PCFG_BK_Pos)             /**< (USB_HOST_PCFG) Pipe Bank Mask */
#define USB_HOST_PCFG_BK                    USB_HOST_PCFG_BK_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PCFG_BK_Msk instead */
#define USB_HOST_PCFG_PTYPE_Pos             3                                              /**< (USB_HOST_PCFG) Pipe Type Position */
#define USB_HOST_PCFG_PTYPE_Msk             (_U_(0x7) << USB_HOST_PCFG_PTYPE_Pos)          /**< (USB_HOST_PCFG) Pipe Type Mask */
#define USB_HOST_PCFG_PTYPE(value)          (USB_HOST_PCFG_PTYPE_Msk & ((value) << USB_HOST_PCFG_PTYPE_Pos))
#define USB_HOST_PCFG_MASK                  _U_(0x3F)                                      /**< \deprecated (USB_HOST_PCFG) Register MASK  (Use USB_HOST_PCFG_Msk instead)  */
#define USB_HOST_PCFG_Msk                   _U_(0x3F)                                      /**< (USB_HOST_PCFG) Register Mask  */


/* -------- USB_HOST_BINTERVAL : (USB Offset: 0x03) (R/W 8) HOST_PIPE Bus Access Period of Pipe -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  BITINTERVAL:8;             /**< bit:   0..7  Bit Interval                             */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_BINTERVAL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_BINTERVAL_OFFSET           (0x03)                                        /**<  (USB_HOST_BINTERVAL) HOST_PIPE Bus Access Period of Pipe  Offset */
#define USB_HOST_BINTERVAL_RESETVALUE       _U_(0x00)                                     /**<  (USB_HOST_BINTERVAL) HOST_PIPE Bus Access Period of Pipe  Reset Value */

#define USB_HOST_BINTERVAL_BITINTERVAL_Pos  0                                              /**< (USB_HOST_BINTERVAL) Bit Interval Position */
#define USB_HOST_BINTERVAL_BITINTERVAL_Msk  (_U_(0xFF) << USB_HOST_BINTERVAL_BITINTERVAL_Pos)  /**< (USB_HOST_BINTERVAL) Bit Interval Mask */
#define USB_HOST_BINTERVAL_BITINTERVAL(value) (USB_HOST_BINTERVAL_BITINTERVAL_Msk & ((value) << USB_HOST_BINTERVAL_BITINTERVAL_Pos))
#define USB_HOST_BINTERVAL_MASK             _U_(0xFF)                                      /**< \deprecated (USB_HOST_BINTERVAL) Register MASK  (Use USB_HOST_BINTERVAL_Msk instead)  */
#define USB_HOST_BINTERVAL_Msk              _U_(0xFF)                                      /**< (USB_HOST_BINTERVAL) Register Mask  */


/* -------- USB_HOST_PSTATUSCLR : (USB Offset: 0x04) (/W 8) HOST_PIPE End Point Pipe Status Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGL:1;                    /**< bit:      0  Data Toggle clear                        */
    uint8_t  :1;                        /**< bit:      1  Reserved */
    uint8_t  CURBK:1;                   /**< bit:      2  Curren Bank clear                        */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  PFREEZE:1;                 /**< bit:      4  Pipe Freeze Clear                        */
    uint8_t  :1;                        /**< bit:      5  Reserved */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 Ready Clear                       */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 Ready Clear                       */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PSTATUSCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PSTATUSCLR_OFFSET          (0x04)                                        /**<  (USB_HOST_PSTATUSCLR) HOST_PIPE End Point Pipe Status Clear  Offset */
#define USB_HOST_PSTATUSCLR_RESETVALUE      _U_(0x00)                                     /**<  (USB_HOST_PSTATUSCLR) HOST_PIPE End Point Pipe Status Clear  Reset Value */

#define USB_HOST_PSTATUSCLR_DTGL_Pos        0                                              /**< (USB_HOST_PSTATUSCLR) Data Toggle clear Position */
#define USB_HOST_PSTATUSCLR_DTGL_Msk        (_U_(0x1) << USB_HOST_PSTATUSCLR_DTGL_Pos)     /**< (USB_HOST_PSTATUSCLR) Data Toggle clear Mask */
#define USB_HOST_PSTATUSCLR_DTGL            USB_HOST_PSTATUSCLR_DTGL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSCLR_DTGL_Msk instead */
#define USB_HOST_PSTATUSCLR_CURBK_Pos       2                                              /**< (USB_HOST_PSTATUSCLR) Curren Bank clear Position */
#define USB_HOST_PSTATUSCLR_CURBK_Msk       (_U_(0x1) << USB_HOST_PSTATUSCLR_CURBK_Pos)    /**< (USB_HOST_PSTATUSCLR) Curren Bank clear Mask */
#define USB_HOST_PSTATUSCLR_CURBK           USB_HOST_PSTATUSCLR_CURBK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSCLR_CURBK_Msk instead */
#define USB_HOST_PSTATUSCLR_PFREEZE_Pos     4                                              /**< (USB_HOST_PSTATUSCLR) Pipe Freeze Clear Position */
#define USB_HOST_PSTATUSCLR_PFREEZE_Msk     (_U_(0x1) << USB_HOST_PSTATUSCLR_PFREEZE_Pos)  /**< (USB_HOST_PSTATUSCLR) Pipe Freeze Clear Mask */
#define USB_HOST_PSTATUSCLR_PFREEZE         USB_HOST_PSTATUSCLR_PFREEZE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSCLR_PFREEZE_Msk instead */
#define USB_HOST_PSTATUSCLR_BK0RDY_Pos      6                                              /**< (USB_HOST_PSTATUSCLR) Bank 0 Ready Clear Position */
#define USB_HOST_PSTATUSCLR_BK0RDY_Msk      (_U_(0x1) << USB_HOST_PSTATUSCLR_BK0RDY_Pos)   /**< (USB_HOST_PSTATUSCLR) Bank 0 Ready Clear Mask */
#define USB_HOST_PSTATUSCLR_BK0RDY          USB_HOST_PSTATUSCLR_BK0RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSCLR_BK0RDY_Msk instead */
#define USB_HOST_PSTATUSCLR_BK1RDY_Pos      7                                              /**< (USB_HOST_PSTATUSCLR) Bank 1 Ready Clear Position */
#define USB_HOST_PSTATUSCLR_BK1RDY_Msk      (_U_(0x1) << USB_HOST_PSTATUSCLR_BK1RDY_Pos)   /**< (USB_HOST_PSTATUSCLR) Bank 1 Ready Clear Mask */
#define USB_HOST_PSTATUSCLR_BK1RDY          USB_HOST_PSTATUSCLR_BK1RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSCLR_BK1RDY_Msk instead */
#define USB_HOST_PSTATUSCLR_MASK            _U_(0xD5)                                      /**< \deprecated (USB_HOST_PSTATUSCLR) Register MASK  (Use USB_HOST_PSTATUSCLR_Msk instead)  */
#define USB_HOST_PSTATUSCLR_Msk             _U_(0xD5)                                      /**< (USB_HOST_PSTATUSCLR) Register Mask  */


/* -------- USB_HOST_PSTATUSSET : (USB Offset: 0x05) (/W 8) HOST_PIPE End Point Pipe Status Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGL:1;                    /**< bit:      0  Data Toggle Set                          */
    uint8_t  :1;                        /**< bit:      1  Reserved */
    uint8_t  CURBK:1;                   /**< bit:      2  Current Bank Set                         */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  PFREEZE:1;                 /**< bit:      4  Pipe Freeze Set                          */
    uint8_t  :1;                        /**< bit:      5  Reserved */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 Ready Set                         */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 Ready Set                         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PSTATUSSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PSTATUSSET_OFFSET          (0x05)                                        /**<  (USB_HOST_PSTATUSSET) HOST_PIPE End Point Pipe Status Set  Offset */
#define USB_HOST_PSTATUSSET_RESETVALUE      _U_(0x00)                                     /**<  (USB_HOST_PSTATUSSET) HOST_PIPE End Point Pipe Status Set  Reset Value */

#define USB_HOST_PSTATUSSET_DTGL_Pos        0                                              /**< (USB_HOST_PSTATUSSET) Data Toggle Set Position */
#define USB_HOST_PSTATUSSET_DTGL_Msk        (_U_(0x1) << USB_HOST_PSTATUSSET_DTGL_Pos)     /**< (USB_HOST_PSTATUSSET) Data Toggle Set Mask */
#define USB_HOST_PSTATUSSET_DTGL            USB_HOST_PSTATUSSET_DTGL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSSET_DTGL_Msk instead */
#define USB_HOST_PSTATUSSET_CURBK_Pos       2                                              /**< (USB_HOST_PSTATUSSET) Current Bank Set Position */
#define USB_HOST_PSTATUSSET_CURBK_Msk       (_U_(0x1) << USB_HOST_PSTATUSSET_CURBK_Pos)    /**< (USB_HOST_PSTATUSSET) Current Bank Set Mask */
#define USB_HOST_PSTATUSSET_CURBK           USB_HOST_PSTATUSSET_CURBK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSSET_CURBK_Msk instead */
#define USB_HOST_PSTATUSSET_PFREEZE_Pos     4                                              /**< (USB_HOST_PSTATUSSET) Pipe Freeze Set Position */
#define USB_HOST_PSTATUSSET_PFREEZE_Msk     (_U_(0x1) << USB_HOST_PSTATUSSET_PFREEZE_Pos)  /**< (USB_HOST_PSTATUSSET) Pipe Freeze Set Mask */
#define USB_HOST_PSTATUSSET_PFREEZE         USB_HOST_PSTATUSSET_PFREEZE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSSET_PFREEZE_Msk instead */
#define USB_HOST_PSTATUSSET_BK0RDY_Pos      6                                              /**< (USB_HOST_PSTATUSSET) Bank 0 Ready Set Position */
#define USB_HOST_PSTATUSSET_BK0RDY_Msk      (_U_(0x1) << USB_HOST_PSTATUSSET_BK0RDY_Pos)   /**< (USB_HOST_PSTATUSSET) Bank 0 Ready Set Mask */
#define USB_HOST_PSTATUSSET_BK0RDY          USB_HOST_PSTATUSSET_BK0RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSSET_BK0RDY_Msk instead */
#define USB_HOST_PSTATUSSET_BK1RDY_Pos      7                                              /**< (USB_HOST_PSTATUSSET) Bank 1 Ready Set Position */
#define USB_HOST_PSTATUSSET_BK1RDY_Msk      (_U_(0x1) << USB_HOST_PSTATUSSET_BK1RDY_Pos)   /**< (USB_HOST_PSTATUSSET) Bank 1 Ready Set Mask */
#define USB_HOST_PSTATUSSET_BK1RDY          USB_HOST_PSTATUSSET_BK1RDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUSSET_BK1RDY_Msk instead */
#define USB_HOST_PSTATUSSET_MASK            _U_(0xD5)                                      /**< \deprecated (USB_HOST_PSTATUSSET) Register MASK  (Use USB_HOST_PSTATUSSET_Msk instead)  */
#define USB_HOST_PSTATUSSET_Msk             _U_(0xD5)                                      /**< (USB_HOST_PSTATUSSET) Register Mask  */


/* -------- USB_HOST_PSTATUS : (USB Offset: 0x06) (R/ 8) HOST_PIPE End Point Pipe Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTGL:1;                    /**< bit:      0  Data Toggle                              */
    uint8_t  :1;                        /**< bit:      1  Reserved */
    uint8_t  CURBK:1;                   /**< bit:      2  Current Bank                             */
    uint8_t  :1;                        /**< bit:      3  Reserved */
    uint8_t  PFREEZE:1;                 /**< bit:      4  Pipe Freeze                              */
    uint8_t  :1;                        /**< bit:      5  Reserved */
    uint8_t  BK0RDY:1;                  /**< bit:      6  Bank 0 ready                             */
    uint8_t  BK1RDY:1;                  /**< bit:      7  Bank 1 ready                             */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PSTATUS_OFFSET             (0x06)                                        /**<  (USB_HOST_PSTATUS) HOST_PIPE End Point Pipe Status  Offset */
#define USB_HOST_PSTATUS_RESETVALUE         _U_(0x00)                                     /**<  (USB_HOST_PSTATUS) HOST_PIPE End Point Pipe Status  Reset Value */

#define USB_HOST_PSTATUS_DTGL_Pos           0                                              /**< (USB_HOST_PSTATUS) Data Toggle Position */
#define USB_HOST_PSTATUS_DTGL_Msk           (_U_(0x1) << USB_HOST_PSTATUS_DTGL_Pos)        /**< (USB_HOST_PSTATUS) Data Toggle Mask */
#define USB_HOST_PSTATUS_DTGL               USB_HOST_PSTATUS_DTGL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUS_DTGL_Msk instead */
#define USB_HOST_PSTATUS_CURBK_Pos          2                                              /**< (USB_HOST_PSTATUS) Current Bank Position */
#define USB_HOST_PSTATUS_CURBK_Msk          (_U_(0x1) << USB_HOST_PSTATUS_CURBK_Pos)       /**< (USB_HOST_PSTATUS) Current Bank Mask */
#define USB_HOST_PSTATUS_CURBK              USB_HOST_PSTATUS_CURBK_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUS_CURBK_Msk instead */
#define USB_HOST_PSTATUS_PFREEZE_Pos        4                                              /**< (USB_HOST_PSTATUS) Pipe Freeze Position */
#define USB_HOST_PSTATUS_PFREEZE_Msk        (_U_(0x1) << USB_HOST_PSTATUS_PFREEZE_Pos)     /**< (USB_HOST_PSTATUS) Pipe Freeze Mask */
#define USB_HOST_PSTATUS_PFREEZE            USB_HOST_PSTATUS_PFREEZE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUS_PFREEZE_Msk instead */
#define USB_HOST_PSTATUS_BK0RDY_Pos         6                                              /**< (USB_HOST_PSTATUS) Bank 0 ready Position */
#define USB_HOST_PSTATUS_BK0RDY_Msk         (_U_(0x1) << USB_HOST_PSTATUS_BK0RDY_Pos)      /**< (USB_HOST_PSTATUS) Bank 0 ready Mask */
#define USB_HOST_PSTATUS_BK0RDY             USB_HOST_PSTATUS_BK0RDY_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUS_BK0RDY_Msk instead */
#define USB_HOST_PSTATUS_BK1RDY_Pos         7                                              /**< (USB_HOST_PSTATUS) Bank 1 ready Position */
#define USB_HOST_PSTATUS_BK1RDY_Msk         (_U_(0x1) << USB_HOST_PSTATUS_BK1RDY_Pos)      /**< (USB_HOST_PSTATUS) Bank 1 ready Mask */
#define USB_HOST_PSTATUS_BK1RDY             USB_HOST_PSTATUS_BK1RDY_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PSTATUS_BK1RDY_Msk instead */
#define USB_HOST_PSTATUS_MASK               _U_(0xD5)                                      /**< \deprecated (USB_HOST_PSTATUS) Register MASK  (Use USB_HOST_PSTATUS_Msk instead)  */
#define USB_HOST_PSTATUS_Msk                _U_(0xD5)                                      /**< (USB_HOST_PSTATUS) Register Mask  */


/* -------- USB_HOST_PINTFLAG : (USB Offset: 0x07) (R/W 8) HOST_PIPE Pipe Interrupt Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t TRCPT0:1;                  /**< bit:      0  Transfer Complete 0 Interrupt Flag       */
    __I uint8_t TRCPT1:1;                  /**< bit:      1  Transfer Complete 1 Interrupt Flag       */
    __I uint8_t TRFAIL:1;                  /**< bit:      2  Error Flow Interrupt Flag                */
    __I uint8_t PERR:1;                    /**< bit:      3  Pipe Error Interrupt Flag                */
    __I uint8_t TXSTP:1;                   /**< bit:      4  Transmit  Setup Interrupt Flag           */
    __I uint8_t STALL:1;                   /**< bit:      5  Stall Interrupt Flag                     */
    __I uint8_t :2;                        /**< bit:   6..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint8_t TRCPT:2;                   /**< bit:   0..1  Transfer Complete x Interrupt Flag       */
    __I uint8_t :6;                        /**< bit:   2..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PINTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PINTFLAG_OFFSET            (0x07)                                        /**<  (USB_HOST_PINTFLAG) HOST_PIPE Pipe Interrupt Flag  Offset */
#define USB_HOST_PINTFLAG_RESETVALUE        _U_(0x00)                                     /**<  (USB_HOST_PINTFLAG) HOST_PIPE Pipe Interrupt Flag  Reset Value */

#define USB_HOST_PINTFLAG_TRCPT0_Pos        0                                              /**< (USB_HOST_PINTFLAG) Transfer Complete 0 Interrupt Flag Position */
#define USB_HOST_PINTFLAG_TRCPT0_Msk        (_U_(0x1) << USB_HOST_PINTFLAG_TRCPT0_Pos)     /**< (USB_HOST_PINTFLAG) Transfer Complete 0 Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_TRCPT0            USB_HOST_PINTFLAG_TRCPT0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_TRCPT0_Msk instead */
#define USB_HOST_PINTFLAG_TRCPT1_Pos        1                                              /**< (USB_HOST_PINTFLAG) Transfer Complete 1 Interrupt Flag Position */
#define USB_HOST_PINTFLAG_TRCPT1_Msk        (_U_(0x1) << USB_HOST_PINTFLAG_TRCPT1_Pos)     /**< (USB_HOST_PINTFLAG) Transfer Complete 1 Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_TRCPT1            USB_HOST_PINTFLAG_TRCPT1_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_TRCPT1_Msk instead */
#define USB_HOST_PINTFLAG_TRFAIL_Pos        2                                              /**< (USB_HOST_PINTFLAG) Error Flow Interrupt Flag Position */
#define USB_HOST_PINTFLAG_TRFAIL_Msk        (_U_(0x1) << USB_HOST_PINTFLAG_TRFAIL_Pos)     /**< (USB_HOST_PINTFLAG) Error Flow Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_TRFAIL            USB_HOST_PINTFLAG_TRFAIL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_TRFAIL_Msk instead */
#define USB_HOST_PINTFLAG_PERR_Pos          3                                              /**< (USB_HOST_PINTFLAG) Pipe Error Interrupt Flag Position */
#define USB_HOST_PINTFLAG_PERR_Msk          (_U_(0x1) << USB_HOST_PINTFLAG_PERR_Pos)       /**< (USB_HOST_PINTFLAG) Pipe Error Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_PERR              USB_HOST_PINTFLAG_PERR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_PERR_Msk instead */
#define USB_HOST_PINTFLAG_TXSTP_Pos         4                                              /**< (USB_HOST_PINTFLAG) Transmit  Setup Interrupt Flag Position */
#define USB_HOST_PINTFLAG_TXSTP_Msk         (_U_(0x1) << USB_HOST_PINTFLAG_TXSTP_Pos)      /**< (USB_HOST_PINTFLAG) Transmit  Setup Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_TXSTP             USB_HOST_PINTFLAG_TXSTP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_TXSTP_Msk instead */
#define USB_HOST_PINTFLAG_STALL_Pos         5                                              /**< (USB_HOST_PINTFLAG) Stall Interrupt Flag Position */
#define USB_HOST_PINTFLAG_STALL_Msk         (_U_(0x1) << USB_HOST_PINTFLAG_STALL_Pos)      /**< (USB_HOST_PINTFLAG) Stall Interrupt Flag Mask */
#define USB_HOST_PINTFLAG_STALL             USB_HOST_PINTFLAG_STALL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTFLAG_STALL_Msk instead */
#define USB_HOST_PINTFLAG_MASK              _U_(0x3F)                                      /**< \deprecated (USB_HOST_PINTFLAG) Register MASK  (Use USB_HOST_PINTFLAG_Msk instead)  */
#define USB_HOST_PINTFLAG_Msk               _U_(0x3F)                                      /**< (USB_HOST_PINTFLAG) Register Mask  */

#define USB_HOST_PINTFLAG_TRCPT_Pos         0                                              /**< (USB_HOST_PINTFLAG Position) Transfer Complete x Interrupt Flag */
#define USB_HOST_PINTFLAG_TRCPT_Msk         (_U_(0x3) << USB_HOST_PINTFLAG_TRCPT_Pos)      /**< (USB_HOST_PINTFLAG Mask) TRCPT */
#define USB_HOST_PINTFLAG_TRCPT(value)      (USB_HOST_PINTFLAG_TRCPT_Msk & ((value) << USB_HOST_PINTFLAG_TRCPT_Pos))  

/* -------- USB_HOST_PINTENCLR : (USB Offset: 0x08) (R/W 8) HOST_PIPE Pipe Interrupt Flag Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TRCPT0:1;                  /**< bit:      0  Transfer Complete 0 Disable              */
    uint8_t  TRCPT1:1;                  /**< bit:      1  Transfer Complete 1 Disable              */
    uint8_t  TRFAIL:1;                  /**< bit:      2  Error Flow Interrupt Disable             */
    uint8_t  PERR:1;                    /**< bit:      3  Pipe Error Interrupt Disable             */
    uint8_t  TXSTP:1;                   /**< bit:      4  Transmit Setup Interrupt Disable         */
    uint8_t  STALL:1;                   /**< bit:      5  Stall Inetrrupt Disable                  */
    uint8_t  :2;                        /**< bit:   6..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  TRCPT:2;                   /**< bit:   0..1  Transfer Complete x Disable              */
    uint8_t  :6;                        /**< bit:   2..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PINTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PINTENCLR_OFFSET           (0x08)                                        /**<  (USB_HOST_PINTENCLR) HOST_PIPE Pipe Interrupt Flag Clear  Offset */
#define USB_HOST_PINTENCLR_RESETVALUE       _U_(0x00)                                     /**<  (USB_HOST_PINTENCLR) HOST_PIPE Pipe Interrupt Flag Clear  Reset Value */

#define USB_HOST_PINTENCLR_TRCPT0_Pos       0                                              /**< (USB_HOST_PINTENCLR) Transfer Complete 0 Disable Position */
#define USB_HOST_PINTENCLR_TRCPT0_Msk       (_U_(0x1) << USB_HOST_PINTENCLR_TRCPT0_Pos)    /**< (USB_HOST_PINTENCLR) Transfer Complete 0 Disable Mask */
#define USB_HOST_PINTENCLR_TRCPT0           USB_HOST_PINTENCLR_TRCPT0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_TRCPT0_Msk instead */
#define USB_HOST_PINTENCLR_TRCPT1_Pos       1                                              /**< (USB_HOST_PINTENCLR) Transfer Complete 1 Disable Position */
#define USB_HOST_PINTENCLR_TRCPT1_Msk       (_U_(0x1) << USB_HOST_PINTENCLR_TRCPT1_Pos)    /**< (USB_HOST_PINTENCLR) Transfer Complete 1 Disable Mask */
#define USB_HOST_PINTENCLR_TRCPT1           USB_HOST_PINTENCLR_TRCPT1_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_TRCPT1_Msk instead */
#define USB_HOST_PINTENCLR_TRFAIL_Pos       2                                              /**< (USB_HOST_PINTENCLR) Error Flow Interrupt Disable Position */
#define USB_HOST_PINTENCLR_TRFAIL_Msk       (_U_(0x1) << USB_HOST_PINTENCLR_TRFAIL_Pos)    /**< (USB_HOST_PINTENCLR) Error Flow Interrupt Disable Mask */
#define USB_HOST_PINTENCLR_TRFAIL           USB_HOST_PINTENCLR_TRFAIL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_TRFAIL_Msk instead */
#define USB_HOST_PINTENCLR_PERR_Pos         3                                              /**< (USB_HOST_PINTENCLR) Pipe Error Interrupt Disable Position */
#define USB_HOST_PINTENCLR_PERR_Msk         (_U_(0x1) << USB_HOST_PINTENCLR_PERR_Pos)      /**< (USB_HOST_PINTENCLR) Pipe Error Interrupt Disable Mask */
#define USB_HOST_PINTENCLR_PERR             USB_HOST_PINTENCLR_PERR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_PERR_Msk instead */
#define USB_HOST_PINTENCLR_TXSTP_Pos        4                                              /**< (USB_HOST_PINTENCLR) Transmit Setup Interrupt Disable Position */
#define USB_HOST_PINTENCLR_TXSTP_Msk        (_U_(0x1) << USB_HOST_PINTENCLR_TXSTP_Pos)     /**< (USB_HOST_PINTENCLR) Transmit Setup Interrupt Disable Mask */
#define USB_HOST_PINTENCLR_TXSTP            USB_HOST_PINTENCLR_TXSTP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_TXSTP_Msk instead */
#define USB_HOST_PINTENCLR_STALL_Pos        5                                              /**< (USB_HOST_PINTENCLR) Stall Inetrrupt Disable Position */
#define USB_HOST_PINTENCLR_STALL_Msk        (_U_(0x1) << USB_HOST_PINTENCLR_STALL_Pos)     /**< (USB_HOST_PINTENCLR) Stall Inetrrupt Disable Mask */
#define USB_HOST_PINTENCLR_STALL            USB_HOST_PINTENCLR_STALL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENCLR_STALL_Msk instead */
#define USB_HOST_PINTENCLR_MASK             _U_(0x3F)                                      /**< \deprecated (USB_HOST_PINTENCLR) Register MASK  (Use USB_HOST_PINTENCLR_Msk instead)  */
#define USB_HOST_PINTENCLR_Msk              _U_(0x3F)                                      /**< (USB_HOST_PINTENCLR) Register Mask  */

#define USB_HOST_PINTENCLR_TRCPT_Pos        0                                              /**< (USB_HOST_PINTENCLR Position) Transfer Complete x Disable */
#define USB_HOST_PINTENCLR_TRCPT_Msk        (_U_(0x3) << USB_HOST_PINTENCLR_TRCPT_Pos)     /**< (USB_HOST_PINTENCLR Mask) TRCPT */
#define USB_HOST_PINTENCLR_TRCPT(value)     (USB_HOST_PINTENCLR_TRCPT_Msk & ((value) << USB_HOST_PINTENCLR_TRCPT_Pos))  

/* -------- USB_HOST_PINTENSET : (USB Offset: 0x09) (R/W 8) HOST_PIPE Pipe Interrupt Flag Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TRCPT0:1;                  /**< bit:      0  Transfer Complete 0 Interrupt Enable     */
    uint8_t  TRCPT1:1;                  /**< bit:      1  Transfer Complete 1 Interrupt Enable     */
    uint8_t  TRFAIL:1;                  /**< bit:      2  Error Flow Interrupt Enable              */
    uint8_t  PERR:1;                    /**< bit:      3  Pipe Error Interrupt Enable              */
    uint8_t  TXSTP:1;                   /**< bit:      4  Transmit  Setup Interrupt Enable         */
    uint8_t  STALL:1;                   /**< bit:      5  Stall Interrupt Enable                   */
    uint8_t  :2;                        /**< bit:   6..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  TRCPT:2;                   /**< bit:   0..1  Transfer Complete x Interrupt Enable     */
    uint8_t  :6;                        /**< bit:   2..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_PINTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PINTENSET_OFFSET           (0x09)                                        /**<  (USB_HOST_PINTENSET) HOST_PIPE Pipe Interrupt Flag Set  Offset */
#define USB_HOST_PINTENSET_RESETVALUE       _U_(0x00)                                     /**<  (USB_HOST_PINTENSET) HOST_PIPE Pipe Interrupt Flag Set  Reset Value */

#define USB_HOST_PINTENSET_TRCPT0_Pos       0                                              /**< (USB_HOST_PINTENSET) Transfer Complete 0 Interrupt Enable Position */
#define USB_HOST_PINTENSET_TRCPT0_Msk       (_U_(0x1) << USB_HOST_PINTENSET_TRCPT0_Pos)    /**< (USB_HOST_PINTENSET) Transfer Complete 0 Interrupt Enable Mask */
#define USB_HOST_PINTENSET_TRCPT0           USB_HOST_PINTENSET_TRCPT0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_TRCPT0_Msk instead */
#define USB_HOST_PINTENSET_TRCPT1_Pos       1                                              /**< (USB_HOST_PINTENSET) Transfer Complete 1 Interrupt Enable Position */
#define USB_HOST_PINTENSET_TRCPT1_Msk       (_U_(0x1) << USB_HOST_PINTENSET_TRCPT1_Pos)    /**< (USB_HOST_PINTENSET) Transfer Complete 1 Interrupt Enable Mask */
#define USB_HOST_PINTENSET_TRCPT1           USB_HOST_PINTENSET_TRCPT1_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_TRCPT1_Msk instead */
#define USB_HOST_PINTENSET_TRFAIL_Pos       2                                              /**< (USB_HOST_PINTENSET) Error Flow Interrupt Enable Position */
#define USB_HOST_PINTENSET_TRFAIL_Msk       (_U_(0x1) << USB_HOST_PINTENSET_TRFAIL_Pos)    /**< (USB_HOST_PINTENSET) Error Flow Interrupt Enable Mask */
#define USB_HOST_PINTENSET_TRFAIL           USB_HOST_PINTENSET_TRFAIL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_TRFAIL_Msk instead */
#define USB_HOST_PINTENSET_PERR_Pos         3                                              /**< (USB_HOST_PINTENSET) Pipe Error Interrupt Enable Position */
#define USB_HOST_PINTENSET_PERR_Msk         (_U_(0x1) << USB_HOST_PINTENSET_PERR_Pos)      /**< (USB_HOST_PINTENSET) Pipe Error Interrupt Enable Mask */
#define USB_HOST_PINTENSET_PERR             USB_HOST_PINTENSET_PERR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_PERR_Msk instead */
#define USB_HOST_PINTENSET_TXSTP_Pos        4                                              /**< (USB_HOST_PINTENSET) Transmit  Setup Interrupt Enable Position */
#define USB_HOST_PINTENSET_TXSTP_Msk        (_U_(0x1) << USB_HOST_PINTENSET_TXSTP_Pos)     /**< (USB_HOST_PINTENSET) Transmit  Setup Interrupt Enable Mask */
#define USB_HOST_PINTENSET_TXSTP            USB_HOST_PINTENSET_TXSTP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_TXSTP_Msk instead */
#define USB_HOST_PINTENSET_STALL_Pos        5                                              /**< (USB_HOST_PINTENSET) Stall Interrupt Enable Position */
#define USB_HOST_PINTENSET_STALL_Msk        (_U_(0x1) << USB_HOST_PINTENSET_STALL_Pos)     /**< (USB_HOST_PINTENSET) Stall Interrupt Enable Mask */
#define USB_HOST_PINTENSET_STALL            USB_HOST_PINTENSET_STALL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTENSET_STALL_Msk instead */
#define USB_HOST_PINTENSET_MASK             _U_(0x3F)                                      /**< \deprecated (USB_HOST_PINTENSET) Register MASK  (Use USB_HOST_PINTENSET_Msk instead)  */
#define USB_HOST_PINTENSET_Msk              _U_(0x3F)                                      /**< (USB_HOST_PINTENSET) Register Mask  */

#define USB_HOST_PINTENSET_TRCPT_Pos        0                                              /**< (USB_HOST_PINTENSET Position) Transfer Complete x Interrupt Enable */
#define USB_HOST_PINTENSET_TRCPT_Msk        (_U_(0x3) << USB_HOST_PINTENSET_TRCPT_Pos)     /**< (USB_HOST_PINTENSET Mask) TRCPT */
#define USB_HOST_PINTENSET_TRCPT(value)     (USB_HOST_PINTENSET_TRCPT_Msk & ((value) << USB_HOST_PINTENSET_TRCPT_Pos))  

/* -------- USB_CTRLA : (USB Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint8_t  ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint8_t  RUNSTDBY:1;                /**< bit:      2  Run in Standby Mode                      */
    uint8_t  :4;                        /**< bit:   3..6  Reserved */
    uint8_t  MODE:1;                    /**< bit:      7  Operating Mode                           */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_CTRLA_OFFSET                    (0x00)                                        /**<  (USB_CTRLA) Control A  Offset */
#define USB_CTRLA_RESETVALUE                _U_(0x00)                                     /**<  (USB_CTRLA) Control A  Reset Value */

#define USB_CTRLA_SWRST_Pos                 0                                              /**< (USB_CTRLA) Software Reset Position */
#define USB_CTRLA_SWRST_Msk                 (_U_(0x1) << USB_CTRLA_SWRST_Pos)              /**< (USB_CTRLA) Software Reset Mask */
#define USB_CTRLA_SWRST                     USB_CTRLA_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_CTRLA_SWRST_Msk instead */
#define USB_CTRLA_ENABLE_Pos                1                                              /**< (USB_CTRLA) Enable Position */
#define USB_CTRLA_ENABLE_Msk                (_U_(0x1) << USB_CTRLA_ENABLE_Pos)             /**< (USB_CTRLA) Enable Mask */
#define USB_CTRLA_ENABLE                    USB_CTRLA_ENABLE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_CTRLA_ENABLE_Msk instead */
#define USB_CTRLA_RUNSTDBY_Pos              2                                              /**< (USB_CTRLA) Run in Standby Mode Position */
#define USB_CTRLA_RUNSTDBY_Msk              (_U_(0x1) << USB_CTRLA_RUNSTDBY_Pos)           /**< (USB_CTRLA) Run in Standby Mode Mask */
#define USB_CTRLA_RUNSTDBY                  USB_CTRLA_RUNSTDBY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_CTRLA_RUNSTDBY_Msk instead */
#define USB_CTRLA_MODE_Pos                  7                                              /**< (USB_CTRLA) Operating Mode Position */
#define USB_CTRLA_MODE_Msk                  (_U_(0x1) << USB_CTRLA_MODE_Pos)               /**< (USB_CTRLA) Operating Mode Mask */
#define USB_CTRLA_MODE                      USB_CTRLA_MODE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_CTRLA_MODE_Msk instead */
#define   USB_CTRLA_MODE_DEVICE_Val         _U_(0x0)                                       /**< (USB_CTRLA) Device Mode  */
#define   USB_CTRLA_MODE_HOST_Val           _U_(0x1)                                       /**< (USB_CTRLA) Host Mode  */
#define USB_CTRLA_MODE_DEVICE               (USB_CTRLA_MODE_DEVICE_Val << USB_CTRLA_MODE_Pos)  /**< (USB_CTRLA) Device Mode Position  */
#define USB_CTRLA_MODE_HOST                 (USB_CTRLA_MODE_HOST_Val << USB_CTRLA_MODE_Pos)  /**< (USB_CTRLA) Host Mode Position  */
#define USB_CTRLA_MASK                      _U_(0x87)                                      /**< \deprecated (USB_CTRLA) Register MASK  (Use USB_CTRLA_Msk instead)  */
#define USB_CTRLA_Msk                       _U_(0x87)                                      /**< (USB_CTRLA) Register Mask  */


/* -------- USB_SYNCBUSY : (USB Offset: 0x02) (R/ 8) Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint8_t  ENABLE:1;                  /**< bit:      1  Enable Synchronization Busy              */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_SYNCBUSY_OFFSET                 (0x02)                                        /**<  (USB_SYNCBUSY) Synchronization Busy  Offset */
#define USB_SYNCBUSY_RESETVALUE             _U_(0x00)                                     /**<  (USB_SYNCBUSY) Synchronization Busy  Reset Value */

#define USB_SYNCBUSY_SWRST_Pos              0                                              /**< (USB_SYNCBUSY) Software Reset Synchronization Busy Position */
#define USB_SYNCBUSY_SWRST_Msk              (_U_(0x1) << USB_SYNCBUSY_SWRST_Pos)           /**< (USB_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define USB_SYNCBUSY_SWRST                  USB_SYNCBUSY_SWRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_SYNCBUSY_SWRST_Msk instead */
#define USB_SYNCBUSY_ENABLE_Pos             1                                              /**< (USB_SYNCBUSY) Enable Synchronization Busy Position */
#define USB_SYNCBUSY_ENABLE_Msk             (_U_(0x1) << USB_SYNCBUSY_ENABLE_Pos)          /**< (USB_SYNCBUSY) Enable Synchronization Busy Mask */
#define USB_SYNCBUSY_ENABLE                 USB_SYNCBUSY_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_SYNCBUSY_ENABLE_Msk instead */
#define USB_SYNCBUSY_MASK                   _U_(0x03)                                      /**< \deprecated (USB_SYNCBUSY) Register MASK  (Use USB_SYNCBUSY_Msk instead)  */
#define USB_SYNCBUSY_Msk                    _U_(0x03)                                      /**< (USB_SYNCBUSY) Register Mask  */


/* -------- USB_QOSCTRL : (USB Offset: 0x03) (R/W 8) USB Quality Of Service -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CQOS:2;                    /**< bit:   0..1  Configuration Quality of Service         */
    uint8_t  DQOS:2;                    /**< bit:   2..3  Data Quality of Service                  */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_QOSCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_QOSCTRL_OFFSET                  (0x03)                                        /**<  (USB_QOSCTRL) USB Quality Of Service  Offset */
#define USB_QOSCTRL_RESETVALUE              _U_(0x0F)                                     /**<  (USB_QOSCTRL) USB Quality Of Service  Reset Value */

#define USB_QOSCTRL_CQOS_Pos                0                                              /**< (USB_QOSCTRL) Configuration Quality of Service Position */
#define USB_QOSCTRL_CQOS_Msk                (_U_(0x3) << USB_QOSCTRL_CQOS_Pos)             /**< (USB_QOSCTRL) Configuration Quality of Service Mask */
#define USB_QOSCTRL_CQOS(value)             (USB_QOSCTRL_CQOS_Msk & ((value) << USB_QOSCTRL_CQOS_Pos))
#define USB_QOSCTRL_DQOS_Pos                2                                              /**< (USB_QOSCTRL) Data Quality of Service Position */
#define USB_QOSCTRL_DQOS_Msk                (_U_(0x3) << USB_QOSCTRL_DQOS_Pos)             /**< (USB_QOSCTRL) Data Quality of Service Mask */
#define USB_QOSCTRL_DQOS(value)             (USB_QOSCTRL_DQOS_Msk & ((value) << USB_QOSCTRL_DQOS_Pos))
#define USB_QOSCTRL_MASK                    _U_(0x0F)                                      /**< \deprecated (USB_QOSCTRL) Register MASK  (Use USB_QOSCTRL_Msk instead)  */
#define USB_QOSCTRL_Msk                     _U_(0x0F)                                      /**< (USB_QOSCTRL) Register Mask  */


/* -------- USB_DEVICE_CTRLB : (USB Offset: 0x08) (R/W 16) DEVICE Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DETACH:1;                  /**< bit:      0  Detach                                   */
    uint16_t UPRSM:1;                   /**< bit:      1  Upstream Resume                          */
    uint16_t SPDCONF:2;                 /**< bit:   2..3  Speed Configuration                      */
    uint16_t NREPLY:1;                  /**< bit:      4  No Reply                                 */
    uint16_t TSTJ:1;                    /**< bit:      5  Test mode J                              */
    uint16_t TSTK:1;                    /**< bit:      6  Test mode K                              */
    uint16_t TSTPCKT:1;                 /**< bit:      7  Test packet mode                         */
    uint16_t OPMODE2:1;                 /**< bit:      8  Specific Operational Mode                */
    uint16_t GNAK:1;                    /**< bit:      9  Global NAK                               */
    uint16_t LPMHDSK:2;                 /**< bit: 10..11  Link Power Management Handshake          */
    uint16_t :4;                        /**< bit: 12..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t :8;                        /**< bit:   0..7  Reserved */
    uint16_t OPMODE:1;                  /**< bit:      8  Specific Operational Mode                */
    uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_CTRLB_OFFSET             (0x08)                                        /**<  (USB_DEVICE_CTRLB) DEVICE Control B  Offset */
#define USB_DEVICE_CTRLB_RESETVALUE         _U_(0x01)                                     /**<  (USB_DEVICE_CTRLB) DEVICE Control B  Reset Value */

#define USB_DEVICE_CTRLB_DETACH_Pos         0                                              /**< (USB_DEVICE_CTRLB) Detach Position */
#define USB_DEVICE_CTRLB_DETACH_Msk         (_U_(0x1) << USB_DEVICE_CTRLB_DETACH_Pos)      /**< (USB_DEVICE_CTRLB) Detach Mask */
#define USB_DEVICE_CTRLB_DETACH             USB_DEVICE_CTRLB_DETACH_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_DETACH_Msk instead */
#define USB_DEVICE_CTRLB_UPRSM_Pos          1                                              /**< (USB_DEVICE_CTRLB) Upstream Resume Position */
#define USB_DEVICE_CTRLB_UPRSM_Msk          (_U_(0x1) << USB_DEVICE_CTRLB_UPRSM_Pos)       /**< (USB_DEVICE_CTRLB) Upstream Resume Mask */
#define USB_DEVICE_CTRLB_UPRSM              USB_DEVICE_CTRLB_UPRSM_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_UPRSM_Msk instead */
#define USB_DEVICE_CTRLB_SPDCONF_Pos        2                                              /**< (USB_DEVICE_CTRLB) Speed Configuration Position */
#define USB_DEVICE_CTRLB_SPDCONF_Msk        (_U_(0x3) << USB_DEVICE_CTRLB_SPDCONF_Pos)     /**< (USB_DEVICE_CTRLB) Speed Configuration Mask */
#define USB_DEVICE_CTRLB_SPDCONF(value)     (USB_DEVICE_CTRLB_SPDCONF_Msk & ((value) << USB_DEVICE_CTRLB_SPDCONF_Pos))
#define   USB_DEVICE_CTRLB_SPDCONF_FS_Val   _U_(0x0)                                       /**< (USB_DEVICE_CTRLB) FS : Full Speed  */
#define   USB_DEVICE_CTRLB_SPDCONF_LS_Val   _U_(0x1)                                       /**< (USB_DEVICE_CTRLB) LS : Low Speed  */
#define   USB_DEVICE_CTRLB_SPDCONF_HS_Val   _U_(0x2)                                       /**< (USB_DEVICE_CTRLB) HS : High Speed capable  */
#define   USB_DEVICE_CTRLB_SPDCONF_HSTM_Val _U_(0x3)                                       /**< (USB_DEVICE_CTRLB) HSTM: High Speed Test Mode (force high-speed mode for test mode)  */
#define USB_DEVICE_CTRLB_SPDCONF_FS         (USB_DEVICE_CTRLB_SPDCONF_FS_Val << USB_DEVICE_CTRLB_SPDCONF_Pos)  /**< (USB_DEVICE_CTRLB) FS : Full Speed Position  */
#define USB_DEVICE_CTRLB_SPDCONF_LS         (USB_DEVICE_CTRLB_SPDCONF_LS_Val << USB_DEVICE_CTRLB_SPDCONF_Pos)  /**< (USB_DEVICE_CTRLB) LS : Low Speed Position  */
#define USB_DEVICE_CTRLB_SPDCONF_HS         (USB_DEVICE_CTRLB_SPDCONF_HS_Val << USB_DEVICE_CTRLB_SPDCONF_Pos)  /**< (USB_DEVICE_CTRLB) HS : High Speed capable Position  */
#define USB_DEVICE_CTRLB_SPDCONF_HSTM       (USB_DEVICE_CTRLB_SPDCONF_HSTM_Val << USB_DEVICE_CTRLB_SPDCONF_Pos)  /**< (USB_DEVICE_CTRLB) HSTM: High Speed Test Mode (force high-speed mode for test mode) Position  */
#define USB_DEVICE_CTRLB_NREPLY_Pos         4                                              /**< (USB_DEVICE_CTRLB) No Reply Position */
#define USB_DEVICE_CTRLB_NREPLY_Msk         (_U_(0x1) << USB_DEVICE_CTRLB_NREPLY_Pos)      /**< (USB_DEVICE_CTRLB) No Reply Mask */
#define USB_DEVICE_CTRLB_NREPLY             USB_DEVICE_CTRLB_NREPLY_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_NREPLY_Msk instead */
#define USB_DEVICE_CTRLB_TSTJ_Pos           5                                              /**< (USB_DEVICE_CTRLB) Test mode J Position */
#define USB_DEVICE_CTRLB_TSTJ_Msk           (_U_(0x1) << USB_DEVICE_CTRLB_TSTJ_Pos)        /**< (USB_DEVICE_CTRLB) Test mode J Mask */
#define USB_DEVICE_CTRLB_TSTJ               USB_DEVICE_CTRLB_TSTJ_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_TSTJ_Msk instead */
#define USB_DEVICE_CTRLB_TSTK_Pos           6                                              /**< (USB_DEVICE_CTRLB) Test mode K Position */
#define USB_DEVICE_CTRLB_TSTK_Msk           (_U_(0x1) << USB_DEVICE_CTRLB_TSTK_Pos)        /**< (USB_DEVICE_CTRLB) Test mode K Mask */
#define USB_DEVICE_CTRLB_TSTK               USB_DEVICE_CTRLB_TSTK_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_TSTK_Msk instead */
#define USB_DEVICE_CTRLB_TSTPCKT_Pos        7                                              /**< (USB_DEVICE_CTRLB) Test packet mode Position */
#define USB_DEVICE_CTRLB_TSTPCKT_Msk        (_U_(0x1) << USB_DEVICE_CTRLB_TSTPCKT_Pos)     /**< (USB_DEVICE_CTRLB) Test packet mode Mask */
#define USB_DEVICE_CTRLB_TSTPCKT            USB_DEVICE_CTRLB_TSTPCKT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_TSTPCKT_Msk instead */
#define USB_DEVICE_CTRLB_OPMODE2_Pos        8                                              /**< (USB_DEVICE_CTRLB) Specific Operational Mode Position */
#define USB_DEVICE_CTRLB_OPMODE2_Msk        (_U_(0x1) << USB_DEVICE_CTRLB_OPMODE2_Pos)     /**< (USB_DEVICE_CTRLB) Specific Operational Mode Mask */
#define USB_DEVICE_CTRLB_OPMODE2            USB_DEVICE_CTRLB_OPMODE2_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_OPMODE2_Msk instead */
#define USB_DEVICE_CTRLB_GNAK_Pos           9                                              /**< (USB_DEVICE_CTRLB) Global NAK Position */
#define USB_DEVICE_CTRLB_GNAK_Msk           (_U_(0x1) << USB_DEVICE_CTRLB_GNAK_Pos)        /**< (USB_DEVICE_CTRLB) Global NAK Mask */
#define USB_DEVICE_CTRLB_GNAK               USB_DEVICE_CTRLB_GNAK_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_CTRLB_GNAK_Msk instead */
#define USB_DEVICE_CTRLB_LPMHDSK_Pos        10                                             /**< (USB_DEVICE_CTRLB) Link Power Management Handshake Position */
#define USB_DEVICE_CTRLB_LPMHDSK_Msk        (_U_(0x3) << USB_DEVICE_CTRLB_LPMHDSK_Pos)     /**< (USB_DEVICE_CTRLB) Link Power Management Handshake Mask */
#define USB_DEVICE_CTRLB_LPMHDSK(value)     (USB_DEVICE_CTRLB_LPMHDSK_Msk & ((value) << USB_DEVICE_CTRLB_LPMHDSK_Pos))
#define   USB_DEVICE_CTRLB_LPMHDSK_NO_Val   _U_(0x0)                                       /**< (USB_DEVICE_CTRLB) No handshake. LPM is not supported  */
#define   USB_DEVICE_CTRLB_LPMHDSK_ACK_Val  _U_(0x1)                                       /**< (USB_DEVICE_CTRLB) ACK  */
#define   USB_DEVICE_CTRLB_LPMHDSK_NYET_Val _U_(0x2)                                       /**< (USB_DEVICE_CTRLB) NYET  */
#define   USB_DEVICE_CTRLB_LPMHDSK_STALL_Val _U_(0x3)                                       /**< (USB_DEVICE_CTRLB) STALL  */
#define USB_DEVICE_CTRLB_LPMHDSK_NO         (USB_DEVICE_CTRLB_LPMHDSK_NO_Val << USB_DEVICE_CTRLB_LPMHDSK_Pos)  /**< (USB_DEVICE_CTRLB) No handshake. LPM is not supported Position  */
#define USB_DEVICE_CTRLB_LPMHDSK_ACK        (USB_DEVICE_CTRLB_LPMHDSK_ACK_Val << USB_DEVICE_CTRLB_LPMHDSK_Pos)  /**< (USB_DEVICE_CTRLB) ACK Position  */
#define USB_DEVICE_CTRLB_LPMHDSK_NYET       (USB_DEVICE_CTRLB_LPMHDSK_NYET_Val << USB_DEVICE_CTRLB_LPMHDSK_Pos)  /**< (USB_DEVICE_CTRLB) NYET Position  */
#define USB_DEVICE_CTRLB_LPMHDSK_STALL      (USB_DEVICE_CTRLB_LPMHDSK_STALL_Val << USB_DEVICE_CTRLB_LPMHDSK_Pos)  /**< (USB_DEVICE_CTRLB) STALL Position  */
#define USB_DEVICE_CTRLB_MASK               _U_(0xFFF)                                     /**< \deprecated (USB_DEVICE_CTRLB) Register MASK  (Use USB_DEVICE_CTRLB_Msk instead)  */
#define USB_DEVICE_CTRLB_Msk                _U_(0xFFF)                                     /**< (USB_DEVICE_CTRLB) Register Mask  */

#define USB_DEVICE_CTRLB_OPMODE_Pos         8                                              /**< (USB_DEVICE_CTRLB Position) Specific Operational Mode */
#define USB_DEVICE_CTRLB_OPMODE_Msk         (_U_(0x1) << USB_DEVICE_CTRLB_OPMODE_Pos)      /**< (USB_DEVICE_CTRLB Mask) OPMODE */
#define USB_DEVICE_CTRLB_OPMODE(value)      (USB_DEVICE_CTRLB_OPMODE_Msk & ((value) << USB_DEVICE_CTRLB_OPMODE_Pos))  

/* -------- USB_HOST_CTRLB : (USB Offset: 0x08) (R/W 16) HOST Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :1;                        /**< bit:      0  Reserved */
    uint16_t RESUME:1;                  /**< bit:      1  Send USB Resume                          */
    uint16_t SPDCONF:2;                 /**< bit:   2..3  Speed Configuration for Host             */
    uint16_t AUTORESUME:1;              /**< bit:      4  Auto Resume Enable                       */
    uint16_t TSTJ:1;                    /**< bit:      5  Test mode J                              */
    uint16_t TSTK:1;                    /**< bit:      6  Test mode K                              */
    uint16_t :1;                        /**< bit:      7  Reserved */
    uint16_t SOFE:1;                    /**< bit:      8  Start of Frame Generation Enable         */
    uint16_t BUSRESET:1;                /**< bit:      9  Send USB Reset                           */
    uint16_t VBUSOK:1;                  /**< bit:     10  VBUS is OK                               */
    uint16_t L1RESUME:1;                /**< bit:     11  Send L1 Resume                           */
    uint16_t :4;                        /**< bit: 12..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_CTRLB_OFFSET               (0x08)                                        /**<  (USB_HOST_CTRLB) HOST Control B  Offset */
#define USB_HOST_CTRLB_RESETVALUE           _U_(0x00)                                     /**<  (USB_HOST_CTRLB) HOST Control B  Reset Value */

#define USB_HOST_CTRLB_RESUME_Pos           1                                              /**< (USB_HOST_CTRLB) Send USB Resume Position */
#define USB_HOST_CTRLB_RESUME_Msk           (_U_(0x1) << USB_HOST_CTRLB_RESUME_Pos)        /**< (USB_HOST_CTRLB) Send USB Resume Mask */
#define USB_HOST_CTRLB_RESUME               USB_HOST_CTRLB_RESUME_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_RESUME_Msk instead */
#define USB_HOST_CTRLB_SPDCONF_Pos          2                                              /**< (USB_HOST_CTRLB) Speed Configuration for Host Position */
#define USB_HOST_CTRLB_SPDCONF_Msk          (_U_(0x3) << USB_HOST_CTRLB_SPDCONF_Pos)       /**< (USB_HOST_CTRLB) Speed Configuration for Host Mask */
#define USB_HOST_CTRLB_SPDCONF(value)       (USB_HOST_CTRLB_SPDCONF_Msk & ((value) << USB_HOST_CTRLB_SPDCONF_Pos))
#define   USB_HOST_CTRLB_SPDCONF_NORMAL_Val _U_(0x0)                                       /**< (USB_HOST_CTRLB) Normal mode: the host starts in full-speed mode and performs a high-speed reset to switch to the high speed mode if the downstream peripheral is high-speed capable.  */
#define   USB_HOST_CTRLB_SPDCONF_FS_Val     _U_(0x3)                                       /**< (USB_HOST_CTRLB) Full-speed: the host remains in full-speed mode whatever is the peripheral speed capability. Relevant in UTMI mode only.  */
#define USB_HOST_CTRLB_SPDCONF_NORMAL       (USB_HOST_CTRLB_SPDCONF_NORMAL_Val << USB_HOST_CTRLB_SPDCONF_Pos)  /**< (USB_HOST_CTRLB) Normal mode: the host starts in full-speed mode and performs a high-speed reset to switch to the high speed mode if the downstream peripheral is high-speed capable. Position  */
#define USB_HOST_CTRLB_SPDCONF_FS           (USB_HOST_CTRLB_SPDCONF_FS_Val << USB_HOST_CTRLB_SPDCONF_Pos)  /**< (USB_HOST_CTRLB) Full-speed: the host remains in full-speed mode whatever is the peripheral speed capability. Relevant in UTMI mode only. Position  */
#define USB_HOST_CTRLB_AUTORESUME_Pos       4                                              /**< (USB_HOST_CTRLB) Auto Resume Enable Position */
#define USB_HOST_CTRLB_AUTORESUME_Msk       (_U_(0x1) << USB_HOST_CTRLB_AUTORESUME_Pos)    /**< (USB_HOST_CTRLB) Auto Resume Enable Mask */
#define USB_HOST_CTRLB_AUTORESUME           USB_HOST_CTRLB_AUTORESUME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_AUTORESUME_Msk instead */
#define USB_HOST_CTRLB_TSTJ_Pos             5                                              /**< (USB_HOST_CTRLB) Test mode J Position */
#define USB_HOST_CTRLB_TSTJ_Msk             (_U_(0x1) << USB_HOST_CTRLB_TSTJ_Pos)          /**< (USB_HOST_CTRLB) Test mode J Mask */
#define USB_HOST_CTRLB_TSTJ                 USB_HOST_CTRLB_TSTJ_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_TSTJ_Msk instead */
#define USB_HOST_CTRLB_TSTK_Pos             6                                              /**< (USB_HOST_CTRLB) Test mode K Position */
#define USB_HOST_CTRLB_TSTK_Msk             (_U_(0x1) << USB_HOST_CTRLB_TSTK_Pos)          /**< (USB_HOST_CTRLB) Test mode K Mask */
#define USB_HOST_CTRLB_TSTK                 USB_HOST_CTRLB_TSTK_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_TSTK_Msk instead */
#define USB_HOST_CTRLB_SOFE_Pos             8                                              /**< (USB_HOST_CTRLB) Start of Frame Generation Enable Position */
#define USB_HOST_CTRLB_SOFE_Msk             (_U_(0x1) << USB_HOST_CTRLB_SOFE_Pos)          /**< (USB_HOST_CTRLB) Start of Frame Generation Enable Mask */
#define USB_HOST_CTRLB_SOFE                 USB_HOST_CTRLB_SOFE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_SOFE_Msk instead */
#define USB_HOST_CTRLB_BUSRESET_Pos         9                                              /**< (USB_HOST_CTRLB) Send USB Reset Position */
#define USB_HOST_CTRLB_BUSRESET_Msk         (_U_(0x1) << USB_HOST_CTRLB_BUSRESET_Pos)      /**< (USB_HOST_CTRLB) Send USB Reset Mask */
#define USB_HOST_CTRLB_BUSRESET             USB_HOST_CTRLB_BUSRESET_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_BUSRESET_Msk instead */
#define USB_HOST_CTRLB_VBUSOK_Pos           10                                             /**< (USB_HOST_CTRLB) VBUS is OK Position */
#define USB_HOST_CTRLB_VBUSOK_Msk           (_U_(0x1) << USB_HOST_CTRLB_VBUSOK_Pos)        /**< (USB_HOST_CTRLB) VBUS is OK Mask */
#define USB_HOST_CTRLB_VBUSOK               USB_HOST_CTRLB_VBUSOK_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_VBUSOK_Msk instead */
#define USB_HOST_CTRLB_L1RESUME_Pos         11                                             /**< (USB_HOST_CTRLB) Send L1 Resume Position */
#define USB_HOST_CTRLB_L1RESUME_Msk         (_U_(0x1) << USB_HOST_CTRLB_L1RESUME_Pos)      /**< (USB_HOST_CTRLB) Send L1 Resume Mask */
#define USB_HOST_CTRLB_L1RESUME             USB_HOST_CTRLB_L1RESUME_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_CTRLB_L1RESUME_Msk instead */
#define USB_HOST_CTRLB_MASK                 _U_(0xF7E)                                     /**< \deprecated (USB_HOST_CTRLB) Register MASK  (Use USB_HOST_CTRLB_Msk instead)  */
#define USB_HOST_CTRLB_Msk                  _U_(0xF7E)                                     /**< (USB_HOST_CTRLB) Register Mask  */


/* -------- USB_DEVICE_DADD : (USB Offset: 0x0a) (R/W 8) DEVICE Device Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DADD:7;                    /**< bit:   0..6  Device Address                           */
    uint8_t  ADDEN:1;                   /**< bit:      7  Device Address Enable                    */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_DADD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_DADD_OFFSET              (0x0A)                                        /**<  (USB_DEVICE_DADD) DEVICE Device Address  Offset */
#define USB_DEVICE_DADD_RESETVALUE          _U_(0x00)                                     /**<  (USB_DEVICE_DADD) DEVICE Device Address  Reset Value */

#define USB_DEVICE_DADD_DADD_Pos            0                                              /**< (USB_DEVICE_DADD) Device Address Position */
#define USB_DEVICE_DADD_DADD_Msk            (_U_(0x7F) << USB_DEVICE_DADD_DADD_Pos)        /**< (USB_DEVICE_DADD) Device Address Mask */
#define USB_DEVICE_DADD_DADD(value)         (USB_DEVICE_DADD_DADD_Msk & ((value) << USB_DEVICE_DADD_DADD_Pos))
#define USB_DEVICE_DADD_ADDEN_Pos           7                                              /**< (USB_DEVICE_DADD) Device Address Enable Position */
#define USB_DEVICE_DADD_ADDEN_Msk           (_U_(0x1) << USB_DEVICE_DADD_ADDEN_Pos)        /**< (USB_DEVICE_DADD) Device Address Enable Mask */
#define USB_DEVICE_DADD_ADDEN               USB_DEVICE_DADD_ADDEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_DADD_ADDEN_Msk instead */
#define USB_DEVICE_DADD_MASK                _U_(0xFF)                                      /**< \deprecated (USB_DEVICE_DADD) Register MASK  (Use USB_DEVICE_DADD_Msk instead)  */
#define USB_DEVICE_DADD_Msk                 _U_(0xFF)                                      /**< (USB_DEVICE_DADD) Register Mask  */


/* -------- USB_HOST_HSOFC : (USB Offset: 0x0a) (R/W 8) HOST Host Start Of Frame Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  FLENC:4;                   /**< bit:   0..3  Frame Length Control                     */
    uint8_t  :3;                        /**< bit:   4..6  Reserved */
    uint8_t  FLENCE:1;                  /**< bit:      7  Frame Length Control Enable              */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_HSOFC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_HSOFC_OFFSET               (0x0A)                                        /**<  (USB_HOST_HSOFC) HOST Host Start Of Frame Control  Offset */
#define USB_HOST_HSOFC_RESETVALUE           _U_(0x00)                                     /**<  (USB_HOST_HSOFC) HOST Host Start Of Frame Control  Reset Value */

#define USB_HOST_HSOFC_FLENC_Pos            0                                              /**< (USB_HOST_HSOFC) Frame Length Control Position */
#define USB_HOST_HSOFC_FLENC_Msk            (_U_(0xF) << USB_HOST_HSOFC_FLENC_Pos)         /**< (USB_HOST_HSOFC) Frame Length Control Mask */
#define USB_HOST_HSOFC_FLENC(value)         (USB_HOST_HSOFC_FLENC_Msk & ((value) << USB_HOST_HSOFC_FLENC_Pos))
#define USB_HOST_HSOFC_FLENCE_Pos           7                                              /**< (USB_HOST_HSOFC) Frame Length Control Enable Position */
#define USB_HOST_HSOFC_FLENCE_Msk           (_U_(0x1) << USB_HOST_HSOFC_FLENCE_Pos)        /**< (USB_HOST_HSOFC) Frame Length Control Enable Mask */
#define USB_HOST_HSOFC_FLENCE               USB_HOST_HSOFC_FLENCE_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_HSOFC_FLENCE_Msk instead */
#define USB_HOST_HSOFC_MASK                 _U_(0x8F)                                      /**< \deprecated (USB_HOST_HSOFC) Register MASK  (Use USB_HOST_HSOFC_Msk instead)  */
#define USB_HOST_HSOFC_Msk                  _U_(0x8F)                                      /**< (USB_HOST_HSOFC) Register Mask  */


/* -------- USB_DEVICE_STATUS : (USB Offset: 0x0c) (R/ 8) DEVICE Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :2;                        /**< bit:   0..1  Reserved */
    uint8_t  SPEED:2;                   /**< bit:   2..3  Speed Status                             */
    uint8_t  :2;                        /**< bit:   4..5  Reserved */
    uint8_t  LINESTATE:2;               /**< bit:   6..7  USB Line State Status                    */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_DEVICE_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_STATUS_OFFSET            (0x0C)                                        /**<  (USB_DEVICE_STATUS) DEVICE Status  Offset */
#define USB_DEVICE_STATUS_RESETVALUE        _U_(0x40)                                     /**<  (USB_DEVICE_STATUS) DEVICE Status  Reset Value */

#define USB_DEVICE_STATUS_SPEED_Pos         2                                              /**< (USB_DEVICE_STATUS) Speed Status Position */
#define USB_DEVICE_STATUS_SPEED_Msk         (_U_(0x3) << USB_DEVICE_STATUS_SPEED_Pos)      /**< (USB_DEVICE_STATUS) Speed Status Mask */
#define USB_DEVICE_STATUS_SPEED(value)      (USB_DEVICE_STATUS_SPEED_Msk & ((value) << USB_DEVICE_STATUS_SPEED_Pos))
#define   USB_DEVICE_STATUS_SPEED_FS_Val    _U_(0x0)                                       /**< (USB_DEVICE_STATUS) Full-speed mode  */
#define   USB_DEVICE_STATUS_SPEED_HS_Val    _U_(0x1)                                       /**< (USB_DEVICE_STATUS) High-speed mode  */
#define   USB_DEVICE_STATUS_SPEED_LS_Val    _U_(0x2)                                       /**< (USB_DEVICE_STATUS) Low-speed mode  */
#define USB_DEVICE_STATUS_SPEED_FS          (USB_DEVICE_STATUS_SPEED_FS_Val << USB_DEVICE_STATUS_SPEED_Pos)  /**< (USB_DEVICE_STATUS) Full-speed mode Position  */
#define USB_DEVICE_STATUS_SPEED_HS          (USB_DEVICE_STATUS_SPEED_HS_Val << USB_DEVICE_STATUS_SPEED_Pos)  /**< (USB_DEVICE_STATUS) High-speed mode Position  */
#define USB_DEVICE_STATUS_SPEED_LS          (USB_DEVICE_STATUS_SPEED_LS_Val << USB_DEVICE_STATUS_SPEED_Pos)  /**< (USB_DEVICE_STATUS) Low-speed mode Position  */
#define USB_DEVICE_STATUS_LINESTATE_Pos     6                                              /**< (USB_DEVICE_STATUS) USB Line State Status Position */
#define USB_DEVICE_STATUS_LINESTATE_Msk     (_U_(0x3) << USB_DEVICE_STATUS_LINESTATE_Pos)  /**< (USB_DEVICE_STATUS) USB Line State Status Mask */
#define USB_DEVICE_STATUS_LINESTATE(value)  (USB_DEVICE_STATUS_LINESTATE_Msk & ((value) << USB_DEVICE_STATUS_LINESTATE_Pos))
#define   USB_DEVICE_STATUS_LINESTATE_0_Val _U_(0x0)                                       /**< (USB_DEVICE_STATUS) SE0/RESET  */
#define   USB_DEVICE_STATUS_LINESTATE_1_Val _U_(0x1)                                       /**< (USB_DEVICE_STATUS) FS-J or LS-K State  */
#define   USB_DEVICE_STATUS_LINESTATE_2_Val _U_(0x2)                                       /**< (USB_DEVICE_STATUS) FS-K or LS-J State  */
#define USB_DEVICE_STATUS_LINESTATE_0       (USB_DEVICE_STATUS_LINESTATE_0_Val << USB_DEVICE_STATUS_LINESTATE_Pos)  /**< (USB_DEVICE_STATUS) SE0/RESET Position  */
#define USB_DEVICE_STATUS_LINESTATE_1       (USB_DEVICE_STATUS_LINESTATE_1_Val << USB_DEVICE_STATUS_LINESTATE_Pos)  /**< (USB_DEVICE_STATUS) FS-J or LS-K State Position  */
#define USB_DEVICE_STATUS_LINESTATE_2       (USB_DEVICE_STATUS_LINESTATE_2_Val << USB_DEVICE_STATUS_LINESTATE_Pos)  /**< (USB_DEVICE_STATUS) FS-K or LS-J State Position  */
#define USB_DEVICE_STATUS_MASK              _U_(0xCC)                                      /**< \deprecated (USB_DEVICE_STATUS) Register MASK  (Use USB_DEVICE_STATUS_Msk instead)  */
#define USB_DEVICE_STATUS_Msk               _U_(0xCC)                                      /**< (USB_DEVICE_STATUS) Register Mask  */


/* -------- USB_HOST_STATUS : (USB Offset: 0x0c) (R/W 8) HOST Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :2;                        /**< bit:   0..1  Reserved */
    uint8_t  SPEED:2;                   /**< bit:   2..3  Speed Status                             */
    uint8_t  :2;                        /**< bit:   4..5  Reserved */
    uint8_t  LINESTATE:2;               /**< bit:   6..7  USB Line State Status                    */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_STATUS_OFFSET              (0x0C)                                        /**<  (USB_HOST_STATUS) HOST Status  Offset */
#define USB_HOST_STATUS_RESETVALUE          _U_(0x00)                                     /**<  (USB_HOST_STATUS) HOST Status  Reset Value */

#define USB_HOST_STATUS_SPEED_Pos           2                                              /**< (USB_HOST_STATUS) Speed Status Position */
#define USB_HOST_STATUS_SPEED_Msk           (_U_(0x3) << USB_HOST_STATUS_SPEED_Pos)        /**< (USB_HOST_STATUS) Speed Status Mask */
#define USB_HOST_STATUS_SPEED(value)        (USB_HOST_STATUS_SPEED_Msk & ((value) << USB_HOST_STATUS_SPEED_Pos))
#define USB_HOST_STATUS_LINESTATE_Pos       6                                              /**< (USB_HOST_STATUS) USB Line State Status Position */
#define USB_HOST_STATUS_LINESTATE_Msk       (_U_(0x3) << USB_HOST_STATUS_LINESTATE_Pos)    /**< (USB_HOST_STATUS) USB Line State Status Mask */
#define USB_HOST_STATUS_LINESTATE(value)    (USB_HOST_STATUS_LINESTATE_Msk & ((value) << USB_HOST_STATUS_LINESTATE_Pos))
#define USB_HOST_STATUS_MASK                _U_(0xCC)                                      /**< \deprecated (USB_HOST_STATUS) Register MASK  (Use USB_HOST_STATUS_Msk instead)  */
#define USB_HOST_STATUS_Msk                 _U_(0xCC)                                      /**< (USB_HOST_STATUS) Register Mask  */


/* -------- USB_FSMSTATUS : (USB Offset: 0x0d) (R/ 8) Finite State Machine Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  FSMSTATE:7;                /**< bit:   0..6  Fine State Machine Status                */
    uint8_t  :1;                        /**< bit:      7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_FSMSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_FSMSTATUS_OFFSET                (0x0D)                                        /**<  (USB_FSMSTATUS) Finite State Machine Status  Offset */
#define USB_FSMSTATUS_RESETVALUE            _U_(0x01)                                     /**<  (USB_FSMSTATUS) Finite State Machine Status  Reset Value */

#define USB_FSMSTATUS_FSMSTATE_Pos          0                                              /**< (USB_FSMSTATUS) Fine State Machine Status Position */
#define USB_FSMSTATUS_FSMSTATE_Msk          (_U_(0x7F) << USB_FSMSTATUS_FSMSTATE_Pos)      /**< (USB_FSMSTATUS) Fine State Machine Status Mask */
#define USB_FSMSTATUS_FSMSTATE(value)       (USB_FSMSTATUS_FSMSTATE_Msk & ((value) << USB_FSMSTATUS_FSMSTATE_Pos))
#define   USB_FSMSTATUS_FSMSTATE_OFF_Val    _U_(0x1)                                       /**< (USB_FSMSTATUS) OFF (L3). It corresponds to the powered-off, disconnected, and disabled state  */
#define   USB_FSMSTATUS_FSMSTATE_ON_Val     _U_(0x2)                                       /**< (USB_FSMSTATUS) ON (L0). It corresponds to the Idle and Active states  */
#define   USB_FSMSTATUS_FSMSTATE_SUSPEND_Val _U_(0x4)                                       /**< (USB_FSMSTATUS) SUSPEND (L2)  */
#define   USB_FSMSTATUS_FSMSTATE_SLEEP_Val  _U_(0x8)                                       /**< (USB_FSMSTATUS) SLEEP (L1)  */
#define   USB_FSMSTATUS_FSMSTATE_DNRESUME_Val _U_(0x10)                                      /**< (USB_FSMSTATUS) DNRESUME. Down Stream Resume.  */
#define   USB_FSMSTATUS_FSMSTATE_UPRESUME_Val _U_(0x20)                                      /**< (USB_FSMSTATUS) UPRESUME. Up Stream Resume.  */
#define   USB_FSMSTATUS_FSMSTATE_RESET_Val  _U_(0x40)                                      /**< (USB_FSMSTATUS) RESET. USB lines Reset.  */
#define USB_FSMSTATUS_FSMSTATE_OFF          (USB_FSMSTATUS_FSMSTATE_OFF_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) OFF (L3). It corresponds to the powered-off, disconnected, and disabled state Position  */
#define USB_FSMSTATUS_FSMSTATE_ON           (USB_FSMSTATUS_FSMSTATE_ON_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) ON (L0). It corresponds to the Idle and Active states Position  */
#define USB_FSMSTATUS_FSMSTATE_SUSPEND      (USB_FSMSTATUS_FSMSTATE_SUSPEND_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) SUSPEND (L2) Position  */
#define USB_FSMSTATUS_FSMSTATE_SLEEP        (USB_FSMSTATUS_FSMSTATE_SLEEP_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) SLEEP (L1) Position  */
#define USB_FSMSTATUS_FSMSTATE_DNRESUME     (USB_FSMSTATUS_FSMSTATE_DNRESUME_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) DNRESUME. Down Stream Resume. Position  */
#define USB_FSMSTATUS_FSMSTATE_UPRESUME     (USB_FSMSTATUS_FSMSTATE_UPRESUME_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) UPRESUME. Up Stream Resume. Position  */
#define USB_FSMSTATUS_FSMSTATE_RESET        (USB_FSMSTATUS_FSMSTATE_RESET_Val << USB_FSMSTATUS_FSMSTATE_Pos)  /**< (USB_FSMSTATUS) RESET. USB lines Reset. Position  */
#define USB_FSMSTATUS_MASK                  _U_(0x7F)                                      /**< \deprecated (USB_FSMSTATUS) Register MASK  (Use USB_FSMSTATUS_Msk instead)  */
#define USB_FSMSTATUS_Msk                   _U_(0x7F)                                      /**< (USB_FSMSTATUS) Register Mask  */


/* -------- USB_DEVICE_FNUM : (USB Offset: 0x10) (R/ 16) DEVICE Device Frame Number -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t MFNUM:3;                   /**< bit:   0..2  Micro Frame Number                       */
    uint16_t FNUM:11;                   /**< bit:  3..13  Frame Number                             */
    uint16_t :1;                        /**< bit:     14  Reserved */
    uint16_t FNCERR:1;                  /**< bit:     15  Frame Number CRC Error                   */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_FNUM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_FNUM_OFFSET              (0x10)                                        /**<  (USB_DEVICE_FNUM) DEVICE Device Frame Number  Offset */
#define USB_DEVICE_FNUM_RESETVALUE          _U_(0x00)                                     /**<  (USB_DEVICE_FNUM) DEVICE Device Frame Number  Reset Value */

#define USB_DEVICE_FNUM_MFNUM_Pos           0                                              /**< (USB_DEVICE_FNUM) Micro Frame Number Position */
#define USB_DEVICE_FNUM_MFNUM_Msk           (_U_(0x7) << USB_DEVICE_FNUM_MFNUM_Pos)        /**< (USB_DEVICE_FNUM) Micro Frame Number Mask */
#define USB_DEVICE_FNUM_MFNUM(value)        (USB_DEVICE_FNUM_MFNUM_Msk & ((value) << USB_DEVICE_FNUM_MFNUM_Pos))
#define USB_DEVICE_FNUM_FNUM_Pos            3                                              /**< (USB_DEVICE_FNUM) Frame Number Position */
#define USB_DEVICE_FNUM_FNUM_Msk            (_U_(0x7FF) << USB_DEVICE_FNUM_FNUM_Pos)       /**< (USB_DEVICE_FNUM) Frame Number Mask */
#define USB_DEVICE_FNUM_FNUM(value)         (USB_DEVICE_FNUM_FNUM_Msk & ((value) << USB_DEVICE_FNUM_FNUM_Pos))
#define USB_DEVICE_FNUM_FNCERR_Pos          15                                             /**< (USB_DEVICE_FNUM) Frame Number CRC Error Position */
#define USB_DEVICE_FNUM_FNCERR_Msk          (_U_(0x1) << USB_DEVICE_FNUM_FNCERR_Pos)       /**< (USB_DEVICE_FNUM) Frame Number CRC Error Mask */
#define USB_DEVICE_FNUM_FNCERR              USB_DEVICE_FNUM_FNCERR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_FNUM_FNCERR_Msk instead */
#define USB_DEVICE_FNUM_MASK                _U_(0xBFFF)                                    /**< \deprecated (USB_DEVICE_FNUM) Register MASK  (Use USB_DEVICE_FNUM_Msk instead)  */
#define USB_DEVICE_FNUM_Msk                 _U_(0xBFFF)                                    /**< (USB_DEVICE_FNUM) Register Mask  */


/* -------- USB_HOST_FNUM : (USB Offset: 0x10) (R/W 16) HOST Host Frame Number -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t MFNUM:3;                   /**< bit:   0..2  Micro Frame Number                       */
    uint16_t FNUM:11;                   /**< bit:  3..13  Frame Number                             */
    uint16_t :2;                        /**< bit: 14..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_FNUM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_FNUM_OFFSET                (0x10)                                        /**<  (USB_HOST_FNUM) HOST Host Frame Number  Offset */
#define USB_HOST_FNUM_RESETVALUE            _U_(0x00)                                     /**<  (USB_HOST_FNUM) HOST Host Frame Number  Reset Value */

#define USB_HOST_FNUM_MFNUM_Pos             0                                              /**< (USB_HOST_FNUM) Micro Frame Number Position */
#define USB_HOST_FNUM_MFNUM_Msk             (_U_(0x7) << USB_HOST_FNUM_MFNUM_Pos)          /**< (USB_HOST_FNUM) Micro Frame Number Mask */
#define USB_HOST_FNUM_MFNUM(value)          (USB_HOST_FNUM_MFNUM_Msk & ((value) << USB_HOST_FNUM_MFNUM_Pos))
#define USB_HOST_FNUM_FNUM_Pos              3                                              /**< (USB_HOST_FNUM) Frame Number Position */
#define USB_HOST_FNUM_FNUM_Msk              (_U_(0x7FF) << USB_HOST_FNUM_FNUM_Pos)         /**< (USB_HOST_FNUM) Frame Number Mask */
#define USB_HOST_FNUM_FNUM(value)           (USB_HOST_FNUM_FNUM_Msk & ((value) << USB_HOST_FNUM_FNUM_Pos))
#define USB_HOST_FNUM_MASK                  _U_(0x3FFF)                                    /**< \deprecated (USB_HOST_FNUM) Register MASK  (Use USB_HOST_FNUM_Msk instead)  */
#define USB_HOST_FNUM_Msk                   _U_(0x3FFF)                                    /**< (USB_HOST_FNUM) Register Mask  */


/* -------- USB_HOST_FLENHIGH : (USB Offset: 0x12) (R/ 8) HOST Host Frame Length -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  FLENHIGH:8;                /**< bit:   0..7  Frame Length                             */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} USB_HOST_FLENHIGH_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_FLENHIGH_OFFSET            (0x12)                                        /**<  (USB_HOST_FLENHIGH) HOST Host Frame Length  Offset */
#define USB_HOST_FLENHIGH_RESETVALUE        _U_(0x00)                                     /**<  (USB_HOST_FLENHIGH) HOST Host Frame Length  Reset Value */

#define USB_HOST_FLENHIGH_FLENHIGH_Pos      0                                              /**< (USB_HOST_FLENHIGH) Frame Length Position */
#define USB_HOST_FLENHIGH_FLENHIGH_Msk      (_U_(0xFF) << USB_HOST_FLENHIGH_FLENHIGH_Pos)  /**< (USB_HOST_FLENHIGH) Frame Length Mask */
#define USB_HOST_FLENHIGH_FLENHIGH(value)   (USB_HOST_FLENHIGH_FLENHIGH_Msk & ((value) << USB_HOST_FLENHIGH_FLENHIGH_Pos))
#define USB_HOST_FLENHIGH_MASK              _U_(0xFF)                                      /**< \deprecated (USB_HOST_FLENHIGH) Register MASK  (Use USB_HOST_FLENHIGH_Msk instead)  */
#define USB_HOST_FLENHIGH_Msk               _U_(0xFF)                                      /**< (USB_HOST_FLENHIGH) Register Mask  */


/* -------- USB_DEVICE_INTENCLR : (USB Offset: 0x14) (R/W 16) DEVICE Device Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SUSPEND:1;                 /**< bit:      0  Suspend Interrupt Enable                 */
    uint16_t MSOF:1;                    /**< bit:      1  Micro Start of Frame Interrupt Enable in High Speed Mode */
    uint16_t SOF:1;                     /**< bit:      2  Start Of Frame Interrupt Enable          */
    uint16_t EORST:1;                   /**< bit:      3  End of Reset Interrupt Enable            */
    uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up Interrupt Enable                 */
    uint16_t EORSM:1;                   /**< bit:      5  End Of Resume Interrupt Enable           */
    uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume Interrupt Enable         */
    uint16_t RAMACER:1;                 /**< bit:      7  Ram Access Interrupt Enable              */
    uint16_t LPMNYET:1;                 /**< bit:      8  Link Power Management Not Yet Interrupt Enable */
    uint16_t LPMSUSP:1;                 /**< bit:      9  Link Power Management Suspend Interrupt Enable */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_INTENCLR_OFFSET          (0x14)                                        /**<  (USB_DEVICE_INTENCLR) DEVICE Device Interrupt Enable Clear  Offset */
#define USB_DEVICE_INTENCLR_RESETVALUE      _U_(0x00)                                     /**<  (USB_DEVICE_INTENCLR) DEVICE Device Interrupt Enable Clear  Reset Value */

#define USB_DEVICE_INTENCLR_SUSPEND_Pos     0                                              /**< (USB_DEVICE_INTENCLR) Suspend Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_SUSPEND_Msk     (_U_(0x1) << USB_DEVICE_INTENCLR_SUSPEND_Pos)  /**< (USB_DEVICE_INTENCLR) Suspend Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_SUSPEND         USB_DEVICE_INTENCLR_SUSPEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_SUSPEND_Msk instead */
#define USB_DEVICE_INTENCLR_MSOF_Pos        1                                              /**< (USB_DEVICE_INTENCLR) Micro Start of Frame Interrupt Enable in High Speed Mode Position */
#define USB_DEVICE_INTENCLR_MSOF_Msk        (_U_(0x1) << USB_DEVICE_INTENCLR_MSOF_Pos)     /**< (USB_DEVICE_INTENCLR) Micro Start of Frame Interrupt Enable in High Speed Mode Mask */
#define USB_DEVICE_INTENCLR_MSOF            USB_DEVICE_INTENCLR_MSOF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_MSOF_Msk instead */
#define USB_DEVICE_INTENCLR_SOF_Pos         2                                              /**< (USB_DEVICE_INTENCLR) Start Of Frame Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_SOF_Msk         (_U_(0x1) << USB_DEVICE_INTENCLR_SOF_Pos)      /**< (USB_DEVICE_INTENCLR) Start Of Frame Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_SOF             USB_DEVICE_INTENCLR_SOF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_SOF_Msk instead */
#define USB_DEVICE_INTENCLR_EORST_Pos       3                                              /**< (USB_DEVICE_INTENCLR) End of Reset Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_EORST_Msk       (_U_(0x1) << USB_DEVICE_INTENCLR_EORST_Pos)    /**< (USB_DEVICE_INTENCLR) End of Reset Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_EORST           USB_DEVICE_INTENCLR_EORST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_EORST_Msk instead */
#define USB_DEVICE_INTENCLR_WAKEUP_Pos      4                                              /**< (USB_DEVICE_INTENCLR) Wake Up Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_WAKEUP_Msk      (_U_(0x1) << USB_DEVICE_INTENCLR_WAKEUP_Pos)   /**< (USB_DEVICE_INTENCLR) Wake Up Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_WAKEUP          USB_DEVICE_INTENCLR_WAKEUP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_WAKEUP_Msk instead */
#define USB_DEVICE_INTENCLR_EORSM_Pos       5                                              /**< (USB_DEVICE_INTENCLR) End Of Resume Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_EORSM_Msk       (_U_(0x1) << USB_DEVICE_INTENCLR_EORSM_Pos)    /**< (USB_DEVICE_INTENCLR) End Of Resume Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_EORSM           USB_DEVICE_INTENCLR_EORSM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_EORSM_Msk instead */
#define USB_DEVICE_INTENCLR_UPRSM_Pos       6                                              /**< (USB_DEVICE_INTENCLR) Upstream Resume Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_UPRSM_Msk       (_U_(0x1) << USB_DEVICE_INTENCLR_UPRSM_Pos)    /**< (USB_DEVICE_INTENCLR) Upstream Resume Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_UPRSM           USB_DEVICE_INTENCLR_UPRSM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_UPRSM_Msk instead */
#define USB_DEVICE_INTENCLR_RAMACER_Pos     7                                              /**< (USB_DEVICE_INTENCLR) Ram Access Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_RAMACER_Msk     (_U_(0x1) << USB_DEVICE_INTENCLR_RAMACER_Pos)  /**< (USB_DEVICE_INTENCLR) Ram Access Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_RAMACER         USB_DEVICE_INTENCLR_RAMACER_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_RAMACER_Msk instead */
#define USB_DEVICE_INTENCLR_LPMNYET_Pos     8                                              /**< (USB_DEVICE_INTENCLR) Link Power Management Not Yet Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_LPMNYET_Msk     (_U_(0x1) << USB_DEVICE_INTENCLR_LPMNYET_Pos)  /**< (USB_DEVICE_INTENCLR) Link Power Management Not Yet Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_LPMNYET         USB_DEVICE_INTENCLR_LPMNYET_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_LPMNYET_Msk instead */
#define USB_DEVICE_INTENCLR_LPMSUSP_Pos     9                                              /**< (USB_DEVICE_INTENCLR) Link Power Management Suspend Interrupt Enable Position */
#define USB_DEVICE_INTENCLR_LPMSUSP_Msk     (_U_(0x1) << USB_DEVICE_INTENCLR_LPMSUSP_Pos)  /**< (USB_DEVICE_INTENCLR) Link Power Management Suspend Interrupt Enable Mask */
#define USB_DEVICE_INTENCLR_LPMSUSP         USB_DEVICE_INTENCLR_LPMSUSP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENCLR_LPMSUSP_Msk instead */
#define USB_DEVICE_INTENCLR_MASK            _U_(0x3FF)                                     /**< \deprecated (USB_DEVICE_INTENCLR) Register MASK  (Use USB_DEVICE_INTENCLR_Msk instead)  */
#define USB_DEVICE_INTENCLR_Msk             _U_(0x3FF)                                     /**< (USB_DEVICE_INTENCLR) Register Mask  */


/* -------- USB_HOST_INTENCLR : (USB Offset: 0x14) (R/W 16) HOST Host Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :2;                        /**< bit:   0..1  Reserved */
    uint16_t HSOF:1;                    /**< bit:      2  Host Start Of Frame Interrupt Disable    */
    uint16_t RST:1;                     /**< bit:      3  BUS Reset Interrupt Disable              */
    uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up Interrupt Disable                */
    uint16_t DNRSM:1;                   /**< bit:      5  DownStream to Device Interrupt Disable   */
    uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume from Device Interrupt Disable */
    uint16_t RAMACER:1;                 /**< bit:      7  Ram Access Interrupt Disable             */
    uint16_t DCONN:1;                   /**< bit:      8  Device Connection Interrupt Disable      */
    uint16_t DDISC:1;                   /**< bit:      9  Device Disconnection Interrupt Disable   */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_INTENCLR_OFFSET            (0x14)                                        /**<  (USB_HOST_INTENCLR) HOST Host Interrupt Enable Clear  Offset */
#define USB_HOST_INTENCLR_RESETVALUE        _U_(0x00)                                     /**<  (USB_HOST_INTENCLR) HOST Host Interrupt Enable Clear  Reset Value */

#define USB_HOST_INTENCLR_HSOF_Pos          2                                              /**< (USB_HOST_INTENCLR) Host Start Of Frame Interrupt Disable Position */
#define USB_HOST_INTENCLR_HSOF_Msk          (_U_(0x1) << USB_HOST_INTENCLR_HSOF_Pos)       /**< (USB_HOST_INTENCLR) Host Start Of Frame Interrupt Disable Mask */
#define USB_HOST_INTENCLR_HSOF              USB_HOST_INTENCLR_HSOF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_HSOF_Msk instead */
#define USB_HOST_INTENCLR_RST_Pos           3                                              /**< (USB_HOST_INTENCLR) BUS Reset Interrupt Disable Position */
#define USB_HOST_INTENCLR_RST_Msk           (_U_(0x1) << USB_HOST_INTENCLR_RST_Pos)        /**< (USB_HOST_INTENCLR) BUS Reset Interrupt Disable Mask */
#define USB_HOST_INTENCLR_RST               USB_HOST_INTENCLR_RST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_RST_Msk instead */
#define USB_HOST_INTENCLR_WAKEUP_Pos        4                                              /**< (USB_HOST_INTENCLR) Wake Up Interrupt Disable Position */
#define USB_HOST_INTENCLR_WAKEUP_Msk        (_U_(0x1) << USB_HOST_INTENCLR_WAKEUP_Pos)     /**< (USB_HOST_INTENCLR) Wake Up Interrupt Disable Mask */
#define USB_HOST_INTENCLR_WAKEUP            USB_HOST_INTENCLR_WAKEUP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_WAKEUP_Msk instead */
#define USB_HOST_INTENCLR_DNRSM_Pos         5                                              /**< (USB_HOST_INTENCLR) DownStream to Device Interrupt Disable Position */
#define USB_HOST_INTENCLR_DNRSM_Msk         (_U_(0x1) << USB_HOST_INTENCLR_DNRSM_Pos)      /**< (USB_HOST_INTENCLR) DownStream to Device Interrupt Disable Mask */
#define USB_HOST_INTENCLR_DNRSM             USB_HOST_INTENCLR_DNRSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_DNRSM_Msk instead */
#define USB_HOST_INTENCLR_UPRSM_Pos         6                                              /**< (USB_HOST_INTENCLR) Upstream Resume from Device Interrupt Disable Position */
#define USB_HOST_INTENCLR_UPRSM_Msk         (_U_(0x1) << USB_HOST_INTENCLR_UPRSM_Pos)      /**< (USB_HOST_INTENCLR) Upstream Resume from Device Interrupt Disable Mask */
#define USB_HOST_INTENCLR_UPRSM             USB_HOST_INTENCLR_UPRSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_UPRSM_Msk instead */
#define USB_HOST_INTENCLR_RAMACER_Pos       7                                              /**< (USB_HOST_INTENCLR) Ram Access Interrupt Disable Position */
#define USB_HOST_INTENCLR_RAMACER_Msk       (_U_(0x1) << USB_HOST_INTENCLR_RAMACER_Pos)    /**< (USB_HOST_INTENCLR) Ram Access Interrupt Disable Mask */
#define USB_HOST_INTENCLR_RAMACER           USB_HOST_INTENCLR_RAMACER_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_RAMACER_Msk instead */
#define USB_HOST_INTENCLR_DCONN_Pos         8                                              /**< (USB_HOST_INTENCLR) Device Connection Interrupt Disable Position */
#define USB_HOST_INTENCLR_DCONN_Msk         (_U_(0x1) << USB_HOST_INTENCLR_DCONN_Pos)      /**< (USB_HOST_INTENCLR) Device Connection Interrupt Disable Mask */
#define USB_HOST_INTENCLR_DCONN             USB_HOST_INTENCLR_DCONN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_DCONN_Msk instead */
#define USB_HOST_INTENCLR_DDISC_Pos         9                                              /**< (USB_HOST_INTENCLR) Device Disconnection Interrupt Disable Position */
#define USB_HOST_INTENCLR_DDISC_Msk         (_U_(0x1) << USB_HOST_INTENCLR_DDISC_Pos)      /**< (USB_HOST_INTENCLR) Device Disconnection Interrupt Disable Mask */
#define USB_HOST_INTENCLR_DDISC             USB_HOST_INTENCLR_DDISC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENCLR_DDISC_Msk instead */
#define USB_HOST_INTENCLR_MASK              _U_(0x3FC)                                     /**< \deprecated (USB_HOST_INTENCLR) Register MASK  (Use USB_HOST_INTENCLR_Msk instead)  */
#define USB_HOST_INTENCLR_Msk               _U_(0x3FC)                                     /**< (USB_HOST_INTENCLR) Register Mask  */


/* -------- USB_DEVICE_INTENSET : (USB Offset: 0x18) (R/W 16) DEVICE Device Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SUSPEND:1;                 /**< bit:      0  Suspend Interrupt Enable                 */
    uint16_t MSOF:1;                    /**< bit:      1  Micro Start of Frame Interrupt Enable in High Speed Mode */
    uint16_t SOF:1;                     /**< bit:      2  Start Of Frame Interrupt Enable          */
    uint16_t EORST:1;                   /**< bit:      3  End of Reset Interrupt Enable            */
    uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up Interrupt Enable                 */
    uint16_t EORSM:1;                   /**< bit:      5  End Of Resume Interrupt Enable           */
    uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume Interrupt Enable         */
    uint16_t RAMACER:1;                 /**< bit:      7  Ram Access Interrupt Enable              */
    uint16_t LPMNYET:1;                 /**< bit:      8  Link Power Management Not Yet Interrupt Enable */
    uint16_t LPMSUSP:1;                 /**< bit:      9  Link Power Management Suspend Interrupt Enable */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_INTENSET_OFFSET          (0x18)                                        /**<  (USB_DEVICE_INTENSET) DEVICE Device Interrupt Enable Set  Offset */
#define USB_DEVICE_INTENSET_RESETVALUE      _U_(0x00)                                     /**<  (USB_DEVICE_INTENSET) DEVICE Device Interrupt Enable Set  Reset Value */

#define USB_DEVICE_INTENSET_SUSPEND_Pos     0                                              /**< (USB_DEVICE_INTENSET) Suspend Interrupt Enable Position */
#define USB_DEVICE_INTENSET_SUSPEND_Msk     (_U_(0x1) << USB_DEVICE_INTENSET_SUSPEND_Pos)  /**< (USB_DEVICE_INTENSET) Suspend Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_SUSPEND         USB_DEVICE_INTENSET_SUSPEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_SUSPEND_Msk instead */
#define USB_DEVICE_INTENSET_MSOF_Pos        1                                              /**< (USB_DEVICE_INTENSET) Micro Start of Frame Interrupt Enable in High Speed Mode Position */
#define USB_DEVICE_INTENSET_MSOF_Msk        (_U_(0x1) << USB_DEVICE_INTENSET_MSOF_Pos)     /**< (USB_DEVICE_INTENSET) Micro Start of Frame Interrupt Enable in High Speed Mode Mask */
#define USB_DEVICE_INTENSET_MSOF            USB_DEVICE_INTENSET_MSOF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_MSOF_Msk instead */
#define USB_DEVICE_INTENSET_SOF_Pos         2                                              /**< (USB_DEVICE_INTENSET) Start Of Frame Interrupt Enable Position */
#define USB_DEVICE_INTENSET_SOF_Msk         (_U_(0x1) << USB_DEVICE_INTENSET_SOF_Pos)      /**< (USB_DEVICE_INTENSET) Start Of Frame Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_SOF             USB_DEVICE_INTENSET_SOF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_SOF_Msk instead */
#define USB_DEVICE_INTENSET_EORST_Pos       3                                              /**< (USB_DEVICE_INTENSET) End of Reset Interrupt Enable Position */
#define USB_DEVICE_INTENSET_EORST_Msk       (_U_(0x1) << USB_DEVICE_INTENSET_EORST_Pos)    /**< (USB_DEVICE_INTENSET) End of Reset Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_EORST           USB_DEVICE_INTENSET_EORST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_EORST_Msk instead */
#define USB_DEVICE_INTENSET_WAKEUP_Pos      4                                              /**< (USB_DEVICE_INTENSET) Wake Up Interrupt Enable Position */
#define USB_DEVICE_INTENSET_WAKEUP_Msk      (_U_(0x1) << USB_DEVICE_INTENSET_WAKEUP_Pos)   /**< (USB_DEVICE_INTENSET) Wake Up Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_WAKEUP          USB_DEVICE_INTENSET_WAKEUP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_WAKEUP_Msk instead */
#define USB_DEVICE_INTENSET_EORSM_Pos       5                                              /**< (USB_DEVICE_INTENSET) End Of Resume Interrupt Enable Position */
#define USB_DEVICE_INTENSET_EORSM_Msk       (_U_(0x1) << USB_DEVICE_INTENSET_EORSM_Pos)    /**< (USB_DEVICE_INTENSET) End Of Resume Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_EORSM           USB_DEVICE_INTENSET_EORSM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_EORSM_Msk instead */
#define USB_DEVICE_INTENSET_UPRSM_Pos       6                                              /**< (USB_DEVICE_INTENSET) Upstream Resume Interrupt Enable Position */
#define USB_DEVICE_INTENSET_UPRSM_Msk       (_U_(0x1) << USB_DEVICE_INTENSET_UPRSM_Pos)    /**< (USB_DEVICE_INTENSET) Upstream Resume Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_UPRSM           USB_DEVICE_INTENSET_UPRSM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_UPRSM_Msk instead */
#define USB_DEVICE_INTENSET_RAMACER_Pos     7                                              /**< (USB_DEVICE_INTENSET) Ram Access Interrupt Enable Position */
#define USB_DEVICE_INTENSET_RAMACER_Msk     (_U_(0x1) << USB_DEVICE_INTENSET_RAMACER_Pos)  /**< (USB_DEVICE_INTENSET) Ram Access Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_RAMACER         USB_DEVICE_INTENSET_RAMACER_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_RAMACER_Msk instead */
#define USB_DEVICE_INTENSET_LPMNYET_Pos     8                                              /**< (USB_DEVICE_INTENSET) Link Power Management Not Yet Interrupt Enable Position */
#define USB_DEVICE_INTENSET_LPMNYET_Msk     (_U_(0x1) << USB_DEVICE_INTENSET_LPMNYET_Pos)  /**< (USB_DEVICE_INTENSET) Link Power Management Not Yet Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_LPMNYET         USB_DEVICE_INTENSET_LPMNYET_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_LPMNYET_Msk instead */
#define USB_DEVICE_INTENSET_LPMSUSP_Pos     9                                              /**< (USB_DEVICE_INTENSET) Link Power Management Suspend Interrupt Enable Position */
#define USB_DEVICE_INTENSET_LPMSUSP_Msk     (_U_(0x1) << USB_DEVICE_INTENSET_LPMSUSP_Pos)  /**< (USB_DEVICE_INTENSET) Link Power Management Suspend Interrupt Enable Mask */
#define USB_DEVICE_INTENSET_LPMSUSP         USB_DEVICE_INTENSET_LPMSUSP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTENSET_LPMSUSP_Msk instead */
#define USB_DEVICE_INTENSET_MASK            _U_(0x3FF)                                     /**< \deprecated (USB_DEVICE_INTENSET) Register MASK  (Use USB_DEVICE_INTENSET_Msk instead)  */
#define USB_DEVICE_INTENSET_Msk             _U_(0x3FF)                                     /**< (USB_DEVICE_INTENSET) Register Mask  */


/* -------- USB_HOST_INTENSET : (USB Offset: 0x18) (R/W 16) HOST Host Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :2;                        /**< bit:   0..1  Reserved */
    uint16_t HSOF:1;                    /**< bit:      2  Host Start Of Frame Interrupt Enable     */
    uint16_t RST:1;                     /**< bit:      3  Bus Reset Interrupt Enable               */
    uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up Interrupt Enable                 */
    uint16_t DNRSM:1;                   /**< bit:      5  DownStream to the Device Interrupt Enable */
    uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume fromthe device Interrupt Enable */
    uint16_t RAMACER:1;                 /**< bit:      7  Ram Access Interrupt Enable              */
    uint16_t DCONN:1;                   /**< bit:      8  Link Power Management Interrupt Enable   */
    uint16_t DDISC:1;                   /**< bit:      9  Device Disconnection Interrupt Enable    */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_INTENSET_OFFSET            (0x18)                                        /**<  (USB_HOST_INTENSET) HOST Host Interrupt Enable Set  Offset */
#define USB_HOST_INTENSET_RESETVALUE        _U_(0x00)                                     /**<  (USB_HOST_INTENSET) HOST Host Interrupt Enable Set  Reset Value */

#define USB_HOST_INTENSET_HSOF_Pos          2                                              /**< (USB_HOST_INTENSET) Host Start Of Frame Interrupt Enable Position */
#define USB_HOST_INTENSET_HSOF_Msk          (_U_(0x1) << USB_HOST_INTENSET_HSOF_Pos)       /**< (USB_HOST_INTENSET) Host Start Of Frame Interrupt Enable Mask */
#define USB_HOST_INTENSET_HSOF              USB_HOST_INTENSET_HSOF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_HSOF_Msk instead */
#define USB_HOST_INTENSET_RST_Pos           3                                              /**< (USB_HOST_INTENSET) Bus Reset Interrupt Enable Position */
#define USB_HOST_INTENSET_RST_Msk           (_U_(0x1) << USB_HOST_INTENSET_RST_Pos)        /**< (USB_HOST_INTENSET) Bus Reset Interrupt Enable Mask */
#define USB_HOST_INTENSET_RST               USB_HOST_INTENSET_RST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_RST_Msk instead */
#define USB_HOST_INTENSET_WAKEUP_Pos        4                                              /**< (USB_HOST_INTENSET) Wake Up Interrupt Enable Position */
#define USB_HOST_INTENSET_WAKEUP_Msk        (_U_(0x1) << USB_HOST_INTENSET_WAKEUP_Pos)     /**< (USB_HOST_INTENSET) Wake Up Interrupt Enable Mask */
#define USB_HOST_INTENSET_WAKEUP            USB_HOST_INTENSET_WAKEUP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_WAKEUP_Msk instead */
#define USB_HOST_INTENSET_DNRSM_Pos         5                                              /**< (USB_HOST_INTENSET) DownStream to the Device Interrupt Enable Position */
#define USB_HOST_INTENSET_DNRSM_Msk         (_U_(0x1) << USB_HOST_INTENSET_DNRSM_Pos)      /**< (USB_HOST_INTENSET) DownStream to the Device Interrupt Enable Mask */
#define USB_HOST_INTENSET_DNRSM             USB_HOST_INTENSET_DNRSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_DNRSM_Msk instead */
#define USB_HOST_INTENSET_UPRSM_Pos         6                                              /**< (USB_HOST_INTENSET) Upstream Resume fromthe device Interrupt Enable Position */
#define USB_HOST_INTENSET_UPRSM_Msk         (_U_(0x1) << USB_HOST_INTENSET_UPRSM_Pos)      /**< (USB_HOST_INTENSET) Upstream Resume fromthe device Interrupt Enable Mask */
#define USB_HOST_INTENSET_UPRSM             USB_HOST_INTENSET_UPRSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_UPRSM_Msk instead */
#define USB_HOST_INTENSET_RAMACER_Pos       7                                              /**< (USB_HOST_INTENSET) Ram Access Interrupt Enable Position */
#define USB_HOST_INTENSET_RAMACER_Msk       (_U_(0x1) << USB_HOST_INTENSET_RAMACER_Pos)    /**< (USB_HOST_INTENSET) Ram Access Interrupt Enable Mask */
#define USB_HOST_INTENSET_RAMACER           USB_HOST_INTENSET_RAMACER_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_RAMACER_Msk instead */
#define USB_HOST_INTENSET_DCONN_Pos         8                                              /**< (USB_HOST_INTENSET) Link Power Management Interrupt Enable Position */
#define USB_HOST_INTENSET_DCONN_Msk         (_U_(0x1) << USB_HOST_INTENSET_DCONN_Pos)      /**< (USB_HOST_INTENSET) Link Power Management Interrupt Enable Mask */
#define USB_HOST_INTENSET_DCONN             USB_HOST_INTENSET_DCONN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_DCONN_Msk instead */
#define USB_HOST_INTENSET_DDISC_Pos         9                                              /**< (USB_HOST_INTENSET) Device Disconnection Interrupt Enable Position */
#define USB_HOST_INTENSET_DDISC_Msk         (_U_(0x1) << USB_HOST_INTENSET_DDISC_Pos)      /**< (USB_HOST_INTENSET) Device Disconnection Interrupt Enable Mask */
#define USB_HOST_INTENSET_DDISC             USB_HOST_INTENSET_DDISC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTENSET_DDISC_Msk instead */
#define USB_HOST_INTENSET_MASK              _U_(0x3FC)                                     /**< \deprecated (USB_HOST_INTENSET) Register MASK  (Use USB_HOST_INTENSET_Msk instead)  */
#define USB_HOST_INTENSET_Msk               _U_(0x3FC)                                     /**< (USB_HOST_INTENSET) Register Mask  */


/* -------- USB_DEVICE_INTFLAG : (USB Offset: 0x1c) (R/W 16) DEVICE Device Interrupt Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint16_t SUSPEND:1;                 /**< bit:      0  Suspend                                  */
    __I uint16_t MSOF:1;                    /**< bit:      1  Micro Start of Frame in High Speed Mode  */
    __I uint16_t SOF:1;                     /**< bit:      2  Start Of Frame                           */
    __I uint16_t EORST:1;                   /**< bit:      3  End of Reset                             */
    __I uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up                                  */
    __I uint16_t EORSM:1;                   /**< bit:      5  End Of Resume                            */
    __I uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume                          */
    __I uint16_t RAMACER:1;                 /**< bit:      7  Ram Access                               */
    __I uint16_t LPMNYET:1;                 /**< bit:      8  Link Power Management Not Yet            */
    __I uint16_t LPMSUSP:1;                 /**< bit:      9  Link Power Management Suspend            */
    __I uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_INTFLAG_OFFSET           (0x1C)                                        /**<  (USB_DEVICE_INTFLAG) DEVICE Device Interrupt Flag  Offset */
#define USB_DEVICE_INTFLAG_RESETVALUE       _U_(0x00)                                     /**<  (USB_DEVICE_INTFLAG) DEVICE Device Interrupt Flag  Reset Value */

#define USB_DEVICE_INTFLAG_SUSPEND_Pos      0                                              /**< (USB_DEVICE_INTFLAG) Suspend Position */
#define USB_DEVICE_INTFLAG_SUSPEND_Msk      (_U_(0x1) << USB_DEVICE_INTFLAG_SUSPEND_Pos)   /**< (USB_DEVICE_INTFLAG) Suspend Mask */
#define USB_DEVICE_INTFLAG_SUSPEND          USB_DEVICE_INTFLAG_SUSPEND_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_SUSPEND_Msk instead */
#define USB_DEVICE_INTFLAG_MSOF_Pos         1                                              /**< (USB_DEVICE_INTFLAG) Micro Start of Frame in High Speed Mode Position */
#define USB_DEVICE_INTFLAG_MSOF_Msk         (_U_(0x1) << USB_DEVICE_INTFLAG_MSOF_Pos)      /**< (USB_DEVICE_INTFLAG) Micro Start of Frame in High Speed Mode Mask */
#define USB_DEVICE_INTFLAG_MSOF             USB_DEVICE_INTFLAG_MSOF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_MSOF_Msk instead */
#define USB_DEVICE_INTFLAG_SOF_Pos          2                                              /**< (USB_DEVICE_INTFLAG) Start Of Frame Position */
#define USB_DEVICE_INTFLAG_SOF_Msk          (_U_(0x1) << USB_DEVICE_INTFLAG_SOF_Pos)       /**< (USB_DEVICE_INTFLAG) Start Of Frame Mask */
#define USB_DEVICE_INTFLAG_SOF              USB_DEVICE_INTFLAG_SOF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_SOF_Msk instead */
#define USB_DEVICE_INTFLAG_EORST_Pos        3                                              /**< (USB_DEVICE_INTFLAG) End of Reset Position */
#define USB_DEVICE_INTFLAG_EORST_Msk        (_U_(0x1) << USB_DEVICE_INTFLAG_EORST_Pos)     /**< (USB_DEVICE_INTFLAG) End of Reset Mask */
#define USB_DEVICE_INTFLAG_EORST            USB_DEVICE_INTFLAG_EORST_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_EORST_Msk instead */
#define USB_DEVICE_INTFLAG_WAKEUP_Pos       4                                              /**< (USB_DEVICE_INTFLAG) Wake Up Position */
#define USB_DEVICE_INTFLAG_WAKEUP_Msk       (_U_(0x1) << USB_DEVICE_INTFLAG_WAKEUP_Pos)    /**< (USB_DEVICE_INTFLAG) Wake Up Mask */
#define USB_DEVICE_INTFLAG_WAKEUP           USB_DEVICE_INTFLAG_WAKEUP_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_WAKEUP_Msk instead */
#define USB_DEVICE_INTFLAG_EORSM_Pos        5                                              /**< (USB_DEVICE_INTFLAG) End Of Resume Position */
#define USB_DEVICE_INTFLAG_EORSM_Msk        (_U_(0x1) << USB_DEVICE_INTFLAG_EORSM_Pos)     /**< (USB_DEVICE_INTFLAG) End Of Resume Mask */
#define USB_DEVICE_INTFLAG_EORSM            USB_DEVICE_INTFLAG_EORSM_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_EORSM_Msk instead */
#define USB_DEVICE_INTFLAG_UPRSM_Pos        6                                              /**< (USB_DEVICE_INTFLAG) Upstream Resume Position */
#define USB_DEVICE_INTFLAG_UPRSM_Msk        (_U_(0x1) << USB_DEVICE_INTFLAG_UPRSM_Pos)     /**< (USB_DEVICE_INTFLAG) Upstream Resume Mask */
#define USB_DEVICE_INTFLAG_UPRSM            USB_DEVICE_INTFLAG_UPRSM_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_UPRSM_Msk instead */
#define USB_DEVICE_INTFLAG_RAMACER_Pos      7                                              /**< (USB_DEVICE_INTFLAG) Ram Access Position */
#define USB_DEVICE_INTFLAG_RAMACER_Msk      (_U_(0x1) << USB_DEVICE_INTFLAG_RAMACER_Pos)   /**< (USB_DEVICE_INTFLAG) Ram Access Mask */
#define USB_DEVICE_INTFLAG_RAMACER          USB_DEVICE_INTFLAG_RAMACER_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_RAMACER_Msk instead */
#define USB_DEVICE_INTFLAG_LPMNYET_Pos      8                                              /**< (USB_DEVICE_INTFLAG) Link Power Management Not Yet Position */
#define USB_DEVICE_INTFLAG_LPMNYET_Msk      (_U_(0x1) << USB_DEVICE_INTFLAG_LPMNYET_Pos)   /**< (USB_DEVICE_INTFLAG) Link Power Management Not Yet Mask */
#define USB_DEVICE_INTFLAG_LPMNYET          USB_DEVICE_INTFLAG_LPMNYET_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_LPMNYET_Msk instead */
#define USB_DEVICE_INTFLAG_LPMSUSP_Pos      9                                              /**< (USB_DEVICE_INTFLAG) Link Power Management Suspend Position */
#define USB_DEVICE_INTFLAG_LPMSUSP_Msk      (_U_(0x1) << USB_DEVICE_INTFLAG_LPMSUSP_Pos)   /**< (USB_DEVICE_INTFLAG) Link Power Management Suspend Mask */
#define USB_DEVICE_INTFLAG_LPMSUSP          USB_DEVICE_INTFLAG_LPMSUSP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_INTFLAG_LPMSUSP_Msk instead */
#define USB_DEVICE_INTFLAG_MASK             _U_(0x3FF)                                     /**< \deprecated (USB_DEVICE_INTFLAG) Register MASK  (Use USB_DEVICE_INTFLAG_Msk instead)  */
#define USB_DEVICE_INTFLAG_Msk              _U_(0x3FF)                                     /**< (USB_DEVICE_INTFLAG) Register Mask  */


/* -------- USB_HOST_INTFLAG : (USB Offset: 0x1c) (R/W 16) HOST Host Interrupt Flag -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint16_t :2;                        /**< bit:   0..1  Reserved */
    __I uint16_t HSOF:1;                    /**< bit:      2  Host Start Of Frame                      */
    __I uint16_t RST:1;                     /**< bit:      3  Bus Reset                                */
    __I uint16_t WAKEUP:1;                  /**< bit:      4  Wake Up                                  */
    __I uint16_t DNRSM:1;                   /**< bit:      5  Downstream                               */
    __I uint16_t UPRSM:1;                   /**< bit:      6  Upstream Resume from the Device          */
    __I uint16_t RAMACER:1;                 /**< bit:      7  Ram Access                               */
    __I uint16_t DCONN:1;                   /**< bit:      8  Device Connection                        */
    __I uint16_t DDISC:1;                   /**< bit:      9  Device Disconnection                     */
    __I uint16_t :6;                        /**< bit: 10..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_INTFLAG_OFFSET             (0x1C)                                        /**<  (USB_HOST_INTFLAG) HOST Host Interrupt Flag  Offset */
#define USB_HOST_INTFLAG_RESETVALUE         _U_(0x00)                                     /**<  (USB_HOST_INTFLAG) HOST Host Interrupt Flag  Reset Value */

#define USB_HOST_INTFLAG_HSOF_Pos           2                                              /**< (USB_HOST_INTFLAG) Host Start Of Frame Position */
#define USB_HOST_INTFLAG_HSOF_Msk           (_U_(0x1) << USB_HOST_INTFLAG_HSOF_Pos)        /**< (USB_HOST_INTFLAG) Host Start Of Frame Mask */
#define USB_HOST_INTFLAG_HSOF               USB_HOST_INTFLAG_HSOF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_HSOF_Msk instead */
#define USB_HOST_INTFLAG_RST_Pos            3                                              /**< (USB_HOST_INTFLAG) Bus Reset Position */
#define USB_HOST_INTFLAG_RST_Msk            (_U_(0x1) << USB_HOST_INTFLAG_RST_Pos)         /**< (USB_HOST_INTFLAG) Bus Reset Mask */
#define USB_HOST_INTFLAG_RST                USB_HOST_INTFLAG_RST_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_RST_Msk instead */
#define USB_HOST_INTFLAG_WAKEUP_Pos         4                                              /**< (USB_HOST_INTFLAG) Wake Up Position */
#define USB_HOST_INTFLAG_WAKEUP_Msk         (_U_(0x1) << USB_HOST_INTFLAG_WAKEUP_Pos)      /**< (USB_HOST_INTFLAG) Wake Up Mask */
#define USB_HOST_INTFLAG_WAKEUP             USB_HOST_INTFLAG_WAKEUP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_WAKEUP_Msk instead */
#define USB_HOST_INTFLAG_DNRSM_Pos          5                                              /**< (USB_HOST_INTFLAG) Downstream Position */
#define USB_HOST_INTFLAG_DNRSM_Msk          (_U_(0x1) << USB_HOST_INTFLAG_DNRSM_Pos)       /**< (USB_HOST_INTFLAG) Downstream Mask */
#define USB_HOST_INTFLAG_DNRSM              USB_HOST_INTFLAG_DNRSM_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_DNRSM_Msk instead */
#define USB_HOST_INTFLAG_UPRSM_Pos          6                                              /**< (USB_HOST_INTFLAG) Upstream Resume from the Device Position */
#define USB_HOST_INTFLAG_UPRSM_Msk          (_U_(0x1) << USB_HOST_INTFLAG_UPRSM_Pos)       /**< (USB_HOST_INTFLAG) Upstream Resume from the Device Mask */
#define USB_HOST_INTFLAG_UPRSM              USB_HOST_INTFLAG_UPRSM_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_UPRSM_Msk instead */
#define USB_HOST_INTFLAG_RAMACER_Pos        7                                              /**< (USB_HOST_INTFLAG) Ram Access Position */
#define USB_HOST_INTFLAG_RAMACER_Msk        (_U_(0x1) << USB_HOST_INTFLAG_RAMACER_Pos)     /**< (USB_HOST_INTFLAG) Ram Access Mask */
#define USB_HOST_INTFLAG_RAMACER            USB_HOST_INTFLAG_RAMACER_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_RAMACER_Msk instead */
#define USB_HOST_INTFLAG_DCONN_Pos          8                                              /**< (USB_HOST_INTFLAG) Device Connection Position */
#define USB_HOST_INTFLAG_DCONN_Msk          (_U_(0x1) << USB_HOST_INTFLAG_DCONN_Pos)       /**< (USB_HOST_INTFLAG) Device Connection Mask */
#define USB_HOST_INTFLAG_DCONN              USB_HOST_INTFLAG_DCONN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_DCONN_Msk instead */
#define USB_HOST_INTFLAG_DDISC_Pos          9                                              /**< (USB_HOST_INTFLAG) Device Disconnection Position */
#define USB_HOST_INTFLAG_DDISC_Msk          (_U_(0x1) << USB_HOST_INTFLAG_DDISC_Pos)       /**< (USB_HOST_INTFLAG) Device Disconnection Mask */
#define USB_HOST_INTFLAG_DDISC              USB_HOST_INTFLAG_DDISC_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_INTFLAG_DDISC_Msk instead */
#define USB_HOST_INTFLAG_MASK               _U_(0x3FC)                                     /**< \deprecated (USB_HOST_INTFLAG) Register MASK  (Use USB_HOST_INTFLAG_Msk instead)  */
#define USB_HOST_INTFLAG_Msk                _U_(0x3FC)                                     /**< (USB_HOST_INTFLAG) Register Mask  */


/* -------- USB_DEVICE_EPINTSMRY : (USB Offset: 0x20) (R/ 16) DEVICE End Point Interrupt Summary -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t EPINT0:1;                  /**< bit:      0  End Point 0 Interrupt                    */
    uint16_t EPINT1:1;                  /**< bit:      1  End Point 1 Interrupt                    */
    uint16_t EPINT2:1;                  /**< bit:      2  End Point 2 Interrupt                    */
    uint16_t EPINT3:1;                  /**< bit:      3  End Point 3 Interrupt                    */
    uint16_t EPINT4:1;                  /**< bit:      4  End Point 4 Interrupt                    */
    uint16_t EPINT5:1;                  /**< bit:      5  End Point 5 Interrupt                    */
    uint16_t EPINT6:1;                  /**< bit:      6  End Point 6 Interrupt                    */
    uint16_t EPINT7:1;                  /**< bit:      7  End Point 7 Interrupt                    */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t EPINT:8;                   /**< bit:   0..7  End Point 7 Interrupt                    */
    uint16_t :8;                        /**< bit:  8..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} USB_DEVICE_EPINTSMRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DEVICE_EPINTSMRY_OFFSET         (0x20)                                        /**<  (USB_DEVICE_EPINTSMRY) DEVICE End Point Interrupt Summary  Offset */
#define USB_DEVICE_EPINTSMRY_RESETVALUE     _U_(0x00)                                     /**<  (USB_DEVICE_EPINTSMRY) DEVICE End Point Interrupt Summary  Reset Value */

#define USB_DEVICE_EPINTSMRY_EPINT0_Pos     0                                              /**< (USB_DEVICE_EPINTSMRY) End Point 0 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT0_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT0_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 0 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT0         USB_DEVICE_EPINTSMRY_EPINT0_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT0_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT1_Pos     1                                              /**< (USB_DEVICE_EPINTSMRY) End Point 1 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT1_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT1_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 1 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT1         USB_DEVICE_EPINTSMRY_EPINT1_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT1_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT2_Pos     2                                              /**< (USB_DEVICE_EPINTSMRY) End Point 2 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT2_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT2_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 2 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT2         USB_DEVICE_EPINTSMRY_EPINT2_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT2_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT3_Pos     3                                              /**< (USB_DEVICE_EPINTSMRY) End Point 3 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT3_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT3_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 3 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT3         USB_DEVICE_EPINTSMRY_EPINT3_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT3_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT4_Pos     4                                              /**< (USB_DEVICE_EPINTSMRY) End Point 4 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT4_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT4_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 4 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT4         USB_DEVICE_EPINTSMRY_EPINT4_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT4_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT5_Pos     5                                              /**< (USB_DEVICE_EPINTSMRY) End Point 5 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT5_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT5_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 5 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT5         USB_DEVICE_EPINTSMRY_EPINT5_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT5_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT6_Pos     6                                              /**< (USB_DEVICE_EPINTSMRY) End Point 6 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT6_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT6_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 6 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT6         USB_DEVICE_EPINTSMRY_EPINT6_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT6_Msk instead */
#define USB_DEVICE_EPINTSMRY_EPINT7_Pos     7                                              /**< (USB_DEVICE_EPINTSMRY) End Point 7 Interrupt Position */
#define USB_DEVICE_EPINTSMRY_EPINT7_Msk     (_U_(0x1) << USB_DEVICE_EPINTSMRY_EPINT7_Pos)  /**< (USB_DEVICE_EPINTSMRY) End Point 7 Interrupt Mask */
#define USB_DEVICE_EPINTSMRY_EPINT7         USB_DEVICE_EPINTSMRY_EPINT7_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_DEVICE_EPINTSMRY_EPINT7_Msk instead */
#define USB_DEVICE_EPINTSMRY_MASK           _U_(0xFF)                                      /**< \deprecated (USB_DEVICE_EPINTSMRY) Register MASK  (Use USB_DEVICE_EPINTSMRY_Msk instead)  */
#define USB_DEVICE_EPINTSMRY_Msk            _U_(0xFF)                                      /**< (USB_DEVICE_EPINTSMRY) Register Mask  */

#define USB_DEVICE_EPINTSMRY_EPINT_Pos      0                                              /**< (USB_DEVICE_EPINTSMRY Position) End Point 7 Interrupt */
#define USB_DEVICE_EPINTSMRY_EPINT_Msk      (_U_(0xFF) << USB_DEVICE_EPINTSMRY_EPINT_Pos)  /**< (USB_DEVICE_EPINTSMRY Mask) EPINT */
#define USB_DEVICE_EPINTSMRY_EPINT(value)   (USB_DEVICE_EPINTSMRY_EPINT_Msk & ((value) << USB_DEVICE_EPINTSMRY_EPINT_Pos))  

/* -------- USB_HOST_PINTSMRY : (USB Offset: 0x20) (R/ 16) HOST Pipe Interrupt Summary -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t EPINT0:1;                  /**< bit:      0  Pipe 0 Interrupt                         */
    uint16_t EPINT1:1;                  /**< bit:      1  Pipe 1 Interrupt                         */
    uint16_t EPINT2:1;                  /**< bit:      2  Pipe 2 Interrupt                         */
    uint16_t EPINT3:1;                  /**< bit:      3  Pipe 3 Interrupt                         */
    uint16_t EPINT4:1;                  /**< bit:      4  Pipe 4 Interrupt                         */
    uint16_t EPINT5:1;                  /**< bit:      5  Pipe 5 Interrupt                         */
    uint16_t EPINT6:1;                  /**< bit:      6  Pipe 6 Interrupt                         */
    uint16_t EPINT7:1;                  /**< bit:      7  Pipe 7 Interrupt                         */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t EPINT:8;                   /**< bit:   0..7  Pipe 7 Interrupt                         */
    uint16_t :8;                        /**< bit:  8..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} USB_HOST_PINTSMRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_HOST_PINTSMRY_OFFSET            (0x20)                                        /**<  (USB_HOST_PINTSMRY) HOST Pipe Interrupt Summary  Offset */
#define USB_HOST_PINTSMRY_RESETVALUE        _U_(0x00)                                     /**<  (USB_HOST_PINTSMRY) HOST Pipe Interrupt Summary  Reset Value */

#define USB_HOST_PINTSMRY_EPINT0_Pos        0                                              /**< (USB_HOST_PINTSMRY) Pipe 0 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT0_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT0_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 0 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT0            USB_HOST_PINTSMRY_EPINT0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT0_Msk instead */
#define USB_HOST_PINTSMRY_EPINT1_Pos        1                                              /**< (USB_HOST_PINTSMRY) Pipe 1 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT1_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT1_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 1 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT1            USB_HOST_PINTSMRY_EPINT1_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT1_Msk instead */
#define USB_HOST_PINTSMRY_EPINT2_Pos        2                                              /**< (USB_HOST_PINTSMRY) Pipe 2 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT2_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT2_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 2 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT2            USB_HOST_PINTSMRY_EPINT2_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT2_Msk instead */
#define USB_HOST_PINTSMRY_EPINT3_Pos        3                                              /**< (USB_HOST_PINTSMRY) Pipe 3 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT3_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT3_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 3 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT3            USB_HOST_PINTSMRY_EPINT3_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT3_Msk instead */
#define USB_HOST_PINTSMRY_EPINT4_Pos        4                                              /**< (USB_HOST_PINTSMRY) Pipe 4 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT4_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT4_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 4 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT4            USB_HOST_PINTSMRY_EPINT4_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT4_Msk instead */
#define USB_HOST_PINTSMRY_EPINT5_Pos        5                                              /**< (USB_HOST_PINTSMRY) Pipe 5 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT5_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT5_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 5 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT5            USB_HOST_PINTSMRY_EPINT5_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT5_Msk instead */
#define USB_HOST_PINTSMRY_EPINT6_Pos        6                                              /**< (USB_HOST_PINTSMRY) Pipe 6 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT6_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT6_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 6 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT6            USB_HOST_PINTSMRY_EPINT6_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT6_Msk instead */
#define USB_HOST_PINTSMRY_EPINT7_Pos        7                                              /**< (USB_HOST_PINTSMRY) Pipe 7 Interrupt Position */
#define USB_HOST_PINTSMRY_EPINT7_Msk        (_U_(0x1) << USB_HOST_PINTSMRY_EPINT7_Pos)     /**< (USB_HOST_PINTSMRY) Pipe 7 Interrupt Mask */
#define USB_HOST_PINTSMRY_EPINT7            USB_HOST_PINTSMRY_EPINT7_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use USB_HOST_PINTSMRY_EPINT7_Msk instead */
#define USB_HOST_PINTSMRY_MASK              _U_(0xFF)                                      /**< \deprecated (USB_HOST_PINTSMRY) Register MASK  (Use USB_HOST_PINTSMRY_Msk instead)  */
#define USB_HOST_PINTSMRY_Msk               _U_(0xFF)                                      /**< (USB_HOST_PINTSMRY) Register Mask  */

#define USB_HOST_PINTSMRY_EPINT_Pos         0                                              /**< (USB_HOST_PINTSMRY Position) Pipe 7 Interrupt */
#define USB_HOST_PINTSMRY_EPINT_Msk         (_U_(0xFF) << USB_HOST_PINTSMRY_EPINT_Pos)     /**< (USB_HOST_PINTSMRY Mask) EPINT */
#define USB_HOST_PINTSMRY_EPINT(value)      (USB_HOST_PINTSMRY_EPINT_Msk & ((value) << USB_HOST_PINTSMRY_EPINT_Pos))  

/* -------- USB_DESCADD : (USB Offset: 0x24) (R/W 32) Descriptor Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DESCADD:32;                /**< bit:  0..31  Descriptor Address Value                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} USB_DESCADD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_DESCADD_OFFSET                  (0x24)                                        /**<  (USB_DESCADD) Descriptor Address  Offset */
#define USB_DESCADD_RESETVALUE              _U_(0x00)                                     /**<  (USB_DESCADD) Descriptor Address  Reset Value */

#define USB_DESCADD_DESCADD_Pos             0                                              /**< (USB_DESCADD) Descriptor Address Value Position */
#define USB_DESCADD_DESCADD_Msk             (_U_(0xFFFFFFFF) << USB_DESCADD_DESCADD_Pos)   /**< (USB_DESCADD) Descriptor Address Value Mask */
#define USB_DESCADD_DESCADD(value)          (USB_DESCADD_DESCADD_Msk & ((value) << USB_DESCADD_DESCADD_Pos))
#define USB_DESCADD_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (USB_DESCADD) Register MASK  (Use USB_DESCADD_Msk instead)  */
#define USB_DESCADD_Msk                     _U_(0xFFFFFFFF)                                /**< (USB_DESCADD) Register Mask  */


/* -------- USB_PADCAL : (USB Offset: 0x28) (R/W 16) USB PAD Calibration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t TRANSP:5;                  /**< bit:   0..4  USB Pad Transp calibration               */
    uint16_t :1;                        /**< bit:      5  Reserved */
    uint16_t TRANSN:5;                  /**< bit:  6..10  USB Pad Transn calibration               */
    uint16_t :1;                        /**< bit:     11  Reserved */
    uint16_t TRIM:3;                    /**< bit: 12..14  USB Pad Trim calibration                 */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} USB_PADCAL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USB_PADCAL_OFFSET                   (0x28)                                        /**<  (USB_PADCAL) USB PAD Calibration  Offset */
#define USB_PADCAL_RESETVALUE               _U_(0x00)                                     /**<  (USB_PADCAL) USB PAD Calibration  Reset Value */

#define USB_PADCAL_TRANSP_Pos               0                                              /**< (USB_PADCAL) USB Pad Transp calibration Position */
#define USB_PADCAL_TRANSP_Msk               (_U_(0x1F) << USB_PADCAL_TRANSP_Pos)           /**< (USB_PADCAL) USB Pad Transp calibration Mask */
#define USB_PADCAL_TRANSP(value)            (USB_PADCAL_TRANSP_Msk & ((value) << USB_PADCAL_TRANSP_Pos))
#define USB_PADCAL_TRANSN_Pos               6                                              /**< (USB_PADCAL) USB Pad Transn calibration Position */
#define USB_PADCAL_TRANSN_Msk               (_U_(0x1F) << USB_PADCAL_TRANSN_Pos)           /**< (USB_PADCAL) USB Pad Transn calibration Mask */
#define USB_PADCAL_TRANSN(value)            (USB_PADCAL_TRANSN_Msk & ((value) << USB_PADCAL_TRANSN_Pos))
#define USB_PADCAL_TRIM_Pos                 12                                             /**< (USB_PADCAL) USB Pad Trim calibration Position */
#define USB_PADCAL_TRIM_Msk                 (_U_(0x7) << USB_PADCAL_TRIM_Pos)              /**< (USB_PADCAL) USB Pad Trim calibration Mask */
#define USB_PADCAL_TRIM(value)              (USB_PADCAL_TRIM_Msk & ((value) << USB_PADCAL_TRIM_Pos))
#define USB_PADCAL_MASK                     _U_(0x77DF)                                    /**< \deprecated (USB_PADCAL) Register MASK  (Use USB_PADCAL_Msk instead)  */
#define USB_PADCAL_Msk                      _U_(0x77DF)                                    /**< (USB_PADCAL) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief DEVICE_DESC_BANK hardware registers */
typedef struct {  
  __IO uint32_t ADDR;           /**< (DEVICE_DESC_BANK Offset: 0x00) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer */
  __IO uint32_t PCKSIZE;        /**< (DEVICE_DESC_BANK Offset: 0x04) DEVICE_DESC_BANK Endpoint Bank, Packet Size */
  __IO uint16_t EXTREG;         /**< (DEVICE_DESC_BANK Offset: 0x08) DEVICE_DESC_BANK Endpoint Bank, Extended */
  __IO uint8_t STATUS_BK;      /**< (DEVICE_DESC_BANK Offset: 0x0A) DEVICE_DESC_BANK Enpoint Bank, Status of Bank */
  __I  uint8_t                        Reserved1[5];
} UsbDeviceDescBank;

/** \brief HOST_DESC_BANK hardware registers */
typedef struct {  
  __IO uint32_t ADDR;           /**< (HOST_DESC_BANK Offset: 0x00) HOST_DESC_BANK Host Bank, Adress of Data Buffer */
  __IO uint32_t PCKSIZE;        /**< (HOST_DESC_BANK Offset: 0x04) HOST_DESC_BANK Host Bank, Packet Size */
  __IO uint16_t EXTREG;         /**< (HOST_DESC_BANK Offset: 0x08) HOST_DESC_BANK Host Bank, Extended */
  __IO uint8_t STATUS_BK;      /**< (HOST_DESC_BANK Offset: 0x0A) HOST_DESC_BANK Host Bank, Status of Bank */
  __I  uint8_t                        Reserved1[1];
  __IO uint16_t CTRL_PIPE;      /**< (HOST_DESC_BANK Offset: 0x0C) HOST_DESC_BANK Host Bank, Host Control Pipe */
  __IO uint16_t STATUS_PIPE;    /**< (HOST_DESC_BANK Offset: 0x0E) HOST_DESC_BANK Host Bank, Host Status Pipe */
} UsbHostDescBank;

/** \brief DEVICE_ENDPOINT hardware registers */
typedef struct {  
  __IO uint8_t EPCFG;          /**< (DEVICE_ENDPOINT Offset: 0x00) DEVICE_ENDPOINT End Point Configuration */
  __I  uint8_t                        Reserved1[3];
  __O  uint8_t EPSTATUSCLR;    /**< (DEVICE_ENDPOINT Offset: 0x04) DEVICE_ENDPOINT End Point Pipe Status Clear */
  __O  uint8_t EPSTATUSSET;    /**< (DEVICE_ENDPOINT Offset: 0x05) DEVICE_ENDPOINT End Point Pipe Status Set */
  __I  uint8_t EPSTATUS;       /**< (DEVICE_ENDPOINT Offset: 0x06) DEVICE_ENDPOINT End Point Pipe Status */
  __IO uint8_t EPINTFLAG;      /**< (DEVICE_ENDPOINT Offset: 0x07) DEVICE_ENDPOINT End Point Interrupt Flag */
  __IO uint8_t EPINTENCLR;     /**< (DEVICE_ENDPOINT Offset: 0x08) DEVICE_ENDPOINT End Point Interrupt Clear Flag */
  __IO uint8_t EPINTENSET;     /**< (DEVICE_ENDPOINT Offset: 0x09) DEVICE_ENDPOINT End Point Interrupt Set Flag */
  __I  uint8_t                        Reserved2[22];
} UsbDeviceEndpoint;

/** \brief HOST_PIPE hardware registers */
typedef struct {  
  __IO uint8_t PCFG;           /**< (HOST_PIPE Offset: 0x00) HOST_PIPE End Point Configuration */
  __I  uint8_t                        Reserved1[2];
  __IO uint8_t BINTERVAL;      /**< (HOST_PIPE Offset: 0x03) HOST_PIPE Bus Access Period of Pipe */
  __O  uint8_t PSTATUSCLR;     /**< (HOST_PIPE Offset: 0x04) HOST_PIPE End Point Pipe Status Clear */
  __O  uint8_t PSTATUSSET;     /**< (HOST_PIPE Offset: 0x05) HOST_PIPE End Point Pipe Status Set */
  __I  uint8_t PSTATUS;        /**< (HOST_PIPE Offset: 0x06) HOST_PIPE End Point Pipe Status */
  __IO uint8_t PINTFLAG;       /**< (HOST_PIPE Offset: 0x07) HOST_PIPE Pipe Interrupt Flag */
  __IO uint8_t PINTENCLR;      /**< (HOST_PIPE Offset: 0x08) HOST_PIPE Pipe Interrupt Flag Clear */
  __IO uint8_t PINTENSET;      /**< (HOST_PIPE Offset: 0x09) HOST_PIPE Pipe Interrupt Flag Set */
  __I  uint8_t                        Reserved2[22];
} UsbHostPipe;

#define DEVICEDESCBANK_NUMBER 2
/** \brief USB_DESCRIPTOR hardware registers */
typedef struct {  /* Universal Serial Bus */
       UsbDeviceDescBank DeviceDescBank[DEVICEDESCBANK_NUMBER]; /**< Offset: 0x00  */
} UsbDescriptorDevice;

#define HOSTDESCBANK_NUMBER 2
/** \brief USB_DESCRIPTOR hardware registers */
typedef struct {  /* Universal Serial Bus */
       UsbHostDescBank HostDescBank[HOSTDESCBANK_NUMBER]; /**< Offset: 0x00  */
} UsbDescriptorHost;

/** \brief USB_DESCRIPTOR hardware registers */
typedef union {  /* Universal Serial Bus */
       UsbDescriptorDevice            DEVICE;         /**< USB is Device */
       UsbDescriptorHost              HOST;           /**< USB is Host */
} UsbDescriptor;

#define DEVICEENDPOINT_NUMBER 8
/** \brief USB hardware registers */
typedef struct {  /* Universal Serial Bus */
  __IO uint8_t CTRLA;          /**< (USB Offset: 0x00) Control A */
  __I  uint8_t                        Reserved1[1];
  __I  uint8_t SYNCBUSY;       /**< (USB Offset: 0x02) Synchronization Busy */
  __IO uint8_t QOSCTRL;        /**< (USB Offset: 0x03) USB Quality Of Service */
  __I  uint8_t                        Reserved2[4];
  __IO uint16_t CTRLB;          /**< (USB Offset: 0x08) DEVICE Control B */
  __IO uint8_t DADD;           /**< (USB Offset: 0x0A) DEVICE Device Address */
  __I  uint8_t                        Reserved3[1];
  __I  uint8_t STATUS;         /**< (USB Offset: 0x0C) DEVICE Status */
  __I  uint8_t FSMSTATUS;      /**< (USB Offset: 0x0D) Finite State Machine Status */
  __I  uint8_t                        Reserved4[2];
  __I  uint16_t FNUM;           /**< (USB Offset: 0x10) DEVICE Device Frame Number */
  __I  uint8_t                        Reserved5[2];
  __IO uint16_t INTENCLR;       /**< (USB Offset: 0x14) DEVICE Device Interrupt Enable Clear */
  __I  uint8_t                        Reserved6[2];
  __IO uint16_t INTENSET;       /**< (USB Offset: 0x18) DEVICE Device Interrupt Enable Set */
  __I  uint8_t                        Reserved7[2];
  __IO uint16_t INTFLAG;        /**< (USB Offset: 0x1C) DEVICE Device Interrupt Flag */
  __I  uint8_t                        Reserved8[2];
  __I  uint16_t EPINTSMRY;      /**< (USB Offset: 0x20) DEVICE End Point Interrupt Summary */
  __I  uint8_t                        Reserved9[2];
  __IO uint32_t DESCADD;        /**< (USB Offset: 0x24) Descriptor Address */
  __IO uint16_t PADCAL;         /**< (USB Offset: 0x28) USB PAD Calibration */
  __I  uint8_t                        Reserved10[214];
       UsbDeviceEndpoint DeviceEndpoint[DEVICEENDPOINT_NUMBER]; /**< Offset: 0x100  */
} UsbDevice;

#define HOSTPIPE_NUMBER 8
/** \brief USB hardware registers */
typedef struct {  /* Universal Serial Bus */
  __IO uint8_t CTRLA;          /**< (USB Offset: 0x00) Control A */
  __I  uint8_t                        Reserved1[1];
  __I  uint8_t SYNCBUSY;       /**< (USB Offset: 0x02) Synchronization Busy */
  __IO uint8_t QOSCTRL;        /**< (USB Offset: 0x03) USB Quality Of Service */
  __I  uint8_t                        Reserved2[4];
  __IO uint16_t CTRLB;          /**< (USB Offset: 0x08) HOST Control B */
  __IO uint8_t HSOFC;          /**< (USB Offset: 0x0A) HOST Host Start Of Frame Control */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t STATUS;         /**< (USB Offset: 0x0C) HOST Status */
  __I  uint8_t FSMSTATUS;      /**< (USB Offset: 0x0D) Finite State Machine Status */
  __I  uint8_t                        Reserved4[2];
  __IO uint16_t FNUM;           /**< (USB Offset: 0x10) HOST Host Frame Number */
  __I  uint8_t FLENHIGH;       /**< (USB Offset: 0x12) HOST Host Frame Length */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t INTENCLR;       /**< (USB Offset: 0x14) HOST Host Interrupt Enable Clear */
  __I  uint8_t                        Reserved6[2];
  __IO uint16_t INTENSET;       /**< (USB Offset: 0x18) HOST Host Interrupt Enable Set */
  __I  uint8_t                        Reserved7[2];
  __IO uint16_t INTFLAG;        /**< (USB Offset: 0x1C) HOST Host Interrupt Flag */
  __I  uint8_t                        Reserved8[2];
  __I  uint16_t PINTSMRY;       /**< (USB Offset: 0x20) HOST Pipe Interrupt Summary */
  __I  uint8_t                        Reserved9[2];
  __IO uint32_t DESCADD;        /**< (USB Offset: 0x24) Descriptor Address */
  __IO uint16_t PADCAL;         /**< (USB Offset: 0x28) USB PAD Calibration */
  __I  uint8_t                        Reserved10[214];
       UsbHostPipe HostPipe[HOSTPIPE_NUMBER]; /**< Offset: 0x100  */
} UsbHost;

/** \brief USB hardware registers */
typedef union {  /* Universal Serial Bus */
       UsbDevice                      DEVICE;         /**< USB is Device */
       UsbHost                        HOST;           /**< USB is Host */
} Usb;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief DEVICE_DESC_BANK hardware registers */
typedef struct {  
  __IO USB_DEVICE_ADDR_Type           ADDR;           /**< Offset: 0x00 (R/W  32) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer */
  __IO USB_DEVICE_PCKSIZE_Type        PCKSIZE;        /**< Offset: 0x04 (R/W  32) DEVICE_DESC_BANK Endpoint Bank, Packet Size */
  __IO USB_DEVICE_EXTREG_Type         EXTREG;         /**< Offset: 0x08 (R/W  16) DEVICE_DESC_BANK Endpoint Bank, Extended */
  __IO USB_DEVICE_STATUS_BK_Type      STATUS_BK;      /**< Offset: 0x0A (R/W   8) DEVICE_DESC_BANK Enpoint Bank, Status of Bank */
  __I  uint8_t                        Reserved1[5];
} UsbDeviceDescBank;

/** \brief HOST_DESC_BANK hardware registers */
typedef struct {  
  __IO USB_HOST_ADDR_Type             ADDR;           /**< Offset: 0x00 (R/W  32) HOST_DESC_BANK Host Bank, Adress of Data Buffer */
  __IO USB_HOST_PCKSIZE_Type          PCKSIZE;        /**< Offset: 0x04 (R/W  32) HOST_DESC_BANK Host Bank, Packet Size */
  __IO USB_HOST_EXTREG_Type           EXTREG;         /**< Offset: 0x08 (R/W  16) HOST_DESC_BANK Host Bank, Extended */
  __IO USB_HOST_STATUS_BK_Type        STATUS_BK;      /**< Offset: 0x0A (R/W   8) HOST_DESC_BANK Host Bank, Status of Bank */
  __I  uint8_t                        Reserved1[1];
  __IO USB_HOST_CTRL_PIPE_Type        CTRL_PIPE;      /**< Offset: 0x0C (R/W  16) HOST_DESC_BANK Host Bank, Host Control Pipe */
  __IO USB_HOST_STATUS_PIPE_Type      STATUS_PIPE;    /**< Offset: 0x0E (R/W  16) HOST_DESC_BANK Host Bank, Host Status Pipe */
} UsbHostDescBank;

/** \brief DEVICE_ENDPOINT hardware registers */
typedef struct {  
  __IO USB_DEVICE_EPCFG_Type          EPCFG;          /**< Offset: 0x00 (R/W   8) DEVICE_ENDPOINT End Point Configuration */
  __I  uint8_t                        Reserved1[3];
  __O  USB_DEVICE_EPSTATUSCLR_Type    EPSTATUSCLR;    /**< Offset: 0x04 ( /W   8) DEVICE_ENDPOINT End Point Pipe Status Clear */
  __O  USB_DEVICE_EPSTATUSSET_Type    EPSTATUSSET;    /**< Offset: 0x05 ( /W   8) DEVICE_ENDPOINT End Point Pipe Status Set */
  __I  USB_DEVICE_EPSTATUS_Type       EPSTATUS;       /**< Offset: 0x06 (R/    8) DEVICE_ENDPOINT End Point Pipe Status */
  __IO USB_DEVICE_EPINTFLAG_Type      EPINTFLAG;      /**< Offset: 0x07 (R/W   8) DEVICE_ENDPOINT End Point Interrupt Flag */
  __IO USB_DEVICE_EPINTENCLR_Type     EPINTENCLR;     /**< Offset: 0x08 (R/W   8) DEVICE_ENDPOINT End Point Interrupt Clear Flag */
  __IO USB_DEVICE_EPINTENSET_Type     EPINTENSET;     /**< Offset: 0x09 (R/W   8) DEVICE_ENDPOINT End Point Interrupt Set Flag */
  __I  uint8_t                        Reserved2[22];
} UsbDeviceEndpoint;

/** \brief HOST_PIPE hardware registers */
typedef struct {  
  __IO USB_HOST_PCFG_Type             PCFG;           /**< Offset: 0x00 (R/W   8) HOST_PIPE End Point Configuration */
  __I  uint8_t                        Reserved1[2];
  __IO USB_HOST_BINTERVAL_Type        BINTERVAL;      /**< Offset: 0x03 (R/W   8) HOST_PIPE Bus Access Period of Pipe */
  __O  USB_HOST_PSTATUSCLR_Type       PSTATUSCLR;     /**< Offset: 0x04 ( /W   8) HOST_PIPE End Point Pipe Status Clear */
  __O  USB_HOST_PSTATUSSET_Type       PSTATUSSET;     /**< Offset: 0x05 ( /W   8) HOST_PIPE End Point Pipe Status Set */
  __I  USB_HOST_PSTATUS_Type          PSTATUS;        /**< Offset: 0x06 (R/    8) HOST_PIPE End Point Pipe Status */
  __IO USB_HOST_PINTFLAG_Type         PINTFLAG;       /**< Offset: 0x07 (R/W   8) HOST_PIPE Pipe Interrupt Flag */
  __IO USB_HOST_PINTENCLR_Type        PINTENCLR;      /**< Offset: 0x08 (R/W   8) HOST_PIPE Pipe Interrupt Flag Clear */
  __IO USB_HOST_PINTENSET_Type        PINTENSET;      /**< Offset: 0x09 (R/W   8) HOST_PIPE Pipe Interrupt Flag Set */
  __I  uint8_t                        Reserved2[22];
} UsbHostPipe;

/** \brief USB_DESCRIPTOR hardware registers */
typedef struct {  /* Universal Serial Bus */
       UsbDeviceDescBank              DeviceDescBank[2]; /**< Offset: 0x00  */
} UsbDescriptorDevice;

/** \brief USB_DESCRIPTOR hardware registers */
typedef struct {  /* Universal Serial Bus */
       UsbHostDescBank                HostDescBank[2]; /**< Offset: 0x00  */
} UsbDescriptorHost;

/** \brief USB_DESCRIPTOR hardware registers */
typedef union {  /* Universal Serial Bus */
       UsbDescriptorDevice            DEVICE;         /**< USB is Device */
       UsbDescriptorHost              HOST;           /**< USB is Host */
} UsbDescriptor;

/** \brief USB hardware registers */
typedef struct {  /* Universal Serial Bus */
  __IO USB_CTRLA_Type                 CTRLA;          /**< Offset: 0x00 (R/W   8) Control A */
  __I  uint8_t                        Reserved1[1];
  __I  USB_SYNCBUSY_Type              SYNCBUSY;       /**< Offset: 0x02 (R/    8) Synchronization Busy */
  __IO USB_QOSCTRL_Type               QOSCTRL;        /**< Offset: 0x03 (R/W   8) USB Quality Of Service */
  __I  uint8_t                        Reserved2[4];
  __IO USB_DEVICE_CTRLB_Type          CTRLB;          /**< Offset: 0x08 (R/W  16) DEVICE Control B */
  __IO USB_DEVICE_DADD_Type           DADD;           /**< Offset: 0x0A (R/W   8) DEVICE Device Address */
  __I  uint8_t                        Reserved3[1];
  __I  USB_DEVICE_STATUS_Type         STATUS;         /**< Offset: 0x0C (R/    8) DEVICE Status */
  __I  USB_FSMSTATUS_Type             FSMSTATUS;      /**< Offset: 0x0D (R/    8) Finite State Machine Status */
  __I  uint8_t                        Reserved4[2];
  __I  USB_DEVICE_FNUM_Type           FNUM;           /**< Offset: 0x10 (R/   16) DEVICE Device Frame Number */
  __I  uint8_t                        Reserved5[2];
  __IO USB_DEVICE_INTENCLR_Type       INTENCLR;       /**< Offset: 0x14 (R/W  16) DEVICE Device Interrupt Enable Clear */
  __I  uint8_t                        Reserved6[2];
  __IO USB_DEVICE_INTENSET_Type       INTENSET;       /**< Offset: 0x18 (R/W  16) DEVICE Device Interrupt Enable Set */
  __I  uint8_t                        Reserved7[2];
  __IO USB_DEVICE_INTFLAG_Type        INTFLAG;        /**< Offset: 0x1C (R/W  16) DEVICE Device Interrupt Flag */
  __I  uint8_t                        Reserved8[2];
  __I  USB_DEVICE_EPINTSMRY_Type      EPINTSMRY;      /**< Offset: 0x20 (R/   16) DEVICE End Point Interrupt Summary */
  __I  uint8_t                        Reserved9[2];
  __IO USB_DESCADD_Type               DESCADD;        /**< Offset: 0x24 (R/W  32) Descriptor Address */
  __IO USB_PADCAL_Type                PADCAL;         /**< Offset: 0x28 (R/W  16) USB PAD Calibration */
  __I  uint8_t                        Reserved10[214];
       UsbDeviceEndpoint              DeviceEndpoint[8]; /**< Offset: 0x100  */
} UsbDevice;

/** \brief USB hardware registers */
typedef struct {  /* Universal Serial Bus */
  __IO USB_CTRLA_Type                 CTRLA;          /**< Offset: 0x00 (R/W   8) Control A */
  __I  uint8_t                        Reserved1[1];
  __I  USB_SYNCBUSY_Type              SYNCBUSY;       /**< Offset: 0x02 (R/    8) Synchronization Busy */
  __IO USB_QOSCTRL_Type               QOSCTRL;        /**< Offset: 0x03 (R/W   8) USB Quality Of Service */
  __I  uint8_t                        Reserved2[4];
  __IO USB_HOST_CTRLB_Type            CTRLB;          /**< Offset: 0x08 (R/W  16) HOST Control B */
  __IO USB_HOST_HSOFC_Type            HSOFC;          /**< Offset: 0x0A (R/W   8) HOST Host Start Of Frame Control */
  __I  uint8_t                        Reserved3[1];
  __IO USB_HOST_STATUS_Type           STATUS;         /**< Offset: 0x0C (R/W   8) HOST Status */
  __I  USB_FSMSTATUS_Type             FSMSTATUS;      /**< Offset: 0x0D (R/    8) Finite State Machine Status */
  __I  uint8_t                        Reserved4[2];
  __IO USB_HOST_FNUM_Type             FNUM;           /**< Offset: 0x10 (R/W  16) HOST Host Frame Number */
  __I  USB_HOST_FLENHIGH_Type         FLENHIGH;       /**< Offset: 0x12 (R/    8) HOST Host Frame Length */
  __I  uint8_t                        Reserved5[1];
  __IO USB_HOST_INTENCLR_Type         INTENCLR;       /**< Offset: 0x14 (R/W  16) HOST Host Interrupt Enable Clear */
  __I  uint8_t                        Reserved6[2];
  __IO USB_HOST_INTENSET_Type         INTENSET;       /**< Offset: 0x18 (R/W  16) HOST Host Interrupt Enable Set */
  __I  uint8_t                        Reserved7[2];
  __IO USB_HOST_INTFLAG_Type          INTFLAG;        /**< Offset: 0x1C (R/W  16) HOST Host Interrupt Flag */
  __I  uint8_t                        Reserved8[2];
  __I  USB_HOST_PINTSMRY_Type         PINTSMRY;       /**< Offset: 0x20 (R/   16) HOST Pipe Interrupt Summary */
  __I  uint8_t                        Reserved9[2];
  __IO USB_DESCADD_Type               DESCADD;        /**< Offset: 0x24 (R/W  32) Descriptor Address */
  __IO USB_PADCAL_Type                PADCAL;         /**< Offset: 0x28 (R/W  16) USB PAD Calibration */
  __I  uint8_t                        Reserved10[214];
       UsbHostPipe                    HostPipe[8];    /**< Offset: 0x100  */
} UsbHost;

/** \brief USB hardware registers */
typedef union {  /* Universal Serial Bus */
       UsbDevice                      DEVICE;         /**< USB is Device */
       UsbHost                        HOST;           /**< USB is Host */
} Usb;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** \brief USB_DESCRIPTOR memory section attribute */
#if defined (__GNUC__) || defined (__CC_ARM)
 #define SECTION_USB_DESCRIPTOR       __attribute__ ((section(".hsram")))
#elif defined (__ICCARM__)
 #define SECTION_USB_DESCRIPTOR       @".hsram"
#else
 #ifndef SECTION_USB_DESCRIPTOR
  #error SECTION_USB_DESCRIPTOR must be defined for compiler to use memory section .hsram
 #endif
#endif

/** @}  b'end of Universal Serial Bus' */

#endif /* _WLR089_USB_COMPONENT_H_ */

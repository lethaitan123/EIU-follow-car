/**
 * \brief Instance description for USB
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
#ifndef _WLR089_USB_INSTANCE_H_
#define _WLR089_USB_INSTANCE_H_

/* ========== Register definition for USB peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_USB_DEVICE_EPCFG0   (0x41000100) /**< (USB) DEVICE_ENDPOINT End Point Configuration 0 */
#define REG_USB_DEVICE_EPSTATUSCLR0 (0x41000104) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 0 */
#define REG_USB_DEVICE_EPSTATUSSET0 (0x41000105) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 0 */
#define REG_USB_DEVICE_EPSTATUS0 (0x41000106) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 0 */
#define REG_USB_DEVICE_EPINTFLAG0 (0x41000107) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 0 */
#define REG_USB_DEVICE_EPINTENCLR0 (0x41000108) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 0 */
#define REG_USB_DEVICE_EPINTENSET0 (0x41000109) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 0 */
#define REG_USB_DEVICE_EPCFG1   (0x41000120) /**< (USB) DEVICE_ENDPOINT End Point Configuration 1 */
#define REG_USB_DEVICE_EPSTATUSCLR1 (0x41000124) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 1 */
#define REG_USB_DEVICE_EPSTATUSSET1 (0x41000125) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 1 */
#define REG_USB_DEVICE_EPSTATUS1 (0x41000126) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 1 */
#define REG_USB_DEVICE_EPINTFLAG1 (0x41000127) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 1 */
#define REG_USB_DEVICE_EPINTENCLR1 (0x41000128) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 1 */
#define REG_USB_DEVICE_EPINTENSET1 (0x41000129) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 1 */
#define REG_USB_DEVICE_EPCFG2   (0x41000140) /**< (USB) DEVICE_ENDPOINT End Point Configuration 2 */
#define REG_USB_DEVICE_EPSTATUSCLR2 (0x41000144) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 2 */
#define REG_USB_DEVICE_EPSTATUSSET2 (0x41000145) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 2 */
#define REG_USB_DEVICE_EPSTATUS2 (0x41000146) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 2 */
#define REG_USB_DEVICE_EPINTFLAG2 (0x41000147) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 2 */
#define REG_USB_DEVICE_EPINTENCLR2 (0x41000148) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 2 */
#define REG_USB_DEVICE_EPINTENSET2 (0x41000149) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 2 */
#define REG_USB_DEVICE_EPCFG3   (0x41000160) /**< (USB) DEVICE_ENDPOINT End Point Configuration 3 */
#define REG_USB_DEVICE_EPSTATUSCLR3 (0x41000164) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 3 */
#define REG_USB_DEVICE_EPSTATUSSET3 (0x41000165) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 3 */
#define REG_USB_DEVICE_EPSTATUS3 (0x41000166) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 3 */
#define REG_USB_DEVICE_EPINTFLAG3 (0x41000167) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 3 */
#define REG_USB_DEVICE_EPINTENCLR3 (0x41000168) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 3 */
#define REG_USB_DEVICE_EPINTENSET3 (0x41000169) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 3 */
#define REG_USB_DEVICE_EPCFG4   (0x41000180) /**< (USB) DEVICE_ENDPOINT End Point Configuration 4 */
#define REG_USB_DEVICE_EPSTATUSCLR4 (0x41000184) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 4 */
#define REG_USB_DEVICE_EPSTATUSSET4 (0x41000185) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 4 */
#define REG_USB_DEVICE_EPSTATUS4 (0x41000186) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 4 */
#define REG_USB_DEVICE_EPINTFLAG4 (0x41000187) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 4 */
#define REG_USB_DEVICE_EPINTENCLR4 (0x41000188) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 4 */
#define REG_USB_DEVICE_EPINTENSET4 (0x41000189) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 4 */
#define REG_USB_DEVICE_EPCFG5   (0x410001A0) /**< (USB) DEVICE_ENDPOINT End Point Configuration 5 */
#define REG_USB_DEVICE_EPSTATUSCLR5 (0x410001A4) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 5 */
#define REG_USB_DEVICE_EPSTATUSSET5 (0x410001A5) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 5 */
#define REG_USB_DEVICE_EPSTATUS5 (0x410001A6) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 5 */
#define REG_USB_DEVICE_EPINTFLAG5 (0x410001A7) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 5 */
#define REG_USB_DEVICE_EPINTENCLR5 (0x410001A8) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 5 */
#define REG_USB_DEVICE_EPINTENSET5 (0x410001A9) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 5 */
#define REG_USB_DEVICE_EPCFG6   (0x410001C0) /**< (USB) DEVICE_ENDPOINT End Point Configuration 6 */
#define REG_USB_DEVICE_EPSTATUSCLR6 (0x410001C4) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 6 */
#define REG_USB_DEVICE_EPSTATUSSET6 (0x410001C5) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 6 */
#define REG_USB_DEVICE_EPSTATUS6 (0x410001C6) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 6 */
#define REG_USB_DEVICE_EPINTFLAG6 (0x410001C7) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 6 */
#define REG_USB_DEVICE_EPINTENCLR6 (0x410001C8) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 6 */
#define REG_USB_DEVICE_EPINTENSET6 (0x410001C9) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 6 */
#define REG_USB_DEVICE_EPCFG7   (0x410001E0) /**< (USB) DEVICE_ENDPOINT End Point Configuration 7 */
#define REG_USB_DEVICE_EPSTATUSCLR7 (0x410001E4) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 7 */
#define REG_USB_DEVICE_EPSTATUSSET7 (0x410001E5) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 7 */
#define REG_USB_DEVICE_EPSTATUS7 (0x410001E6) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 7 */
#define REG_USB_DEVICE_EPINTFLAG7 (0x410001E7) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 7 */
#define REG_USB_DEVICE_EPINTENCLR7 (0x410001E8) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 7 */
#define REG_USB_DEVICE_EPINTENSET7 (0x410001E9) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 7 */
#define REG_USB_CTRLA           (0x41000000) /**< (USB) Control A */
#define REG_USB_SYNCBUSY        (0x41000002) /**< (USB) Synchronization Busy */
#define REG_USB_QOSCTRL         (0x41000003) /**< (USB) USB Quality Of Service */
#define REG_USB_FSMSTATUS       (0x4100000D) /**< (USB) Finite State Machine Status */
#define REG_USB_DESCADD         (0x41000024) /**< (USB) Descriptor Address */
#define REG_USB_PADCAL          (0x41000028) /**< (USB) USB PAD Calibration */
#define REG_USB_DEVICE_CTRLB    (0x41000008) /**< (USB) DEVICE Control B */
#define REG_USB_DEVICE_DADD     (0x4100000A) /**< (USB) DEVICE Device Address */
#define REG_USB_DEVICE_STATUS   (0x4100000C) /**< (USB) DEVICE Status */
#define REG_USB_DEVICE_FNUM     (0x41000010) /**< (USB) DEVICE Device Frame Number */
#define REG_USB_DEVICE_INTENCLR (0x41000014) /**< (USB) DEVICE Device Interrupt Enable Clear */
#define REG_USB_DEVICE_INTENSET (0x41000018) /**< (USB) DEVICE Device Interrupt Enable Set */
#define REG_USB_DEVICE_INTFLAG  (0x4100001C) /**< (USB) DEVICE Device Interrupt Flag */
#define REG_USB_DEVICE_EPINTSMRY (0x41000020) /**< (USB) DEVICE End Point Interrupt Summary */
#define REG_USB_HOST_PCFG0      (0x41000100) /**< (USB) HOST_PIPE End Point Configuration 0 */
#define REG_USB_HOST_BINTERVAL0 (0x41000103) /**< (USB) HOST_PIPE Bus Access Period of Pipe 0 */
#define REG_USB_HOST_PSTATUSCLR0 (0x41000104) /**< (USB) HOST_PIPE End Point Pipe Status Clear 0 */
#define REG_USB_HOST_PSTATUSSET0 (0x41000105) /**< (USB) HOST_PIPE End Point Pipe Status Set 0 */
#define REG_USB_HOST_PSTATUS0   (0x41000106) /**< (USB) HOST_PIPE End Point Pipe Status 0 */
#define REG_USB_HOST_PINTFLAG0  (0x41000107) /**< (USB) HOST_PIPE Pipe Interrupt Flag 0 */
#define REG_USB_HOST_PINTENCLR0 (0x41000108) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 0 */
#define REG_USB_HOST_PINTENSET0 (0x41000109) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 0 */
#define REG_USB_HOST_PCFG1      (0x41000120) /**< (USB) HOST_PIPE End Point Configuration 1 */
#define REG_USB_HOST_BINTERVAL1 (0x41000123) /**< (USB) HOST_PIPE Bus Access Period of Pipe 1 */
#define REG_USB_HOST_PSTATUSCLR1 (0x41000124) /**< (USB) HOST_PIPE End Point Pipe Status Clear 1 */
#define REG_USB_HOST_PSTATUSSET1 (0x41000125) /**< (USB) HOST_PIPE End Point Pipe Status Set 1 */
#define REG_USB_HOST_PSTATUS1   (0x41000126) /**< (USB) HOST_PIPE End Point Pipe Status 1 */
#define REG_USB_HOST_PINTFLAG1  (0x41000127) /**< (USB) HOST_PIPE Pipe Interrupt Flag 1 */
#define REG_USB_HOST_PINTENCLR1 (0x41000128) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 1 */
#define REG_USB_HOST_PINTENSET1 (0x41000129) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 1 */
#define REG_USB_HOST_PCFG2      (0x41000140) /**< (USB) HOST_PIPE End Point Configuration 2 */
#define REG_USB_HOST_BINTERVAL2 (0x41000143) /**< (USB) HOST_PIPE Bus Access Period of Pipe 2 */
#define REG_USB_HOST_PSTATUSCLR2 (0x41000144) /**< (USB) HOST_PIPE End Point Pipe Status Clear 2 */
#define REG_USB_HOST_PSTATUSSET2 (0x41000145) /**< (USB) HOST_PIPE End Point Pipe Status Set 2 */
#define REG_USB_HOST_PSTATUS2   (0x41000146) /**< (USB) HOST_PIPE End Point Pipe Status 2 */
#define REG_USB_HOST_PINTFLAG2  (0x41000147) /**< (USB) HOST_PIPE Pipe Interrupt Flag 2 */
#define REG_USB_HOST_PINTENCLR2 (0x41000148) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 2 */
#define REG_USB_HOST_PINTENSET2 (0x41000149) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 2 */
#define REG_USB_HOST_PCFG3      (0x41000160) /**< (USB) HOST_PIPE End Point Configuration 3 */
#define REG_USB_HOST_BINTERVAL3 (0x41000163) /**< (USB) HOST_PIPE Bus Access Period of Pipe 3 */
#define REG_USB_HOST_PSTATUSCLR3 (0x41000164) /**< (USB) HOST_PIPE End Point Pipe Status Clear 3 */
#define REG_USB_HOST_PSTATUSSET3 (0x41000165) /**< (USB) HOST_PIPE End Point Pipe Status Set 3 */
#define REG_USB_HOST_PSTATUS3   (0x41000166) /**< (USB) HOST_PIPE End Point Pipe Status 3 */
#define REG_USB_HOST_PINTFLAG3  (0x41000167) /**< (USB) HOST_PIPE Pipe Interrupt Flag 3 */
#define REG_USB_HOST_PINTENCLR3 (0x41000168) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 3 */
#define REG_USB_HOST_PINTENSET3 (0x41000169) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 3 */
#define REG_USB_HOST_PCFG4      (0x41000180) /**< (USB) HOST_PIPE End Point Configuration 4 */
#define REG_USB_HOST_BINTERVAL4 (0x41000183) /**< (USB) HOST_PIPE Bus Access Period of Pipe 4 */
#define REG_USB_HOST_PSTATUSCLR4 (0x41000184) /**< (USB) HOST_PIPE End Point Pipe Status Clear 4 */
#define REG_USB_HOST_PSTATUSSET4 (0x41000185) /**< (USB) HOST_PIPE End Point Pipe Status Set 4 */
#define REG_USB_HOST_PSTATUS4   (0x41000186) /**< (USB) HOST_PIPE End Point Pipe Status 4 */
#define REG_USB_HOST_PINTFLAG4  (0x41000187) /**< (USB) HOST_PIPE Pipe Interrupt Flag 4 */
#define REG_USB_HOST_PINTENCLR4 (0x41000188) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 4 */
#define REG_USB_HOST_PINTENSET4 (0x41000189) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 4 */
#define REG_USB_HOST_PCFG5      (0x410001A0) /**< (USB) HOST_PIPE End Point Configuration 5 */
#define REG_USB_HOST_BINTERVAL5 (0x410001A3) /**< (USB) HOST_PIPE Bus Access Period of Pipe 5 */
#define REG_USB_HOST_PSTATUSCLR5 (0x410001A4) /**< (USB) HOST_PIPE End Point Pipe Status Clear 5 */
#define REG_USB_HOST_PSTATUSSET5 (0x410001A5) /**< (USB) HOST_PIPE End Point Pipe Status Set 5 */
#define REG_USB_HOST_PSTATUS5   (0x410001A6) /**< (USB) HOST_PIPE End Point Pipe Status 5 */
#define REG_USB_HOST_PINTFLAG5  (0x410001A7) /**< (USB) HOST_PIPE Pipe Interrupt Flag 5 */
#define REG_USB_HOST_PINTENCLR5 (0x410001A8) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 5 */
#define REG_USB_HOST_PINTENSET5 (0x410001A9) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 5 */
#define REG_USB_HOST_PCFG6      (0x410001C0) /**< (USB) HOST_PIPE End Point Configuration 6 */
#define REG_USB_HOST_BINTERVAL6 (0x410001C3) /**< (USB) HOST_PIPE Bus Access Period of Pipe 6 */
#define REG_USB_HOST_PSTATUSCLR6 (0x410001C4) /**< (USB) HOST_PIPE End Point Pipe Status Clear 6 */
#define REG_USB_HOST_PSTATUSSET6 (0x410001C5) /**< (USB) HOST_PIPE End Point Pipe Status Set 6 */
#define REG_USB_HOST_PSTATUS6   (0x410001C6) /**< (USB) HOST_PIPE End Point Pipe Status 6 */
#define REG_USB_HOST_PINTFLAG6  (0x410001C7) /**< (USB) HOST_PIPE Pipe Interrupt Flag 6 */
#define REG_USB_HOST_PINTENCLR6 (0x410001C8) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 6 */
#define REG_USB_HOST_PINTENSET6 (0x410001C9) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 6 */
#define REG_USB_HOST_PCFG7      (0x410001E0) /**< (USB) HOST_PIPE End Point Configuration 7 */
#define REG_USB_HOST_BINTERVAL7 (0x410001E3) /**< (USB) HOST_PIPE Bus Access Period of Pipe 7 */
#define REG_USB_HOST_PSTATUSCLR7 (0x410001E4) /**< (USB) HOST_PIPE End Point Pipe Status Clear 7 */
#define REG_USB_HOST_PSTATUSSET7 (0x410001E5) /**< (USB) HOST_PIPE End Point Pipe Status Set 7 */
#define REG_USB_HOST_PSTATUS7   (0x410001E6) /**< (USB) HOST_PIPE End Point Pipe Status 7 */
#define REG_USB_HOST_PINTFLAG7  (0x410001E7) /**< (USB) HOST_PIPE Pipe Interrupt Flag 7 */
#define REG_USB_HOST_PINTENCLR7 (0x410001E8) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 7 */
#define REG_USB_HOST_PINTENSET7 (0x410001E9) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 7 */
#define REG_USB_HOST_CTRLB      (0x41000008) /**< (USB) HOST Control B */
#define REG_USB_HOST_HSOFC      (0x4100000A) /**< (USB) HOST Host Start Of Frame Control */
#define REG_USB_HOST_STATUS     (0x4100000C) /**< (USB) HOST Status */
#define REG_USB_HOST_FNUM       (0x41000010) /**< (USB) HOST Host Frame Number */
#define REG_USB_HOST_FLENHIGH   (0x41000012) /**< (USB) HOST Host Frame Length */
#define REG_USB_HOST_INTENCLR   (0x41000014) /**< (USB) HOST Host Interrupt Enable Clear */
#define REG_USB_HOST_INTENSET   (0x41000018) /**< (USB) HOST Host Interrupt Enable Set */
#define REG_USB_HOST_INTFLAG    (0x4100001C) /**< (USB) HOST Host Interrupt Flag */
#define REG_USB_HOST_PINTSMRY   (0x41000020) /**< (USB) HOST Pipe Interrupt Summary */

#else

#define REG_USB_DEVICE_EPCFG0   (*(__IO uint8_t*)0x41000100U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 0 */
#define REG_USB_DEVICE_EPSTATUSCLR0 (*(__O  uint8_t*)0x41000104U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 0 */
#define REG_USB_DEVICE_EPSTATUSSET0 (*(__O  uint8_t*)0x41000105U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 0 */
#define REG_USB_DEVICE_EPSTATUS0 (*(__I  uint8_t*)0x41000106U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 0 */
#define REG_USB_DEVICE_EPINTFLAG0 (*(__IO uint8_t*)0x41000107U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 0 */
#define REG_USB_DEVICE_EPINTENCLR0 (*(__IO uint8_t*)0x41000108U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 0 */
#define REG_USB_DEVICE_EPINTENSET0 (*(__IO uint8_t*)0x41000109U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 0 */
#define REG_USB_DEVICE_EPCFG1   (*(__IO uint8_t*)0x41000120U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 1 */
#define REG_USB_DEVICE_EPSTATUSCLR1 (*(__O  uint8_t*)0x41000124U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 1 */
#define REG_USB_DEVICE_EPSTATUSSET1 (*(__O  uint8_t*)0x41000125U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 1 */
#define REG_USB_DEVICE_EPSTATUS1 (*(__I  uint8_t*)0x41000126U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 1 */
#define REG_USB_DEVICE_EPINTFLAG1 (*(__IO uint8_t*)0x41000127U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 1 */
#define REG_USB_DEVICE_EPINTENCLR1 (*(__IO uint8_t*)0x41000128U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 1 */
#define REG_USB_DEVICE_EPINTENSET1 (*(__IO uint8_t*)0x41000129U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 1 */
#define REG_USB_DEVICE_EPCFG2   (*(__IO uint8_t*)0x41000140U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 2 */
#define REG_USB_DEVICE_EPSTATUSCLR2 (*(__O  uint8_t*)0x41000144U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 2 */
#define REG_USB_DEVICE_EPSTATUSSET2 (*(__O  uint8_t*)0x41000145U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 2 */
#define REG_USB_DEVICE_EPSTATUS2 (*(__I  uint8_t*)0x41000146U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 2 */
#define REG_USB_DEVICE_EPINTFLAG2 (*(__IO uint8_t*)0x41000147U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 2 */
#define REG_USB_DEVICE_EPINTENCLR2 (*(__IO uint8_t*)0x41000148U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 2 */
#define REG_USB_DEVICE_EPINTENSET2 (*(__IO uint8_t*)0x41000149U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 2 */
#define REG_USB_DEVICE_EPCFG3   (*(__IO uint8_t*)0x41000160U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 3 */
#define REG_USB_DEVICE_EPSTATUSCLR3 (*(__O  uint8_t*)0x41000164U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 3 */
#define REG_USB_DEVICE_EPSTATUSSET3 (*(__O  uint8_t*)0x41000165U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 3 */
#define REG_USB_DEVICE_EPSTATUS3 (*(__I  uint8_t*)0x41000166U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 3 */
#define REG_USB_DEVICE_EPINTFLAG3 (*(__IO uint8_t*)0x41000167U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 3 */
#define REG_USB_DEVICE_EPINTENCLR3 (*(__IO uint8_t*)0x41000168U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 3 */
#define REG_USB_DEVICE_EPINTENSET3 (*(__IO uint8_t*)0x41000169U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 3 */
#define REG_USB_DEVICE_EPCFG4   (*(__IO uint8_t*)0x41000180U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 4 */
#define REG_USB_DEVICE_EPSTATUSCLR4 (*(__O  uint8_t*)0x41000184U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 4 */
#define REG_USB_DEVICE_EPSTATUSSET4 (*(__O  uint8_t*)0x41000185U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 4 */
#define REG_USB_DEVICE_EPSTATUS4 (*(__I  uint8_t*)0x41000186U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 4 */
#define REG_USB_DEVICE_EPINTFLAG4 (*(__IO uint8_t*)0x41000187U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 4 */
#define REG_USB_DEVICE_EPINTENCLR4 (*(__IO uint8_t*)0x41000188U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 4 */
#define REG_USB_DEVICE_EPINTENSET4 (*(__IO uint8_t*)0x41000189U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 4 */
#define REG_USB_DEVICE_EPCFG5   (*(__IO uint8_t*)0x410001A0U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 5 */
#define REG_USB_DEVICE_EPSTATUSCLR5 (*(__O  uint8_t*)0x410001A4U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 5 */
#define REG_USB_DEVICE_EPSTATUSSET5 (*(__O  uint8_t*)0x410001A5U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 5 */
#define REG_USB_DEVICE_EPSTATUS5 (*(__I  uint8_t*)0x410001A6U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 5 */
#define REG_USB_DEVICE_EPINTFLAG5 (*(__IO uint8_t*)0x410001A7U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 5 */
#define REG_USB_DEVICE_EPINTENCLR5 (*(__IO uint8_t*)0x410001A8U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 5 */
#define REG_USB_DEVICE_EPINTENSET5 (*(__IO uint8_t*)0x410001A9U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 5 */
#define REG_USB_DEVICE_EPCFG6   (*(__IO uint8_t*)0x410001C0U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 6 */
#define REG_USB_DEVICE_EPSTATUSCLR6 (*(__O  uint8_t*)0x410001C4U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 6 */
#define REG_USB_DEVICE_EPSTATUSSET6 (*(__O  uint8_t*)0x410001C5U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 6 */
#define REG_USB_DEVICE_EPSTATUS6 (*(__I  uint8_t*)0x410001C6U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 6 */
#define REG_USB_DEVICE_EPINTFLAG6 (*(__IO uint8_t*)0x410001C7U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 6 */
#define REG_USB_DEVICE_EPINTENCLR6 (*(__IO uint8_t*)0x410001C8U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 6 */
#define REG_USB_DEVICE_EPINTENSET6 (*(__IO uint8_t*)0x410001C9U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 6 */
#define REG_USB_DEVICE_EPCFG7   (*(__IO uint8_t*)0x410001E0U) /**< (USB) DEVICE_ENDPOINT End Point Configuration 7 */
#define REG_USB_DEVICE_EPSTATUSCLR7 (*(__O  uint8_t*)0x410001E4U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Clear 7 */
#define REG_USB_DEVICE_EPSTATUSSET7 (*(__O  uint8_t*)0x410001E5U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status Set 7 */
#define REG_USB_DEVICE_EPSTATUS7 (*(__I  uint8_t*)0x410001E6U) /**< (USB) DEVICE_ENDPOINT End Point Pipe Status 7 */
#define REG_USB_DEVICE_EPINTFLAG7 (*(__IO uint8_t*)0x410001E7U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Flag 7 */
#define REG_USB_DEVICE_EPINTENCLR7 (*(__IO uint8_t*)0x410001E8U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Clear Flag 7 */
#define REG_USB_DEVICE_EPINTENSET7 (*(__IO uint8_t*)0x410001E9U) /**< (USB) DEVICE_ENDPOINT End Point Interrupt Set Flag 7 */
#define REG_USB_CTRLA           (*(__IO uint8_t*)0x41000000U) /**< (USB) Control A */
#define REG_USB_SYNCBUSY        (*(__I  uint8_t*)0x41000002U) /**< (USB) Synchronization Busy */
#define REG_USB_QOSCTRL         (*(__IO uint8_t*)0x41000003U) /**< (USB) USB Quality Of Service */
#define REG_USB_FSMSTATUS       (*(__I  uint8_t*)0x4100000DU) /**< (USB) Finite State Machine Status */
#define REG_USB_DESCADD         (*(__IO uint32_t*)0x41000024U) /**< (USB) Descriptor Address */
#define REG_USB_PADCAL          (*(__IO uint16_t*)0x41000028U) /**< (USB) USB PAD Calibration */
#define REG_USB_DEVICE_CTRLB    (*(__IO uint16_t*)0x41000008U) /**< (USB) DEVICE Control B */
#define REG_USB_DEVICE_DADD     (*(__IO uint8_t*)0x4100000AU) /**< (USB) DEVICE Device Address */
#define REG_USB_DEVICE_STATUS   (*(__I  uint8_t*)0x4100000CU) /**< (USB) DEVICE Status */
#define REG_USB_DEVICE_FNUM     (*(__I  uint16_t*)0x41000010U) /**< (USB) DEVICE Device Frame Number */
#define REG_USB_DEVICE_INTENCLR (*(__IO uint16_t*)0x41000014U) /**< (USB) DEVICE Device Interrupt Enable Clear */
#define REG_USB_DEVICE_INTENSET (*(__IO uint16_t*)0x41000018U) /**< (USB) DEVICE Device Interrupt Enable Set */
#define REG_USB_DEVICE_INTFLAG  (*(__IO uint16_t*)0x4100001CU) /**< (USB) DEVICE Device Interrupt Flag */
#define REG_USB_DEVICE_EPINTSMRY (*(__I  uint16_t*)0x41000020U) /**< (USB) DEVICE End Point Interrupt Summary */
#define REG_USB_HOST_PCFG0      (*(__IO uint8_t*)0x41000100U) /**< (USB) HOST_PIPE End Point Configuration 0 */
#define REG_USB_HOST_BINTERVAL0 (*(__IO uint8_t*)0x41000103U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 0 */
#define REG_USB_HOST_PSTATUSCLR0 (*(__O  uint8_t*)0x41000104U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 0 */
#define REG_USB_HOST_PSTATUSSET0 (*(__O  uint8_t*)0x41000105U) /**< (USB) HOST_PIPE End Point Pipe Status Set 0 */
#define REG_USB_HOST_PSTATUS0   (*(__I  uint8_t*)0x41000106U) /**< (USB) HOST_PIPE End Point Pipe Status 0 */
#define REG_USB_HOST_PINTFLAG0  (*(__IO uint8_t*)0x41000107U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 0 */
#define REG_USB_HOST_PINTENCLR0 (*(__IO uint8_t*)0x41000108U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 0 */
#define REG_USB_HOST_PINTENSET0 (*(__IO uint8_t*)0x41000109U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 0 */
#define REG_USB_HOST_PCFG1      (*(__IO uint8_t*)0x41000120U) /**< (USB) HOST_PIPE End Point Configuration 1 */
#define REG_USB_HOST_BINTERVAL1 (*(__IO uint8_t*)0x41000123U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 1 */
#define REG_USB_HOST_PSTATUSCLR1 (*(__O  uint8_t*)0x41000124U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 1 */
#define REG_USB_HOST_PSTATUSSET1 (*(__O  uint8_t*)0x41000125U) /**< (USB) HOST_PIPE End Point Pipe Status Set 1 */
#define REG_USB_HOST_PSTATUS1   (*(__I  uint8_t*)0x41000126U) /**< (USB) HOST_PIPE End Point Pipe Status 1 */
#define REG_USB_HOST_PINTFLAG1  (*(__IO uint8_t*)0x41000127U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 1 */
#define REG_USB_HOST_PINTENCLR1 (*(__IO uint8_t*)0x41000128U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 1 */
#define REG_USB_HOST_PINTENSET1 (*(__IO uint8_t*)0x41000129U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 1 */
#define REG_USB_HOST_PCFG2      (*(__IO uint8_t*)0x41000140U) /**< (USB) HOST_PIPE End Point Configuration 2 */
#define REG_USB_HOST_BINTERVAL2 (*(__IO uint8_t*)0x41000143U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 2 */
#define REG_USB_HOST_PSTATUSCLR2 (*(__O  uint8_t*)0x41000144U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 2 */
#define REG_USB_HOST_PSTATUSSET2 (*(__O  uint8_t*)0x41000145U) /**< (USB) HOST_PIPE End Point Pipe Status Set 2 */
#define REG_USB_HOST_PSTATUS2   (*(__I  uint8_t*)0x41000146U) /**< (USB) HOST_PIPE End Point Pipe Status 2 */
#define REG_USB_HOST_PINTFLAG2  (*(__IO uint8_t*)0x41000147U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 2 */
#define REG_USB_HOST_PINTENCLR2 (*(__IO uint8_t*)0x41000148U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 2 */
#define REG_USB_HOST_PINTENSET2 (*(__IO uint8_t*)0x41000149U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 2 */
#define REG_USB_HOST_PCFG3      (*(__IO uint8_t*)0x41000160U) /**< (USB) HOST_PIPE End Point Configuration 3 */
#define REG_USB_HOST_BINTERVAL3 (*(__IO uint8_t*)0x41000163U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 3 */
#define REG_USB_HOST_PSTATUSCLR3 (*(__O  uint8_t*)0x41000164U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 3 */
#define REG_USB_HOST_PSTATUSSET3 (*(__O  uint8_t*)0x41000165U) /**< (USB) HOST_PIPE End Point Pipe Status Set 3 */
#define REG_USB_HOST_PSTATUS3   (*(__I  uint8_t*)0x41000166U) /**< (USB) HOST_PIPE End Point Pipe Status 3 */
#define REG_USB_HOST_PINTFLAG3  (*(__IO uint8_t*)0x41000167U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 3 */
#define REG_USB_HOST_PINTENCLR3 (*(__IO uint8_t*)0x41000168U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 3 */
#define REG_USB_HOST_PINTENSET3 (*(__IO uint8_t*)0x41000169U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 3 */
#define REG_USB_HOST_PCFG4      (*(__IO uint8_t*)0x41000180U) /**< (USB) HOST_PIPE End Point Configuration 4 */
#define REG_USB_HOST_BINTERVAL4 (*(__IO uint8_t*)0x41000183U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 4 */
#define REG_USB_HOST_PSTATUSCLR4 (*(__O  uint8_t*)0x41000184U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 4 */
#define REG_USB_HOST_PSTATUSSET4 (*(__O  uint8_t*)0x41000185U) /**< (USB) HOST_PIPE End Point Pipe Status Set 4 */
#define REG_USB_HOST_PSTATUS4   (*(__I  uint8_t*)0x41000186U) /**< (USB) HOST_PIPE End Point Pipe Status 4 */
#define REG_USB_HOST_PINTFLAG4  (*(__IO uint8_t*)0x41000187U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 4 */
#define REG_USB_HOST_PINTENCLR4 (*(__IO uint8_t*)0x41000188U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 4 */
#define REG_USB_HOST_PINTENSET4 (*(__IO uint8_t*)0x41000189U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 4 */
#define REG_USB_HOST_PCFG5      (*(__IO uint8_t*)0x410001A0U) /**< (USB) HOST_PIPE End Point Configuration 5 */
#define REG_USB_HOST_BINTERVAL5 (*(__IO uint8_t*)0x410001A3U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 5 */
#define REG_USB_HOST_PSTATUSCLR5 (*(__O  uint8_t*)0x410001A4U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 5 */
#define REG_USB_HOST_PSTATUSSET5 (*(__O  uint8_t*)0x410001A5U) /**< (USB) HOST_PIPE End Point Pipe Status Set 5 */
#define REG_USB_HOST_PSTATUS5   (*(__I  uint8_t*)0x410001A6U) /**< (USB) HOST_PIPE End Point Pipe Status 5 */
#define REG_USB_HOST_PINTFLAG5  (*(__IO uint8_t*)0x410001A7U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 5 */
#define REG_USB_HOST_PINTENCLR5 (*(__IO uint8_t*)0x410001A8U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 5 */
#define REG_USB_HOST_PINTENSET5 (*(__IO uint8_t*)0x410001A9U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 5 */
#define REG_USB_HOST_PCFG6      (*(__IO uint8_t*)0x410001C0U) /**< (USB) HOST_PIPE End Point Configuration 6 */
#define REG_USB_HOST_BINTERVAL6 (*(__IO uint8_t*)0x410001C3U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 6 */
#define REG_USB_HOST_PSTATUSCLR6 (*(__O  uint8_t*)0x410001C4U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 6 */
#define REG_USB_HOST_PSTATUSSET6 (*(__O  uint8_t*)0x410001C5U) /**< (USB) HOST_PIPE End Point Pipe Status Set 6 */
#define REG_USB_HOST_PSTATUS6   (*(__I  uint8_t*)0x410001C6U) /**< (USB) HOST_PIPE End Point Pipe Status 6 */
#define REG_USB_HOST_PINTFLAG6  (*(__IO uint8_t*)0x410001C7U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 6 */
#define REG_USB_HOST_PINTENCLR6 (*(__IO uint8_t*)0x410001C8U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 6 */
#define REG_USB_HOST_PINTENSET6 (*(__IO uint8_t*)0x410001C9U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 6 */
#define REG_USB_HOST_PCFG7      (*(__IO uint8_t*)0x410001E0U) /**< (USB) HOST_PIPE End Point Configuration 7 */
#define REG_USB_HOST_BINTERVAL7 (*(__IO uint8_t*)0x410001E3U) /**< (USB) HOST_PIPE Bus Access Period of Pipe 7 */
#define REG_USB_HOST_PSTATUSCLR7 (*(__O  uint8_t*)0x410001E4U) /**< (USB) HOST_PIPE End Point Pipe Status Clear 7 */
#define REG_USB_HOST_PSTATUSSET7 (*(__O  uint8_t*)0x410001E5U) /**< (USB) HOST_PIPE End Point Pipe Status Set 7 */
#define REG_USB_HOST_PSTATUS7   (*(__I  uint8_t*)0x410001E6U) /**< (USB) HOST_PIPE End Point Pipe Status 7 */
#define REG_USB_HOST_PINTFLAG7  (*(__IO uint8_t*)0x410001E7U) /**< (USB) HOST_PIPE Pipe Interrupt Flag 7 */
#define REG_USB_HOST_PINTENCLR7 (*(__IO uint8_t*)0x410001E8U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Clear 7 */
#define REG_USB_HOST_PINTENSET7 (*(__IO uint8_t*)0x410001E9U) /**< (USB) HOST_PIPE Pipe Interrupt Flag Set 7 */
#define REG_USB_HOST_CTRLB      (*(__IO uint16_t*)0x41000008U) /**< (USB) HOST Control B */
#define REG_USB_HOST_HSOFC      (*(__IO uint8_t*)0x4100000AU) /**< (USB) HOST Host Start Of Frame Control */
#define REG_USB_HOST_STATUS     (*(__IO uint8_t*)0x4100000CU) /**< (USB) HOST Status */
#define REG_USB_HOST_FNUM       (*(__IO uint16_t*)0x41000010U) /**< (USB) HOST Host Frame Number */
#define REG_USB_HOST_FLENHIGH   (*(__I  uint8_t*)0x41000012U) /**< (USB) HOST Host Frame Length */
#define REG_USB_HOST_INTENCLR   (*(__IO uint16_t*)0x41000014U) /**< (USB) HOST Host Interrupt Enable Clear */
#define REG_USB_HOST_INTENSET   (*(__IO uint16_t*)0x41000018U) /**< (USB) HOST Host Interrupt Enable Set */
#define REG_USB_HOST_INTFLAG    (*(__IO uint16_t*)0x4100001CU) /**< (USB) HOST Host Interrupt Flag */
#define REG_USB_HOST_PINTSMRY   (*(__I  uint16_t*)0x41000020U) /**< (USB) HOST Pipe Interrupt Summary */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for USB peripheral ========== */
#define USB_EPT_NBR                              8          /* Number of USB end points (obsolete) */
#define USB_EPT_NUM                              8          /* Number of USB end points */
#define USB_GCLK_ID                              4          /* Index of Generic Clock */
#define USB_PIPE_NUM                             8          /* Number of USB pipes */
#define USB_INSTANCE_ID                          32         

#endif /* _WLR089_USB_INSTANCE_ */

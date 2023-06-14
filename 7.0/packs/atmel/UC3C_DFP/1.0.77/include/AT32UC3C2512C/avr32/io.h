/*This file is prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief Standard part header file.
 *
 * This file includes the appropriate part header file according to the defined
 * MCU.
 *
 * - Compiler:           IAR EWAVR32 and GNU GCC for AVR32
 * - Supported devices:  All AVR32 devices can be used.
 * - AppNote:
 *
 * \author              Microchip Technology Inc.: http://www.microchip.com
 *                       Support: http://www.microchip.com/support
 *
 ******************************************************************************/

/* Copyright (c) 2020 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _AVR32_IO_H_
#define _AVR32_IO_H_


#if (defined (__AVR32_UC3C1256C__) || defined (__AT32UC3C1256C__))
#  include <avr32/uc3c1256c.h>
#elif (defined (__AVR32_UC3C2128C__) || defined (__AT32UC3C2128C__))
#  include <avr32/uc3c2128c.h>
#elif (defined (__AVR32_UC3C0256C__) || defined (__AT32UC3C0256C__))
#  include <avr32/uc3c0256c.h>
#elif (defined (__AVR32_UC3C2256C__) || defined (__AT32UC3C2256C__))
#  include <avr32/uc3c2256c.h>
#elif (defined (__AVR32_UC3C0128C__) || defined (__AT32UC3C0128C__))
#  include <avr32/uc3c0128c.h>
#elif (defined (__AVR32_UC3C2512C__) || defined (__AT32UC3C2512C__))
#  include <avr32/uc3c2512c.h>
#elif (defined (__AVR32_UC3C1128C__) || defined (__AT32UC3C1128C__))
#  include <avr32/uc3c1128c.h>
#elif (defined (__AVR32_UC3C164C__) || defined (__AT32UC3C164C__))
#  include <avr32/uc3c164c.h>
#elif (defined (__AVR32_UC3C0512C__) || defined (__AT32UC3C0512C__))
#  include <avr32/uc3c0512c.h>
#elif (defined (__AVR32_UC3C1512C__) || defined (__AT32UC3C1512C__))
#  include <avr32/uc3c1512c.h>
#elif (defined (__AVR32_UC3C064C__) || defined (__AT32UC3C064C__))
#  include <avr32/uc3c064c.h>
#else
#  error No known AVR32 part defined
#endif

#endif /* _AVR32_IO_H_ */ 

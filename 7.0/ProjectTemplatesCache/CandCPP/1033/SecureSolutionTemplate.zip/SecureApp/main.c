/**
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "sam.h"

/* TZ_START_NS: Start address of non-secure application */
#define TZ_START_NS 0x00008000
 	 	
/* typedef for non-secure callback functions */
typedef void (*funcptr_void) (void) __attribute__((cmse_nonsecure_call));
	
/*
	The Secure Application:
	* Sets the non-secure main stack (MSP_NS) 
	* Gets the non-secure reset handler
	* Jumps to the non-secure software application
*/

/* Secure main() */
int main(void)
{
	funcptr_void NonSecure_ResetHandler;
  	
	/* Initialize the SAM system */
    SystemInit();

	/* Set non-secure main stack (MSP_NS) */
	__TZ_set_MSP_NS(*((uint32_t *)(TZ_START_NS)));
  
	/* Get non-secure reset handler */
	NonSecure_ResetHandler = (funcptr_void)(*((uint32_t *)((TZ_START_NS) + 4U)));
  
	/* Start non-secure state software application */
	NonSecure_ResetHandler();
  
    /* Replace with your SECURE application code */
    while (1) 
    {
		__NOP();
    }
}

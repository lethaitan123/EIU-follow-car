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
#include "veneer.h"

volatile int val1, val2;

/* Non-Secure main() */
int main(void)
{
	/* Call Non-Secure Callable Flash (APPLICATION region) function 1 */
	val1 = secure_func1 (1);
	
	/* Call Non-Secure Callable Flash (APPLICATION region) function 2 */
	val2 = secure_func2 (7);
	
	while (1);
}
// Copyright 2019 Shift Cryptosecurity AG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _HARDFAULT_H_
#define _HARDFAULT_H_

#ifdef TESTING
#include <stdio.h>
void Dummy_Handler(void);

void HardFault_Handler(void) __attribute__((weak));
#else
#include "drivers/driver_init.h"
#endif

// Abort is for manual calls to stop execution, providing a message for
// debugging.
__attribute__((noreturn)) void Abort(const char* msg);

#endif
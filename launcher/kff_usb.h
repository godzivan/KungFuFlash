/*
 * Copyright (c) 2019-2020 Kim Jørgensen
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef KFF_USB_H
#define KFF_USB_H

#include <stdint.h>
#include "ef3usb.h"

uint8_t kff_send_command(uint8_t cmd);
uint8_t kff_send_ext_command(uint8_t cmd, uint8_t data);
uint8_t kff_send_data_command(uint8_t cmd, uint8_t *data, uint8_t size);

void kff_receive_data(void* data, uint16_t size);

#endif
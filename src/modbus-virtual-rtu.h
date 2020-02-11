/*
 * Copyright © 2020 Pascal JEAN <epsilonrt@gmail.com>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#pragma once

#include "modbus.h"

MODBUS_BEGIN_DECLS

MODBUS_API modbus_t * modbus_new_virtual_rtu(void);
MODBUS_API int modbus_virtual_rtu_write (modbus_t *ctx, const uint8_t * adu, int length);
MODBUS_API int modbus_virtual_rtu_read (modbus_t *ctx, uint8_t * adu, int size);

MODBUS_END_DECLS

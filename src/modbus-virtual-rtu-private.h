/*
 * Copyright © 2020 Pascal JEAN <epsilonrt@gmail.com>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#pragma once

#include "modbus-virtual-rtu.h"
#include "modbus-rtu-private.h"
#include "lfqueue.h"

typedef struct _modbus_virtual_rtu_adu_t {
  int length;
  uint8_t data[MODBUS_RTU_MAX_ADU_LENGTH];  
} modbus_virtual_rtu_adu_t;

typedef struct _modbus_virtual_rtu_t {
    lfqueue_t tx_queue;
    lfqueue_t rx_queue;
    modbus_virtual_rtu_adu_t * rx_adu;
    int rx_adu_index;
    /* To handle many slaves on the same link */
    int confirmation_to_ignore;
} modbus_virtual_rtu_t;

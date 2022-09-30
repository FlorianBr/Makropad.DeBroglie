// Copyright 2022 Florian Brandner (@Florian Brandner)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00,  k10,  k20,  k30,  k40,\
    k01,  k11,  k21,  k31,  k41,\
    k02,  k12,  k22,  k32,  k42,\
    k03,  k13,  k23,  k33,  k43,\
    k04,  k14,  k24,  k34,  k44 \
) { \
    { k00, k10, k20, k30, k40 }, \
    { k01, k11, k21, k31, k41 }, \
    { k02, k12, k22, k32, k42 }, \
    { k03, k13, k23, k33, k43 }, \
    { k04, k14, k24, k34, k44 } \
}

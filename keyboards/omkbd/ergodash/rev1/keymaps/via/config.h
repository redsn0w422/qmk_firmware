/* Copyright 2021 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

/*
 * VIA's definition loader (@the-via/reader transform.js) hard-rejects the
 * shared QMK placeholder VID 0xFEED, so this keymap reports a distinct one.
 * 0x4F6D = "Om" (Omkbd). Bootloader flashing is unaffected (Caterina has its
 * own USB IDs). PID is left as the stock 0x6060.
 */
#undef VENDOR_ID
#define VENDOR_ID 0x4F6D

/*
 * Allow VIA's "Test Matrix" to read raw switch state. Off by default in QMK
 * because it exposes keypresses to the host; fine for a personal build, and
 * needed here to map the thumb cluster to matrix positions.
 */
#define VIA_INSECURE

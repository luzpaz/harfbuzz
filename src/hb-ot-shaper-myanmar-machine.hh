
#line 1 "hb-ot-shaper-myanmar-machine.rl"
/*
 * Copyright © 2011,2012  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPER_MYANMAR_MACHINE_HH
#define HB_OT_SHAPER_MYANMAR_MACHINE_HH

#include "hb.hh"

#include "hb-ot-layout.hh"
#include "hb-ot-shaper-indic.hh"

/* buffer var allocations */
#define myanmar_category() indic_category() /* myanmar_category_t */
#define myanmar_position() indic_position() /* myanmar_position_t */

using myanmar_category_t = ot_category_t;
using myanmar_position_t = ot_position_t;

#define M_Cat(Cat) myanmar_syllable_machine_ex_##Cat

enum myanmar_syllable_type_t {
  myanmar_consonant_syllable,
  myanmar_punctuation_cluster,
  myanmar_broken_cluster,
  myanmar_non_myanmar_cluster,
};


#line 55 "hb-ot-shaper-myanmar-machine.hh"
#define myanmar_syllable_machine_ex_A 9u
#define myanmar_syllable_machine_ex_As 32u
#define myanmar_syllable_machine_ex_C 1u
#define myanmar_syllable_machine_ex_CS 18u
#define myanmar_syllable_machine_ex_D 33u
#define myanmar_syllable_machine_ex_D0 34u
#define myanmar_syllable_machine_ex_DB 3u
#define myanmar_syllable_machine_ex_DOTTEDCIRCLE 11u
#define myanmar_syllable_machine_ex_GB 10u
#define myanmar_syllable_machine_ex_H 4u
#define myanmar_syllable_machine_ex_IV 2u
#define myanmar_syllable_machine_ex_MH 35u
#define myanmar_syllable_machine_ex_ML 42u
#define myanmar_syllable_machine_ex_MR 36u
#define myanmar_syllable_machine_ex_MW 37u
#define myanmar_syllable_machine_ex_MY 38u
#define myanmar_syllable_machine_ex_P 41u
#define myanmar_syllable_machine_ex_PT 39u
#define myanmar_syllable_machine_ex_Ra 15u
#define myanmar_syllable_machine_ex_SM 8u
#define myanmar_syllable_machine_ex_VAbv 20u
#define myanmar_syllable_machine_ex_VBlw 21u
#define myanmar_syllable_machine_ex_VPre 22u
#define myanmar_syllable_machine_ex_VPst 23u
#define myanmar_syllable_machine_ex_VS 40u
#define myanmar_syllable_machine_ex_ZWJ 6u
#define myanmar_syllable_machine_ex_ZWNJ 5u


#line 85 "hb-ot-shaper-myanmar-machine.hh"
static const unsigned char _myanmar_syllable_machine_trans_keys[] = {
	1u, 42u, 3u, 42u, 5u, 39u, 5u, 8u, 3u, 42u, 3u, 39u, 3u, 39u, 5u, 39u, 
	5u, 39u, 3u, 39u, 3u, 39u, 3u, 42u, 5u, 39u, 1u, 15u, 3u, 39u, 3u, 39u, 
	3u, 40u, 3u, 39u, 3u, 42u, 3u, 42u, 3u, 39u, 3u, 42u, 3u, 42u, 3u, 42u, 
	3u, 42u, 3u, 42u, 5u, 39u, 5u, 8u, 3u, 42u, 3u, 39u, 3u, 39u, 5u, 39u, 
	5u, 39u, 3u, 39u, 3u, 39u, 3u, 42u, 5u, 39u, 1u, 15u, 3u, 42u, 3u, 39u, 
	3u, 39u, 3u, 40u, 3u, 39u, 3u, 42u, 3u, 42u, 3u, 39u, 3u, 42u, 3u, 42u, 
	3u, 42u, 3u, 42u, 3u, 42u, 3u, 42u, 3u, 42u, 1u, 42u, 1u, 33u, 8u, 8u, 
	0
};

static const char _myanmar_syllable_machine_key_spans[] = {
	42, 40, 35, 4, 40, 37, 37, 35, 
	35, 37, 37, 40, 35, 15, 37, 37, 
	38, 37, 40, 40, 37, 40, 40, 40, 
	40, 40, 35, 4, 40, 37, 37, 35, 
	35, 37, 37, 40, 35, 15, 40, 37, 
	37, 38, 37, 40, 40, 37, 40, 40, 
	40, 40, 40, 40, 40, 42, 33, 1
};

static const short _myanmar_syllable_machine_index_offsets[] = {
	0, 43, 84, 120, 125, 166, 204, 242, 
	278, 314, 352, 390, 431, 467, 483, 521, 
	559, 598, 636, 677, 718, 756, 797, 838, 
	879, 920, 961, 997, 1002, 1043, 1081, 1119, 
	1155, 1191, 1229, 1267, 1308, 1344, 1360, 1401, 
	1439, 1477, 1516, 1554, 1595, 1636, 1674, 1715, 
	1756, 1797, 1838, 1879, 1920, 1961, 2004, 2038
};

static const char _myanmar_syllable_machine_indicies[] = {
	1, 1, 2, 3, 4, 4, 0, 5, 
	6, 1, 1, 0, 0, 0, 7, 0, 
	0, 8, 0, 9, 10, 11, 12, 0, 
	0, 0, 0, 0, 0, 0, 0, 13, 
	1, 0, 14, 15, 16, 17, 18, 19, 
	20, 21, 0, 23, 24, 25, 25, 22, 
	26, 27, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 28, 29, 30, 31, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	32, 22, 22, 33, 34, 35, 36, 37, 
	38, 22, 39, 22, 25, 25, 22, 26, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 31, 22, 
	22, 22, 22, 22, 22, 22, 22, 40, 
	22, 22, 22, 22, 22, 22, 37, 22, 
	25, 25, 22, 26, 22, 23, 22, 25, 
	25, 22, 26, 27, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 41, 22, 
	22, 31, 22, 22, 22, 22, 22, 22, 
	22, 22, 42, 22, 22, 43, 22, 22, 
	22, 37, 22, 22, 42, 22, 23, 22, 
	25, 25, 22, 26, 27, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 31, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 37, 22, 44, 22, 25, 25, 
	22, 26, 37, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 45, 22, 22, 22, 22, 22, 22, 
	37, 22, 25, 25, 22, 26, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 45, 22, 22, 
	22, 22, 22, 22, 37, 22, 25, 25, 
	22, 26, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	37, 22, 23, 22, 25, 25, 22, 26, 
	27, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 41, 22, 22, 31, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 37, 22, 
	23, 22, 25, 25, 22, 26, 27, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 41, 22, 22, 31, 22, 22, 22, 
	22, 22, 22, 22, 22, 42, 22, 22, 
	22, 22, 22, 22, 37, 22, 23, 22, 
	25, 25, 22, 26, 27, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 41, 
	22, 22, 31, 22, 22, 22, 22, 22, 
	22, 22, 22, 42, 22, 22, 22, 22, 
	22, 22, 37, 22, 22, 42, 22, 25, 
	25, 22, 26, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 31, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 37, 22, 1, 1, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 1, 22, 23, 22, 25, 25, 22, 
	26, 27, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 28, 29, 22, 31, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 37, 
	22, 23, 22, 25, 25, 22, 26, 27, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 29, 22, 31, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 37, 22, 23, 
	22, 25, 25, 22, 26, 27, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	28, 29, 30, 31, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 37, 46, 22, 23, 22, 
	25, 25, 22, 26, 27, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 28, 
	29, 30, 31, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 37, 22, 23, 22, 25, 25, 
	22, 26, 27, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 28, 29, 30, 
	31, 22, 22, 22, 22, 22, 22, 22, 
	22, 32, 22, 22, 33, 34, 35, 36, 
	37, 22, 22, 39, 22, 23, 22, 25, 
	25, 22, 26, 27, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 28, 29, 
	30, 31, 22, 22, 22, 22, 22, 22, 
	22, 22, 46, 22, 22, 22, 22, 22, 
	22, 37, 22, 22, 39, 22, 23, 22, 
	25, 25, 22, 26, 27, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 28, 
	29, 30, 31, 22, 22, 22, 22, 22, 
	22, 22, 22, 46, 22, 22, 22, 22, 
	22, 22, 37, 22, 23, 22, 25, 25, 
	22, 26, 27, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 28, 29, 30, 
	31, 22, 22, 22, 22, 22, 22, 22, 
	22, 22, 22, 22, 33, 22, 35, 22, 
	37, 22, 22, 39, 22, 23, 22, 25, 
	25, 22, 26, 27, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 28, 29, 
	30, 31, 22, 22, 22, 22, 22, 22, 
	22, 22, 46, 22, 22, 33, 22, 22, 
	22, 37, 22, 22, 39, 22, 23, 22, 
	25, 25, 22, 26, 27, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 28, 
	29, 30, 31, 22, 22, 22, 22, 22, 
	22, 22, 22, 47, 22, 22, 33, 34, 
	35, 22, 37, 22, 22, 39, 22, 23, 
	22, 25, 25, 22, 26, 27, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	28, 29, 30, 31, 22, 22, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 33, 
	34, 35, 22, 37, 22, 22, 39, 22, 
	23, 24, 25, 25, 22, 26, 27, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 28, 29, 30, 31, 22, 22, 22, 
	22, 22, 22, 22, 22, 32, 22, 22, 
	33, 34, 35, 36, 37, 22, 22, 39, 
	22, 49, 49, 48, 5, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 12, 48, 48, 48, 48, 
	48, 48, 48, 48, 50, 48, 48, 48, 
	48, 48, 48, 18, 48, 49, 49, 48, 
	5, 48, 2, 48, 49, 49, 48, 5, 
	6, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 51, 48, 48, 12, 48, 
	48, 48, 48, 48, 48, 48, 48, 52, 
	48, 48, 53, 48, 48, 48, 18, 48, 
	48, 52, 48, 2, 48, 49, 49, 48, 
	5, 6, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 12, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 18, 
	48, 54, 48, 49, 49, 48, 5, 18, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 55, 48, 
	48, 48, 48, 48, 48, 18, 48, 49, 
	49, 48, 5, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 55, 48, 48, 48, 48, 48, 
	48, 18, 48, 49, 49, 48, 5, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 18, 48, 2, 
	48, 49, 49, 48, 5, 6, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	51, 48, 48, 12, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 18, 48, 2, 48, 49, 
	49, 48, 5, 6, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 51, 48, 
	48, 12, 48, 48, 48, 48, 48, 48, 
	48, 48, 52, 48, 48, 48, 48, 48, 
	48, 18, 48, 2, 48, 49, 49, 48, 
	5, 6, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 51, 48, 48, 12, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	52, 48, 48, 48, 48, 48, 48, 18, 
	48, 48, 52, 48, 49, 49, 48, 5, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 12, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 18, 48, 
	56, 56, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 56, 48, 
	2, 3, 49, 49, 48, 5, 6, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 9, 10, 11, 12, 48, 48, 48, 
	48, 48, 48, 48, 48, 13, 48, 48, 
	14, 15, 16, 17, 18, 19, 48, 21, 
	48, 2, 48, 49, 49, 48, 5, 6, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 9, 10, 48, 12, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 18, 48, 2, 
	48, 49, 49, 48, 5, 6, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 10, 48, 12, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 18, 48, 2, 48, 49, 
	49, 48, 5, 6, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 9, 10, 
	11, 12, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 18, 57, 48, 2, 48, 49, 49, 
	48, 5, 6, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 9, 10, 11, 
	12, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	18, 48, 2, 48, 49, 49, 48, 5, 
	6, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 9, 10, 11, 12, 48, 
	48, 48, 48, 48, 48, 48, 48, 13, 
	48, 48, 14, 15, 16, 17, 18, 48, 
	48, 21, 48, 2, 48, 49, 49, 48, 
	5, 6, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 9, 10, 11, 12, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	57, 48, 48, 48, 48, 48, 48, 18, 
	48, 48, 21, 48, 2, 48, 49, 49, 
	48, 5, 6, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 9, 10, 11, 
	12, 48, 48, 48, 48, 48, 48, 48, 
	48, 57, 48, 48, 48, 48, 48, 48, 
	18, 48, 2, 48, 49, 49, 48, 5, 
	6, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 9, 10, 11, 12, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 14, 48, 16, 48, 18, 48, 
	48, 21, 48, 2, 48, 49, 49, 48, 
	5, 6, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 9, 10, 11, 12, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	57, 48, 48, 14, 48, 48, 48, 18, 
	48, 48, 21, 48, 2, 48, 49, 49, 
	48, 5, 6, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 9, 10, 11, 
	12, 48, 48, 48, 48, 48, 48, 48, 
	48, 58, 48, 48, 14, 15, 16, 48, 
	18, 48, 48, 21, 48, 2, 48, 49, 
	49, 48, 5, 6, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 9, 10, 
	11, 12, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 14, 15, 16, 
	48, 18, 48, 48, 21, 48, 2, 3, 
	49, 49, 48, 5, 6, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 9, 
	10, 11, 12, 48, 48, 48, 48, 48, 
	48, 48, 48, 13, 48, 48, 14, 15, 
	16, 17, 18, 48, 48, 21, 48, 23, 
	24, 25, 25, 22, 26, 27, 22, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	28, 29, 30, 31, 22, 22, 22, 22, 
	22, 22, 22, 22, 59, 22, 22, 33, 
	34, 35, 36, 37, 38, 22, 39, 22, 
	23, 60, 25, 25, 22, 26, 27, 22, 
	22, 22, 22, 22, 22, 22, 22, 22, 
	22, 28, 29, 30, 31, 22, 22, 22, 
	22, 22, 22, 22, 22, 32, 22, 22, 
	33, 34, 35, 36, 37, 22, 22, 39, 
	22, 1, 1, 2, 3, 49, 49, 48, 
	5, 6, 1, 1, 48, 48, 48, 1, 
	48, 48, 48, 48, 9, 10, 11, 12, 
	48, 48, 48, 48, 48, 48, 48, 48, 
	13, 1, 48, 14, 15, 16, 17, 18, 
	19, 48, 21, 48, 1, 1, 61, 61, 
	61, 61, 61, 61, 61, 1, 1, 61, 
	61, 61, 1, 61, 61, 61, 61, 61, 
	61, 61, 61, 61, 61, 61, 61, 61, 
	61, 61, 61, 61, 1, 61, 62, 61, 
	0
};

static const char _myanmar_syllable_machine_trans_targs[] = {
	0, 1, 26, 37, 0, 27, 29, 51, 
	54, 39, 40, 41, 28, 43, 44, 46, 
	47, 48, 30, 50, 55, 45, 0, 2, 
	13, 0, 3, 5, 14, 15, 16, 4, 
	18, 19, 21, 22, 23, 6, 25, 20, 
	12, 9, 10, 11, 7, 8, 17, 24, 
	0, 0, 36, 33, 34, 35, 31, 32, 
	38, 42, 49, 52, 53, 0, 0
};

static const char _myanmar_syllable_machine_trans_actions[] = {
	3, 0, 0, 0, 4, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 5, 0, 
	0, 6, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	7, 8, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 9, 10
};

static const char _myanmar_syllable_machine_to_state_actions[] = {
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const char _myanmar_syllable_machine_from_state_actions[] = {
	2, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const short _myanmar_syllable_machine_eof_trans[] = {
	0, 23, 23, 23, 23, 23, 23, 23, 
	23, 23, 23, 23, 23, 23, 23, 23, 
	23, 23, 23, 23, 23, 23, 23, 23, 
	23, 23, 49, 49, 49, 49, 49, 49, 
	49, 49, 49, 49, 49, 49, 49, 49, 
	49, 49, 49, 49, 49, 49, 49, 49, 
	49, 49, 49, 23, 23, 49, 62, 62
};

static const int myanmar_syllable_machine_start = 0;
static const int myanmar_syllable_machine_first_final = 0;
static const int myanmar_syllable_machine_error = -1;

static const int myanmar_syllable_machine_en_main = 0;


#line 56 "hb-ot-shaper-myanmar-machine.rl"



#line 121 "hb-ot-shaper-myanmar-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", ts, te, #syllable_type); \
    for (unsigned int i = ts; i < te; i++) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    syllable_serial++; \
    if (unlikely (syllable_serial == 16)) syllable_serial = 1; \
  } HB_STMT_END

static void
find_syllables_myanmar (hb_buffer_t *buffer)
{
  unsigned int p, pe, eof, ts, te, act HB_UNUSED;
  int cs;
  hb_glyph_info_t *info = buffer->info;
  
#line 458 "hb-ot-shaper-myanmar-machine.hh"
	{
	cs = myanmar_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 141 "hb-ot-shaper-myanmar-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int syllable_serial = 1;
  
#line 474 "hb-ot-shaper-myanmar-machine.hh"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const char *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _myanmar_syllable_machine_from_state_actions[cs] ) {
	case 2:
#line 1 "NONE"
	{ts = p;}
	break;
#line 488 "hb-ot-shaper-myanmar-machine.hh"
	}

	_keys = _myanmar_syllable_machine_trans_keys + (cs<<1);
	_inds = _myanmar_syllable_machine_indicies + _myanmar_syllable_machine_index_offsets[cs];

	_slen = _myanmar_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( info[p].myanmar_category()) &&
		( info[p].myanmar_category()) <= _keys[1] ?
		( info[p].myanmar_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _myanmar_syllable_machine_trans_targs[_trans];

	if ( _myanmar_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _myanmar_syllable_machine_trans_actions[_trans] ) {
	case 6:
#line 113 "hb-ot-shaper-myanmar-machine.rl"
	{te = p+1;{ found_syllable (myanmar_consonant_syllable); }}
	break;
	case 4:
#line 114 "hb-ot-shaper-myanmar-machine.rl"
	{te = p+1;{ found_syllable (myanmar_non_myanmar_cluster); }}
	break;
	case 10:
#line 115 "hb-ot-shaper-myanmar-machine.rl"
	{te = p+1;{ found_syllable (myanmar_punctuation_cluster); }}
	break;
	case 8:
#line 116 "hb-ot-shaper-myanmar-machine.rl"
	{te = p+1;{ found_syllable (myanmar_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 3:
#line 117 "hb-ot-shaper-myanmar-machine.rl"
	{te = p+1;{ found_syllable (myanmar_non_myanmar_cluster); }}
	break;
	case 5:
#line 113 "hb-ot-shaper-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (myanmar_consonant_syllable); }}
	break;
	case 7:
#line 116 "hb-ot-shaper-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (myanmar_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 9:
#line 117 "hb-ot-shaper-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (myanmar_non_myanmar_cluster); }}
	break;
#line 538 "hb-ot-shaper-myanmar-machine.hh"
	}

_again:
	switch ( _myanmar_syllable_machine_to_state_actions[cs] ) {
	case 1:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 547 "hb-ot-shaper-myanmar-machine.hh"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _myanmar_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _myanmar_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 149 "hb-ot-shaper-myanmar-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPER_MYANMAR_MACHINE_HH */

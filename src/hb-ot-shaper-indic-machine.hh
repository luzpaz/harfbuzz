
#line 1 "hb-ot-shaper-indic-machine.rl"
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

#ifndef HB_OT_SHAPER_INDIC_MACHINE_HH
#define HB_OT_SHAPER_INDIC_MACHINE_HH

#include "hb.hh"

#include "hb-ot-layout.hh"
#include "hb-ot-shaper-indic.hh"

using indic_category_t = ot_category_t;
using indic_position_t = ot_position_t;

#define I_Cat(Cat) indic_syllable_machine_ex_##Cat

enum indic_syllable_type_t {
  indic_consonant_syllable,
  indic_vowel_syllable,
  indic_standalone_cluster,
  indic_symbol_cluster,
  indic_broken_cluster,
  indic_non_indic_cluster,
};


#line 53 "hb-ot-shaper-indic-machine.hh"
#define indic_syllable_machine_ex_A 9u
#define indic_syllable_machine_ex_C 1u
#define indic_syllable_machine_ex_CM 16u
#define indic_syllable_machine_ex_CS 18u
#define indic_syllable_machine_ex_DOTTEDCIRCLE 11u
#define indic_syllable_machine_ex_H 4u
#define indic_syllable_machine_ex_M 7u
#define indic_syllable_machine_ex_N 3u
#define indic_syllable_machine_ex_PLACEHOLDER 10u
#define indic_syllable_machine_ex_RS 12u
#define indic_syllable_machine_ex_Ra 15u
#define indic_syllable_machine_ex_Repha 14u
#define indic_syllable_machine_ex_SM 8u
#define indic_syllable_machine_ex_Symbol 17u
#define indic_syllable_machine_ex_V 2u
#define indic_syllable_machine_ex_VD 9u
#define indic_syllable_machine_ex_ZWJ 6u
#define indic_syllable_machine_ex_ZWNJ 5u


#line 74 "hb-ot-shaper-indic-machine.hh"
static const unsigned char _indic_syllable_machine_trans_keys[] = {
	8u, 8u, 4u, 8u, 5u, 7u, 5u, 8u, 4u, 8u, 6u, 6u, 15u, 15u, 4u, 8u, 
	4u, 12u, 4u, 8u, 8u, 8u, 5u, 7u, 5u, 8u, 4u, 8u, 6u, 6u, 15u, 15u, 
	4u, 8u, 4u, 12u, 4u, 12u, 4u, 12u, 8u, 8u, 5u, 7u, 5u, 8u, 4u, 8u, 
	6u, 6u, 15u, 15u, 4u, 8u, 4u, 8u, 4u, 12u, 8u, 8u, 5u, 7u, 5u, 8u, 
	4u, 8u, 6u, 6u, 15u, 15u, 4u, 8u, 4u, 8u, 5u, 8u, 8u, 8u, 1u, 18u, 
	3u, 16u, 3u, 16u, 4u, 16u, 1u, 15u, 5u, 9u, 5u, 9u, 9u, 9u, 5u, 9u, 
	1u, 15u, 1u, 15u, 1u, 15u, 3u, 9u, 4u, 9u, 5u, 9u, 4u, 9u, 5u, 9u, 
	3u, 9u, 5u, 9u, 3u, 16u, 3u, 16u, 3u, 16u, 3u, 16u, 4u, 16u, 1u, 15u, 
	3u, 16u, 3u, 16u, 4u, 16u, 1u, 15u, 5u, 9u, 9u, 9u, 5u, 9u, 1u, 15u, 
	1u, 15u, 3u, 9u, 4u, 9u, 5u, 9u, 4u, 9u, 5u, 9u, 5u, 9u, 3u, 9u, 
	5u, 9u, 3u, 16u, 3u, 16u, 4u, 8u, 3u, 16u, 3u, 16u, 4u, 16u, 1u, 15u, 
	3u, 16u, 1u, 15u, 5u, 9u, 9u, 9u, 5u, 9u, 1u, 15u, 1u, 15u, 3u, 9u, 
	4u, 9u, 5u, 9u, 3u, 16u, 4u, 9u, 5u, 9u, 5u, 9u, 3u, 9u, 5u, 9u, 
	3u, 16u, 4u, 12u, 4u, 8u, 3u, 16u, 3u, 16u, 4u, 16u, 1u, 15u, 3u, 16u, 
	1u, 15u, 5u, 9u, 9u, 9u, 5u, 9u, 1u, 15u, 1u, 15u, 3u, 9u, 4u, 9u, 
	5u, 9u, 3u, 16u, 4u, 9u, 5u, 9u, 5u, 9u, 3u, 9u, 5u, 9u, 1u, 16u, 
	3u, 16u, 1u, 16u, 4u, 12u, 5u, 9u, 9u, 9u, 5u, 9u, 1u, 15u, 3u, 9u, 
	5u, 9u, 5u, 9u, 9u, 9u, 5u, 9u, 1u, 15u, 0
};

static const char _indic_syllable_machine_key_spans[] = {
	1, 5, 3, 4, 5, 1, 1, 5, 
	9, 5, 1, 3, 4, 5, 1, 1, 
	5, 9, 9, 9, 1, 3, 4, 5, 
	1, 1, 5, 5, 9, 1, 3, 4, 
	5, 1, 1, 5, 5, 4, 1, 18, 
	14, 14, 13, 15, 5, 5, 1, 5, 
	15, 15, 15, 7, 6, 5, 6, 5, 
	7, 5, 14, 14, 14, 14, 13, 15, 
	14, 14, 13, 15, 5, 1, 5, 15, 
	15, 7, 6, 5, 6, 5, 5, 7, 
	5, 14, 14, 5, 14, 14, 13, 15, 
	14, 15, 5, 1, 5, 15, 15, 7, 
	6, 5, 14, 6, 5, 5, 7, 5, 
	14, 9, 5, 14, 14, 13, 15, 14, 
	15, 5, 1, 5, 15, 15, 7, 6, 
	5, 14, 6, 5, 5, 7, 5, 16, 
	14, 16, 9, 5, 1, 5, 15, 7, 
	5, 5, 1, 5, 15
};

static const short _indic_syllable_machine_index_offsets[] = {
	0, 2, 8, 12, 17, 23, 25, 27, 
	33, 43, 49, 51, 55, 60, 66, 68, 
	70, 76, 86, 96, 106, 108, 112, 117, 
	123, 125, 127, 133, 139, 149, 151, 155, 
	160, 166, 168, 170, 176, 182, 187, 189, 
	208, 223, 238, 252, 268, 274, 280, 282, 
	288, 304, 320, 336, 344, 351, 357, 364, 
	370, 378, 384, 399, 414, 429, 444, 458, 
	474, 489, 504, 518, 534, 540, 542, 548, 
	564, 580, 588, 595, 601, 608, 614, 620, 
	628, 634, 649, 664, 670, 685, 700, 714, 
	730, 745, 761, 767, 769, 775, 791, 807, 
	815, 822, 828, 843, 850, 856, 862, 870, 
	876, 891, 901, 907, 922, 937, 951, 967, 
	982, 998, 1004, 1006, 1012, 1028, 1044, 1052, 
	1059, 1065, 1080, 1087, 1093, 1099, 1107, 1113, 
	1130, 1145, 1162, 1172, 1178, 1180, 1186, 1202, 
	1210, 1216, 1222, 1224, 1230
};

static const unsigned char _indic_syllable_machine_indicies[] = {
	1, 0, 2, 3, 3, 4, 1, 0, 
	3, 3, 4, 0, 3, 3, 4, 1, 
	0, 5, 3, 3, 4, 1, 0, 6, 
	0, 7, 0, 8, 3, 3, 4, 1, 
	0, 2, 3, 3, 4, 1, 0, 0, 
	0, 9, 0, 11, 12, 12, 13, 14, 
	10, 14, 10, 12, 12, 13, 10, 12, 
	12, 13, 14, 10, 15, 12, 12, 13, 
	14, 10, 16, 10, 17, 10, 18, 12, 
	12, 13, 14, 10, 11, 12, 12, 13, 
	14, 10, 10, 10, 19, 10, 11, 12, 
	12, 13, 14, 10, 10, 10, 20, 10, 
	22, 23, 23, 24, 25, 21, 21, 21, 
	26, 21, 25, 21, 23, 23, 24, 27, 
	23, 23, 24, 25, 21, 28, 23, 23, 
	24, 25, 21, 29, 21, 30, 21, 22, 
	23, 23, 24, 25, 21, 31, 23, 23, 
	24, 25, 21, 33, 34, 34, 35, 36, 
	32, 32, 32, 37, 32, 36, 32, 34, 
	34, 35, 32, 34, 34, 35, 36, 32, 
	38, 34, 34, 35, 36, 32, 39, 32, 
	40, 32, 33, 34, 34, 35, 36, 32, 
	41, 34, 34, 35, 36, 32, 23, 23, 
	24, 1, 0, 43, 42, 45, 46, 47, 
	48, 49, 50, 24, 25, 51, 52, 52, 
	26, 44, 53, 54, 55, 56, 57, 44, 
	59, 60, 61, 62, 4, 1, 63, 58, 
	58, 9, 58, 58, 58, 64, 58, 65, 
	60, 66, 66, 4, 1, 63, 58, 58, 
	58, 58, 58, 58, 64, 58, 60, 66, 
	66, 4, 1, 63, 58, 58, 58, 58, 
	58, 58, 64, 58, 45, 58, 58, 58, 
	67, 68, 58, 1, 63, 58, 58, 58, 
	58, 58, 45, 58, 69, 69, 58, 1, 
	63, 58, 63, 58, 58, 70, 63, 58, 
	63, 58, 63, 58, 58, 58, 63, 58, 
	45, 58, 71, 58, 69, 69, 58, 1, 
	63, 58, 58, 58, 58, 58, 45, 58, 
	45, 58, 58, 58, 69, 69, 58, 1, 
	63, 58, 58, 58, 58, 58, 45, 58, 
	45, 58, 58, 58, 69, 68, 58, 1, 
	63, 58, 58, 58, 58, 58, 45, 58, 
	72, 7, 73, 74, 4, 1, 63, 58, 
	7, 73, 74, 4, 1, 63, 58, 73, 
	73, 4, 1, 63, 58, 75, 76, 76, 
	4, 1, 63, 58, 67, 77, 58, 1, 
	63, 58, 67, 58, 69, 69, 58, 1, 
	63, 58, 69, 77, 58, 1, 63, 58, 
	59, 60, 66, 66, 4, 1, 63, 58, 
	58, 58, 58, 58, 58, 64, 58, 59, 
	60, 61, 66, 4, 1, 63, 58, 58, 
	9, 58, 58, 58, 64, 58, 79, 80, 
	81, 82, 13, 14, 83, 78, 78, 20, 
	78, 78, 78, 84, 78, 85, 80, 86, 
	82, 13, 14, 83, 78, 78, 78, 78, 
	78, 78, 84, 78, 80, 86, 82, 13, 
	14, 83, 78, 78, 78, 78, 78, 78, 
	84, 78, 87, 78, 78, 78, 88, 89, 
	78, 14, 83, 78, 78, 78, 78, 78, 
	87, 78, 90, 80, 91, 92, 13, 14, 
	83, 78, 78, 19, 78, 78, 78, 84, 
	78, 93, 80, 86, 86, 13, 14, 83, 
	78, 78, 78, 78, 78, 78, 84, 78, 
	80, 86, 86, 13, 14, 83, 78, 78, 
	78, 78, 78, 78, 84, 78, 87, 78, 
	78, 78, 94, 89, 78, 14, 83, 78, 
	78, 78, 78, 78, 87, 78, 83, 78, 
	78, 95, 83, 78, 83, 78, 83, 78, 
	78, 78, 83, 78, 87, 78, 96, 78, 
	94, 94, 78, 14, 83, 78, 78, 78, 
	78, 78, 87, 78, 87, 78, 78, 78, 
	94, 94, 78, 14, 83, 78, 78, 78, 
	78, 78, 87, 78, 97, 17, 98, 99, 
	13, 14, 83, 78, 17, 98, 99, 13, 
	14, 83, 78, 98, 98, 13, 14, 83, 
	78, 100, 101, 101, 13, 14, 83, 78, 
	88, 102, 78, 14, 83, 78, 94, 94, 
	78, 14, 83, 78, 88, 78, 94, 94, 
	78, 14, 83, 78, 94, 102, 78, 14, 
	83, 78, 90, 80, 86, 86, 13, 14, 
	83, 78, 78, 78, 78, 78, 78, 84, 
	78, 90, 80, 91, 86, 13, 14, 83, 
	78, 78, 19, 78, 78, 78, 84, 78, 
	11, 12, 12, 13, 14, 78, 79, 80, 
	86, 82, 13, 14, 83, 78, 78, 78, 
	78, 78, 78, 84, 78, 104, 48, 105, 
	105, 24, 25, 51, 103, 103, 103, 103, 
	103, 103, 55, 103, 48, 105, 105, 24, 
	25, 51, 103, 103, 103, 103, 103, 103, 
	55, 103, 106, 103, 103, 103, 107, 108, 
	103, 25, 51, 103, 103, 103, 103, 103, 
	106, 103, 47, 48, 109, 110, 24, 25, 
	51, 103, 103, 26, 103, 103, 103, 55, 
	103, 106, 103, 103, 103, 111, 108, 103, 
	25, 51, 103, 103, 103, 103, 103, 106, 
	103, 51, 103, 103, 112, 51, 103, 51, 
	103, 51, 103, 103, 103, 51, 103, 106, 
	103, 113, 103, 111, 111, 103, 25, 51, 
	103, 103, 103, 103, 103, 106, 103, 106, 
	103, 103, 103, 111, 111, 103, 25, 51, 
	103, 103, 103, 103, 103, 106, 103, 114, 
	30, 115, 116, 24, 25, 51, 103, 30, 
	115, 116, 24, 25, 51, 103, 115, 115, 
	24, 25, 51, 103, 47, 48, 105, 105, 
	24, 25, 51, 103, 103, 103, 103, 103, 
	103, 55, 103, 117, 118, 118, 24, 25, 
	51, 103, 107, 119, 103, 25, 51, 103, 
	111, 111, 103, 25, 51, 103, 107, 103, 
	111, 111, 103, 25, 51, 103, 111, 119, 
	103, 25, 51, 103, 47, 48, 109, 105, 
	24, 25, 51, 103, 103, 26, 103, 103, 
	103, 55, 103, 22, 23, 23, 24, 25, 
	120, 120, 120, 26, 120, 22, 23, 23, 
	24, 25, 120, 122, 123, 124, 125, 35, 
	36, 126, 121, 121, 37, 121, 121, 121, 
	127, 121, 128, 123, 125, 125, 35, 36, 
	126, 121, 121, 121, 121, 121, 121, 127, 
	121, 123, 125, 125, 35, 36, 126, 121, 
	121, 121, 121, 121, 121, 127, 121, 129, 
	121, 121, 121, 130, 131, 121, 36, 126, 
	121, 121, 121, 121, 121, 129, 121, 122, 
	123, 124, 52, 35, 36, 126, 121, 121, 
	37, 121, 121, 121, 127, 121, 129, 121, 
	121, 121, 132, 131, 121, 36, 126, 121, 
	121, 121, 121, 121, 129, 121, 126, 121, 
	121, 133, 126, 121, 126, 121, 126, 121, 
	121, 121, 126, 121, 129, 121, 134, 121, 
	132, 132, 121, 36, 126, 121, 121, 121, 
	121, 121, 129, 121, 129, 121, 121, 121, 
	132, 132, 121, 36, 126, 121, 121, 121, 
	121, 121, 129, 121, 135, 40, 136, 137, 
	35, 36, 126, 121, 40, 136, 137, 35, 
	36, 126, 121, 136, 136, 35, 36, 126, 
	121, 122, 123, 125, 125, 35, 36, 126, 
	121, 121, 121, 121, 121, 121, 127, 121, 
	138, 139, 139, 35, 36, 126, 121, 130, 
	140, 121, 36, 126, 121, 132, 132, 121, 
	36, 126, 121, 130, 121, 132, 132, 121, 
	36, 126, 121, 132, 140, 121, 36, 126, 
	121, 45, 46, 47, 48, 109, 105, 24, 
	25, 51, 52, 52, 26, 103, 103, 45, 
	55, 103, 59, 141, 61, 62, 4, 1, 
	63, 58, 58, 9, 58, 58, 58, 64, 
	58, 45, 46, 47, 48, 142, 143, 24, 
	144, 145, 58, 52, 26, 58, 58, 45, 
	55, 58, 22, 146, 146, 24, 144, 63, 
	58, 58, 26, 58, 145, 58, 58, 147, 
	145, 58, 145, 58, 145, 58, 58, 58, 
	145, 58, 45, 58, 71, 22, 146, 146, 
	24, 144, 63, 58, 58, 58, 58, 58, 
	45, 58, 149, 148, 150, 150, 148, 43, 
	151, 148, 150, 150, 148, 43, 151, 148, 
	151, 148, 148, 152, 151, 148, 151, 148, 
	151, 148, 148, 148, 151, 148, 45, 120, 
	120, 120, 120, 120, 120, 120, 120, 52, 
	120, 120, 120, 120, 45, 120, 0
};

static const unsigned char _indic_syllable_machine_trans_targs[] = {
	39, 45, 50, 2, 51, 5, 6, 53, 
	57, 58, 39, 67, 11, 73, 68, 14, 
	15, 75, 80, 81, 84, 39, 89, 21, 
	95, 90, 98, 39, 24, 25, 97, 103, 
	39, 112, 30, 118, 113, 121, 33, 34, 
	120, 126, 39, 137, 39, 40, 60, 85, 
	87, 105, 106, 91, 107, 127, 128, 99, 
	135, 140, 39, 41, 43, 8, 59, 46, 
	54, 42, 1, 44, 48, 0, 47, 49, 
	52, 3, 4, 55, 7, 56, 39, 61, 
	63, 18, 83, 69, 76, 62, 9, 64, 
	78, 71, 65, 17, 82, 66, 10, 70, 
	72, 74, 12, 13, 77, 16, 79, 39, 
	86, 26, 88, 101, 93, 19, 104, 20, 
	92, 94, 96, 22, 23, 100, 27, 102, 
	39, 39, 108, 110, 28, 35, 114, 122, 
	109, 111, 124, 116, 29, 115, 117, 119, 
	31, 32, 123, 36, 125, 129, 130, 134, 
	131, 132, 37, 133, 39, 136, 38, 138, 
	139
};

static const char _indic_syllable_machine_trans_actions[] = {
	1, 0, 2, 0, 2, 0, 0, 2, 
	2, 2, 3, 2, 0, 2, 0, 0, 
	0, 2, 2, 2, 2, 4, 2, 0, 
	5, 0, 5, 6, 0, 0, 5, 2, 
	7, 2, 0, 2, 0, 2, 0, 0, 
	2, 2, 8, 0, 11, 2, 2, 5, 
	0, 12, 12, 0, 2, 5, 2, 5, 
	2, 0, 13, 2, 0, 0, 2, 0, 
	2, 2, 0, 2, 2, 0, 0, 2, 
	2, 0, 0, 0, 0, 2, 14, 2, 
	0, 0, 2, 0, 2, 2, 0, 2, 
	2, 2, 2, 0, 2, 2, 0, 0, 
	2, 2, 0, 0, 0, 0, 2, 15, 
	5, 0, 5, 2, 2, 0, 5, 0, 
	0, 2, 5, 0, 0, 0, 0, 2, 
	16, 17, 2, 0, 0, 0, 0, 2, 
	2, 2, 2, 2, 0, 0, 2, 2, 
	0, 0, 0, 0, 2, 0, 18, 18, 
	0, 0, 0, 0, 19, 2, 0, 0, 
	0
};

static const char _indic_syllable_machine_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 9, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0
};

static const char _indic_syllable_machine_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 10, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0
};

static const short _indic_syllable_machine_eof_trans[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 11, 11, 11, 11, 11, 11, 11, 
	11, 11, 11, 22, 22, 28, 22, 22, 
	22, 22, 22, 22, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 1, 43, 0, 
	59, 59, 59, 59, 59, 59, 59, 59, 
	59, 59, 59, 59, 59, 59, 59, 59, 
	59, 59, 59, 59, 79, 79, 79, 79, 
	79, 79, 79, 79, 79, 79, 79, 79, 
	79, 79, 79, 79, 79, 79, 79, 79, 
	79, 79, 79, 79, 79, 104, 104, 104, 
	104, 104, 104, 104, 104, 104, 104, 104, 
	104, 104, 104, 104, 104, 104, 104, 104, 
	104, 121, 121, 122, 122, 122, 122, 122, 
	122, 122, 122, 122, 122, 122, 122, 122, 
	122, 122, 122, 122, 122, 122, 122, 104, 
	59, 59, 59, 59, 59, 59, 59, 149, 
	149, 149, 149, 149, 121
};

static const int indic_syllable_machine_start = 39;
static const int indic_syllable_machine_first_final = 39;
static const int indic_syllable_machine_error = -1;

static const int indic_syllable_machine_en_main = 39;


#line 54 "hb-ot-shaper-indic-machine.rl"



#line 115 "hb-ot-shaper-indic-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", ts, te, #syllable_type); \
    for (unsigned int i = ts; i < te; i++) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    syllable_serial++; \
    if (unlikely (syllable_serial == 16)) syllable_serial = 1; \
  } HB_STMT_END

static void
find_syllables_indic (hb_buffer_t *buffer)
{
  unsigned int p, pe, eof, ts, te, act;
  int cs;
  hb_glyph_info_t *info = buffer->info;
  
#line 436 "hb-ot-shaper-indic-machine.hh"
	{
	cs = indic_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 135 "hb-ot-shaper-indic-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int syllable_serial = 1;
  
#line 452 "hb-ot-shaper-indic-machine.hh"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const unsigned char *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _indic_syllable_machine_from_state_actions[cs] ) {
	case 10:
#line 1 "NONE"
	{ts = p;}
	break;
#line 466 "hb-ot-shaper-indic-machine.hh"
	}

	_keys = _indic_syllable_machine_trans_keys + (cs<<1);
	_inds = _indic_syllable_machine_indicies + _indic_syllable_machine_index_offsets[cs];

	_slen = _indic_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( info[p].indic_category()) &&
		( info[p].indic_category()) <= _keys[1] ?
		( info[p].indic_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _indic_syllable_machine_trans_targs[_trans];

	if ( _indic_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _indic_syllable_machine_trans_actions[_trans] ) {
	case 2:
#line 1 "NONE"
	{te = p+1;}
	break;
	case 11:
#line 111 "hb-ot-shaper-indic-machine.rl"
	{te = p+1;{ found_syllable (indic_non_indic_cluster); }}
	break;
	case 13:
#line 106 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_consonant_syllable); }}
	break;
	case 14:
#line 107 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_vowel_syllable); }}
	break;
	case 17:
#line 108 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_standalone_cluster); }}
	break;
	case 19:
#line 109 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_symbol_cluster); }}
	break;
	case 15:
#line 110 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 16:
#line 111 "hb-ot-shaper-indic-machine.rl"
	{te = p;p--;{ found_syllable (indic_non_indic_cluster); }}
	break;
	case 1:
#line 106 "hb-ot-shaper-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (indic_consonant_syllable); }}
	break;
	case 3:
#line 107 "hb-ot-shaper-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (indic_vowel_syllable); }}
	break;
	case 7:
#line 108 "hb-ot-shaper-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (indic_standalone_cluster); }}
	break;
	case 8:
#line 109 "hb-ot-shaper-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (indic_symbol_cluster); }}
	break;
	case 4:
#line 110 "hb-ot-shaper-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (indic_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 6:
#line 1 "NONE"
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;} found_syllable (indic_consonant_syllable); }
	break;
	case 5:
	{{p = ((te))-1;} found_syllable (indic_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }
	break;
	case 6:
	{{p = ((te))-1;} found_syllable (indic_non_indic_cluster); }
	break;
	}
	}
	break;
	case 18:
#line 1 "NONE"
	{te = p+1;}
#line 106 "hb-ot-shaper-indic-machine.rl"
	{act = 1;}
	break;
	case 5:
#line 1 "NONE"
	{te = p+1;}
#line 110 "hb-ot-shaper-indic-machine.rl"
	{act = 5;}
	break;
	case 12:
#line 1 "NONE"
	{te = p+1;}
#line 111 "hb-ot-shaper-indic-machine.rl"
	{act = 6;}
	break;
#line 569 "hb-ot-shaper-indic-machine.hh"
	}

_again:
	switch ( _indic_syllable_machine_to_state_actions[cs] ) {
	case 9:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 578 "hb-ot-shaper-indic-machine.hh"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _indic_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _indic_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 143 "hb-ot-shaper-indic-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPER_INDIC_MACHINE_HH */

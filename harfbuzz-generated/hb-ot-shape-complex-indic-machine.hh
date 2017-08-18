
#line 1 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
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

#ifndef HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH

#include "hb-private.hh"


#line 36 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
static const int indic_syllable_machine_start = 178;
static const int indic_syllable_machine_first_final = 178;
static const int indic_syllable_machine_error = -1;

static const int indic_syllable_machine_en_main = 178;


#line 36 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"



#line 96 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", last, p+1, #syllable_type); \
    for (unsigned int i = last; i < p+1; i++) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    last = p+1; \
    syllable_serial++; \
    if (unlikely (syllable_serial == 16)) syllable_serial = 1; \
  } HB_STMT_END

static void
find_syllables (hb_buffer_t *buffer)
{
  unsigned int p, pe, eof, ts HB_UNUSED, te HB_UNUSED, act HB_UNUSED;
  int cs;
  hb_glyph_info_t *info = buffer->info;
  
#line 68 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	{
	cs = indic_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 117 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int last = 0;
  unsigned int syllable_serial = 1;
  
#line 85 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
tr0:
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (consonant_syllable); }}
	goto st178;
tr39:
#line 88 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (vowel_syllable); }}
	goto st178;
tr78:
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (broken_cluster); }}
	goto st178;
tr85:
#line 1 "NONE"
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;} found_syllable (consonant_syllable); }
	break;
	case 5:
	{{p = ((te))-1;} found_syllable (broken_cluster); }
	break;
	case 6:
	{{p = ((te))-1;} found_syllable (non_indic_cluster); }
	break;
	}
	}
	goto st178;
tr117:
#line 89 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (standalone_cluster); }}
	goto st178;
tr185:
#line 90 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ found_syllable (symbol_cluster); }}
	goto st178;
tr187:
#line 92 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (non_indic_cluster); }}
	goto st178;
tr202:
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (consonant_syllable); }}
	goto st178;
tr254:
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (consonant_syllable); }}
	goto st178;
tr281:
#line 88 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (vowel_syllable); }}
	goto st178;
tr333:
#line 88 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (vowel_syllable); }}
	goto st178;
tr360:
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (broken_cluster); }}
	goto st178;
tr404:
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (broken_cluster); }}
	goto st178;
tr431:
#line 92 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (non_indic_cluster); }}
	goto st178;
tr432:
#line 89 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (standalone_cluster); }}
	goto st178;
tr483:
#line 89 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (standalone_cluster); }}
	goto st178;
tr546:
#line 90 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ found_syllable (symbol_cluster); }}
	goto st178;
tr553:
#line 90 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ found_syllable (symbol_cluster); }}
	goto st178;
st178:
#line 1 "NONE"
	{ts = 0;}
	if ( ++p == pe )
		goto _test_eof178;
case 178:
#line 1 "NONE"
	{ts = p;}
#line 182 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr188;
		case 2u: goto tr189;
		case 3u: goto tr190;
		case 4u: goto tr191;
		case 5u: goto tr192;
		case 6u: goto tr193;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr156;
		case 14u: goto tr197;
		case 15u: goto tr198;
		case 16u: goto tr199;
		case 17u: goto tr200;
		case 18u: goto tr201;
	}
	if ( 11u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 12u )
		goto tr196;
	goto tr187;
tr188:
#line 1 "NONE"
	{te = p+1;}
	goto st179;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
#line 212 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr203;
		case 4u: goto tr204;
		case 5u: goto st36;
		case 6u: goto tr206;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr38;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	goto tr202;
tr203:
#line 1 "NONE"
	{te = p+1;}
	goto st180;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
#line 235 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr211;
		case 4u: goto tr204;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st35;
	goto tr202;
tr211:
#line 1 "NONE"
	{te = p+1;}
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
#line 257 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr204;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st35;
	goto tr202;
tr204:
#line 1 "NONE"
	{te = p+1;}
	goto st182;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
#line 278 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 5u: goto tr19;
		case 6u: goto tr214;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	goto tr202;
tr213:
#line 1 "NONE"
	{te = p+1;}
	goto st183;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
#line 298 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr216;
		case 4u: goto tr217;
		case 5u: goto st34;
		case 6u: goto tr219;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr36;
		case 14u: goto tr220;
		case 17u: goto tr210;
	}
	goto tr202;
tr216:
#line 1 "NONE"
	{te = p+1;}
	goto st184;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
#line 321 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr221;
		case 4u: goto tr217;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr220;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st33;
	goto tr202;
tr221:
#line 1 "NONE"
	{te = p+1;}
	goto st185;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
#line 343 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr217;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr220;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st33;
	goto tr202;
tr217:
#line 1 "NONE"
	{te = p+1;}
	goto st186;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
#line 364 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 5u: goto tr19;
		case 6u: goto tr224;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	goto tr202;
tr223:
#line 1 "NONE"
	{te = p+1;}
	goto st187;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
#line 384 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr225;
		case 4u: goto tr226;
		case 5u: goto st32;
		case 6u: goto tr228;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr34;
		case 14u: goto tr229;
		case 17u: goto tr210;
	}
	goto tr202;
tr225:
#line 1 "NONE"
	{te = p+1;}
	goto st188;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
#line 407 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr230;
		case 4u: goto tr226;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr229;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st31;
	goto tr202;
tr230:
#line 1 "NONE"
	{te = p+1;}
	goto st189;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
#line 429 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr226;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr229;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st31;
	goto tr202;
tr226:
#line 1 "NONE"
	{te = p+1;}
	goto st190;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
#line 450 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 5u: goto tr19;
		case 6u: goto tr233;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	goto tr202;
tr232:
#line 1 "NONE"
	{te = p+1;}
	goto st191;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
#line 470 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr234;
		case 4u: goto tr235;
		case 5u: goto st30;
		case 6u: goto tr237;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr32;
		case 14u: goto tr238;
		case 17u: goto tr210;
	}
	goto tr202;
tr234:
#line 1 "NONE"
	{te = p+1;}
	goto st192;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
#line 493 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr239;
		case 4u: goto tr235;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr238;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st29;
	goto tr202;
tr239:
#line 1 "NONE"
	{te = p+1;}
	goto st193;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
#line 515 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr235;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr238;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st29;
	goto tr202;
tr235:
#line 1 "NONE"
	{te = p+1;}
	goto st194;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
#line 536 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 5u: goto tr19;
		case 6u: goto tr242;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	goto tr202;
tr241:
#line 1 "NONE"
	{te = p+1;}
	goto st195;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
#line 556 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr243;
		case 4u: goto tr244;
		case 5u: goto st28;
		case 6u: goto tr246;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr30;
		case 14u: goto tr247;
		case 17u: goto tr210;
	}
	goto tr202;
tr243:
#line 1 "NONE"
	{te = p+1;}
	goto st196;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
#line 579 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr248;
		case 4u: goto tr244;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr247;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st27;
	goto tr202;
tr248:
#line 1 "NONE"
	{te = p+1;}
	goto st197;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
#line 601 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr244;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr247;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st27;
	goto tr202;
tr244:
#line 1 "NONE"
	{te = p+1;}
	goto st198;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
#line 622 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto tr19;
		case 6u: goto tr250;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr19:
#line 1 "NONE"
	{te = p+1;}
	goto st199;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
#line 640 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st0:
	if ( ++p == pe )
		goto _test_eof0;
case 0:
	if ( ( info[p].indic_category()) == 8u )
		goto st200;
	goto tr0;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st201;
		case 8u: goto st206;
		case 9u: goto st202;
		case 10u: goto st203;
	}
	goto tr202;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st202;
		case 10u: goto st203;
	}
	goto tr202;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	if ( ( info[p].indic_category()) == 9u )
		goto tr254;
	goto tr202;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st202;
		case 10u: goto st204;
	}
	goto tr202;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st202;
		case 10u: goto st205;
	}
	goto tr202;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
	if ( ( info[p].indic_category()) == 9u )
		goto st202;
	goto tr202;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st201;
		case 9u: goto st202;
		case 10u: goto st203;
	}
	goto tr202;
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr2;
		case 2u: goto tr3;
		case 16u: goto tr2;
	}
	goto tr0;
tr2:
#line 1 "NONE"
	{te = p+1;}
	goto st207;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
#line 737 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr257;
		case 5u: goto st2;
		case 6u: goto tr259;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr4;
	}
	goto tr202;
tr257:
#line 1 "NONE"
	{te = p+1;}
	goto st208;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
#line 756 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr3;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr3:
#line 1 "NONE"
	{te = p+1;}
	goto st209;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
#line 774 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st200;
		case 13u: goto tr4;
	}
	goto tr0;
tr4:
#line 1 "NONE"
	{te = p+1;}
	goto st210;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
#line 800 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr257;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr259:
#line 1 "NONE"
	{te = p+1;}
	goto st211;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
#line 818 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr257;
		case 5u: goto st2;
		case 6u: goto st0;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr4;
	}
	goto tr202;
tr250:
#line 1 "NONE"
	{te = p+1;}
	goto st212;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
#line 837 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr19;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st3;
	goto tr202;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr6;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( ( info[p].indic_category()) == 7u )
		goto tr6;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st5;
	goto tr0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( ( info[p].indic_category()) == 7u )
		goto tr6;
	goto tr0;
tr6:
#line 1 "NONE"
	{te = p+1;}
	goto st213;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
#line 884 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr261;
		case 4u: goto tr28;
		case 5u: goto st6;
		case 6u: goto st24;
		case 7u: goto tr9;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr261:
#line 1 "NONE"
	{te = p+1;}
	goto st214;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
#line 905 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr28;
		case 5u: goto st6;
		case 6u: goto st24;
		case 7u: goto tr9;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr28:
#line 1 "NONE"
	{te = p+1;}
	goto st215;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
#line 925 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr9;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st6;
	goto tr202;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr9;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st7;
	goto tr0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( ( info[p].indic_category()) == 7u )
		goto tr9;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st8;
	goto tr0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( ( info[p].indic_category()) == 7u )
		goto tr9;
	goto tr0;
tr9:
#line 1 "NONE"
	{te = p+1;}
	goto st216;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
#line 971 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr264;
		case 4u: goto tr25;
		case 5u: goto st9;
		case 6u: goto st21;
		case 7u: goto tr12;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr264:
#line 1 "NONE"
	{te = p+1;}
	goto st217;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
#line 992 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr25;
		case 5u: goto st9;
		case 6u: goto st21;
		case 7u: goto tr12;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr25:
#line 1 "NONE"
	{te = p+1;}
	goto st218;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
#line 1012 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr12;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st9;
	goto tr202;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr12;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st10;
	goto tr0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( ( info[p].indic_category()) == 7u )
		goto tr12;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st11;
	goto tr0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( ( info[p].indic_category()) == 7u )
		goto tr12;
	goto tr0;
tr12:
#line 1 "NONE"
	{te = p+1;}
	goto st219;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
#line 1058 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr267;
		case 4u: goto tr22;
		case 5u: goto st12;
		case 6u: goto st18;
		case 7u: goto tr15;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr267:
#line 1 "NONE"
	{te = p+1;}
	goto st220;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
#line 1079 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr22;
		case 5u: goto st12;
		case 6u: goto st18;
		case 7u: goto tr15;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr22:
#line 1 "NONE"
	{te = p+1;}
	goto st221;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
#line 1099 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr15;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st12;
	goto tr202;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr15;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st13;
	goto tr0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( ( info[p].indic_category()) == 7u )
		goto tr15;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st14;
	goto tr0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( ( info[p].indic_category()) == 7u )
		goto tr15;
	goto tr0;
tr15:
#line 1 "NONE"
	{te = p+1;}
	goto st222;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
#line 1145 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr270;
		case 4u: goto tr19;
		case 5u: goto st0;
		case 6u: goto st15;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr270:
#line 1 "NONE"
	{te = p+1;}
	goto st223;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
#line 1165 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr19;
		case 5u: goto st0;
		case 6u: goto st15;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st16;
		case 8u: goto st200;
	}
	goto tr0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( ( info[p].indic_category()) == 6u )
		goto st17;
	goto tr0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( ( info[p].indic_category()) == 16u )
		goto tr19;
	goto tr0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st19;
		case 7u: goto tr15;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st13;
	goto tr0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( ( info[p].indic_category()) == 6u )
		goto st20;
	goto tr0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( ( info[p].indic_category()) == 16u )
		goto tr22;
	goto tr0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st22;
		case 7u: goto tr12;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st10;
	goto tr0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( ( info[p].indic_category()) == 6u )
		goto st23;
	goto tr0;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( ( info[p].indic_category()) == 16u )
		goto tr25;
	goto tr0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st25;
		case 7u: goto tr9;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st7;
	goto tr0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( ( info[p].indic_category()) == 6u )
		goto st26;
	goto tr0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( ( info[p].indic_category()) == 16u )
		goto tr28;
	goto tr0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr29;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 14u: goto tr29;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr29:
#line 1 "NONE"
	{te = p+1;}
	goto st224;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
#line 1298 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st0;
		case 6u: goto tr272;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	goto tr202;
tr272:
#line 1 "NONE"
	{te = p+1;}
	goto st225;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
#line 1316 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr19;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr247:
#line 1 "NONE"
	{te = p+1;}
	goto st226;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
#line 1335 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr2;
		case 2u: goto tr3;
		case 5u: goto tr19;
		case 6u: goto tr250;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr2;
	}
	goto tr202;
tr210:
#line 1 "NONE"
	{te = p+1;}
	goto st227;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
#line 1356 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr244;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr247;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st27;
	goto tr202;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr29;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 13u: goto tr30;
		case 14u: goto tr29;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr30:
#line 1 "NONE"
	{te = p+1;}
	goto st228;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
#line 1390 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr243;
		case 4u: goto tr244;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr247;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st27;
	goto tr202;
tr246:
#line 1 "NONE"
	{te = p+1;}
	goto st229;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
#line 1412 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr243;
		case 4u: goto tr244;
		case 5u: goto st28;
		case 6u: goto st27;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr30;
		case 14u: goto tr247;
		case 17u: goto tr210;
	}
	goto tr202;
tr242:
#line 1 "NONE"
	{te = p+1;}
	goto st230;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
#line 1435 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 3u: goto tr273;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st3;
	goto tr202;
tr273:
#line 1 "NONE"
	{te = p+1;}
	goto st231;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
#line 1457 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr31;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 14u: goto tr31;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr31:
#line 1 "NONE"
	{te = p+1;}
	goto st232;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
#line 1490 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 5u: goto st0;
		case 6u: goto tr274;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	goto tr202;
tr274:
#line 1 "NONE"
	{te = p+1;}
	goto st233;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
#line 1510 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 3u: goto tr273;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr238:
#line 1 "NONE"
	{te = p+1;}
	goto st234;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
#line 1531 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr241;
		case 2u: goto tr3;
		case 5u: goto tr19;
		case 6u: goto tr242;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr241;
	}
	goto tr202;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr31;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 13u: goto tr32;
		case 14u: goto tr31;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr32:
#line 1 "NONE"
	{te = p+1;}
	goto st235;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
#line 1566 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr234;
		case 4u: goto tr235;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr238;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st29;
	goto tr202;
tr237:
#line 1 "NONE"
	{te = p+1;}
	goto st236;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
#line 1588 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr234;
		case 4u: goto tr235;
		case 5u: goto st30;
		case 6u: goto st29;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr32;
		case 14u: goto tr238;
		case 17u: goto tr210;
	}
	goto tr202;
tr233:
#line 1 "NONE"
	{te = p+1;}
	goto st237;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
#line 1611 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 3u: goto tr275;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st3;
	goto tr202;
tr275:
#line 1 "NONE"
	{te = p+1;}
	goto st238;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
#line 1633 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr33;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 14u: goto tr33;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr33:
#line 1 "NONE"
	{te = p+1;}
	goto st239;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
#line 1666 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 5u: goto st0;
		case 6u: goto tr276;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	goto tr202;
tr276:
#line 1 "NONE"
	{te = p+1;}
	goto st240;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
#line 1686 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 3u: goto tr275;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr229:
#line 1 "NONE"
	{te = p+1;}
	goto st241;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
#line 1707 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr232;
		case 2u: goto tr3;
		case 5u: goto tr19;
		case 6u: goto tr233;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr232;
	}
	goto tr202;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr33;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 13u: goto tr34;
		case 14u: goto tr33;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr34:
#line 1 "NONE"
	{te = p+1;}
	goto st242;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
#line 1742 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr225;
		case 4u: goto tr226;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr229;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st31;
	goto tr202;
tr228:
#line 1 "NONE"
	{te = p+1;}
	goto st243;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
#line 1764 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr225;
		case 4u: goto tr226;
		case 5u: goto st32;
		case 6u: goto st31;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr34;
		case 14u: goto tr229;
		case 17u: goto tr210;
	}
	goto tr202;
tr224:
#line 1 "NONE"
	{te = p+1;}
	goto st244;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
#line 1787 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 3u: goto tr277;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st3;
	goto tr202;
tr277:
#line 1 "NONE"
	{te = p+1;}
	goto st245;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
#line 1809 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr35;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 14u: goto tr35;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr35:
#line 1 "NONE"
	{te = p+1;}
	goto st246;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
#line 1842 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 5u: goto st0;
		case 6u: goto tr278;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	goto tr202;
tr278:
#line 1 "NONE"
	{te = p+1;}
	goto st247;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
#line 1862 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 3u: goto tr277;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr220:
#line 1 "NONE"
	{te = p+1;}
	goto st248;
st248:
	if ( ++p == pe )
		goto _test_eof248;
case 248:
#line 1883 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr223;
		case 2u: goto tr3;
		case 5u: goto tr19;
		case 6u: goto tr224;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr223;
	}
	goto tr202;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr35;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 13u: goto tr36;
		case 14u: goto tr35;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr36:
#line 1 "NONE"
	{te = p+1;}
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
#line 1918 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr216;
		case 4u: goto tr217;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr220;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st33;
	goto tr202;
tr219:
#line 1 "NONE"
	{te = p+1;}
	goto st250;
st250:
	if ( ++p == pe )
		goto _test_eof250;
case 250:
#line 1940 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr216;
		case 4u: goto tr217;
		case 5u: goto st34;
		case 6u: goto st33;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr36;
		case 14u: goto tr220;
		case 17u: goto tr210;
	}
	goto tr202;
tr214:
#line 1 "NONE"
	{te = p+1;}
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
#line 1963 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 3u: goto tr279;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st3;
	goto tr202;
tr279:
#line 1 "NONE"
	{te = p+1;}
	goto st252;
st252:
	if ( ++p == pe )
		goto _test_eof252;
case 252:
#line 1985 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr37;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 14u: goto tr37;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr37:
#line 1 "NONE"
	{te = p+1;}
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
#line 2018 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 5u: goto st0;
		case 6u: goto tr280;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	goto tr202;
tr280:
#line 1 "NONE"
	{te = p+1;}
	goto st254;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
#line 2038 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 3u: goto tr279;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st0;
	goto tr202;
tr209:
#line 1 "NONE"
	{te = p+1;}
	goto st255;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
#line 2059 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 2u: goto tr3;
		case 5u: goto tr19;
		case 6u: goto tr214;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto st1;
		case 16u: goto tr213;
	}
	goto tr202;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr37;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 13u: goto tr38;
		case 14u: goto tr37;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st4;
	goto tr0;
tr38:
#line 1 "NONE"
	{te = p+1;}
	goto st256;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
#line 2094 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr203;
		case 4u: goto tr204;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st35;
	goto tr202;
tr206:
#line 1 "NONE"
	{te = p+1;}
	goto st257;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
#line 2116 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr203;
		case 4u: goto tr204;
		case 5u: goto st36;
		case 6u: goto st35;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr38;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	goto tr202;
tr189:
#line 1 "NONE"
	{te = p+1;}
	goto st258;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
#line 2139 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr282;
		case 4u: goto tr283;
		case 5u: goto st73;
		case 6u: goto tr285;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr77;
		case 14u: goto tr288;
		case 17u: goto tr289;
	}
	goto tr281;
tr282:
#line 1 "NONE"
	{te = p+1;}
	goto st259;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
#line 2162 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr290;
		case 4u: goto tr283;
		case 5u: goto st72;
		case 6u: goto tr285;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr288;
		case 17u: goto tr289;
	}
	goto tr281;
tr290:
#line 1 "NONE"
	{te = p+1;}
	goto st260;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
#line 2184 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr283;
		case 5u: goto st72;
		case 6u: goto tr285;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr288;
		case 17u: goto tr289;
	}
	goto tr281;
tr283:
#line 1 "NONE"
	{te = p+1;}
	goto st261;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
#line 2205 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 5u: goto tr58;
		case 6u: goto tr293;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	goto tr281;
tr292:
#line 1 "NONE"
	{te = p+1;}
	goto st262;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
#line 2225 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr295;
		case 4u: goto tr296;
		case 5u: goto st71;
		case 6u: goto tr298;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr75;
		case 14u: goto tr299;
		case 17u: goto tr289;
	}
	goto tr281;
tr295:
#line 1 "NONE"
	{te = p+1;}
	goto st263;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
#line 2248 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr300;
		case 4u: goto tr296;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr299;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st70;
	goto tr281;
tr300:
#line 1 "NONE"
	{te = p+1;}
	goto st264;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
#line 2270 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr296;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr299;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st70;
	goto tr281;
tr296:
#line 1 "NONE"
	{te = p+1;}
	goto st265;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
#line 2291 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 5u: goto tr58;
		case 6u: goto tr303;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	goto tr281;
tr302:
#line 1 "NONE"
	{te = p+1;}
	goto st266;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
#line 2311 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr304;
		case 4u: goto tr305;
		case 5u: goto st69;
		case 6u: goto tr307;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr73;
		case 14u: goto tr308;
		case 17u: goto tr289;
	}
	goto tr281;
tr304:
#line 1 "NONE"
	{te = p+1;}
	goto st267;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
#line 2334 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr309;
		case 4u: goto tr305;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr308;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st68;
	goto tr281;
tr309:
#line 1 "NONE"
	{te = p+1;}
	goto st268;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
#line 2356 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr305;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr308;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st68;
	goto tr281;
tr305:
#line 1 "NONE"
	{te = p+1;}
	goto st269;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
#line 2377 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 5u: goto tr58;
		case 6u: goto tr312;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	goto tr281;
tr311:
#line 1 "NONE"
	{te = p+1;}
	goto st270;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
#line 2397 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr313;
		case 4u: goto tr314;
		case 5u: goto st67;
		case 6u: goto tr316;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr71;
		case 14u: goto tr317;
		case 17u: goto tr289;
	}
	goto tr281;
tr313:
#line 1 "NONE"
	{te = p+1;}
	goto st271;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
#line 2420 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr318;
		case 4u: goto tr314;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr317;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st66;
	goto tr281;
tr318:
#line 1 "NONE"
	{te = p+1;}
	goto st272;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
#line 2442 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr314;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr317;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st66;
	goto tr281;
tr314:
#line 1 "NONE"
	{te = p+1;}
	goto st273;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
#line 2463 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 5u: goto tr58;
		case 6u: goto tr321;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	goto tr281;
tr320:
#line 1 "NONE"
	{te = p+1;}
	goto st274;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
#line 2483 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr322;
		case 4u: goto tr323;
		case 5u: goto st65;
		case 6u: goto tr325;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr69;
		case 14u: goto tr326;
		case 17u: goto tr289;
	}
	goto tr281;
tr322:
#line 1 "NONE"
	{te = p+1;}
	goto st275;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
#line 2506 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr327;
		case 4u: goto tr323;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr326;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st64;
	goto tr281;
tr327:
#line 1 "NONE"
	{te = p+1;}
	goto st276;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
#line 2528 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr323;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr326;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st64;
	goto tr281;
tr323:
#line 1 "NONE"
	{te = p+1;}
	goto st277;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
#line 2549 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto tr58;
		case 6u: goto tr329;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr58:
#line 1 "NONE"
	{te = p+1;}
	goto st278;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
#line 2567 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( ( info[p].indic_category()) == 8u )
		goto st279;
	goto tr39;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st280;
		case 8u: goto st285;
		case 9u: goto st281;
		case 10u: goto st282;
	}
	goto tr281;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st281;
		case 10u: goto st282;
	}
	goto tr281;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
	if ( ( info[p].indic_category()) == 9u )
		goto tr333;
	goto tr281;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st281;
		case 10u: goto st283;
	}
	goto tr281;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st281;
		case 10u: goto st284;
	}
	goto tr281;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
	if ( ( info[p].indic_category()) == 9u )
		goto st281;
	goto tr281;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st280;
		case 9u: goto st281;
		case 10u: goto st282;
	}
	goto tr281;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr41;
		case 2u: goto tr42;
		case 16u: goto tr41;
	}
	goto tr39;
tr41:
#line 1 "NONE"
	{te = p+1;}
	goto st286;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
#line 2664 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr336;
		case 5u: goto st39;
		case 6u: goto tr338;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr43;
	}
	goto tr281;
tr336:
#line 1 "NONE"
	{te = p+1;}
	goto st287;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
#line 2683 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr42;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr42:
#line 1 "NONE"
	{te = p+1;}
	goto st288;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
#line 2701 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st279;
		case 13u: goto tr43;
	}
	goto tr39;
tr43:
#line 1 "NONE"
	{te = p+1;}
	goto st289;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
#line 2727 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr336;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr338:
#line 1 "NONE"
	{te = p+1;}
	goto st290;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
#line 2745 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr336;
		case 5u: goto st39;
		case 6u: goto st37;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr43;
	}
	goto tr281;
tr329:
#line 1 "NONE"
	{te = p+1;}
	goto st291;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
#line 2764 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr58;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st40;
	goto tr281;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr45;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( ( info[p].indic_category()) == 7u )
		goto tr45;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st42;
	goto tr39;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	if ( ( info[p].indic_category()) == 7u )
		goto tr45;
	goto tr39;
tr45:
#line 1 "NONE"
	{te = p+1;}
	goto st292;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
#line 2811 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr340;
		case 4u: goto tr67;
		case 5u: goto st43;
		case 6u: goto st61;
		case 7u: goto tr48;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr340:
#line 1 "NONE"
	{te = p+1;}
	goto st293;
st293:
	if ( ++p == pe )
		goto _test_eof293;
case 293:
#line 2832 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr67;
		case 5u: goto st43;
		case 6u: goto st61;
		case 7u: goto tr48;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr67:
#line 1 "NONE"
	{te = p+1;}
	goto st294;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
#line 2852 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr48;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st43;
	goto tr281;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr48;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st44;
	goto tr39;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( ( info[p].indic_category()) == 7u )
		goto tr48;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st45;
	goto tr39;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( ( info[p].indic_category()) == 7u )
		goto tr48;
	goto tr39;
tr48:
#line 1 "NONE"
	{te = p+1;}
	goto st295;
st295:
	if ( ++p == pe )
		goto _test_eof295;
case 295:
#line 2898 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr343;
		case 4u: goto tr64;
		case 5u: goto st46;
		case 6u: goto st58;
		case 7u: goto tr51;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr343:
#line 1 "NONE"
	{te = p+1;}
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
#line 2919 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr64;
		case 5u: goto st46;
		case 6u: goto st58;
		case 7u: goto tr51;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr64:
#line 1 "NONE"
	{te = p+1;}
	goto st297;
st297:
	if ( ++p == pe )
		goto _test_eof297;
case 297:
#line 2939 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr51;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st46;
	goto tr281;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr51;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st47;
	goto tr39;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( ( info[p].indic_category()) == 7u )
		goto tr51;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st48;
	goto tr39;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( ( info[p].indic_category()) == 7u )
		goto tr51;
	goto tr39;
tr51:
#line 1 "NONE"
	{te = p+1;}
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
#line 2985 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr346;
		case 4u: goto tr61;
		case 5u: goto st49;
		case 6u: goto st55;
		case 7u: goto tr54;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr346:
#line 1 "NONE"
	{te = p+1;}
	goto st299;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
#line 3006 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr61;
		case 5u: goto st49;
		case 6u: goto st55;
		case 7u: goto tr54;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr61:
#line 1 "NONE"
	{te = p+1;}
	goto st300;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
#line 3026 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr54;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st49;
	goto tr281;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr54;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st50;
	goto tr39;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( ( info[p].indic_category()) == 7u )
		goto tr54;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st51;
	goto tr39;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( ( info[p].indic_category()) == 7u )
		goto tr54;
	goto tr39;
tr54:
#line 1 "NONE"
	{te = p+1;}
	goto st301;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
#line 3072 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr349;
		case 4u: goto tr58;
		case 5u: goto st37;
		case 6u: goto st52;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr349:
#line 1 "NONE"
	{te = p+1;}
	goto st302;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
#line 3092 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr58;
		case 5u: goto st37;
		case 6u: goto st52;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st53;
		case 8u: goto st279;
	}
	goto tr39;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( ( info[p].indic_category()) == 6u )
		goto st54;
	goto tr39;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( ( info[p].indic_category()) == 16u )
		goto tr58;
	goto tr39;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st56;
		case 7u: goto tr54;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st50;
	goto tr39;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( ( info[p].indic_category()) == 6u )
		goto st57;
	goto tr39;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	if ( ( info[p].indic_category()) == 16u )
		goto tr61;
	goto tr39;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st59;
		case 7u: goto tr51;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st47;
	goto tr39;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( ( info[p].indic_category()) == 6u )
		goto st60;
	goto tr39;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( ( info[p].indic_category()) == 16u )
		goto tr64;
	goto tr39;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st62;
		case 7u: goto tr48;
		case 8u: goto st279;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st44;
	goto tr39;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	if ( ( info[p].indic_category()) == 6u )
		goto st63;
	goto tr39;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( ( info[p].indic_category()) == 16u )
		goto tr67;
	goto tr39;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr68;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr68;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr68:
#line 1 "NONE"
	{te = p+1;}
	goto st303;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
#line 3225 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st37;
		case 6u: goto tr351;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	goto tr281;
tr351:
#line 1 "NONE"
	{te = p+1;}
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
#line 3243 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr58;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr326:
#line 1 "NONE"
	{te = p+1;}
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
#line 3262 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr41;
		case 2u: goto tr42;
		case 5u: goto tr58;
		case 6u: goto tr329;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr41;
	}
	goto tr281;
tr289:
#line 1 "NONE"
	{te = p+1;}
	goto st306;
st306:
	if ( ++p == pe )
		goto _test_eof306;
case 306:
#line 3283 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr323;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr326;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st64;
	goto tr281;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr68;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 13u: goto tr69;
		case 14u: goto tr68;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr69:
#line 1 "NONE"
	{te = p+1;}
	goto st307;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
#line 3317 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr322;
		case 4u: goto tr323;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr326;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st64;
	goto tr281;
tr325:
#line 1 "NONE"
	{te = p+1;}
	goto st308;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
#line 3339 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr322;
		case 4u: goto tr323;
		case 5u: goto st65;
		case 6u: goto st64;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr69;
		case 14u: goto tr326;
		case 17u: goto tr289;
	}
	goto tr281;
tr321:
#line 1 "NONE"
	{te = p+1;}
	goto st309;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
#line 3362 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 3u: goto tr352;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st40;
	goto tr281;
tr352:
#line 1 "NONE"
	{te = p+1;}
	goto st310;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
#line 3384 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr70;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr70;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr70:
#line 1 "NONE"
	{te = p+1;}
	goto st311;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
#line 3417 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 5u: goto st37;
		case 6u: goto tr353;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	goto tr281;
tr353:
#line 1 "NONE"
	{te = p+1;}
	goto st312;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
#line 3437 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 3u: goto tr352;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr317:
#line 1 "NONE"
	{te = p+1;}
	goto st313;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
#line 3458 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr320;
		case 2u: goto tr42;
		case 5u: goto tr58;
		case 6u: goto tr321;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr320;
	}
	goto tr281;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr70;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 13u: goto tr71;
		case 14u: goto tr70;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr71:
#line 1 "NONE"
	{te = p+1;}
	goto st314;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
#line 3493 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr313;
		case 4u: goto tr314;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr317;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st66;
	goto tr281;
tr316:
#line 1 "NONE"
	{te = p+1;}
	goto st315;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
#line 3515 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr313;
		case 4u: goto tr314;
		case 5u: goto st67;
		case 6u: goto st66;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr71;
		case 14u: goto tr317;
		case 17u: goto tr289;
	}
	goto tr281;
tr312:
#line 1 "NONE"
	{te = p+1;}
	goto st316;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
#line 3538 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 3u: goto tr354;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st40;
	goto tr281;
tr354:
#line 1 "NONE"
	{te = p+1;}
	goto st317;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
#line 3560 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr72;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr72;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr72:
#line 1 "NONE"
	{te = p+1;}
	goto st318;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
#line 3593 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 5u: goto st37;
		case 6u: goto tr355;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	goto tr281;
tr355:
#line 1 "NONE"
	{te = p+1;}
	goto st319;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
#line 3613 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 3u: goto tr354;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr308:
#line 1 "NONE"
	{te = p+1;}
	goto st320;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
#line 3634 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr311;
		case 2u: goto tr42;
		case 5u: goto tr58;
		case 6u: goto tr312;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr311;
	}
	goto tr281;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr72;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 13u: goto tr73;
		case 14u: goto tr72;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr73:
#line 1 "NONE"
	{te = p+1;}
	goto st321;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
#line 3669 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr304;
		case 4u: goto tr305;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr308;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st68;
	goto tr281;
tr307:
#line 1 "NONE"
	{te = p+1;}
	goto st322;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
#line 3691 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr304;
		case 4u: goto tr305;
		case 5u: goto st69;
		case 6u: goto st68;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr73;
		case 14u: goto tr308;
		case 17u: goto tr289;
	}
	goto tr281;
tr303:
#line 1 "NONE"
	{te = p+1;}
	goto st323;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
#line 3714 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 3u: goto tr356;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st40;
	goto tr281;
tr356:
#line 1 "NONE"
	{te = p+1;}
	goto st324;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
#line 3736 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr74;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr74;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr74:
#line 1 "NONE"
	{te = p+1;}
	goto st325;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
#line 3769 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 5u: goto st37;
		case 6u: goto tr357;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	goto tr281;
tr357:
#line 1 "NONE"
	{te = p+1;}
	goto st326;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
#line 3789 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 3u: goto tr356;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr299:
#line 1 "NONE"
	{te = p+1;}
	goto st327;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
#line 3810 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr302;
		case 2u: goto tr42;
		case 5u: goto tr58;
		case 6u: goto tr303;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr302;
	}
	goto tr281;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr74;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 13u: goto tr75;
		case 14u: goto tr74;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr75:
#line 1 "NONE"
	{te = p+1;}
	goto st328;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
#line 3845 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr295;
		case 4u: goto tr296;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr299;
		case 17u: goto tr289;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st70;
	goto tr281;
tr298:
#line 1 "NONE"
	{te = p+1;}
	goto st329;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
#line 3867 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr295;
		case 4u: goto tr296;
		case 5u: goto st71;
		case 6u: goto st70;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 13u: goto tr75;
		case 14u: goto tr299;
		case 17u: goto tr289;
	}
	goto tr281;
tr293:
#line 1 "NONE"
	{te = p+1;}
	goto st330;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
#line 3890 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 3u: goto tr358;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st40;
	goto tr281;
tr358:
#line 1 "NONE"
	{te = p+1;}
	goto st331;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
#line 3912 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr76;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr76;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr76:
#line 1 "NONE"
	{te = p+1;}
	goto st332;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
#line 3945 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 5u: goto st37;
		case 6u: goto tr359;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	goto tr281;
tr359:
#line 1 "NONE"
	{te = p+1;}
	goto st333;
st333:
	if ( ++p == pe )
		goto _test_eof333;
case 333:
#line 3965 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 3u: goto tr358;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st37;
	goto tr281;
tr285:
#line 1 "NONE"
	{te = p+1;}
	goto st334;
st334:
	if ( ++p == pe )
		goto _test_eof334;
case 334:
#line 3986 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr76;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 14u: goto tr76;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr281;
tr288:
#line 1 "NONE"
	{te = p+1;}
	goto st335;
st335:
	if ( ++p == pe )
		goto _test_eof335;
case 335:
#line 4004 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr292;
		case 2u: goto tr42;
		case 5u: goto tr58;
		case 6u: goto tr293;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto st38;
		case 16u: goto tr292;
	}
	goto tr281;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr76;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 13u: goto tr77;
		case 14u: goto tr76;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st41;
	goto tr39;
tr77:
#line 1 "NONE"
	{te = p+1;}
	goto st336;
st336:
	if ( ++p == pe )
		goto _test_eof336;
case 336:
#line 4039 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr282;
		case 4u: goto tr283;
		case 5u: goto st72;
		case 6u: goto tr285;
		case 7u: goto tr45;
		case 8u: goto st279;
		case 9u: goto st281;
		case 10u: goto st282;
		case 14u: goto tr288;
		case 17u: goto tr289;
	}
	goto tr281;
tr190:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st337;
st337:
	if ( ++p == pe )
		goto _test_eof337;
case 337:
#line 4063 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr361;
		case 4u: goto tr191;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr197;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st109;
	goto tr360;
tr361:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st338;
st338:
	if ( ++p == pe )
		goto _test_eof338;
case 338:
#line 4087 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr191;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr197;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st109;
	goto tr360;
tr191:
#line 1 "NONE"
	{te = p+1;}
	goto st339;
st339:
	if ( ++p == pe )
		goto _test_eof339;
case 339:
#line 4108 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 5u: goto tr98;
		case 6u: goto tr364;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	goto tr360;
tr363:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st340;
st340:
	if ( ++p == pe )
		goto _test_eof340;
case 340:
#line 4130 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr366;
		case 4u: goto tr367;
		case 5u: goto st108;
		case 6u: goto tr369;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr115;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	goto tr360;
tr366:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st341;
st341:
	if ( ++p == pe )
		goto _test_eof341;
case 341:
#line 4155 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr371;
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st107;
	goto tr360;
tr371:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st342;
st342:
	if ( ++p == pe )
		goto _test_eof342;
case 342:
#line 4179 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st107;
	goto tr360;
tr367:
#line 1 "NONE"
	{te = p+1;}
	goto st343;
st343:
	if ( ++p == pe )
		goto _test_eof343;
case 343:
#line 4200 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 5u: goto tr98;
		case 6u: goto tr374;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	goto tr360;
tr373:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st344;
st344:
	if ( ++p == pe )
		goto _test_eof344;
case 344:
#line 4222 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr375;
		case 4u: goto tr376;
		case 5u: goto st106;
		case 6u: goto tr378;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr113;
		case 14u: goto tr379;
		case 17u: goto tr200;
	}
	goto tr360;
tr375:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st345;
st345:
	if ( ++p == pe )
		goto _test_eof345;
case 345:
#line 4247 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr380;
		case 4u: goto tr376;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr379;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st105;
	goto tr360;
tr380:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st346;
st346:
	if ( ++p == pe )
		goto _test_eof346;
case 346:
#line 4271 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr376;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr379;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st105;
	goto tr360;
tr376:
#line 1 "NONE"
	{te = p+1;}
	goto st347;
st347:
	if ( ++p == pe )
		goto _test_eof347;
case 347:
#line 4292 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 5u: goto tr98;
		case 6u: goto tr383;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	goto tr360;
tr382:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st348;
st348:
	if ( ++p == pe )
		goto _test_eof348;
case 348:
#line 4314 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr384;
		case 4u: goto tr385;
		case 5u: goto st104;
		case 6u: goto tr387;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr111;
		case 14u: goto tr388;
		case 17u: goto tr200;
	}
	goto tr360;
tr384:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st349;
st349:
	if ( ++p == pe )
		goto _test_eof349;
case 349:
#line 4339 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr389;
		case 4u: goto tr385;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr388;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st103;
	goto tr360;
tr389:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st350;
st350:
	if ( ++p == pe )
		goto _test_eof350;
case 350:
#line 4363 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr385;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr388;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st103;
	goto tr360;
tr385:
#line 1 "NONE"
	{te = p+1;}
	goto st351;
st351:
	if ( ++p == pe )
		goto _test_eof351;
case 351:
#line 4384 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 5u: goto tr98;
		case 6u: goto tr392;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	goto tr360;
tr391:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st352;
st352:
	if ( ++p == pe )
		goto _test_eof352;
case 352:
#line 4406 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr393;
		case 4u: goto tr394;
		case 5u: goto st102;
		case 6u: goto tr396;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr109;
		case 14u: goto tr397;
		case 17u: goto tr200;
	}
	goto tr360;
tr393:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st353;
st353:
	if ( ++p == pe )
		goto _test_eof353;
case 353:
#line 4431 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr398;
		case 4u: goto tr394;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr397;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st101;
	goto tr360;
tr398:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st354;
st354:
	if ( ++p == pe )
		goto _test_eof354;
case 354:
#line 4455 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr394;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr397;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st101;
	goto tr360;
tr394:
#line 1 "NONE"
	{te = p+1;}
	goto st355;
st355:
	if ( ++p == pe )
		goto _test_eof355;
case 355:
#line 4476 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto tr98;
		case 6u: goto tr400;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr98:
#line 1 "NONE"
	{te = p+1;}
	goto st356;
st356:
	if ( ++p == pe )
		goto _test_eof356;
case 356:
#line 4494 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( ( info[p].indic_category()) == 8u )
		goto st357;
	goto tr78;
st357:
	if ( ++p == pe )
		goto _test_eof357;
case 357:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st358;
		case 8u: goto st363;
		case 9u: goto st359;
		case 10u: goto st360;
	}
	goto tr360;
st358:
	if ( ++p == pe )
		goto _test_eof358;
case 358:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st359;
		case 10u: goto st360;
	}
	goto tr360;
st359:
	if ( ++p == pe )
		goto _test_eof359;
case 359:
	if ( ( info[p].indic_category()) == 9u )
		goto tr404;
	goto tr360;
st360:
	if ( ++p == pe )
		goto _test_eof360;
case 360:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st359;
		case 10u: goto st361;
	}
	goto tr360;
st361:
	if ( ++p == pe )
		goto _test_eof361;
case 361:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st359;
		case 10u: goto st362;
	}
	goto tr360;
st362:
	if ( ++p == pe )
		goto _test_eof362;
case 362:
	if ( ( info[p].indic_category()) == 9u )
		goto st359;
	goto tr360;
st363:
	if ( ++p == pe )
		goto _test_eof363;
case 363:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st358;
		case 9u: goto st359;
		case 10u: goto st360;
	}
	goto tr360;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr80;
		case 2u: goto tr81;
		case 16u: goto tr80;
	}
	goto tr78;
tr80:
#line 1 "NONE"
	{te = p+1;}
	goto st364;
st364:
	if ( ++p == pe )
		goto _test_eof364;
case 364:
#line 4591 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr407;
		case 5u: goto st76;
		case 6u: goto tr409;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr82;
	}
	goto tr360;
tr407:
#line 1 "NONE"
	{te = p+1;}
	goto st365;
st365:
	if ( ++p == pe )
		goto _test_eof365;
case 365:
#line 4610 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr81;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr81:
#line 1 "NONE"
	{te = p+1;}
	goto st366;
st366:
	if ( ++p == pe )
		goto _test_eof366;
case 366:
#line 4628 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st357;
		case 13u: goto tr82;
	}
	goto tr78;
tr82:
#line 1 "NONE"
	{te = p+1;}
	goto st367;
st367:
	if ( ++p == pe )
		goto _test_eof367;
case 367:
#line 4654 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr407;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr409:
#line 1 "NONE"
	{te = p+1;}
	goto st368;
st368:
	if ( ++p == pe )
		goto _test_eof368;
case 368:
#line 4672 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr407;
		case 5u: goto st76;
		case 6u: goto st74;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr82;
	}
	goto tr360;
tr400:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st369;
st369:
	if ( ++p == pe )
		goto _test_eof369;
case 369:
#line 4693 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr98;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st77;
	goto tr360;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr84;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	if ( ( info[p].indic_category()) == 7u )
		goto tr84;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st79;
	goto tr85;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	if ( ( info[p].indic_category()) == 7u )
		goto tr84;
	goto tr85;
tr84:
#line 1 "NONE"
	{te = p+1;}
	goto st370;
st370:
	if ( ++p == pe )
		goto _test_eof370;
case 370:
#line 4740 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr411;
		case 4u: goto tr107;
		case 5u: goto st80;
		case 6u: goto st98;
		case 7u: goto tr88;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr411:
#line 1 "NONE"
	{te = p+1;}
	goto st371;
st371:
	if ( ++p == pe )
		goto _test_eof371;
case 371:
#line 4761 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr107;
		case 5u: goto st80;
		case 6u: goto st98;
		case 7u: goto tr88;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr107:
#line 1 "NONE"
	{te = p+1;}
	goto st372;
st372:
	if ( ++p == pe )
		goto _test_eof372;
case 372:
#line 4781 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr88;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st80;
	goto tr360;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr88;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st81;
	goto tr78;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	if ( ( info[p].indic_category()) == 7u )
		goto tr88;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st82;
	goto tr78;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	if ( ( info[p].indic_category()) == 7u )
		goto tr88;
	goto tr78;
tr88:
#line 1 "NONE"
	{te = p+1;}
	goto st373;
st373:
	if ( ++p == pe )
		goto _test_eof373;
case 373:
#line 4827 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr414;
		case 4u: goto tr104;
		case 5u: goto st83;
		case 6u: goto st95;
		case 7u: goto tr91;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr414:
#line 1 "NONE"
	{te = p+1;}
	goto st374;
st374:
	if ( ++p == pe )
		goto _test_eof374;
case 374:
#line 4848 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr104;
		case 5u: goto st83;
		case 6u: goto st95;
		case 7u: goto tr91;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr104:
#line 1 "NONE"
	{te = p+1;}
	goto st375;
st375:
	if ( ++p == pe )
		goto _test_eof375;
case 375:
#line 4868 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr91;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st83;
	goto tr360;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr91;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st84;
	goto tr78;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	if ( ( info[p].indic_category()) == 7u )
		goto tr91;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st85;
	goto tr78;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	if ( ( info[p].indic_category()) == 7u )
		goto tr91;
	goto tr78;
tr91:
#line 1 "NONE"
	{te = p+1;}
	goto st376;
st376:
	if ( ++p == pe )
		goto _test_eof376;
case 376:
#line 4914 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr417;
		case 4u: goto tr101;
		case 5u: goto st86;
		case 6u: goto st92;
		case 7u: goto tr94;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr417:
#line 1 "NONE"
	{te = p+1;}
	goto st377;
st377:
	if ( ++p == pe )
		goto _test_eof377;
case 377:
#line 4935 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr101;
		case 5u: goto st86;
		case 6u: goto st92;
		case 7u: goto tr94;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr101:
#line 1 "NONE"
	{te = p+1;}
	goto st378;
st378:
	if ( ++p == pe )
		goto _test_eof378;
case 378:
#line 4955 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr94;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st86;
	goto tr360;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr94;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st87;
	goto tr78;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	if ( ( info[p].indic_category()) == 7u )
		goto tr94;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st88;
	goto tr78;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	if ( ( info[p].indic_category()) == 7u )
		goto tr94;
	goto tr78;
tr94:
#line 1 "NONE"
	{te = p+1;}
	goto st379;
st379:
	if ( ++p == pe )
		goto _test_eof379;
case 379:
#line 5001 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr420;
		case 4u: goto tr98;
		case 5u: goto st74;
		case 6u: goto st89;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr420:
#line 1 "NONE"
	{te = p+1;}
	goto st380;
st380:
	if ( ++p == pe )
		goto _test_eof380;
case 380:
#line 5021 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr98;
		case 5u: goto st74;
		case 6u: goto st89;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st90;
		case 8u: goto st357;
	}
	goto tr78;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	if ( ( info[p].indic_category()) == 6u )
		goto st91;
	goto tr78;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	if ( ( info[p].indic_category()) == 16u )
		goto tr98;
	goto tr78;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st93;
		case 7u: goto tr94;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st87;
	goto tr78;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	if ( ( info[p].indic_category()) == 6u )
		goto st94;
	goto tr78;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	if ( ( info[p].indic_category()) == 16u )
		goto tr101;
	goto tr78;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st96;
		case 7u: goto tr91;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st84;
	goto tr78;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	if ( ( info[p].indic_category()) == 6u )
		goto st97;
	goto tr78;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	if ( ( info[p].indic_category()) == 16u )
		goto tr104;
	goto tr78;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st99;
		case 7u: goto tr88;
		case 8u: goto st357;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st81;
	goto tr78;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	if ( ( info[p].indic_category()) == 6u )
		goto st100;
	goto tr78;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	if ( ( info[p].indic_category()) == 16u )
		goto tr107;
	goto tr78;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr108;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr108;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr108:
#line 1 "NONE"
	{te = p+1;}
	goto st381;
st381:
	if ( ++p == pe )
		goto _test_eof381;
case 381:
#line 5154 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st74;
		case 6u: goto tr422;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	goto tr360;
tr422:
#line 1 "NONE"
	{te = p+1;}
	goto st382;
st382:
	if ( ++p == pe )
		goto _test_eof382;
case 382:
#line 5172 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr98;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr397:
#line 1 "NONE"
	{te = p+1;}
	goto st383;
st383:
	if ( ++p == pe )
		goto _test_eof383;
case 383:
#line 5191 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr80;
		case 2u: goto tr81;
		case 5u: goto tr98;
		case 6u: goto tr400;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr80;
	}
	goto tr360;
tr200:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st384;
st384:
	if ( ++p == pe )
		goto _test_eof384;
case 384:
#line 5214 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr394;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr397;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st101;
	goto tr360;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr108;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr109;
		case 14u: goto tr108;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr109:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st385;
st385:
	if ( ++p == pe )
		goto _test_eof385;
case 385:
#line 5250 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr393;
		case 4u: goto tr394;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr397;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st101;
	goto tr360;
tr396:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st386;
st386:
	if ( ++p == pe )
		goto _test_eof386;
case 386:
#line 5274 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr393;
		case 4u: goto tr394;
		case 5u: goto st102;
		case 6u: goto st101;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr109;
		case 14u: goto tr397;
		case 17u: goto tr200;
	}
	goto tr360;
tr392:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st387;
st387:
	if ( ++p == pe )
		goto _test_eof387;
case 387:
#line 5299 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 3u: goto tr423;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st77;
	goto tr360;
tr423:
#line 1 "NONE"
	{te = p+1;}
	goto st388;
st388:
	if ( ++p == pe )
		goto _test_eof388;
case 388:
#line 5321 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr110;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr110;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr110:
#line 1 "NONE"
	{te = p+1;}
	goto st389;
st389:
	if ( ++p == pe )
		goto _test_eof389;
case 389:
#line 5354 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 5u: goto st74;
		case 6u: goto tr424;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	goto tr360;
tr424:
#line 1 "NONE"
	{te = p+1;}
	goto st390;
st390:
	if ( ++p == pe )
		goto _test_eof390;
case 390:
#line 5374 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 3u: goto tr423;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr388:
#line 1 "NONE"
	{te = p+1;}
	goto st391;
st391:
	if ( ++p == pe )
		goto _test_eof391;
case 391:
#line 5395 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr391;
		case 2u: goto tr81;
		case 5u: goto tr98;
		case 6u: goto tr392;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr391;
	}
	goto tr360;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr110;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr111;
		case 14u: goto tr110;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr111:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st392;
st392:
	if ( ++p == pe )
		goto _test_eof392;
case 392:
#line 5432 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr384;
		case 4u: goto tr385;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr388;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st103;
	goto tr360;
tr387:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st393;
st393:
	if ( ++p == pe )
		goto _test_eof393;
case 393:
#line 5456 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr384;
		case 4u: goto tr385;
		case 5u: goto st104;
		case 6u: goto st103;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr111;
		case 14u: goto tr388;
		case 17u: goto tr200;
	}
	goto tr360;
tr383:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st394;
st394:
	if ( ++p == pe )
		goto _test_eof394;
case 394:
#line 5481 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 3u: goto tr425;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st77;
	goto tr360;
tr425:
#line 1 "NONE"
	{te = p+1;}
	goto st395;
st395:
	if ( ++p == pe )
		goto _test_eof395;
case 395:
#line 5503 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr112;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr112;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr112:
#line 1 "NONE"
	{te = p+1;}
	goto st396;
st396:
	if ( ++p == pe )
		goto _test_eof396;
case 396:
#line 5536 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 5u: goto st74;
		case 6u: goto tr426;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	goto tr360;
tr426:
#line 1 "NONE"
	{te = p+1;}
	goto st397;
st397:
	if ( ++p == pe )
		goto _test_eof397;
case 397:
#line 5556 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 3u: goto tr425;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr379:
#line 1 "NONE"
	{te = p+1;}
	goto st398;
st398:
	if ( ++p == pe )
		goto _test_eof398;
case 398:
#line 5577 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr382;
		case 2u: goto tr81;
		case 5u: goto tr98;
		case 6u: goto tr383;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr382;
	}
	goto tr360;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr112;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr113;
		case 14u: goto tr112;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr113:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st399;
st399:
	if ( ++p == pe )
		goto _test_eof399;
case 399:
#line 5614 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr375;
		case 4u: goto tr376;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr379;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st105;
	goto tr360;
tr378:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st400;
st400:
	if ( ++p == pe )
		goto _test_eof400;
case 400:
#line 5638 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr375;
		case 4u: goto tr376;
		case 5u: goto st106;
		case 6u: goto st105;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr113;
		case 14u: goto tr379;
		case 17u: goto tr200;
	}
	goto tr360;
tr374:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st401;
st401:
	if ( ++p == pe )
		goto _test_eof401;
case 401:
#line 5663 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 3u: goto tr427;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st77;
	goto tr360;
tr427:
#line 1 "NONE"
	{te = p+1;}
	goto st402;
st402:
	if ( ++p == pe )
		goto _test_eof402;
case 402:
#line 5685 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr114;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr114;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr114:
#line 1 "NONE"
	{te = p+1;}
	goto st403;
st403:
	if ( ++p == pe )
		goto _test_eof403;
case 403:
#line 5718 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 5u: goto st74;
		case 6u: goto tr428;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	goto tr360;
tr428:
#line 1 "NONE"
	{te = p+1;}
	goto st404;
st404:
	if ( ++p == pe )
		goto _test_eof404;
case 404:
#line 5738 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 3u: goto tr427;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr370:
#line 1 "NONE"
	{te = p+1;}
	goto st405;
st405:
	if ( ++p == pe )
		goto _test_eof405;
case 405:
#line 5759 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr373;
		case 2u: goto tr81;
		case 5u: goto tr98;
		case 6u: goto tr374;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr373;
	}
	goto tr360;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr114;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr115;
		case 14u: goto tr114;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr115:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st406;
st406:
	if ( ++p == pe )
		goto _test_eof406;
case 406:
#line 5796 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr366;
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st107;
	goto tr360;
tr369:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st407;
st407:
	if ( ++p == pe )
		goto _test_eof407;
case 407:
#line 5820 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr366;
		case 4u: goto tr367;
		case 5u: goto st108;
		case 6u: goto st107;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr115;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	goto tr360;
tr364:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st408;
st408:
	if ( ++p == pe )
		goto _test_eof408;
case 408:
#line 5845 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 3u: goto tr429;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st77;
	goto tr360;
tr429:
#line 1 "NONE"
	{te = p+1;}
	goto st409;
st409:
	if ( ++p == pe )
		goto _test_eof409;
case 409:
#line 5867 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr116;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr116;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr116:
#line 1 "NONE"
	{te = p+1;}
	goto st410;
st410:
	if ( ++p == pe )
		goto _test_eof410;
case 410:
#line 5900 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 5u: goto st74;
		case 6u: goto tr430;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	goto tr360;
tr430:
#line 1 "NONE"
	{te = p+1;}
	goto st411;
st411:
	if ( ++p == pe )
		goto _test_eof411;
case 411:
#line 5920 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 3u: goto tr429;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st74;
	goto tr360;
tr197:
#line 1 "NONE"
	{te = p+1;}
	goto st412;
st412:
	if ( ++p == pe )
		goto _test_eof412;
case 412:
#line 5941 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr363;
		case 2u: goto tr81;
		case 5u: goto tr98;
		case 6u: goto tr364;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr363;
	}
	goto tr360;
tr192:
#line 1 "NONE"
	{te = p+1;}
#line 92 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 6;}
	goto st413;
st413:
	if ( ++p == pe )
		goto _test_eof413;
case 413:
#line 5964 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr116;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr156;
		case 14u: goto tr116;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr431;
tr156:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st414;
st414:
	if ( ++p == pe )
		goto _test_eof414;
case 414:
#line 5985 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr190;
		case 4u: goto tr191;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto tr197;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st109;
	goto tr360;
tr193:
#line 1 "NONE"
	{te = p+1;}
#line 92 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 6;}
	goto st415;
st415:
	if ( ++p == pe )
		goto _test_eof415;
case 415:
#line 6009 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr116;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 14u: goto tr116;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr431;
tr196:
#line 1 "NONE"
	{te = p+1;}
	goto st416;
st416:
	if ( ++p == pe )
		goto _test_eof416;
case 416:
#line 6027 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr433;
		case 4u: goto tr434;
		case 5u: goto st146;
		case 6u: goto st145;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr155;
		case 14u: goto tr439;
		case 17u: goto tr440;
	}
	goto tr432;
tr433:
#line 1 "NONE"
	{te = p+1;}
	goto st417;
st417:
	if ( ++p == pe )
		goto _test_eof417;
case 417:
#line 6050 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr441;
		case 4u: goto tr434;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr439;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st145;
	goto tr432;
tr441:
#line 1 "NONE"
	{te = p+1;}
	goto st418;
st418:
	if ( ++p == pe )
		goto _test_eof418;
case 418:
#line 6072 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr434;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr439;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st145;
	goto tr432;
tr434:
#line 1 "NONE"
	{te = p+1;}
	goto st419;
st419:
	if ( ++p == pe )
		goto _test_eof419;
case 419:
#line 6093 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 5u: goto tr136;
		case 6u: goto tr443;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	goto tr432;
tr442:
#line 1 "NONE"
	{te = p+1;}
	goto st420;
st420:
	if ( ++p == pe )
		goto _test_eof420;
case 420:
#line 6113 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr445;
		case 4u: goto tr446;
		case 5u: goto st144;
		case 6u: goto tr448;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr153;
		case 14u: goto tr449;
		case 17u: goto tr440;
	}
	goto tr432;
tr445:
#line 1 "NONE"
	{te = p+1;}
	goto st421;
st421:
	if ( ++p == pe )
		goto _test_eof421;
case 421:
#line 6136 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr450;
		case 4u: goto tr446;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr449;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st143;
	goto tr432;
tr450:
#line 1 "NONE"
	{te = p+1;}
	goto st422;
st422:
	if ( ++p == pe )
		goto _test_eof422;
case 422:
#line 6158 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr446;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr449;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st143;
	goto tr432;
tr446:
#line 1 "NONE"
	{te = p+1;}
	goto st423;
st423:
	if ( ++p == pe )
		goto _test_eof423;
case 423:
#line 6179 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 5u: goto tr136;
		case 6u: goto tr453;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	goto tr432;
tr452:
#line 1 "NONE"
	{te = p+1;}
	goto st424;
st424:
	if ( ++p == pe )
		goto _test_eof424;
case 424:
#line 6199 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr454;
		case 4u: goto tr455;
		case 5u: goto st142;
		case 6u: goto tr457;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr151;
		case 14u: goto tr458;
		case 17u: goto tr440;
	}
	goto tr432;
tr454:
#line 1 "NONE"
	{te = p+1;}
	goto st425;
st425:
	if ( ++p == pe )
		goto _test_eof425;
case 425:
#line 6222 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr459;
		case 4u: goto tr455;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr458;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st141;
	goto tr432;
tr459:
#line 1 "NONE"
	{te = p+1;}
	goto st426;
st426:
	if ( ++p == pe )
		goto _test_eof426;
case 426:
#line 6244 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr455;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr458;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st141;
	goto tr432;
tr455:
#line 1 "NONE"
	{te = p+1;}
	goto st427;
st427:
	if ( ++p == pe )
		goto _test_eof427;
case 427:
#line 6265 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 5u: goto tr136;
		case 6u: goto tr462;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	goto tr432;
tr461:
#line 1 "NONE"
	{te = p+1;}
	goto st428;
st428:
	if ( ++p == pe )
		goto _test_eof428;
case 428:
#line 6285 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr463;
		case 4u: goto tr464;
		case 5u: goto st140;
		case 6u: goto tr466;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr149;
		case 14u: goto tr467;
		case 17u: goto tr440;
	}
	goto tr432;
tr463:
#line 1 "NONE"
	{te = p+1;}
	goto st429;
st429:
	if ( ++p == pe )
		goto _test_eof429;
case 429:
#line 6308 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr468;
		case 4u: goto tr464;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr467;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st139;
	goto tr432;
tr468:
#line 1 "NONE"
	{te = p+1;}
	goto st430;
st430:
	if ( ++p == pe )
		goto _test_eof430;
case 430:
#line 6330 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr464;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr467;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st139;
	goto tr432;
tr464:
#line 1 "NONE"
	{te = p+1;}
	goto st431;
st431:
	if ( ++p == pe )
		goto _test_eof431;
case 431:
#line 6351 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 5u: goto tr136;
		case 6u: goto tr471;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	goto tr432;
tr470:
#line 1 "NONE"
	{te = p+1;}
	goto st432;
st432:
	if ( ++p == pe )
		goto _test_eof432;
case 432:
#line 6371 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr472;
		case 4u: goto tr473;
		case 5u: goto st138;
		case 6u: goto tr475;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr147;
		case 14u: goto tr476;
		case 17u: goto tr440;
	}
	goto tr432;
tr472:
#line 1 "NONE"
	{te = p+1;}
	goto st433;
st433:
	if ( ++p == pe )
		goto _test_eof433;
case 433:
#line 6394 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr477;
		case 4u: goto tr473;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr476;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st137;
	goto tr432;
tr477:
#line 1 "NONE"
	{te = p+1;}
	goto st434;
st434:
	if ( ++p == pe )
		goto _test_eof434;
case 434:
#line 6416 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr473;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr476;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st137;
	goto tr432;
tr473:
#line 1 "NONE"
	{te = p+1;}
	goto st435;
st435:
	if ( ++p == pe )
		goto _test_eof435;
case 435:
#line 6437 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto tr136;
		case 6u: goto tr479;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr136:
#line 1 "NONE"
	{te = p+1;}
	goto st436;
st436:
	if ( ++p == pe )
		goto _test_eof436;
case 436:
#line 6455 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	if ( ( info[p].indic_category()) == 8u )
		goto st437;
	goto tr117;
st437:
	if ( ++p == pe )
		goto _test_eof437;
case 437:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st438;
		case 8u: goto st443;
		case 9u: goto st439;
		case 10u: goto st440;
	}
	goto tr432;
st438:
	if ( ++p == pe )
		goto _test_eof438;
case 438:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st439;
		case 10u: goto st440;
	}
	goto tr432;
st439:
	if ( ++p == pe )
		goto _test_eof439;
case 439:
	if ( ( info[p].indic_category()) == 9u )
		goto tr483;
	goto tr432;
st440:
	if ( ++p == pe )
		goto _test_eof440;
case 440:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st439;
		case 10u: goto st441;
	}
	goto tr432;
st441:
	if ( ++p == pe )
		goto _test_eof441;
case 441:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st439;
		case 10u: goto st442;
	}
	goto tr432;
st442:
	if ( ++p == pe )
		goto _test_eof442;
case 442:
	if ( ( info[p].indic_category()) == 9u )
		goto st439;
	goto tr432;
st443:
	if ( ++p == pe )
		goto _test_eof443;
case 443:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st438;
		case 9u: goto st439;
		case 10u: goto st440;
	}
	goto tr432;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr119;
		case 2u: goto tr120;
		case 16u: goto tr119;
	}
	goto tr117;
tr119:
#line 1 "NONE"
	{te = p+1;}
	goto st444;
st444:
	if ( ++p == pe )
		goto _test_eof444;
case 444:
#line 6552 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr486;
		case 5u: goto st112;
		case 6u: goto tr488;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr121;
	}
	goto tr432;
tr486:
#line 1 "NONE"
	{te = p+1;}
	goto st445;
st445:
	if ( ++p == pe )
		goto _test_eof445;
case 445:
#line 6571 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr120;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr120:
#line 1 "NONE"
	{te = p+1;}
	goto st446;
st446:
	if ( ++p == pe )
		goto _test_eof446;
case 446:
#line 6589 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st437;
		case 13u: goto tr121;
	}
	goto tr117;
tr121:
#line 1 "NONE"
	{te = p+1;}
	goto st447;
st447:
	if ( ++p == pe )
		goto _test_eof447;
case 447:
#line 6615 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr486;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr488:
#line 1 "NONE"
	{te = p+1;}
	goto st448;
st448:
	if ( ++p == pe )
		goto _test_eof448;
case 448:
#line 6633 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr486;
		case 5u: goto st112;
		case 6u: goto st110;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr121;
	}
	goto tr432;
tr479:
#line 1 "NONE"
	{te = p+1;}
	goto st449;
st449:
	if ( ++p == pe )
		goto _test_eof449;
case 449:
#line 6652 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr136;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st113;
	goto tr432;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr123;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	if ( ( info[p].indic_category()) == 7u )
		goto tr123;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st115;
	goto tr117;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	if ( ( info[p].indic_category()) == 7u )
		goto tr123;
	goto tr117;
tr123:
#line 1 "NONE"
	{te = p+1;}
	goto st450;
st450:
	if ( ++p == pe )
		goto _test_eof450;
case 450:
#line 6699 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr490;
		case 4u: goto tr145;
		case 5u: goto st116;
		case 6u: goto st134;
		case 7u: goto tr126;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr490:
#line 1 "NONE"
	{te = p+1;}
	goto st451;
st451:
	if ( ++p == pe )
		goto _test_eof451;
case 451:
#line 6720 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr145;
		case 5u: goto st116;
		case 6u: goto st134;
		case 7u: goto tr126;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr145:
#line 1 "NONE"
	{te = p+1;}
	goto st452;
st452:
	if ( ++p == pe )
		goto _test_eof452;
case 452:
#line 6740 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr126;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st116;
	goto tr432;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr126;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st117;
	goto tr117;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	if ( ( info[p].indic_category()) == 7u )
		goto tr126;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st118;
	goto tr117;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	if ( ( info[p].indic_category()) == 7u )
		goto tr126;
	goto tr117;
tr126:
#line 1 "NONE"
	{te = p+1;}
	goto st453;
st453:
	if ( ++p == pe )
		goto _test_eof453;
case 453:
#line 6786 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr493;
		case 4u: goto tr142;
		case 5u: goto st119;
		case 6u: goto st131;
		case 7u: goto tr129;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr493:
#line 1 "NONE"
	{te = p+1;}
	goto st454;
st454:
	if ( ++p == pe )
		goto _test_eof454;
case 454:
#line 6807 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr142;
		case 5u: goto st119;
		case 6u: goto st131;
		case 7u: goto tr129;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr142:
#line 1 "NONE"
	{te = p+1;}
	goto st455;
st455:
	if ( ++p == pe )
		goto _test_eof455;
case 455:
#line 6827 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr129;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st119;
	goto tr432;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr129;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st120;
	goto tr117;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	if ( ( info[p].indic_category()) == 7u )
		goto tr129;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st121;
	goto tr117;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	if ( ( info[p].indic_category()) == 7u )
		goto tr129;
	goto tr117;
tr129:
#line 1 "NONE"
	{te = p+1;}
	goto st456;
st456:
	if ( ++p == pe )
		goto _test_eof456;
case 456:
#line 6873 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr496;
		case 4u: goto tr139;
		case 5u: goto st122;
		case 6u: goto st128;
		case 7u: goto tr132;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr496:
#line 1 "NONE"
	{te = p+1;}
	goto st457;
st457:
	if ( ++p == pe )
		goto _test_eof457;
case 457:
#line 6894 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr139;
		case 5u: goto st122;
		case 6u: goto st128;
		case 7u: goto tr132;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr139:
#line 1 "NONE"
	{te = p+1;}
	goto st458;
st458:
	if ( ++p == pe )
		goto _test_eof458;
case 458:
#line 6914 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr132;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st122;
	goto tr432;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr132;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st123;
	goto tr117;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	if ( ( info[p].indic_category()) == 7u )
		goto tr132;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st124;
	goto tr117;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	if ( ( info[p].indic_category()) == 7u )
		goto tr132;
	goto tr117;
tr132:
#line 1 "NONE"
	{te = p+1;}
	goto st459;
st459:
	if ( ++p == pe )
		goto _test_eof459;
case 459:
#line 6960 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr499;
		case 4u: goto tr136;
		case 5u: goto st110;
		case 6u: goto st125;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr499:
#line 1 "NONE"
	{te = p+1;}
	goto st460;
st460:
	if ( ++p == pe )
		goto _test_eof460;
case 460:
#line 6980 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr136;
		case 5u: goto st110;
		case 6u: goto st125;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st126;
		case 8u: goto st437;
	}
	goto tr117;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	if ( ( info[p].indic_category()) == 6u )
		goto st127;
	goto tr117;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	if ( ( info[p].indic_category()) == 16u )
		goto tr136;
	goto tr117;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st129;
		case 7u: goto tr132;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st123;
	goto tr117;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	if ( ( info[p].indic_category()) == 6u )
		goto st130;
	goto tr117;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	if ( ( info[p].indic_category()) == 16u )
		goto tr139;
	goto tr117;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st132;
		case 7u: goto tr129;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st120;
	goto tr117;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	if ( ( info[p].indic_category()) == 6u )
		goto st133;
	goto tr117;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	if ( ( info[p].indic_category()) == 16u )
		goto tr142;
	goto tr117;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st135;
		case 7u: goto tr126;
		case 8u: goto st437;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st117;
	goto tr117;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	if ( ( info[p].indic_category()) == 6u )
		goto st136;
	goto tr117;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	if ( ( info[p].indic_category()) == 16u )
		goto tr145;
	goto tr117;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr146;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 14u: goto tr146;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr146:
#line 1 "NONE"
	{te = p+1;}
	goto st461;
st461:
	if ( ++p == pe )
		goto _test_eof461;
case 461:
#line 7113 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st110;
		case 6u: goto tr501;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	goto tr432;
tr501:
#line 1 "NONE"
	{te = p+1;}
	goto st462;
st462:
	if ( ++p == pe )
		goto _test_eof462;
case 462:
#line 7131 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr136;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr476:
#line 1 "NONE"
	{te = p+1;}
	goto st463;
st463:
	if ( ++p == pe )
		goto _test_eof463;
case 463:
#line 7150 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr119;
		case 2u: goto tr120;
		case 5u: goto tr136;
		case 6u: goto tr479;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr119;
	}
	goto tr432;
tr440:
#line 1 "NONE"
	{te = p+1;}
	goto st464;
st464:
	if ( ++p == pe )
		goto _test_eof464;
case 464:
#line 7171 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr473;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr476;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st137;
	goto tr432;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr146;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 13u: goto tr147;
		case 14u: goto tr146;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr147:
#line 1 "NONE"
	{te = p+1;}
	goto st465;
st465:
	if ( ++p == pe )
		goto _test_eof465;
case 465:
#line 7205 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr472;
		case 4u: goto tr473;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr476;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st137;
	goto tr432;
tr475:
#line 1 "NONE"
	{te = p+1;}
	goto st466;
st466:
	if ( ++p == pe )
		goto _test_eof466;
case 466:
#line 7227 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr472;
		case 4u: goto tr473;
		case 5u: goto st138;
		case 6u: goto st137;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr147;
		case 14u: goto tr476;
		case 17u: goto tr440;
	}
	goto tr432;
tr471:
#line 1 "NONE"
	{te = p+1;}
	goto st467;
st467:
	if ( ++p == pe )
		goto _test_eof467;
case 467:
#line 7250 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 3u: goto tr502;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st113;
	goto tr432;
tr502:
#line 1 "NONE"
	{te = p+1;}
	goto st468;
st468:
	if ( ++p == pe )
		goto _test_eof468;
case 468:
#line 7272 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr148;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 14u: goto tr148;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr148:
#line 1 "NONE"
	{te = p+1;}
	goto st469;
st469:
	if ( ++p == pe )
		goto _test_eof469;
case 469:
#line 7305 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 5u: goto st110;
		case 6u: goto tr503;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	goto tr432;
tr503:
#line 1 "NONE"
	{te = p+1;}
	goto st470;
st470:
	if ( ++p == pe )
		goto _test_eof470;
case 470:
#line 7325 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 3u: goto tr502;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr467:
#line 1 "NONE"
	{te = p+1;}
	goto st471;
st471:
	if ( ++p == pe )
		goto _test_eof471;
case 471:
#line 7346 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr470;
		case 2u: goto tr120;
		case 5u: goto tr136;
		case 6u: goto tr471;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr470;
	}
	goto tr432;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr148;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 13u: goto tr149;
		case 14u: goto tr148;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr149:
#line 1 "NONE"
	{te = p+1;}
	goto st472;
st472:
	if ( ++p == pe )
		goto _test_eof472;
case 472:
#line 7381 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr463;
		case 4u: goto tr464;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr467;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st139;
	goto tr432;
tr466:
#line 1 "NONE"
	{te = p+1;}
	goto st473;
st473:
	if ( ++p == pe )
		goto _test_eof473;
case 473:
#line 7403 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr463;
		case 4u: goto tr464;
		case 5u: goto st140;
		case 6u: goto st139;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr149;
		case 14u: goto tr467;
		case 17u: goto tr440;
	}
	goto tr432;
tr462:
#line 1 "NONE"
	{te = p+1;}
	goto st474;
st474:
	if ( ++p == pe )
		goto _test_eof474;
case 474:
#line 7426 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 3u: goto tr504;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st113;
	goto tr432;
tr504:
#line 1 "NONE"
	{te = p+1;}
	goto st475;
st475:
	if ( ++p == pe )
		goto _test_eof475;
case 475:
#line 7448 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr150;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 14u: goto tr150;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr150:
#line 1 "NONE"
	{te = p+1;}
	goto st476;
st476:
	if ( ++p == pe )
		goto _test_eof476;
case 476:
#line 7481 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 5u: goto st110;
		case 6u: goto tr505;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	goto tr432;
tr505:
#line 1 "NONE"
	{te = p+1;}
	goto st477;
st477:
	if ( ++p == pe )
		goto _test_eof477;
case 477:
#line 7501 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 3u: goto tr504;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr458:
#line 1 "NONE"
	{te = p+1;}
	goto st478;
st478:
	if ( ++p == pe )
		goto _test_eof478;
case 478:
#line 7522 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr461;
		case 2u: goto tr120;
		case 5u: goto tr136;
		case 6u: goto tr462;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr461;
	}
	goto tr432;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr150;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 13u: goto tr151;
		case 14u: goto tr150;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr151:
#line 1 "NONE"
	{te = p+1;}
	goto st479;
st479:
	if ( ++p == pe )
		goto _test_eof479;
case 479:
#line 7557 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr454;
		case 4u: goto tr455;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr458;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st141;
	goto tr432;
tr457:
#line 1 "NONE"
	{te = p+1;}
	goto st480;
st480:
	if ( ++p == pe )
		goto _test_eof480;
case 480:
#line 7579 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr454;
		case 4u: goto tr455;
		case 5u: goto st142;
		case 6u: goto st141;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr151;
		case 14u: goto tr458;
		case 17u: goto tr440;
	}
	goto tr432;
tr453:
#line 1 "NONE"
	{te = p+1;}
	goto st481;
st481:
	if ( ++p == pe )
		goto _test_eof481;
case 481:
#line 7602 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 3u: goto tr506;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st113;
	goto tr432;
tr506:
#line 1 "NONE"
	{te = p+1;}
	goto st482;
st482:
	if ( ++p == pe )
		goto _test_eof482;
case 482:
#line 7624 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr152;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 14u: goto tr152;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr152:
#line 1 "NONE"
	{te = p+1;}
	goto st483;
st483:
	if ( ++p == pe )
		goto _test_eof483;
case 483:
#line 7657 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 5u: goto st110;
		case 6u: goto tr507;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	goto tr432;
tr507:
#line 1 "NONE"
	{te = p+1;}
	goto st484;
st484:
	if ( ++p == pe )
		goto _test_eof484;
case 484:
#line 7677 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 3u: goto tr506;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr449:
#line 1 "NONE"
	{te = p+1;}
	goto st485;
st485:
	if ( ++p == pe )
		goto _test_eof485;
case 485:
#line 7698 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr452;
		case 2u: goto tr120;
		case 5u: goto tr136;
		case 6u: goto tr453;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr452;
	}
	goto tr432;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr152;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 13u: goto tr153;
		case 14u: goto tr152;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr153:
#line 1 "NONE"
	{te = p+1;}
	goto st486;
st486:
	if ( ++p == pe )
		goto _test_eof486;
case 486:
#line 7733 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr445;
		case 4u: goto tr446;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr449;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st143;
	goto tr432;
tr448:
#line 1 "NONE"
	{te = p+1;}
	goto st487;
st487:
	if ( ++p == pe )
		goto _test_eof487;
case 487:
#line 7755 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr445;
		case 4u: goto tr446;
		case 5u: goto st144;
		case 6u: goto st143;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 13u: goto tr153;
		case 14u: goto tr449;
		case 17u: goto tr440;
	}
	goto tr432;
tr443:
#line 1 "NONE"
	{te = p+1;}
	goto st488;
st488:
	if ( ++p == pe )
		goto _test_eof488;
case 488:
#line 7778 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 3u: goto tr508;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st113;
	goto tr432;
tr508:
#line 1 "NONE"
	{te = p+1;}
	goto st489;
st489:
	if ( ++p == pe )
		goto _test_eof489;
case 489:
#line 7800 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr154;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 14u: goto tr154;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr154:
#line 1 "NONE"
	{te = p+1;}
	goto st490;
st490:
	if ( ++p == pe )
		goto _test_eof490;
case 490:
#line 7833 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 5u: goto st110;
		case 6u: goto tr509;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	goto tr432;
tr509:
#line 1 "NONE"
	{te = p+1;}
	goto st491;
st491:
	if ( ++p == pe )
		goto _test_eof491;
case 491:
#line 7853 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 3u: goto tr508;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st110;
	goto tr432;
tr439:
#line 1 "NONE"
	{te = p+1;}
	goto st492;
st492:
	if ( ++p == pe )
		goto _test_eof492;
case 492:
#line 7874 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr442;
		case 2u: goto tr120;
		case 5u: goto tr136;
		case 6u: goto tr443;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto st111;
		case 16u: goto tr442;
	}
	goto tr432;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr154;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 13u: goto tr155;
		case 14u: goto tr154;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st114;
	goto tr117;
tr155:
#line 1 "NONE"
	{te = p+1;}
	goto st493;
st493:
	if ( ++p == pe )
		goto _test_eof493;
case 493:
#line 7909 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr433;
		case 4u: goto tr434;
		case 7u: goto tr123;
		case 8u: goto st437;
		case 9u: goto st439;
		case 10u: goto st440;
		case 14u: goto tr439;
		case 17u: goto tr440;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st145;
	goto tr432;
tr198:
#line 1 "NONE"
	{te = p+1;}
#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 5;}
	goto st494;
st494:
	if ( ++p == pe )
		goto _test_eof494;
case 494:
#line 7933 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr188;
		case 2u: goto tr189;
		case 3u: goto tr190;
		case 4u: goto tr191;
		case 5u: goto st147;
		case 6u: goto st109;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 13u: goto tr156;
		case 14u: goto tr197;
		case 16u: goto tr188;
		case 17u: goto tr200;
	}
	if ( 11u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 12u )
		goto tr196;
	goto tr360;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr116;
		case 7u: goto tr84;
		case 8u: goto st357;
		case 13u: goto tr156;
		case 14u: goto tr116;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr78;
tr199:
#line 1 "NONE"
	{te = p+1;}
	goto st495;
st495:
	if ( ++p == pe )
		goto _test_eof495;
case 495:
#line 7975 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr203;
		case 4u: goto st496;
		case 5u: goto st36;
		case 6u: goto tr206;
		case 7u: goto tr6;
		case 8u: goto st200;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr38;
		case 14u: goto tr209;
		case 17u: goto tr210;
	}
	goto tr202;
st496:
	if ( ++p == pe )
		goto _test_eof496;
case 496:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 2u: goto tr189;
		case 3u: goto tr190;
		case 4u: goto tr191;
		case 5u: goto tr512;
		case 6u: goto tr513;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 12u: goto tr196;
		case 13u: goto tr156;
		case 14u: goto tr516;
		case 16u: goto tr213;
		case 17u: goto tr200;
	}
	goto tr202;
tr512:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st497;
st497:
	if ( ++p == pe )
		goto _test_eof497;
case 497:
#line 8022 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr116;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st202;
		case 10u: goto st203;
		case 13u: goto tr156;
		case 14u: goto tr518;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st148;
	goto tr202;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr84;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st79;
	goto tr0;
st498:
	if ( ++p == pe )
		goto _test_eof498;
case 498:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st499;
		case 8u: goto st504;
		case 9u: goto st500;
		case 10u: goto st501;
	}
	goto tr202;
st499:
	if ( ++p == pe )
		goto _test_eof499;
case 499:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st500;
		case 10u: goto st501;
	}
	goto tr202;
st500:
	if ( ++p == pe )
		goto _test_eof500;
case 500:
	if ( ( info[p].indic_category()) == 9u )
		goto tr254;
	goto tr202;
st501:
	if ( ++p == pe )
		goto _test_eof501;
case 501:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st500;
		case 10u: goto st502;
	}
	goto tr202;
st502:
	if ( ++p == pe )
		goto _test_eof502;
case 502:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st500;
		case 10u: goto st503;
	}
	goto tr202;
st503:
	if ( ++p == pe )
		goto _test_eof503;
case 503:
	if ( ( info[p].indic_category()) == 9u )
		goto st500;
	goto tr202;
st504:
	if ( ++p == pe )
		goto _test_eof504;
case 504:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st499;
		case 9u: goto st500;
		case 10u: goto st501;
	}
	goto tr202;
tr518:
#line 1 "NONE"
	{te = p+1;}
	goto st505;
st505:
	if ( ++p == pe )
		goto _test_eof505;
case 505:
#line 8116 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr523;
		case 2u: goto tr3;
		case 5u: goto st74;
		case 6u: goto tr430;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr523;
	}
	goto tr360;
tr523:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st506;
st506:
	if ( ++p == pe )
		goto _test_eof506;
case 506:
#line 8139 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr524;
		case 4u: goto tr367;
		case 5u: goto st150;
		case 6u: goto tr526;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 13u: goto tr158;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	goto tr202;
tr524:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st507;
st507:
	if ( ++p == pe )
		goto _test_eof507;
case 507:
#line 8164 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr527;
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st149;
	goto tr202;
tr527:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st508;
st508:
	if ( ++p == pe )
		goto _test_eof508;
case 508:
#line 8188 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st149;
	goto tr202;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr114;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 14u: goto tr114;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr0;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr114;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 13u: goto tr158;
		case 14u: goto tr114;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st78;
	goto tr0;
tr158:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st509;
st509:
	if ( ++p == pe )
		goto _test_eof509;
case 509:
#line 8238 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr524;
		case 4u: goto tr367;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st149;
	goto tr202;
tr526:
#line 1 "NONE"
	{te = p+1;}
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"
	{act = 1;}
	goto st510;
st510:
	if ( ++p == pe )
		goto _test_eof510;
case 510:
#line 8262 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr524;
		case 4u: goto tr367;
		case 5u: goto st150;
		case 6u: goto st149;
		case 7u: goto tr84;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 13u: goto tr158;
		case 14u: goto tr370;
		case 17u: goto tr200;
	}
	goto tr202;
tr513:
#line 1 "NONE"
	{te = p+1;}
	goto st511;
st511:
	if ( ++p == pe )
		goto _test_eof511;
case 511:
#line 8285 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr213;
		case 3u: goto tr279;
		case 4u: goto tr116;
		case 7u: goto tr160;
		case 8u: goto st498;
		case 9u: goto st202;
		case 10u: goto st203;
		case 14u: goto tr518;
		case 16u: goto tr213;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st151;
	goto tr202;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr160;
		case 8u: goto st200;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st152;
	goto tr0;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	if ( ( info[p].indic_category()) == 7u )
		goto tr160;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st5;
	goto tr0;
tr160:
#line 1 "NONE"
	{te = p+1;}
	goto st512;
st512:
	if ( ++p == pe )
		goto _test_eof512;
case 512:
#line 8328 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr530;
		case 4u: goto tr184;
		case 5u: goto st153;
		case 6u: goto st174;
		case 7u: goto tr162;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr530:
#line 1 "NONE"
	{te = p+1;}
	goto st513;
st513:
	if ( ++p == pe )
		goto _test_eof513;
case 513:
#line 8349 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr184;
		case 5u: goto st153;
		case 6u: goto st174;
		case 7u: goto tr162;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr184:
#line 1 "NONE"
	{te = p+1;}
	goto st514;
st514:
	if ( ++p == pe )
		goto _test_eof514;
case 514:
#line 8369 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr162;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st153;
	goto tr202;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr162;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st154;
	goto tr0;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	if ( ( info[p].indic_category()) == 7u )
		goto tr162;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st155;
	goto tr0;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	if ( ( info[p].indic_category()) == 7u )
		goto tr162;
	goto tr0;
tr162:
#line 1 "NONE"
	{te = p+1;}
	goto st515;
st515:
	if ( ++p == pe )
		goto _test_eof515;
case 515:
#line 8415 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr534;
		case 4u: goto tr181;
		case 5u: goto st156;
		case 6u: goto st171;
		case 7u: goto tr165;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr534:
#line 1 "NONE"
	{te = p+1;}
	goto st516;
st516:
	if ( ++p == pe )
		goto _test_eof516;
case 516:
#line 8436 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr181;
		case 5u: goto st156;
		case 6u: goto st171;
		case 7u: goto tr165;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr181:
#line 1 "NONE"
	{te = p+1;}
	goto st517;
st517:
	if ( ++p == pe )
		goto _test_eof517;
case 517:
#line 8456 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr165;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st156;
	goto tr202;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr165;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st157;
	goto tr0;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	if ( ( info[p].indic_category()) == 7u )
		goto tr165;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st158;
	goto tr0;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	if ( ( info[p].indic_category()) == 7u )
		goto tr165;
	goto tr0;
tr165:
#line 1 "NONE"
	{te = p+1;}
	goto st518;
st518:
	if ( ++p == pe )
		goto _test_eof518;
case 518:
#line 8502 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr537;
		case 4u: goto tr178;
		case 5u: goto st159;
		case 6u: goto st168;
		case 7u: goto tr168;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr537:
#line 1 "NONE"
	{te = p+1;}
	goto st519;
st519:
	if ( ++p == pe )
		goto _test_eof519;
case 519:
#line 8523 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr178;
		case 5u: goto st159;
		case 6u: goto st168;
		case 7u: goto tr168;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr178:
#line 1 "NONE"
	{te = p+1;}
	goto st520;
st520:
	if ( ++p == pe )
		goto _test_eof520;
case 520:
#line 8543 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr168;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st159;
	goto tr202;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	switch( ( info[p].indic_category()) ) {
		case 7u: goto tr168;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st160;
	goto tr0;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	if ( ( info[p].indic_category()) == 7u )
		goto tr168;
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st161;
	goto tr0;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	if ( ( info[p].indic_category()) == 7u )
		goto tr168;
	goto tr0;
tr168:
#line 1 "NONE"
	{te = p+1;}
	goto st521;
st521:
	if ( ++p == pe )
		goto _test_eof521;
case 521:
#line 8589 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr540;
		case 4u: goto tr175;
		case 5u: goto st162;
		case 6u: goto st165;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr540:
#line 1 "NONE"
	{te = p+1;}
	goto st522;
st522:
	if ( ++p == pe )
		goto _test_eof522;
case 522:
#line 8609 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 4u: goto tr175;
		case 5u: goto st162;
		case 6u: goto st165;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	goto tr202;
tr175:
#line 1 "NONE"
	{te = p+1;}
	goto st523;
st523:
	if ( ++p == pe )
		goto _test_eof523;
case 523:
#line 8628 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 14u: goto st163;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st162;
	goto tr202;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	if ( ( info[p].indic_category()) == 8u )
		goto st498;
	goto tr0;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr170;
		case 2u: goto tr171;
		case 16u: goto tr170;
	}
	goto tr0;
tr170:
#line 1 "NONE"
	{te = p+1;}
	goto st524;
st524:
	if ( ++p == pe )
		goto _test_eof524;
case 524:
#line 8663 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr543;
		case 5u: goto st164;
		case 6u: goto tr545;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 13u: goto tr172;
	}
	goto tr202;
tr543:
#line 1 "NONE"
	{te = p+1;}
	goto st525;
st525:
	if ( ++p == pe )
		goto _test_eof525;
case 525:
#line 8682 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr171;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st162;
	goto tr202;
tr171:
#line 1 "NONE"
	{te = p+1;}
	goto st526;
st526:
	if ( ++p == pe )
		goto _test_eof526;
case 526:
#line 8700 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st162;
	goto tr202;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st498;
		case 13u: goto tr172;
	}
	goto tr0;
tr172:
#line 1 "NONE"
	{te = p+1;}
	goto st527;
st527:
	if ( ++p == pe )
		goto _test_eof527;
case 527:
#line 8726 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr543;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st162;
	goto tr202;
tr545:
#line 1 "NONE"
	{te = p+1;}
	goto st528;
st528:
	if ( ++p == pe )
		goto _test_eof528;
case 528:
#line 8744 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr543;
		case 5u: goto st164;
		case 6u: goto st162;
		case 8u: goto st498;
		case 9u: goto st500;
		case 10u: goto st501;
		case 13u: goto tr172;
	}
	goto tr202;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st166;
		case 8u: goto st498;
	}
	goto tr0;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	if ( ( info[p].indic_category()) == 6u )
		goto st167;
	goto tr0;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	if ( ( info[p].indic_category()) == 16u )
		goto tr175;
	goto tr0;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st169;
		case 7u: goto tr168;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st160;
	goto tr0;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	if ( ( info[p].indic_category()) == 6u )
		goto st170;
	goto tr0;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	if ( ( info[p].indic_category()) == 16u )
		goto tr178;
	goto tr0;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st172;
		case 7u: goto tr165;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st157;
	goto tr0;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	if ( ( info[p].indic_category()) == 6u )
		goto st173;
	goto tr0;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	if ( ( info[p].indic_category()) == 16u )
		goto tr181;
	goto tr0;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	switch( ( info[p].indic_category()) ) {
		case 4u: goto st175;
		case 7u: goto tr162;
		case 8u: goto st498;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st154;
	goto tr0;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	if ( ( info[p].indic_category()) == 6u )
		goto st176;
	goto tr0;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
	if ( ( info[p].indic_category()) == 16u )
		goto tr184;
	goto tr0;
tr516:
#line 1 "NONE"
	{te = p+1;}
	goto st529;
st529:
	if ( ++p == pe )
		goto _test_eof529;
case 529:
#line 8864 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 1u: goto tr523;
		case 2u: goto tr171;
		case 5u: goto tr98;
		case 6u: goto tr364;
		case 8u: goto st357;
		case 9u: goto st359;
		case 10u: goto st360;
		case 14u: goto st75;
		case 16u: goto tr523;
	}
	goto tr360;
tr201:
#line 1 "NONE"
	{te = p+1;}
	goto st530;
st530:
	if ( ++p == pe )
		goto _test_eof530;
case 530:
#line 8885 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 3u: goto tr547;
		case 8u: goto st532;
		case 9u: goto st534;
		case 10u: goto st535;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st177;
	goto tr546;
tr547:
#line 1 "NONE"
	{te = p+1;}
	goto st531;
st531:
	if ( ++p == pe )
		goto _test_eof531;
case 531:
#line 8903 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.hh"
	switch( ( info[p].indic_category()) ) {
		case 8u: goto st532;
		case 9u: goto st534;
		case 10u: goto st535;
	}
	if ( 5u <= ( info[p].indic_category()) && ( info[p].indic_category()) <= 6u )
		goto st177;
	goto tr546;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
	if ( ( info[p].indic_category()) == 8u )
		goto st532;
	goto tr185;
st532:
	if ( ++p == pe )
		goto _test_eof532;
case 532:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st533;
		case 8u: goto st538;
		case 9u: goto st534;
		case 10u: goto st535;
	}
	goto tr546;
st533:
	if ( ++p == pe )
		goto _test_eof533;
case 533:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st534;
		case 10u: goto st535;
	}
	goto tr546;
st534:
	if ( ++p == pe )
		goto _test_eof534;
case 534:
	if ( ( info[p].indic_category()) == 9u )
		goto tr553;
	goto tr546;
st535:
	if ( ++p == pe )
		goto _test_eof535;
case 535:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st534;
		case 10u: goto st536;
	}
	goto tr546;
st536:
	if ( ++p == pe )
		goto _test_eof536;
case 536:
	switch( ( info[p].indic_category()) ) {
		case 9u: goto st534;
		case 10u: goto st537;
	}
	goto tr546;
st537:
	if ( ++p == pe )
		goto _test_eof537;
case 537:
	if ( ( info[p].indic_category()) == 9u )
		goto st534;
	goto tr546;
st538:
	if ( ++p == pe )
		goto _test_eof538;
case 538:
	switch( ( info[p].indic_category()) ) {
		case 5u: goto st533;
		case 9u: goto st534;
		case 10u: goto st535;
	}
	goto tr546;
	}
	_test_eof178: cs = 178; goto _test_eof; 
	_test_eof179: cs = 179; goto _test_eof; 
	_test_eof180: cs = 180; goto _test_eof; 
	_test_eof181: cs = 181; goto _test_eof; 
	_test_eof182: cs = 182; goto _test_eof; 
	_test_eof183: cs = 183; goto _test_eof; 
	_test_eof184: cs = 184; goto _test_eof; 
	_test_eof185: cs = 185; goto _test_eof; 
	_test_eof186: cs = 186; goto _test_eof; 
	_test_eof187: cs = 187; goto _test_eof; 
	_test_eof188: cs = 188; goto _test_eof; 
	_test_eof189: cs = 189; goto _test_eof; 
	_test_eof190: cs = 190; goto _test_eof; 
	_test_eof191: cs = 191; goto _test_eof; 
	_test_eof192: cs = 192; goto _test_eof; 
	_test_eof193: cs = 193; goto _test_eof; 
	_test_eof194: cs = 194; goto _test_eof; 
	_test_eof195: cs = 195; goto _test_eof; 
	_test_eof196: cs = 196; goto _test_eof; 
	_test_eof197: cs = 197; goto _test_eof; 
	_test_eof198: cs = 198; goto _test_eof; 
	_test_eof199: cs = 199; goto _test_eof; 
	_test_eof0: cs = 0; goto _test_eof; 
	_test_eof200: cs = 200; goto _test_eof; 
	_test_eof201: cs = 201; goto _test_eof; 
	_test_eof202: cs = 202; goto _test_eof; 
	_test_eof203: cs = 203; goto _test_eof; 
	_test_eof204: cs = 204; goto _test_eof; 
	_test_eof205: cs = 205; goto _test_eof; 
	_test_eof206: cs = 206; goto _test_eof; 
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof207: cs = 207; goto _test_eof; 
	_test_eof208: cs = 208; goto _test_eof; 
	_test_eof209: cs = 209; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof210: cs = 210; goto _test_eof; 
	_test_eof211: cs = 211; goto _test_eof; 
	_test_eof212: cs = 212; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof213: cs = 213; goto _test_eof; 
	_test_eof214: cs = 214; goto _test_eof; 
	_test_eof215: cs = 215; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof216: cs = 216; goto _test_eof; 
	_test_eof217: cs = 217; goto _test_eof; 
	_test_eof218: cs = 218; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof219: cs = 219; goto _test_eof; 
	_test_eof220: cs = 220; goto _test_eof; 
	_test_eof221: cs = 221; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof222: cs = 222; goto _test_eof; 
	_test_eof223: cs = 223; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof224: cs = 224; goto _test_eof; 
	_test_eof225: cs = 225; goto _test_eof; 
	_test_eof226: cs = 226; goto _test_eof; 
	_test_eof227: cs = 227; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof228: cs = 228; goto _test_eof; 
	_test_eof229: cs = 229; goto _test_eof; 
	_test_eof230: cs = 230; goto _test_eof; 
	_test_eof231: cs = 231; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof232: cs = 232; goto _test_eof; 
	_test_eof233: cs = 233; goto _test_eof; 
	_test_eof234: cs = 234; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof235: cs = 235; goto _test_eof; 
	_test_eof236: cs = 236; goto _test_eof; 
	_test_eof237: cs = 237; goto _test_eof; 
	_test_eof238: cs = 238; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof239: cs = 239; goto _test_eof; 
	_test_eof240: cs = 240; goto _test_eof; 
	_test_eof241: cs = 241; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof242: cs = 242; goto _test_eof; 
	_test_eof243: cs = 243; goto _test_eof; 
	_test_eof244: cs = 244; goto _test_eof; 
	_test_eof245: cs = 245; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof246: cs = 246; goto _test_eof; 
	_test_eof247: cs = 247; goto _test_eof; 
	_test_eof248: cs = 248; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof249: cs = 249; goto _test_eof; 
	_test_eof250: cs = 250; goto _test_eof; 
	_test_eof251: cs = 251; goto _test_eof; 
	_test_eof252: cs = 252; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof253: cs = 253; goto _test_eof; 
	_test_eof254: cs = 254; goto _test_eof; 
	_test_eof255: cs = 255; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof256: cs = 256; goto _test_eof; 
	_test_eof257: cs = 257; goto _test_eof; 
	_test_eof258: cs = 258; goto _test_eof; 
	_test_eof259: cs = 259; goto _test_eof; 
	_test_eof260: cs = 260; goto _test_eof; 
	_test_eof261: cs = 261; goto _test_eof; 
	_test_eof262: cs = 262; goto _test_eof; 
	_test_eof263: cs = 263; goto _test_eof; 
	_test_eof264: cs = 264; goto _test_eof; 
	_test_eof265: cs = 265; goto _test_eof; 
	_test_eof266: cs = 266; goto _test_eof; 
	_test_eof267: cs = 267; goto _test_eof; 
	_test_eof268: cs = 268; goto _test_eof; 
	_test_eof269: cs = 269; goto _test_eof; 
	_test_eof270: cs = 270; goto _test_eof; 
	_test_eof271: cs = 271; goto _test_eof; 
	_test_eof272: cs = 272; goto _test_eof; 
	_test_eof273: cs = 273; goto _test_eof; 
	_test_eof274: cs = 274; goto _test_eof; 
	_test_eof275: cs = 275; goto _test_eof; 
	_test_eof276: cs = 276; goto _test_eof; 
	_test_eof277: cs = 277; goto _test_eof; 
	_test_eof278: cs = 278; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof279: cs = 279; goto _test_eof; 
	_test_eof280: cs = 280; goto _test_eof; 
	_test_eof281: cs = 281; goto _test_eof; 
	_test_eof282: cs = 282; goto _test_eof; 
	_test_eof283: cs = 283; goto _test_eof; 
	_test_eof284: cs = 284; goto _test_eof; 
	_test_eof285: cs = 285; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof286: cs = 286; goto _test_eof; 
	_test_eof287: cs = 287; goto _test_eof; 
	_test_eof288: cs = 288; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof289: cs = 289; goto _test_eof; 
	_test_eof290: cs = 290; goto _test_eof; 
	_test_eof291: cs = 291; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof292: cs = 292; goto _test_eof; 
	_test_eof293: cs = 293; goto _test_eof; 
	_test_eof294: cs = 294; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof295: cs = 295; goto _test_eof; 
	_test_eof296: cs = 296; goto _test_eof; 
	_test_eof297: cs = 297; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof298: cs = 298; goto _test_eof; 
	_test_eof299: cs = 299; goto _test_eof; 
	_test_eof300: cs = 300; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 
	_test_eof51: cs = 51; goto _test_eof; 
	_test_eof301: cs = 301; goto _test_eof; 
	_test_eof302: cs = 302; goto _test_eof; 
	_test_eof52: cs = 52; goto _test_eof; 
	_test_eof53: cs = 53; goto _test_eof; 
	_test_eof54: cs = 54; goto _test_eof; 
	_test_eof55: cs = 55; goto _test_eof; 
	_test_eof56: cs = 56; goto _test_eof; 
	_test_eof57: cs = 57; goto _test_eof; 
	_test_eof58: cs = 58; goto _test_eof; 
	_test_eof59: cs = 59; goto _test_eof; 
	_test_eof60: cs = 60; goto _test_eof; 
	_test_eof61: cs = 61; goto _test_eof; 
	_test_eof62: cs = 62; goto _test_eof; 
	_test_eof63: cs = 63; goto _test_eof; 
	_test_eof64: cs = 64; goto _test_eof; 
	_test_eof303: cs = 303; goto _test_eof; 
	_test_eof304: cs = 304; goto _test_eof; 
	_test_eof305: cs = 305; goto _test_eof; 
	_test_eof306: cs = 306; goto _test_eof; 
	_test_eof65: cs = 65; goto _test_eof; 
	_test_eof307: cs = 307; goto _test_eof; 
	_test_eof308: cs = 308; goto _test_eof; 
	_test_eof309: cs = 309; goto _test_eof; 
	_test_eof310: cs = 310; goto _test_eof; 
	_test_eof66: cs = 66; goto _test_eof; 
	_test_eof311: cs = 311; goto _test_eof; 
	_test_eof312: cs = 312; goto _test_eof; 
	_test_eof313: cs = 313; goto _test_eof; 
	_test_eof67: cs = 67; goto _test_eof; 
	_test_eof314: cs = 314; goto _test_eof; 
	_test_eof315: cs = 315; goto _test_eof; 
	_test_eof316: cs = 316; goto _test_eof; 
	_test_eof317: cs = 317; goto _test_eof; 
	_test_eof68: cs = 68; goto _test_eof; 
	_test_eof318: cs = 318; goto _test_eof; 
	_test_eof319: cs = 319; goto _test_eof; 
	_test_eof320: cs = 320; goto _test_eof; 
	_test_eof69: cs = 69; goto _test_eof; 
	_test_eof321: cs = 321; goto _test_eof; 
	_test_eof322: cs = 322; goto _test_eof; 
	_test_eof323: cs = 323; goto _test_eof; 
	_test_eof324: cs = 324; goto _test_eof; 
	_test_eof70: cs = 70; goto _test_eof; 
	_test_eof325: cs = 325; goto _test_eof; 
	_test_eof326: cs = 326; goto _test_eof; 
	_test_eof327: cs = 327; goto _test_eof; 
	_test_eof71: cs = 71; goto _test_eof; 
	_test_eof328: cs = 328; goto _test_eof; 
	_test_eof329: cs = 329; goto _test_eof; 
	_test_eof330: cs = 330; goto _test_eof; 
	_test_eof331: cs = 331; goto _test_eof; 
	_test_eof72: cs = 72; goto _test_eof; 
	_test_eof332: cs = 332; goto _test_eof; 
	_test_eof333: cs = 333; goto _test_eof; 
	_test_eof334: cs = 334; goto _test_eof; 
	_test_eof335: cs = 335; goto _test_eof; 
	_test_eof73: cs = 73; goto _test_eof; 
	_test_eof336: cs = 336; goto _test_eof; 
	_test_eof337: cs = 337; goto _test_eof; 
	_test_eof338: cs = 338; goto _test_eof; 
	_test_eof339: cs = 339; goto _test_eof; 
	_test_eof340: cs = 340; goto _test_eof; 
	_test_eof341: cs = 341; goto _test_eof; 
	_test_eof342: cs = 342; goto _test_eof; 
	_test_eof343: cs = 343; goto _test_eof; 
	_test_eof344: cs = 344; goto _test_eof; 
	_test_eof345: cs = 345; goto _test_eof; 
	_test_eof346: cs = 346; goto _test_eof; 
	_test_eof347: cs = 347; goto _test_eof; 
	_test_eof348: cs = 348; goto _test_eof; 
	_test_eof349: cs = 349; goto _test_eof; 
	_test_eof350: cs = 350; goto _test_eof; 
	_test_eof351: cs = 351; goto _test_eof; 
	_test_eof352: cs = 352; goto _test_eof; 
	_test_eof353: cs = 353; goto _test_eof; 
	_test_eof354: cs = 354; goto _test_eof; 
	_test_eof355: cs = 355; goto _test_eof; 
	_test_eof356: cs = 356; goto _test_eof; 
	_test_eof74: cs = 74; goto _test_eof; 
	_test_eof357: cs = 357; goto _test_eof; 
	_test_eof358: cs = 358; goto _test_eof; 
	_test_eof359: cs = 359; goto _test_eof; 
	_test_eof360: cs = 360; goto _test_eof; 
	_test_eof361: cs = 361; goto _test_eof; 
	_test_eof362: cs = 362; goto _test_eof; 
	_test_eof363: cs = 363; goto _test_eof; 
	_test_eof75: cs = 75; goto _test_eof; 
	_test_eof364: cs = 364; goto _test_eof; 
	_test_eof365: cs = 365; goto _test_eof; 
	_test_eof366: cs = 366; goto _test_eof; 
	_test_eof76: cs = 76; goto _test_eof; 
	_test_eof367: cs = 367; goto _test_eof; 
	_test_eof368: cs = 368; goto _test_eof; 
	_test_eof369: cs = 369; goto _test_eof; 
	_test_eof77: cs = 77; goto _test_eof; 
	_test_eof78: cs = 78; goto _test_eof; 
	_test_eof79: cs = 79; goto _test_eof; 
	_test_eof370: cs = 370; goto _test_eof; 
	_test_eof371: cs = 371; goto _test_eof; 
	_test_eof372: cs = 372; goto _test_eof; 
	_test_eof80: cs = 80; goto _test_eof; 
	_test_eof81: cs = 81; goto _test_eof; 
	_test_eof82: cs = 82; goto _test_eof; 
	_test_eof373: cs = 373; goto _test_eof; 
	_test_eof374: cs = 374; goto _test_eof; 
	_test_eof375: cs = 375; goto _test_eof; 
	_test_eof83: cs = 83; goto _test_eof; 
	_test_eof84: cs = 84; goto _test_eof; 
	_test_eof85: cs = 85; goto _test_eof; 
	_test_eof376: cs = 376; goto _test_eof; 
	_test_eof377: cs = 377; goto _test_eof; 
	_test_eof378: cs = 378; goto _test_eof; 
	_test_eof86: cs = 86; goto _test_eof; 
	_test_eof87: cs = 87; goto _test_eof; 
	_test_eof88: cs = 88; goto _test_eof; 
	_test_eof379: cs = 379; goto _test_eof; 
	_test_eof380: cs = 380; goto _test_eof; 
	_test_eof89: cs = 89; goto _test_eof; 
	_test_eof90: cs = 90; goto _test_eof; 
	_test_eof91: cs = 91; goto _test_eof; 
	_test_eof92: cs = 92; goto _test_eof; 
	_test_eof93: cs = 93; goto _test_eof; 
	_test_eof94: cs = 94; goto _test_eof; 
	_test_eof95: cs = 95; goto _test_eof; 
	_test_eof96: cs = 96; goto _test_eof; 
	_test_eof97: cs = 97; goto _test_eof; 
	_test_eof98: cs = 98; goto _test_eof; 
	_test_eof99: cs = 99; goto _test_eof; 
	_test_eof100: cs = 100; goto _test_eof; 
	_test_eof101: cs = 101; goto _test_eof; 
	_test_eof381: cs = 381; goto _test_eof; 
	_test_eof382: cs = 382; goto _test_eof; 
	_test_eof383: cs = 383; goto _test_eof; 
	_test_eof384: cs = 384; goto _test_eof; 
	_test_eof102: cs = 102; goto _test_eof; 
	_test_eof385: cs = 385; goto _test_eof; 
	_test_eof386: cs = 386; goto _test_eof; 
	_test_eof387: cs = 387; goto _test_eof; 
	_test_eof388: cs = 388; goto _test_eof; 
	_test_eof103: cs = 103; goto _test_eof; 
	_test_eof389: cs = 389; goto _test_eof; 
	_test_eof390: cs = 390; goto _test_eof; 
	_test_eof391: cs = 391; goto _test_eof; 
	_test_eof104: cs = 104; goto _test_eof; 
	_test_eof392: cs = 392; goto _test_eof; 
	_test_eof393: cs = 393; goto _test_eof; 
	_test_eof394: cs = 394; goto _test_eof; 
	_test_eof395: cs = 395; goto _test_eof; 
	_test_eof105: cs = 105; goto _test_eof; 
	_test_eof396: cs = 396; goto _test_eof; 
	_test_eof397: cs = 397; goto _test_eof; 
	_test_eof398: cs = 398; goto _test_eof; 
	_test_eof106: cs = 106; goto _test_eof; 
	_test_eof399: cs = 399; goto _test_eof; 
	_test_eof400: cs = 400; goto _test_eof; 
	_test_eof401: cs = 401; goto _test_eof; 
	_test_eof402: cs = 402; goto _test_eof; 
	_test_eof107: cs = 107; goto _test_eof; 
	_test_eof403: cs = 403; goto _test_eof; 
	_test_eof404: cs = 404; goto _test_eof; 
	_test_eof405: cs = 405; goto _test_eof; 
	_test_eof108: cs = 108; goto _test_eof; 
	_test_eof406: cs = 406; goto _test_eof; 
	_test_eof407: cs = 407; goto _test_eof; 
	_test_eof408: cs = 408; goto _test_eof; 
	_test_eof409: cs = 409; goto _test_eof; 
	_test_eof109: cs = 109; goto _test_eof; 
	_test_eof410: cs = 410; goto _test_eof; 
	_test_eof411: cs = 411; goto _test_eof; 
	_test_eof412: cs = 412; goto _test_eof; 
	_test_eof413: cs = 413; goto _test_eof; 
	_test_eof414: cs = 414; goto _test_eof; 
	_test_eof415: cs = 415; goto _test_eof; 
	_test_eof416: cs = 416; goto _test_eof; 
	_test_eof417: cs = 417; goto _test_eof; 
	_test_eof418: cs = 418; goto _test_eof; 
	_test_eof419: cs = 419; goto _test_eof; 
	_test_eof420: cs = 420; goto _test_eof; 
	_test_eof421: cs = 421; goto _test_eof; 
	_test_eof422: cs = 422; goto _test_eof; 
	_test_eof423: cs = 423; goto _test_eof; 
	_test_eof424: cs = 424; goto _test_eof; 
	_test_eof425: cs = 425; goto _test_eof; 
	_test_eof426: cs = 426; goto _test_eof; 
	_test_eof427: cs = 427; goto _test_eof; 
	_test_eof428: cs = 428; goto _test_eof; 
	_test_eof429: cs = 429; goto _test_eof; 
	_test_eof430: cs = 430; goto _test_eof; 
	_test_eof431: cs = 431; goto _test_eof; 
	_test_eof432: cs = 432; goto _test_eof; 
	_test_eof433: cs = 433; goto _test_eof; 
	_test_eof434: cs = 434; goto _test_eof; 
	_test_eof435: cs = 435; goto _test_eof; 
	_test_eof436: cs = 436; goto _test_eof; 
	_test_eof110: cs = 110; goto _test_eof; 
	_test_eof437: cs = 437; goto _test_eof; 
	_test_eof438: cs = 438; goto _test_eof; 
	_test_eof439: cs = 439; goto _test_eof; 
	_test_eof440: cs = 440; goto _test_eof; 
	_test_eof441: cs = 441; goto _test_eof; 
	_test_eof442: cs = 442; goto _test_eof; 
	_test_eof443: cs = 443; goto _test_eof; 
	_test_eof111: cs = 111; goto _test_eof; 
	_test_eof444: cs = 444; goto _test_eof; 
	_test_eof445: cs = 445; goto _test_eof; 
	_test_eof446: cs = 446; goto _test_eof; 
	_test_eof112: cs = 112; goto _test_eof; 
	_test_eof447: cs = 447; goto _test_eof; 
	_test_eof448: cs = 448; goto _test_eof; 
	_test_eof449: cs = 449; goto _test_eof; 
	_test_eof113: cs = 113; goto _test_eof; 
	_test_eof114: cs = 114; goto _test_eof; 
	_test_eof115: cs = 115; goto _test_eof; 
	_test_eof450: cs = 450; goto _test_eof; 
	_test_eof451: cs = 451; goto _test_eof; 
	_test_eof452: cs = 452; goto _test_eof; 
	_test_eof116: cs = 116; goto _test_eof; 
	_test_eof117: cs = 117; goto _test_eof; 
	_test_eof118: cs = 118; goto _test_eof; 
	_test_eof453: cs = 453; goto _test_eof; 
	_test_eof454: cs = 454; goto _test_eof; 
	_test_eof455: cs = 455; goto _test_eof; 
	_test_eof119: cs = 119; goto _test_eof; 
	_test_eof120: cs = 120; goto _test_eof; 
	_test_eof121: cs = 121; goto _test_eof; 
	_test_eof456: cs = 456; goto _test_eof; 
	_test_eof457: cs = 457; goto _test_eof; 
	_test_eof458: cs = 458; goto _test_eof; 
	_test_eof122: cs = 122; goto _test_eof; 
	_test_eof123: cs = 123; goto _test_eof; 
	_test_eof124: cs = 124; goto _test_eof; 
	_test_eof459: cs = 459; goto _test_eof; 
	_test_eof460: cs = 460; goto _test_eof; 
	_test_eof125: cs = 125; goto _test_eof; 
	_test_eof126: cs = 126; goto _test_eof; 
	_test_eof127: cs = 127; goto _test_eof; 
	_test_eof128: cs = 128; goto _test_eof; 
	_test_eof129: cs = 129; goto _test_eof; 
	_test_eof130: cs = 130; goto _test_eof; 
	_test_eof131: cs = 131; goto _test_eof; 
	_test_eof132: cs = 132; goto _test_eof; 
	_test_eof133: cs = 133; goto _test_eof; 
	_test_eof134: cs = 134; goto _test_eof; 
	_test_eof135: cs = 135; goto _test_eof; 
	_test_eof136: cs = 136; goto _test_eof; 
	_test_eof137: cs = 137; goto _test_eof; 
	_test_eof461: cs = 461; goto _test_eof; 
	_test_eof462: cs = 462; goto _test_eof; 
	_test_eof463: cs = 463; goto _test_eof; 
	_test_eof464: cs = 464; goto _test_eof; 
	_test_eof138: cs = 138; goto _test_eof; 
	_test_eof465: cs = 465; goto _test_eof; 
	_test_eof466: cs = 466; goto _test_eof; 
	_test_eof467: cs = 467; goto _test_eof; 
	_test_eof468: cs = 468; goto _test_eof; 
	_test_eof139: cs = 139; goto _test_eof; 
	_test_eof469: cs = 469; goto _test_eof; 
	_test_eof470: cs = 470; goto _test_eof; 
	_test_eof471: cs = 471; goto _test_eof; 
	_test_eof140: cs = 140; goto _test_eof; 
	_test_eof472: cs = 472; goto _test_eof; 
	_test_eof473: cs = 473; goto _test_eof; 
	_test_eof474: cs = 474; goto _test_eof; 
	_test_eof475: cs = 475; goto _test_eof; 
	_test_eof141: cs = 141; goto _test_eof; 
	_test_eof476: cs = 476; goto _test_eof; 
	_test_eof477: cs = 477; goto _test_eof; 
	_test_eof478: cs = 478; goto _test_eof; 
	_test_eof142: cs = 142; goto _test_eof; 
	_test_eof479: cs = 479; goto _test_eof; 
	_test_eof480: cs = 480; goto _test_eof; 
	_test_eof481: cs = 481; goto _test_eof; 
	_test_eof482: cs = 482; goto _test_eof; 
	_test_eof143: cs = 143; goto _test_eof; 
	_test_eof483: cs = 483; goto _test_eof; 
	_test_eof484: cs = 484; goto _test_eof; 
	_test_eof485: cs = 485; goto _test_eof; 
	_test_eof144: cs = 144; goto _test_eof; 
	_test_eof486: cs = 486; goto _test_eof; 
	_test_eof487: cs = 487; goto _test_eof; 
	_test_eof488: cs = 488; goto _test_eof; 
	_test_eof489: cs = 489; goto _test_eof; 
	_test_eof145: cs = 145; goto _test_eof; 
	_test_eof490: cs = 490; goto _test_eof; 
	_test_eof491: cs = 491; goto _test_eof; 
	_test_eof492: cs = 492; goto _test_eof; 
	_test_eof146: cs = 146; goto _test_eof; 
	_test_eof493: cs = 493; goto _test_eof; 
	_test_eof494: cs = 494; goto _test_eof; 
	_test_eof147: cs = 147; goto _test_eof; 
	_test_eof495: cs = 495; goto _test_eof; 
	_test_eof496: cs = 496; goto _test_eof; 
	_test_eof497: cs = 497; goto _test_eof; 
	_test_eof148: cs = 148; goto _test_eof; 
	_test_eof498: cs = 498; goto _test_eof; 
	_test_eof499: cs = 499; goto _test_eof; 
	_test_eof500: cs = 500; goto _test_eof; 
	_test_eof501: cs = 501; goto _test_eof; 
	_test_eof502: cs = 502; goto _test_eof; 
	_test_eof503: cs = 503; goto _test_eof; 
	_test_eof504: cs = 504; goto _test_eof; 
	_test_eof505: cs = 505; goto _test_eof; 
	_test_eof506: cs = 506; goto _test_eof; 
	_test_eof507: cs = 507; goto _test_eof; 
	_test_eof508: cs = 508; goto _test_eof; 
	_test_eof149: cs = 149; goto _test_eof; 
	_test_eof150: cs = 150; goto _test_eof; 
	_test_eof509: cs = 509; goto _test_eof; 
	_test_eof510: cs = 510; goto _test_eof; 
	_test_eof511: cs = 511; goto _test_eof; 
	_test_eof151: cs = 151; goto _test_eof; 
	_test_eof152: cs = 152; goto _test_eof; 
	_test_eof512: cs = 512; goto _test_eof; 
	_test_eof513: cs = 513; goto _test_eof; 
	_test_eof514: cs = 514; goto _test_eof; 
	_test_eof153: cs = 153; goto _test_eof; 
	_test_eof154: cs = 154; goto _test_eof; 
	_test_eof155: cs = 155; goto _test_eof; 
	_test_eof515: cs = 515; goto _test_eof; 
	_test_eof516: cs = 516; goto _test_eof; 
	_test_eof517: cs = 517; goto _test_eof; 
	_test_eof156: cs = 156; goto _test_eof; 
	_test_eof157: cs = 157; goto _test_eof; 
	_test_eof158: cs = 158; goto _test_eof; 
	_test_eof518: cs = 518; goto _test_eof; 
	_test_eof519: cs = 519; goto _test_eof; 
	_test_eof520: cs = 520; goto _test_eof; 
	_test_eof159: cs = 159; goto _test_eof; 
	_test_eof160: cs = 160; goto _test_eof; 
	_test_eof161: cs = 161; goto _test_eof; 
	_test_eof521: cs = 521; goto _test_eof; 
	_test_eof522: cs = 522; goto _test_eof; 
	_test_eof523: cs = 523; goto _test_eof; 
	_test_eof162: cs = 162; goto _test_eof; 
	_test_eof163: cs = 163; goto _test_eof; 
	_test_eof524: cs = 524; goto _test_eof; 
	_test_eof525: cs = 525; goto _test_eof; 
	_test_eof526: cs = 526; goto _test_eof; 
	_test_eof164: cs = 164; goto _test_eof; 
	_test_eof527: cs = 527; goto _test_eof; 
	_test_eof528: cs = 528; goto _test_eof; 
	_test_eof165: cs = 165; goto _test_eof; 
	_test_eof166: cs = 166; goto _test_eof; 
	_test_eof167: cs = 167; goto _test_eof; 
	_test_eof168: cs = 168; goto _test_eof; 
	_test_eof169: cs = 169; goto _test_eof; 
	_test_eof170: cs = 170; goto _test_eof; 
	_test_eof171: cs = 171; goto _test_eof; 
	_test_eof172: cs = 172; goto _test_eof; 
	_test_eof173: cs = 173; goto _test_eof; 
	_test_eof174: cs = 174; goto _test_eof; 
	_test_eof175: cs = 175; goto _test_eof; 
	_test_eof176: cs = 176; goto _test_eof; 
	_test_eof529: cs = 529; goto _test_eof; 
	_test_eof530: cs = 530; goto _test_eof; 
	_test_eof531: cs = 531; goto _test_eof; 
	_test_eof177: cs = 177; goto _test_eof; 
	_test_eof532: cs = 532; goto _test_eof; 
	_test_eof533: cs = 533; goto _test_eof; 
	_test_eof534: cs = 534; goto _test_eof; 
	_test_eof535: cs = 535; goto _test_eof; 
	_test_eof536: cs = 536; goto _test_eof; 
	_test_eof537: cs = 537; goto _test_eof; 
	_test_eof538: cs = 538; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 179: goto tr202;
	case 180: goto tr202;
	case 181: goto tr202;
	case 182: goto tr202;
	case 183: goto tr202;
	case 184: goto tr202;
	case 185: goto tr202;
	case 186: goto tr202;
	case 187: goto tr202;
	case 188: goto tr202;
	case 189: goto tr202;
	case 190: goto tr202;
	case 191: goto tr202;
	case 192: goto tr202;
	case 193: goto tr202;
	case 194: goto tr202;
	case 195: goto tr202;
	case 196: goto tr202;
	case 197: goto tr202;
	case 198: goto tr202;
	case 199: goto tr202;
	case 0: goto tr0;
	case 200: goto tr202;
	case 201: goto tr202;
	case 202: goto tr202;
	case 203: goto tr202;
	case 204: goto tr202;
	case 205: goto tr202;
	case 206: goto tr202;
	case 1: goto tr0;
	case 207: goto tr202;
	case 208: goto tr202;
	case 209: goto tr202;
	case 2: goto tr0;
	case 210: goto tr202;
	case 211: goto tr202;
	case 212: goto tr202;
	case 3: goto tr0;
	case 4: goto tr0;
	case 5: goto tr0;
	case 213: goto tr202;
	case 214: goto tr202;
	case 215: goto tr202;
	case 6: goto tr0;
	case 7: goto tr0;
	case 8: goto tr0;
	case 216: goto tr202;
	case 217: goto tr202;
	case 218: goto tr202;
	case 9: goto tr0;
	case 10: goto tr0;
	case 11: goto tr0;
	case 219: goto tr202;
	case 220: goto tr202;
	case 221: goto tr202;
	case 12: goto tr0;
	case 13: goto tr0;
	case 14: goto tr0;
	case 222: goto tr202;
	case 223: goto tr202;
	case 15: goto tr0;
	case 16: goto tr0;
	case 17: goto tr0;
	case 18: goto tr0;
	case 19: goto tr0;
	case 20: goto tr0;
	case 21: goto tr0;
	case 22: goto tr0;
	case 23: goto tr0;
	case 24: goto tr0;
	case 25: goto tr0;
	case 26: goto tr0;
	case 27: goto tr0;
	case 224: goto tr202;
	case 225: goto tr202;
	case 226: goto tr202;
	case 227: goto tr202;
	case 28: goto tr0;
	case 228: goto tr202;
	case 229: goto tr202;
	case 230: goto tr202;
	case 231: goto tr202;
	case 29: goto tr0;
	case 232: goto tr202;
	case 233: goto tr202;
	case 234: goto tr202;
	case 30: goto tr0;
	case 235: goto tr202;
	case 236: goto tr202;
	case 237: goto tr202;
	case 238: goto tr202;
	case 31: goto tr0;
	case 239: goto tr202;
	case 240: goto tr202;
	case 241: goto tr202;
	case 32: goto tr0;
	case 242: goto tr202;
	case 243: goto tr202;
	case 244: goto tr202;
	case 245: goto tr202;
	case 33: goto tr0;
	case 246: goto tr202;
	case 247: goto tr202;
	case 248: goto tr202;
	case 34: goto tr0;
	case 249: goto tr202;
	case 250: goto tr202;
	case 251: goto tr202;
	case 252: goto tr202;
	case 35: goto tr0;
	case 253: goto tr202;
	case 254: goto tr202;
	case 255: goto tr202;
	case 36: goto tr0;
	case 256: goto tr202;
	case 257: goto tr202;
	case 258: goto tr281;
	case 259: goto tr281;
	case 260: goto tr281;
	case 261: goto tr281;
	case 262: goto tr281;
	case 263: goto tr281;
	case 264: goto tr281;
	case 265: goto tr281;
	case 266: goto tr281;
	case 267: goto tr281;
	case 268: goto tr281;
	case 269: goto tr281;
	case 270: goto tr281;
	case 271: goto tr281;
	case 272: goto tr281;
	case 273: goto tr281;
	case 274: goto tr281;
	case 275: goto tr281;
	case 276: goto tr281;
	case 277: goto tr281;
	case 278: goto tr281;
	case 37: goto tr39;
	case 279: goto tr281;
	case 280: goto tr281;
	case 281: goto tr281;
	case 282: goto tr281;
	case 283: goto tr281;
	case 284: goto tr281;
	case 285: goto tr281;
	case 38: goto tr39;
	case 286: goto tr281;
	case 287: goto tr281;
	case 288: goto tr281;
	case 39: goto tr39;
	case 289: goto tr281;
	case 290: goto tr281;
	case 291: goto tr281;
	case 40: goto tr39;
	case 41: goto tr39;
	case 42: goto tr39;
	case 292: goto tr281;
	case 293: goto tr281;
	case 294: goto tr281;
	case 43: goto tr39;
	case 44: goto tr39;
	case 45: goto tr39;
	case 295: goto tr281;
	case 296: goto tr281;
	case 297: goto tr281;
	case 46: goto tr39;
	case 47: goto tr39;
	case 48: goto tr39;
	case 298: goto tr281;
	case 299: goto tr281;
	case 300: goto tr281;
	case 49: goto tr39;
	case 50: goto tr39;
	case 51: goto tr39;
	case 301: goto tr281;
	case 302: goto tr281;
	case 52: goto tr39;
	case 53: goto tr39;
	case 54: goto tr39;
	case 55: goto tr39;
	case 56: goto tr39;
	case 57: goto tr39;
	case 58: goto tr39;
	case 59: goto tr39;
	case 60: goto tr39;
	case 61: goto tr39;
	case 62: goto tr39;
	case 63: goto tr39;
	case 64: goto tr39;
	case 303: goto tr281;
	case 304: goto tr281;
	case 305: goto tr281;
	case 306: goto tr281;
	case 65: goto tr39;
	case 307: goto tr281;
	case 308: goto tr281;
	case 309: goto tr281;
	case 310: goto tr281;
	case 66: goto tr39;
	case 311: goto tr281;
	case 312: goto tr281;
	case 313: goto tr281;
	case 67: goto tr39;
	case 314: goto tr281;
	case 315: goto tr281;
	case 316: goto tr281;
	case 317: goto tr281;
	case 68: goto tr39;
	case 318: goto tr281;
	case 319: goto tr281;
	case 320: goto tr281;
	case 69: goto tr39;
	case 321: goto tr281;
	case 322: goto tr281;
	case 323: goto tr281;
	case 324: goto tr281;
	case 70: goto tr39;
	case 325: goto tr281;
	case 326: goto tr281;
	case 327: goto tr281;
	case 71: goto tr39;
	case 328: goto tr281;
	case 329: goto tr281;
	case 330: goto tr281;
	case 331: goto tr281;
	case 72: goto tr39;
	case 332: goto tr281;
	case 333: goto tr281;
	case 334: goto tr281;
	case 335: goto tr281;
	case 73: goto tr39;
	case 336: goto tr281;
	case 337: goto tr360;
	case 338: goto tr360;
	case 339: goto tr360;
	case 340: goto tr360;
	case 341: goto tr360;
	case 342: goto tr360;
	case 343: goto tr360;
	case 344: goto tr360;
	case 345: goto tr360;
	case 346: goto tr360;
	case 347: goto tr360;
	case 348: goto tr360;
	case 349: goto tr360;
	case 350: goto tr360;
	case 351: goto tr360;
	case 352: goto tr360;
	case 353: goto tr360;
	case 354: goto tr360;
	case 355: goto tr360;
	case 356: goto tr360;
	case 74: goto tr78;
	case 357: goto tr360;
	case 358: goto tr360;
	case 359: goto tr360;
	case 360: goto tr360;
	case 361: goto tr360;
	case 362: goto tr360;
	case 363: goto tr360;
	case 75: goto tr78;
	case 364: goto tr360;
	case 365: goto tr360;
	case 366: goto tr360;
	case 76: goto tr78;
	case 367: goto tr360;
	case 368: goto tr360;
	case 369: goto tr360;
	case 77: goto tr78;
	case 78: goto tr85;
	case 79: goto tr85;
	case 370: goto tr360;
	case 371: goto tr360;
	case 372: goto tr360;
	case 80: goto tr78;
	case 81: goto tr78;
	case 82: goto tr78;
	case 373: goto tr360;
	case 374: goto tr360;
	case 375: goto tr360;
	case 83: goto tr78;
	case 84: goto tr78;
	case 85: goto tr78;
	case 376: goto tr360;
	case 377: goto tr360;
	case 378: goto tr360;
	case 86: goto tr78;
	case 87: goto tr78;
	case 88: goto tr78;
	case 379: goto tr360;
	case 380: goto tr360;
	case 89: goto tr78;
	case 90: goto tr78;
	case 91: goto tr78;
	case 92: goto tr78;
	case 93: goto tr78;
	case 94: goto tr78;
	case 95: goto tr78;
	case 96: goto tr78;
	case 97: goto tr78;
	case 98: goto tr78;
	case 99: goto tr78;
	case 100: goto tr78;
	case 101: goto tr78;
	case 381: goto tr360;
	case 382: goto tr360;
	case 383: goto tr360;
	case 384: goto tr360;
	case 102: goto tr78;
	case 385: goto tr360;
	case 386: goto tr360;
	case 387: goto tr360;
	case 388: goto tr360;
	case 103: goto tr78;
	case 389: goto tr360;
	case 390: goto tr360;
	case 391: goto tr360;
	case 104: goto tr78;
	case 392: goto tr360;
	case 393: goto tr360;
	case 394: goto tr360;
	case 395: goto tr360;
	case 105: goto tr78;
	case 396: goto tr360;
	case 397: goto tr360;
	case 398: goto tr360;
	case 106: goto tr78;
	case 399: goto tr360;
	case 400: goto tr360;
	case 401: goto tr360;
	case 402: goto tr360;
	case 107: goto tr78;
	case 403: goto tr360;
	case 404: goto tr360;
	case 405: goto tr360;
	case 108: goto tr78;
	case 406: goto tr360;
	case 407: goto tr360;
	case 408: goto tr360;
	case 409: goto tr360;
	case 109: goto tr78;
	case 410: goto tr360;
	case 411: goto tr360;
	case 412: goto tr360;
	case 413: goto tr431;
	case 414: goto tr360;
	case 415: goto tr431;
	case 416: goto tr432;
	case 417: goto tr432;
	case 418: goto tr432;
	case 419: goto tr432;
	case 420: goto tr432;
	case 421: goto tr432;
	case 422: goto tr432;
	case 423: goto tr432;
	case 424: goto tr432;
	case 425: goto tr432;
	case 426: goto tr432;
	case 427: goto tr432;
	case 428: goto tr432;
	case 429: goto tr432;
	case 430: goto tr432;
	case 431: goto tr432;
	case 432: goto tr432;
	case 433: goto tr432;
	case 434: goto tr432;
	case 435: goto tr432;
	case 436: goto tr432;
	case 110: goto tr117;
	case 437: goto tr432;
	case 438: goto tr432;
	case 439: goto tr432;
	case 440: goto tr432;
	case 441: goto tr432;
	case 442: goto tr432;
	case 443: goto tr432;
	case 111: goto tr117;
	case 444: goto tr432;
	case 445: goto tr432;
	case 446: goto tr432;
	case 112: goto tr117;
	case 447: goto tr432;
	case 448: goto tr432;
	case 449: goto tr432;
	case 113: goto tr117;
	case 114: goto tr117;
	case 115: goto tr117;
	case 450: goto tr432;
	case 451: goto tr432;
	case 452: goto tr432;
	case 116: goto tr117;
	case 117: goto tr117;
	case 118: goto tr117;
	case 453: goto tr432;
	case 454: goto tr432;
	case 455: goto tr432;
	case 119: goto tr117;
	case 120: goto tr117;
	case 121: goto tr117;
	case 456: goto tr432;
	case 457: goto tr432;
	case 458: goto tr432;
	case 122: goto tr117;
	case 123: goto tr117;
	case 124: goto tr117;
	case 459: goto tr432;
	case 460: goto tr432;
	case 125: goto tr117;
	case 126: goto tr117;
	case 127: goto tr117;
	case 128: goto tr117;
	case 129: goto tr117;
	case 130: goto tr117;
	case 131: goto tr117;
	case 132: goto tr117;
	case 133: goto tr117;
	case 134: goto tr117;
	case 135: goto tr117;
	case 136: goto tr117;
	case 137: goto tr117;
	case 461: goto tr432;
	case 462: goto tr432;
	case 463: goto tr432;
	case 464: goto tr432;
	case 138: goto tr117;
	case 465: goto tr432;
	case 466: goto tr432;
	case 467: goto tr432;
	case 468: goto tr432;
	case 139: goto tr117;
	case 469: goto tr432;
	case 470: goto tr432;
	case 471: goto tr432;
	case 140: goto tr117;
	case 472: goto tr432;
	case 473: goto tr432;
	case 474: goto tr432;
	case 475: goto tr432;
	case 141: goto tr117;
	case 476: goto tr432;
	case 477: goto tr432;
	case 478: goto tr432;
	case 142: goto tr117;
	case 479: goto tr432;
	case 480: goto tr432;
	case 481: goto tr432;
	case 482: goto tr432;
	case 143: goto tr117;
	case 483: goto tr432;
	case 484: goto tr432;
	case 485: goto tr432;
	case 144: goto tr117;
	case 486: goto tr432;
	case 487: goto tr432;
	case 488: goto tr432;
	case 489: goto tr432;
	case 145: goto tr117;
	case 490: goto tr432;
	case 491: goto tr432;
	case 492: goto tr432;
	case 146: goto tr117;
	case 493: goto tr432;
	case 494: goto tr360;
	case 147: goto tr78;
	case 495: goto tr202;
	case 496: goto tr202;
	case 497: goto tr202;
	case 148: goto tr0;
	case 498: goto tr202;
	case 499: goto tr202;
	case 500: goto tr202;
	case 501: goto tr202;
	case 502: goto tr202;
	case 503: goto tr202;
	case 504: goto tr202;
	case 505: goto tr360;
	case 506: goto tr202;
	case 507: goto tr202;
	case 508: goto tr202;
	case 149: goto tr0;
	case 150: goto tr0;
	case 509: goto tr202;
	case 510: goto tr202;
	case 511: goto tr202;
	case 151: goto tr0;
	case 152: goto tr0;
	case 512: goto tr202;
	case 513: goto tr202;
	case 514: goto tr202;
	case 153: goto tr0;
	case 154: goto tr0;
	case 155: goto tr0;
	case 515: goto tr202;
	case 516: goto tr202;
	case 517: goto tr202;
	case 156: goto tr0;
	case 157: goto tr0;
	case 158: goto tr0;
	case 518: goto tr202;
	case 519: goto tr202;
	case 520: goto tr202;
	case 159: goto tr0;
	case 160: goto tr0;
	case 161: goto tr0;
	case 521: goto tr202;
	case 522: goto tr202;
	case 523: goto tr202;
	case 162: goto tr0;
	case 163: goto tr0;
	case 524: goto tr202;
	case 525: goto tr202;
	case 526: goto tr202;
	case 164: goto tr0;
	case 527: goto tr202;
	case 528: goto tr202;
	case 165: goto tr0;
	case 166: goto tr0;
	case 167: goto tr0;
	case 168: goto tr0;
	case 169: goto tr0;
	case 170: goto tr0;
	case 171: goto tr0;
	case 172: goto tr0;
	case 173: goto tr0;
	case 174: goto tr0;
	case 175: goto tr0;
	case 176: goto tr0;
	case 529: goto tr360;
	case 530: goto tr546;
	case 531: goto tr546;
	case 177: goto tr185;
	case 532: goto tr546;
	case 533: goto tr546;
	case 534: goto tr546;
	case 535: goto tr546;
	case 536: goto tr546;
	case 537: goto tr546;
	case 538: goto tr546;
	}
	}

	}

#line 126 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-indic-machine.rl"

}

#endif /* HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH */

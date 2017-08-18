
#line 1 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
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

#ifndef HB_OT_SHAPE_COMPLEX_MYANMAR_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_MYANMAR_MACHINE_HH

#include "hb-private.hh"


#line 36 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.hh"
static const int myanmar_syllable_machine_start = 0;
static const int myanmar_syllable_machine_first_final = 0;
static const int myanmar_syllable_machine_error = -1;

static const int myanmar_syllable_machine_en_main = 0;


#line 36 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"



#line 93 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"


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
  
#line 68 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.hh"
	{
	cs = myanmar_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 114 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int last = 0;
  unsigned int syllable_serial = 1;
  
#line 85 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.hh"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
tr0:
#line 89 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p+1;{ found_syllable (non_myanmar_cluster); }}
	goto st0;
tr3:
#line 88 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p+1;{ found_syllable (broken_cluster); }}
	goto st0;
tr4:
#line 86 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p+1;{ found_syllable (non_myanmar_cluster); }}
	goto st0;
tr20:
#line 85 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (consonant_syllable); }}
	goto st0;
tr23:
#line 85 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p+1;{ found_syllable (consonant_syllable); }}
	goto st0;
tr42:
#line 88 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (broken_cluster); }}
	goto st0;
tr50:
#line 89 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p;p--;{ found_syllable (non_myanmar_cluster); }}
	goto st0;
tr51:
#line 87 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"
	{te = p+1;{ found_syllable (punctuation_cluster); }}
	goto st0;
st0:
#line 1 "NONE"
	{ts = 0;}
	if ( ++p == pe )
		goto _test_eof0;
case 0:
#line 1 "NONE"
	{ts = p;}
#line 131 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.hh"
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 4u: goto tr3;
		case 8u: goto st23;
		case 10u: goto st29;
		case 11u: goto st1;
		case 16u: goto st32;
		case 18u: goto st35;
		case 19u: goto st1;
		case 21u: goto st36;
		case 22u: goto st40;
		case 23u: goto st41;
		case 24u: goto st42;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
		case 30u: goto st43;
		case 31u: goto st44;
	}
	if ( ( info[p].myanmar_category()) > 2u ) {
		if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
			goto tr4;
	} else if ( ( info[p].myanmar_category()) >= 1u )
		goto st1;
	goto tr0;
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 4u: goto st12;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st13;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 24u: goto st20;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
		case 30u: goto st21;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st3;
		case 18u: goto st4;
		case 25u: goto st5;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( ( info[p].myanmar_category()) == 8u )
		goto st3;
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st3;
		case 25u: goto st5;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st6;
		case 8u: goto st3;
		case 10u: goto st5;
		case 18u: goto st7;
		case 25u: goto st5;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st3;
		case 18u: goto st7;
		case 25u: goto st5;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st3;
		case 25u: goto st5;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st10;
		case 21u: goto st10;
		case 25u: goto st5;
		case 26u: goto st11;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 25u: goto st5;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st10;
		case 25u: goto st5;
		case 26u: goto st11;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 25u: goto st5;
		case 26u: goto st11;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( ( info[p].myanmar_category()) == 16u )
		goto st1;
	if ( 1u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 2u )
		goto st1;
	goto tr20;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st13;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 24u: goto st20;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st15;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 25u: goto st5;
		case 27u: goto st17;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st15;
		case 21u: goto st14;
		case 23u: goto st19;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st15;
		case 21u: goto st14;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st15;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 4u: goto st12;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st13;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 24u: goto st20;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st23;
		case 18u: goto st24;
		case 25u: goto st25;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( ( info[p].myanmar_category()) == 8u )
		goto st23;
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st23;
		case 25u: goto st25;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st26;
		case 8u: goto st23;
		case 10u: goto st25;
		case 18u: goto st27;
		case 25u: goto st25;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st23;
		case 18u: goto st27;
		case 25u: goto st25;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( ( info[p].myanmar_category()) ) {
		case 8u: goto st23;
		case 25u: goto st25;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st30;
		case 21u: goto st30;
		case 25u: goto st25;
		case 26u: goto st31;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 25u: goto st25;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st30;
		case 25u: goto st25;
		case 26u: goto st31;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 25u: goto st25;
		case 26u: goto st31;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 4u: goto st12;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st33;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 24u: goto st20;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
		case 30u: goto st21;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st2;
		case 4u: goto st34;
		case 8u: goto st3;
		case 10u: goto st9;
		case 18u: goto st13;
		case 21u: goto st14;
		case 22u: goto st18;
		case 23u: goto st19;
		case 24u: goto st20;
		case 25u: goto st5;
		case 26u: goto st16;
		case 27u: goto st17;
		case 28u: goto st15;
		case 29u: goto st8;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr23;
	goto tr20;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 11u: goto st1;
		case 16u: goto st1;
		case 18u: goto st35;
		case 19u: goto st1;
		case 21u: goto st36;
		case 22u: goto st40;
		case 23u: goto st41;
		case 24u: goto st42;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
		case 30u: goto st43;
	}
	if ( ( info[p].myanmar_category()) > 2u ) {
		if ( 4u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
			goto tr3;
	} else if ( ( info[p].myanmar_category()) >= 1u )
		goto st1;
	goto tr42;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st35;
		case 21u: goto st36;
		case 22u: goto st40;
		case 23u: goto st41;
		case 24u: goto st42;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st37;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 25u: goto st25;
		case 27u: goto st39;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st37;
		case 21u: goto st36;
		case 23u: goto st41;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st37;
		case 21u: goto st36;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st37;
		case 21u: goto st36;
		case 22u: goto st40;
		case 23u: goto st41;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 5u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( ( info[p].myanmar_category()) ) {
		case 3u: goto st22;
		case 8u: goto st23;
		case 10u: goto st29;
		case 18u: goto st35;
		case 21u: goto st36;
		case 22u: goto st40;
		case 23u: goto st41;
		case 24u: goto st42;
		case 25u: goto st25;
		case 26u: goto st38;
		case 27u: goto st39;
		case 28u: goto st37;
		case 29u: goto st28;
	}
	if ( 4u <= ( info[p].myanmar_category()) && ( info[p].myanmar_category()) <= 6u )
		goto tr3;
	goto tr42;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( ( info[p].myanmar_category()) == 8u )
		goto tr51;
	goto tr50;
	}
	_test_eof0: cs = 0; goto _test_eof; 
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
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
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 1: goto tr20;
	case 2: goto tr20;
	case 3: goto tr20;
	case 4: goto tr20;
	case 5: goto tr20;
	case 6: goto tr20;
	case 7: goto tr20;
	case 8: goto tr20;
	case 9: goto tr20;
	case 10: goto tr20;
	case 11: goto tr20;
	case 12: goto tr20;
	case 13: goto tr20;
	case 14: goto tr20;
	case 15: goto tr20;
	case 16: goto tr20;
	case 17: goto tr20;
	case 18: goto tr20;
	case 19: goto tr20;
	case 20: goto tr20;
	case 21: goto tr20;
	case 22: goto tr42;
	case 23: goto tr42;
	case 24: goto tr42;
	case 25: goto tr42;
	case 26: goto tr42;
	case 27: goto tr42;
	case 28: goto tr42;
	case 29: goto tr42;
	case 30: goto tr42;
	case 31: goto tr42;
	case 32: goto tr20;
	case 33: goto tr20;
	case 34: goto tr42;
	case 35: goto tr42;
	case 36: goto tr42;
	case 37: goto tr42;
	case 38: goto tr42;
	case 39: goto tr42;
	case 40: goto tr42;
	case 41: goto tr42;
	case 42: goto tr42;
	case 43: goto tr42;
	case 44: goto tr50;
	}
	}

	}

#line 123 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-myanmar-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPE_COMPLEX_MYANMAR_MACHINE_HH */


#line 1 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
/*
 * Copyright © 2015  Mozilla Foundation.
 * Copyright © 2015  Google, Inc.
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
 * Mozilla Author(s): Jonathan Kew
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH

#include "hb-private.hh"


#line 38 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
static const int use_syllable_machine_start = 1;
static const int use_syllable_machine_first_final = 1;
static const int use_syllable_machine_error = -1;

static const int use_syllable_machine_en_main = 1;


#line 38 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"



#line 139 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"


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
  
#line 70 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	{
	cs = use_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 160 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int last = 0;
  unsigned int syllable_serial = 1;
  
#line 87 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
tr0:
#line 134 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{{p = ((te))-1;}{ found_syllable (broken_cluster); }}
	goto st1;
tr4:
#line 135 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (non_cluster); }}
	goto st1;
tr6:
#line 134 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (broken_cluster); }}
	goto st1;
tr26:
#line 128 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (independent_cluster); }}
	goto st1;
tr27:
#line 128 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (independent_cluster); }}
	goto st1;
tr28:
#line 130 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (standard_cluster); }}
	goto st1;
tr29:
#line 130 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (standard_cluster); }}
	goto st1;
tr49:
#line 129 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (virama_terminated_cluster); }}
	goto st1;
tr51:
#line 132 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (numeral_cluster); }}
	goto st1;
tr54:
#line 131 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (number_joiner_terminated_cluster); }}
	goto st1;
tr55:
#line 134 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (broken_cluster); }}
	goto st1;
tr59:
#line 135 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (non_cluster); }}
	goto st1;
tr60:
#line 133 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (symbol_cluster); }}
	goto st1;
st1:
#line 1 "NONE"
	{ts = 0;}
	if ( ++p == pe )
		goto _test_eof1;
case 1:
#line 1 "NONE"
	{ts = p;}
#line 153 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 0u: goto st2;
		case 1u: goto st3;
		case 3u: goto st2;
		case 4u: goto st24;
		case 5u: goto st3;
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st45;
		case 18u: goto tr8;
		case 19u: goto st48;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 31u: goto tr18;
		case 32u: goto tr19;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( ( info[p].use_category()) > 17u ) {
		if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
			goto st29;
	} else if ( ( info[p].use_category()) >= 16u )
		goto st2;
	goto tr4;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	if ( ( info[p].use_category()) == 21u )
		goto tr27;
	goto tr26;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 11u: goto st4;
		case 12u: goto st5;
		case 22u: goto st7;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 29u: goto st7;
		case 30u: goto st21;
		case 32u: goto st22;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( 21u <= ( info[p].use_category()) && ( info[p].use_category()) <= 31u )
		goto st23;
	goto tr28;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 11u: goto st4;
		case 12u: goto st5;
		case 21u: goto st6;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 30u: goto st21;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( ( info[p].use_category()) > 29u ) {
		if ( 31u <= ( info[p].use_category()) && ( info[p].use_category()) <= 32u )
			goto st22;
	} else if ( ( info[p].use_category()) >= 22u )
		goto st7;
	goto tr28;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( ( info[p].use_category()) == 1u )
		goto st4;
	goto tr49;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 11u: goto st4;
		case 12u: goto st5;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 30u: goto st21;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( ( info[p].use_category()) > 29u ) {
		if ( 31u <= ( info[p].use_category()) && ( info[p].use_category()) <= 32u )
			goto st22;
	} else if ( ( info[p].use_category()) >= 22u )
		goto st7;
	goto tr28;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 22u: goto st7;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
	}
	goto tr28;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 25u: goto st10;
		case 26u: goto st11;
	}
	goto tr28;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 26u: goto st11;
	}
	goto tr28;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 39u: goto st14;
	}
	goto tr28;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 22u: goto st7;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 28u: goto st19;
		case 29u: goto st7;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 22u: goto st7;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 28u: goto st20;
		case 29u: goto st7;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 22u: goto st7;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 29u: goto st7;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	goto tr28;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st7;
	goto tr28;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 11u: goto st4;
		case 12u: goto st5;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 30u: goto st21;
		case 32u: goto st22;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st7;
	goto tr28;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr29;
		case 11u: goto st4;
		case 12u: goto st5;
		case 23u: goto st8;
		case 24u: goto st9;
		case 25u: goto st10;
		case 26u: goto st11;
		case 27u: goto st18;
		case 28u: goto st19;
		case 30u: goto st21;
		case 31u: goto st23;
		case 32u: goto st22;
		case 33u: goto st15;
		case 34u: goto st16;
		case 35u: goto st17;
		case 37u: goto st12;
		case 38u: goto st13;
		case 39u: goto st14;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st7;
	goto tr28;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	switch( ( info[p].use_category()) ) {
		case 13u: goto st25;
		case 21u: goto st26;
	}
	goto tr51;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( ( info[p].use_category()) == 4u )
		goto st24;
	goto tr54;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( ( info[p].use_category()) == 13u )
		goto st25;
	goto tr51;
tr1:
#line 1 "NONE"
	{te = p+1;}
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
#line 608 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st0;
		case 21u: goto tr57;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( ( info[p].use_category()) > 29u ) {
		if ( 31u <= ( info[p].use_category()) && ( info[p].use_category()) <= 32u )
			goto tr19;
	} else if ( ( info[p].use_category()) >= 22u )
		goto st29;
	goto tr55;
st0:
	if ( ++p == pe )
		goto _test_eof0;
case 0:
	if ( ( info[p].use_category()) == 1u )
		goto tr1;
	goto tr0;
tr57:
#line 1 "NONE"
	{te = p+1;}
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
#line 649 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st0;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( ( info[p].use_category()) > 29u ) {
		if ( 31u <= ( info[p].use_category()) && ( info[p].use_category()) <= 32u )
			goto tr19;
	} else if ( ( info[p].use_category()) >= 22u )
		goto st29;
	goto tr55;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 22u: goto st29;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
	}
	goto tr55;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 25u: goto st32;
		case 26u: goto st33;
	}
	goto tr55;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 26u: goto st33;
	}
	goto tr55;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 39u: goto st36;
	}
	goto tr55;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 22u: goto st29;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 28u: goto st41;
		case 29u: goto st29;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 22u: goto st29;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 28u: goto st42;
		case 29u: goto st29;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 22u: goto st29;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 29u: goto st29;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	goto tr55;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st29;
	goto tr55;
tr19:
#line 1 "NONE"
	{te = p+1;}
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
#line 920 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st0;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 32u: goto tr19;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st29;
	goto tr55;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( ( info[p].use_category()) == 1u )
		goto tr1;
	goto tr59;
tr8:
#line 1 "NONE"
	{te = p+1;}
	goto st46;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
#line 958 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 1u: goto st3;
		case 5u: goto st3;
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st0;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 31u: goto tr18;
		case 32u: goto tr19;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st29;
	goto tr55;
tr18:
#line 1 "NONE"
	{te = p+1;}
	goto st47;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
#line 992 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.hh"
	switch( ( info[p].use_category()) ) {
		case 8u: goto tr6;
		case 11u: goto tr1;
		case 12u: goto st0;
		case 23u: goto st30;
		case 24u: goto st31;
		case 25u: goto st32;
		case 26u: goto st33;
		case 27u: goto st40;
		case 28u: goto st41;
		case 30u: goto st43;
		case 31u: goto tr18;
		case 32u: goto tr19;
		case 33u: goto st37;
		case 34u: goto st38;
		case 35u: goto st39;
		case 37u: goto st34;
		case 38u: goto st35;
		case 39u: goto st36;
	}
	if ( 22u <= ( info[p].use_category()) && ( info[p].use_category()) <= 29u )
		goto st29;
	goto tr55;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	switch( ( info[p].use_category()) ) {
		case 21u: goto st49;
		case 41u: goto st49;
		case 42u: goto st50;
	}
	goto tr60;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( ( info[p].use_category()) ) {
		case 41u: goto st49;
		case 42u: goto st50;
	}
	goto tr60;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( ( info[p].use_category()) == 42u )
		goto st50;
	goto tr60;
	}
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
	_test_eof0: cs = 0; goto _test_eof; 
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
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 2: goto tr26;
	case 3: goto tr28;
	case 4: goto tr28;
	case 5: goto tr49;
	case 6: goto tr28;
	case 7: goto tr28;
	case 8: goto tr28;
	case 9: goto tr28;
	case 10: goto tr28;
	case 11: goto tr28;
	case 12: goto tr28;
	case 13: goto tr28;
	case 14: goto tr28;
	case 15: goto tr28;
	case 16: goto tr28;
	case 17: goto tr28;
	case 18: goto tr28;
	case 19: goto tr28;
	case 20: goto tr28;
	case 21: goto tr28;
	case 22: goto tr28;
	case 23: goto tr28;
	case 24: goto tr51;
	case 25: goto tr54;
	case 26: goto tr51;
	case 27: goto tr55;
	case 0: goto tr0;
	case 28: goto tr55;
	case 29: goto tr55;
	case 30: goto tr55;
	case 31: goto tr55;
	case 32: goto tr55;
	case 33: goto tr55;
	case 34: goto tr55;
	case 35: goto tr55;
	case 36: goto tr55;
	case 37: goto tr55;
	case 38: goto tr55;
	case 39: goto tr55;
	case 40: goto tr55;
	case 41: goto tr55;
	case 42: goto tr55;
	case 43: goto tr55;
	case 44: goto tr55;
	case 45: goto tr59;
	case 46: goto tr55;
	case 47: goto tr55;
	case 48: goto tr60;
	case 49: goto tr60;
	case 50: goto tr60;
	}
	}

	}

#line 169 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-ot-shape-complex-use-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH */

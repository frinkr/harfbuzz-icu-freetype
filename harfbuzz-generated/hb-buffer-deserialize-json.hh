
#line 1 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
/*
 * Copyright © 2013  Google, Inc.
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

#ifndef HB_BUFFER_DESERIALIZE_JSON_HH
#define HB_BUFFER_DESERIALIZE_JSON_HH

#include "hb-private.hh"


#line 36 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
static const int deserialize_json_start = 1;
static const int deserialize_json_first_final = 44;
static const int deserialize_json_error = 0;

static const int deserialize_json_en_main = 1;


#line 97 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"


static hb_bool_t
_hb_buffer_deserialize_glyphs_json (hb_buffer_t *buffer,
				    const char *buf,
				    unsigned int buf_len,
				    const char **end_ptr,
				    hb_font_t *font)
{
  const char *p = buf, *pe = buf + buf_len;

  /* Ensure we have positions. */
  (void) hb_buffer_get_glyph_positions (buffer, NULL);

  while (p < pe && ISSPACE (*p))
    p++;
  if (p < pe && *p == (buffer->len ? ',' : '['))
  {
    *end_ptr = ++p;
  }

  const char *tok = NULL;
  int cs;
  hb_glyph_info_t info = {0};
  hb_glyph_position_t pos = {0};
  
#line 71 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	{
	cs = deserialize_json_start;
	}

#line 76 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( (*p) ) {
		case 32u: goto st1;
		case 123u: goto tr2;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st1;
	goto st0;
st0:
cs = 0;
	goto _out;
tr2:
#line 38 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	memset (&info, 0, sizeof (info));
	memset (&pos , 0, sizeof (pos ));
}
	goto st2;
tr19:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
	goto st2;
tr31:
#line 67 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
	goto st2;
tr39:
#line 63 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
	goto st2;
tr52:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_offset )) return false; }
	goto st2;
tr62:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
	goto st2;
tr73:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.codepoint)) return false; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
#line 131 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto st2;
		case 34u: goto st3;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st2;
	goto st0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( (*p) ) {
		case 97u: goto st4;
		case 99u: goto st18;
		case 100u: goto st24;
		case 103u: goto st37;
	}
	goto st0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( (*p) ) {
		case 120u: goto st5;
		case 121u: goto st12;
	}
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 34u )
		goto st6;
	goto st0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( (*p) ) {
		case 32u: goto st6;
		case 58u: goto st7;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st6;
	goto st0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( (*p) ) {
		case 32u: goto st7;
		case 45u: goto tr13;
		case 48u: goto tr14;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr15;
	} else if ( (*p) >= 9u )
		goto st7;
	goto st0;
tr13:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st8;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
#line 202 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	if ( (*p) == 48u )
		goto st9;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st11;
	goto st0;
tr14:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st9;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
#line 218 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr18;
		case 44u: goto tr19;
		case 125u: goto tr20;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr18;
	goto st0;
tr18:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
	goto st10;
tr30:
#line 67 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
	goto st10;
tr38:
#line 63 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
	goto st10;
tr51:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_offset )) return false; }
	goto st10;
tr61:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
	goto st10;
tr70:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
	goto st10;
tr72:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.codepoint)) return false; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
#line 264 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto st10;
		case 44u: goto st2;
		case 125u: goto tr22;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st10;
	goto st0;
tr20:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr22:
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr32:
#line 67 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr40:
#line 63 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr53:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.x_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr63:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
tr74:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{ if (!parse_uint (tok, p, &info.codepoint)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
#line 359 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto st44;
		case 44u: goto st45;
		case 93u: goto st46;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st44;
	goto st0;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	switch( (*p) ) {
		case 32u: goto st1;
		case 123u: goto tr2;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st1;
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	goto st0;
tr15:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st11;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
#line 394 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr18;
		case 44u: goto tr19;
		case 125u: goto tr20;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st11;
	} else if ( (*p) >= 9u )
		goto tr18;
	goto st0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 34u )
		goto st13;
	goto st0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( (*p) ) {
		case 32u: goto st13;
		case 58u: goto st14;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st13;
	goto st0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( (*p) ) {
		case 32u: goto st14;
		case 45u: goto tr25;
		case 48u: goto tr26;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr27;
	} else if ( (*p) >= 9u )
		goto st14;
	goto st0;
tr25:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st15;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
#line 449 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	if ( (*p) == 48u )
		goto st16;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st17;
	goto st0;
tr26:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st16;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
#line 465 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr30;
		case 44u: goto tr31;
		case 125u: goto tr32;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr30;
	goto st0;
tr27:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st17;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
#line 484 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr30;
		case 44u: goto tr31;
		case 125u: goto tr32;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st17;
	} else if ( (*p) >= 9u )
		goto tr30;
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( (*p) == 108u )
		goto st19;
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( (*p) == 34u )
		goto st20;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	switch( (*p) ) {
		case 32u: goto st20;
		case 58u: goto st21;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st20;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( (*p) ) {
		case 32u: goto st21;
		case 48u: goto tr36;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr37;
	} else if ( (*p) >= 9u )
		goto st21;
	goto st0;
tr36:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
#line 545 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr38;
		case 44u: goto tr39;
		case 125u: goto tr40;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr38;
	goto st0;
tr37:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
#line 564 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr38;
		case 44u: goto tr39;
		case 125u: goto tr40;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st23;
	} else if ( (*p) >= 9u )
		goto tr38;
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	switch( (*p) ) {
		case 120u: goto st25;
		case 121u: goto st31;
	}
	goto st0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( (*p) == 34u )
		goto st26;
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	switch( (*p) ) {
		case 32u: goto st26;
		case 58u: goto st27;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st26;
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( (*p) ) {
		case 32u: goto st27;
		case 45u: goto tr46;
		case 48u: goto tr47;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr48;
	} else if ( (*p) >= 9u )
		goto st27;
	goto st0;
tr46:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
#line 628 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	if ( (*p) == 48u )
		goto st29;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st30;
	goto st0;
tr47:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
#line 644 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr51;
		case 44u: goto tr52;
		case 125u: goto tr53;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr51;
	goto st0;
tr48:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
#line 663 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr51;
		case 44u: goto tr52;
		case 125u: goto tr53;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st30;
	} else if ( (*p) >= 9u )
		goto tr51;
	goto st0;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	if ( (*p) == 34u )
		goto st32;
	goto st0;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( (*p) ) {
		case 32u: goto st32;
		case 58u: goto st33;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st32;
	goto st0;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( (*p) ) {
		case 32u: goto st33;
		case 45u: goto tr56;
		case 48u: goto tr57;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr58;
	} else if ( (*p) >= 9u )
		goto st33;
	goto st0;
tr56:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st34;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
#line 718 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	if ( (*p) == 48u )
		goto st35;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st36;
	goto st0;
tr57:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st35;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
#line 734 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr61;
		case 44u: goto tr62;
		case 125u: goto tr63;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr61;
	goto st0;
tr58:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st36;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
#line 753 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr61;
		case 44u: goto tr62;
		case 125u: goto tr63;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st36;
	} else if ( (*p) >= 9u )
		goto tr61;
	goto st0;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 34u )
		goto st38;
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( (*p) ) {
		case 32u: goto st38;
		case 58u: goto st39;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st38;
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( (*p) ) {
		case 32u: goto st39;
		case 34u: goto st40;
		case 48u: goto tr67;
	}
	if ( (*p) > 13u ) {
		if ( 49u <= (*p) && (*p) <= 57u )
			goto tr68;
	} else if ( (*p) >= 9u )
		goto st39;
	goto st0;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) > 90u ) {
		if ( 97u <= (*p) && (*p) <= 122u )
			goto tr69;
	} else if ( (*p) >= 65u )
		goto tr69;
	goto st0;
tr69:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
#line 818 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 34u: goto tr70;
		case 95u: goto st41;
	}
	if ( (*p) < 48u ) {
		if ( 45u <= (*p) && (*p) <= 46u )
			goto st41;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto st41;
		} else if ( (*p) >= 65u )
			goto st41;
	} else
		goto st41;
	goto st0;
tr67:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st42;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
#line 845 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr72;
		case 44u: goto tr73;
		case 125u: goto tr74;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr72;
	goto st0;
tr68:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"
	{
	tok = p;
}
	goto st43;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
#line 864 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.hh"
	switch( (*p) ) {
		case 32u: goto tr72;
		case 44u: goto tr73;
		case 125u: goto tr74;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st43;
	} else if ( (*p) >= 9u )
		goto tr72;
	goto st0;
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
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
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

	_test_eof: {}
	_out: {}
	}

#line 125 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-json.rl"


  *end_ptr = p;

  return p == pe && *(p-1) != ']';
}

#endif /* HB_BUFFER_DESERIALIZE_JSON_HH */

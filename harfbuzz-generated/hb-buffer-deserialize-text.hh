
#line 1 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
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

#ifndef HB_BUFFER_DESERIALIZE_TEXT_HH
#define HB_BUFFER_DESERIALIZE_TEXT_HH

#include "hb-private.hh"


#line 36 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
static const int deserialize_text_start = 1;
static const int deserialize_text_first_final = 13;
static const int deserialize_text_error = 0;

static const int deserialize_text_en_main = 1;


#line 91 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"


static hb_bool_t
_hb_buffer_deserialize_glyphs_text (hb_buffer_t *buffer,
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
  if (p < pe && *p == (buffer->len ? '|' : '['))
  {
    *end_ptr = ++p;
  }

  const char *eof = pe, *tok = NULL;
  int cs;
  hb_glyph_info_t info = {0};
  hb_glyph_position_t pos = {0};
  
#line 71 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	{
	cs = deserialize_text_start;
	}

#line 76 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
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
		case 48u: goto tr2;
	}
	if ( (*p) < 49u ) {
		if ( 9u <= (*p) && (*p) <= 13u )
			goto st1;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto tr4;
		} else if ( (*p) >= 65u )
			goto tr4;
	} else
		goto tr3;
	goto st0;
st0:
cs = 0;
	goto _out;
tr2:
#line 38 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	memset (&info, 0, sizeof (info));
	memset (&pos , 0, sizeof (pos ));
}
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st13;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
#line 120 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr28;
		case 43u: goto tr29;
		case 61u: goto tr30;
		case 64u: goto tr31;
		case 93u: goto tr32;
		case 124u: goto tr33;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr28;
	goto st0;
tr28:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st14;
tr38:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st14;
tr42:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st14;
tr45:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st14;
tr50:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st14;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
#line 201 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto st14;
		case 93u: goto st15;
		case 124u: goto st16;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st14;
	goto st0;
tr32:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st15;
tr40:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st15;
tr43:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st15;
tr48:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st15;
tr52:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st15;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
#line 279 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	goto st0;
tr33:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st16;
tr41:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st16;
tr44:
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st16;
tr49:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st16;
tr53:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	goto st16;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
#line 350 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto st1;
		case 48u: goto tr2;
	}
	if ( (*p) < 49u ) {
		if ( 9u <= (*p) && (*p) <= 13u )
			goto st1;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto tr4;
		} else if ( (*p) >= 65u )
			goto tr4;
	} else
		goto tr3;
	goto st0;
tr3:
#line 38 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	memset (&info, 0, sizeof (info));
	memset (&pos , 0, sizeof (pos ));
}
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st17;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
#line 382 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr28;
		case 43u: goto tr29;
		case 61u: goto tr30;
		case 64u: goto tr31;
		case 93u: goto tr32;
		case 124u: goto tr33;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st17;
	} else if ( (*p) >= 9u )
		goto tr28;
	goto st0;
tr29:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
	goto st2;
tr46:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
	goto st2;
tr51:
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
#line 418 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 45u: goto tr5;
		case 48u: goto tr6;
	}
	if ( 49u <= (*p) && (*p) <= 57u )
		goto tr7;
	goto st0;
tr5:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st3;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
#line 436 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 48u )
		goto st18;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st21;
	goto st0;
tr6:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st18;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
#line 452 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr38;
		case 44u: goto tr39;
		case 93u: goto tr40;
		case 124u: goto tr41;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr38;
	goto st0;
tr39:
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
	goto st4;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
#line 470 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 45u: goto tr10;
		case 48u: goto tr11;
	}
	if ( 49u <= (*p) && (*p) <= 57u )
		goto tr12;
	goto st0;
tr10:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st5;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
#line 488 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 48u )
		goto st19;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st20;
	goto st0;
tr11:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st19;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
#line 504 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr42;
		case 93u: goto tr43;
		case 124u: goto tr44;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr42;
	goto st0;
tr12:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
#line 523 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr42;
		case 93u: goto tr43;
		case 124u: goto tr44;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st20;
	} else if ( (*p) >= 9u )
		goto tr42;
	goto st0;
tr7:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st21;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
#line 545 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr38;
		case 44u: goto tr39;
		case 93u: goto tr40;
		case 124u: goto tr41;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st21;
	} else if ( (*p) >= 9u )
		goto tr38;
	goto st0;
tr30:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
	goto st6;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
#line 571 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 48u )
		goto tr15;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto tr16;
	goto st0;
tr15:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
#line 587 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr45;
		case 43u: goto tr46;
		case 64u: goto tr47;
		case 93u: goto tr48;
		case 124u: goto tr49;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr45;
	goto st0;
tr31:
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
	goto st7;
tr47:
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
	goto st7;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
#line 615 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 45u: goto tr17;
		case 48u: goto tr18;
	}
	if ( 49u <= (*p) && (*p) <= 57u )
		goto tr19;
	goto st0;
tr17:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st8;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
#line 633 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 48u )
		goto st9;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st12;
	goto st0;
tr18:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st9;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
#line 649 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 44u )
		goto tr22;
	goto st0;
tr22:
#line 63 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_offset )) return false; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
#line 661 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 45u: goto tr23;
		case 48u: goto tr24;
	}
	if ( 49u <= (*p) && (*p) <= 57u )
		goto tr25;
	goto st0;
tr23:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st11;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
#line 679 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 48u )
		goto st23;
	if ( 49u <= (*p) && (*p) <= 57u )
		goto st24;
	goto st0;
tr24:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
#line 695 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr50;
		case 43u: goto tr51;
		case 93u: goto tr52;
		case 124u: goto tr53;
	}
	if ( 9u <= (*p) && (*p) <= 13u )
		goto tr50;
	goto st0;
tr25:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st24;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
#line 715 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr50;
		case 43u: goto tr51;
		case 93u: goto tr52;
		case 124u: goto tr53;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st24;
	} else if ( (*p) >= 9u )
		goto tr50;
	goto st0;
tr19:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st12;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
#line 738 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	if ( (*p) == 44u )
		goto tr22;
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st12;
	goto st0;
tr16:
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st25;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
#line 754 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr45;
		case 43u: goto tr46;
		case 64u: goto tr47;
		case 93u: goto tr48;
		case 124u: goto tr49;
	}
	if ( (*p) > 13u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st25;
	} else if ( (*p) >= 9u )
		goto tr45;
	goto st0;
tr4:
#line 38 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	memset (&info, 0, sizeof (info));
	memset (&pos , 0, sizeof (pos ));
}
#line 51 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	tok = p;
}
	goto st26;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
#line 783 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	switch( (*p) ) {
		case 32u: goto tr28;
		case 43u: goto tr29;
		case 61u: goto tr30;
		case 64u: goto tr31;
		case 93u: goto tr32;
		case 95u: goto st26;
		case 124u: goto tr33;
	}
	if ( (*p) < 48u ) {
		if ( (*p) > 13u ) {
			if ( 45u <= (*p) && (*p) <= 46u )
				goto st26;
		} else if ( (*p) >= 9u )
			goto tr28;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto st26;
		} else if ( (*p) >= 65u )
			goto st26;
	} else
		goto st26;
	goto st0;
	}
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 13: 
	case 17: 
	case 26: 
#line 55 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	if (!hb_font_glyph_from_string (font,
					tok, p - tok,
					&info.codepoint))
	  return false;
}
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	break;
	case 22: 
	case 25: 
#line 62 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_uint (tok, p, &info.cluster )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	break;
	case 23: 
	case 24: 
#line 64 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_offset )) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	break;
	case 18: 
	case 21: 
#line 65 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.x_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	break;
	case 19: 
	case 20: 
#line 66 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{ if (!parse_int  (tok, p, &pos.y_advance)) return false; }
#line 43 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"
	{
	buffer->add_info (info);
	if (buffer->in_error)
	  return false;
	buffer->pos[buffer->len - 1] = pos;
	*end_ptr = p;
}
	break;
#line 911 "/Data/typesetting/tx-research/build/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.hh"
	}
	}

	_out: {}
	}

#line 119 "/Data/typesetting/tx-research/harfbuzz-1.4.8/src/hb-buffer-deserialize-text.rl"


  *end_ptr = p;

  return p == pe && *(p-1) != ']';
}

#endif /* HB_BUFFER_DESERIALIZE_TEXT_HH */

/* Library pool group 0x8c1f5140-0x8c1f522c (Hitachi SHC): character-table
   lookups for text rendering: a bitmap test, a control-code remap and a
   two-byte code to glyph-index conversion that tail-calls the bitmap test. */
typedef struct GlyphRange {
    short base;
    short alternate;
} GlyphRange;

extern unsigned char g_glyph_bitmap_8c289950[];
extern unsigned char g_bit_masks_8c289ff8[];
extern unsigned char g_glyph_index_8c289ef8[];
extern GlyphRange g_glyph_ranges_8c289d30[];

int glyph_present_8c1f5140(short code)
{
    return g_glyph_bitmap_8c289950[code >> 3] & g_bit_masks_8c289ff8[code & 7];
}

unsigned char remap_control_8c1f515e(unsigned char c)
{
    if (c >= 1 && c <= 13) return c + 0x7f;
    return 0;
}

int glyph_for_code_8c1f5178(unsigned char low, unsigned char shift, unsigned char high0)
{
    int high = high0;
    int index;
    int lw;
    GlyphRange *range;
    int code;
    if (high < 0x80) return 0;
    if (low < 0x2d && shift) {
        if (!(low = remap_control_8c1f515e(low))) return 0;
    }
    index = g_glyph_index_8c289ef8[low];
    if ((short)index == 0xff) return 0;
    range = high >= 0xc0 ? &g_glyph_ranges_8c289d30[high - 0xc0] : &g_glyph_ranges_8c289d30[high - 0x80] + 63;
    lw = low;
    if (lw < 0x80 || lw >= 0xc0) return glyph_present_8c1f5140(range->base + index);
    return glyph_present_8c1f5140(range->alternate + index + shift - 1);
}

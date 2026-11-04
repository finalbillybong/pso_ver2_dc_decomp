/* Static data 8c2f1f48-8c2f1f52: int16_table objects, in address order. */

/* The 5 Shift-JIS kana that take a handakuten (ha..ho); the loop at 0x8c04bfc8 compares a
   character with each of them (count 5, mov.w). */
const unsigned short kana_handakuten_bases_8c2f1f48[5] = {
    0x82cd, 0x82d0, 0x82d3, 0x82d6, 0x82d9
};

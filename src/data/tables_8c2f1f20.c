/* Static data 8c2f1f20-8c2f1f48: int16_table objects, in address order. */

/* The 20 Shift-JIS kana that take a dakuten (ka..ko, sa..so, ta..to, ha..ho); the loop at
   0x8c04bf14 compares a character with each of them (count 20, mov.w). */
const unsigned short kana_dakuten_bases_8c2f1f20[20] = {
    0x82a9, 0x82ab, 0x82ad, 0x82af, 0x82b1, 0x82b3, 0x82b5, 0x82b7,
    0x82b9, 0x82bb, 0x82bd, 0x82bf, 0x82c2, 0x82c4, 0x82c6, 0x82cd,
    0x82d0, 0x82d3, 0x82d6, 0x82d9
};

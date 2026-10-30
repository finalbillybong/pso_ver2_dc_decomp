/* Library pool group 0x8c1f9f14-0x8c1f9f62 (Hitachi SHC): true for the
   punctuation and space codes at which text may break. */
int is_break_char_8c1f9f14(unsigned char c)
{
    if (c >= 0xa0) return 0;
    switch (c) {
    case 0x20: case 0x21: case 0x2c: case 0x2e: case 0x3a: case 0x3b: case 0x3f:
    case 0x98: case 0x9b: case 0x9c:
        return 1;
    }
    return 0;
}

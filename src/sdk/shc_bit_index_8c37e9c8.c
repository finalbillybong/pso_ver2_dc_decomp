/* SDK pool group 0x8c37e9c8-0x8c37ea1e (Hitachi SHC): maps a single-bit value
   0x8..0x400 to its index 0..7; other values are returned unchanged. The
   comparison constants above 0x7f come from a pool of four words. */
int bit_index_8c37e9c8(int value)
{
    if (value == 8) value = 0;
    else if (value == 0x10) value = 1;
    else if (value == 0x20) value = 2;
    else if (value == 0x40) value = 3;
    else if (value == 0x80) value = 4;
    else if (value == 0x100) value = 5;
    else if (value == 0x200) value = 6;
    else if (value == 0x400) value = 7;
    return value;
}

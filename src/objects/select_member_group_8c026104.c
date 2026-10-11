char *select_member_8c026104(char *o, int second)
{
    return second == 0 ? o + 4 : o + 0x14;
}

void store_member_byte_8c026114(char *o, int which, int second, int index, unsigned short value)
{
    if (which == 1) o += 0x4e4;
    else o += 0x4c0;
    o = second == 0 ? o + 4 : o + 0x14;
    (o + (index << 2))[1] = value;
}

void long_to_bytes(unsigned char *dst, unsigned long *src)
{
    int i;

    for (i = 0; i < 4; i++)
        dst[i] = *src >> (24 - i * 8);
}

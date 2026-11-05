void short_to_bytes_8c12f140(unsigned char *dst, unsigned short *src)
{
    int i;

    for (i = 0; i < 2; i++)
        dst[i] = *src >> (8 - i * 8);
}

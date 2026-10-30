/* Big-endian byte packing helpers (Hitachi SHC). */
unsigned char *put_be32_8c1fd198(unsigned char *p, unsigned long v)
{
    *p++ = v >> 24;
    *p++ = v >> 16;
    *p++ = v >> 8;
    *p++ = v;
    return p;
}

unsigned char *put_be16_8c1fd1ba(unsigned char *p, unsigned short v)
{
    *p++ = v >> 8;
    *p++ = v;
    return p;
}

unsigned short get_be16_8c1fd1ca(unsigned char *p)
{
    unsigned short v;
    v = *p++ << 8;
    v |= *p;
    return v;
}

unsigned long get_be32_8c1fd1da(unsigned char *p)
{
    unsigned long v;
    v = *p++;
    v <<= 8;
    v |= *p++;
    v <<= 8;
    v |= *p++;
    v <<= 8;
    v |= *p;
    return v;
}

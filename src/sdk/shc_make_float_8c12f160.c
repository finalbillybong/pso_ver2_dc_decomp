typedef unsigned long size_t;
extern void *memcpy(void *, const void *, size_t);
extern void long_to_bytes(void *, void *);

float make_float(short e, unsigned char *m)
{
    float r;
    unsigned char b[4];

    m[0] &= 0x7f;
    memcpy(b + 1, m, 3);
    b[0] = e / 2;
    b[1] |= (e % 2) << 7;
    long_to_bytes(&r, b);
    return r;
}

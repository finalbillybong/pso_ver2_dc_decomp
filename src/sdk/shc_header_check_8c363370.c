/* Validates a 0x40-type header by parsing two bit fields (Hitachi SHC). */
extern int header_type_8c35b2c4(unsigned char *);

int parse_nibbles_8c3633d2(unsigned char *p, int len, int *hi, int *lo);
int parse_bits_8c3633f8(unsigned char *p, int len, int *value, int *flag);

int header_check_8c363370(unsigned char *p, int len)
{
    int value, flag, hi, lo;
    if (header_type_8c35b2c4(p) != 0x40) goto no;
    if (parse_nibbles_8c3633d2(p, len, &hi, &lo) != 0) return 1;
    if (hi == 0) goto no;
    if (lo == 0) goto no;
    if (parse_bits_8c3633f8(p, len, &value, &flag) != 0) goto yes;
    if (value == 0) goto no;
    if (flag != 0) goto yes;
no:
    return 0;
yes:
    return 1;
}

int parse_nibbles_8c3633d2(unsigned char *p, int len, int *hi, int *lo)
{
    unsigned int v;
    if (len < 8) return -1;
    p += 7;
    v = *p;
    *hi = (v >> 4) & 15;
    *lo = v & 15;
    return 0;
}

int parse_bits_8c3633f8(unsigned char *p, int len, int *value, int *flag)
{
    unsigned long v;
    unsigned char *q = p;
    if (len < 11) return -1;
    q += 8;
    v = *q++;
    v <<= 8;
    v |= *q++;
    v <<= 8;
    v |= *q;
    *value = (v >> 6) & 0x2ffff;
    *flag = (v >> 5) & 1;
    return 0;
}

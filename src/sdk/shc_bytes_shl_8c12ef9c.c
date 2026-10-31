int bytes_shl(unsigned char *p, int n, short k)
{
    short s;
    unsigned char *q;
    int mask;
    unsigned char c;
    unsigned char carry;

    s = 8 - k;
    if (s == 0)
        return;
    mask = 0xff << s;
    carry = 0;
    for (q = p + (n - 1); q >= p; q--) {
        c = *q & mask;
        *q <<= k;
        *q |= carry;
        carry = c >> s;
    }
    if (carry)
        return 1;
    return 0;
}

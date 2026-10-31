int bytes_shl1(unsigned char *p, int n)
{
    int i;
    int carry;
    int c;

    carry = 0;
    for (i = n - 1; i >= 0; i--) {
        c = p[i] & 0x80;
        p[i] <<= 1;
        if (carry)
            p[i] |= 1;
        carry = c;
    }
    if (carry)
        return 1;
    return 0;
}

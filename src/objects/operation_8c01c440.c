unsigned int operation_8c01c440(unsigned char *p, int n)
{
    unsigned int c;
    int i;
    int j;
    unsigned int k;
    c = -1;
    k = 0xedb88320;
    for (i = 0; i < n; i++) {
        c ^= p[i];
        for (j = 0; j < 8; j++) {
            if (c & 1) {
                c = c >> 1 ^ k;
            } else {
                c >>= 1;
            }
        }
    }
    return c ^ -1;
}

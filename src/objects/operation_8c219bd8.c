extern unsigned char *g_8c50591c;
extern int operation_8c158548(int);
void operation_8c219bd8(void)
{
    int i;
    unsigned char *p;
    int base;
    int m1;
    int r;
    int c;
    m1 = -1;
    base = 0x1d1;
    p = g_8c50591c;
    i = 0;
    while (0x10 != i) {
        int v;
        r = operation_8c158548(i + base);
        c = (int)(unsigned char)r;
        v = (c + m1);
        *p++ = v;
        *p++ = (unsigned char)v;
        ++c;
        *p++ = r;
        *p++ = c;
        i++;
        *p++ = c;
    }
    m1 = 0x1d1;
    for (; i != 0x44; ++i) {
        *p++ = operation_8c158548(i + m1);
    }
}

void operation_8c1a19fc(int a0, int a1)
{
    int *p;
    int i;
    int lim;
    p = (int *)(a0 + 0x20);
    lim = 0x200;
    for (i = 0; lim > i; i++) {
        if (*p == a1) {
            int *d;
            int *s;
            d = p;
            p++;
            lim = 0x200;
            s = p;
            while (lim > i++) {
                *d++ = *s++;
                if (*d == 0) {
                    return;
                }
            }
            *p = 0;
            return;
        }
        p++;
    }
}

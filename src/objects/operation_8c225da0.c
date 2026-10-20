extern int g_8c467188;
extern int call_8c12b0cc(char *);
extern char *call_8c04ba30(char *, int *, int);
extern void call_8c12b154(char *, char *, int);
void operation_8c225da0(char *dst, char *src, int max)
{
    int sjis;
    int len;
    char *p;
    int n;
    char c;
    sjis = 0;
    if (dst != 0 && max > 0) {
        if (src == 0 || max <= 1) {
            *dst = 0;
            return;
        }
        len = call_8c12b0cc(src) + 1;
        if (g_8c467188 == 0) {
            sjis = 1;
        }
        while (len > max) {
            if (*src == 0 || len <= 0 || max <= 1) {
                if (max <= 0) {
                    return;
                }
                *dst = 0;
                return;
            }
            p = call_8c04ba30(src, &sjis, 0);
            if (p != src) {
                n = p - src;
                if (n >= max) {
                    *dst = 0;
                    return;
                }
                call_8c12b154(dst, src, n);
                src = p;
                dst += n;
                max -= n;
                len -= n;
            } else {
                c = *src++;
                len--;
                if (sjis != 0 && ((c & 0xe0) == 0x80 || (c & 0xe0) == 0xe0)) {
                    src++;
                    len--;
                }
            }
        }
        call_8c12b154(dst, src, len);
        dst += len;
        *dst = 0;
    }
}

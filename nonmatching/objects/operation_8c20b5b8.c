/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20b5b8
 * function: operation_8c20b5b8
 * language: c
 * reference size: 1136 bytes
 * compiled size: 1136 bytes (+0.0%)
 * differing lines: 654 of 491 reference instruction lines
 * differing bytes: 361
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object {
    char unknown0[0x14];
    int f14;
} Object;
extern int g_8c5051e0;
extern char g_8c335efc[];
extern int operation_8c210724(int);
extern void operation_8c18eb64(int, char *);
extern int strlen_8c12b0cc(char *);
extern void strncpy_8c12b154(char *, char *, int);
extern int operation_8c20b458(char *, int *);
static inline int fits(int n, int len)
{
    return 0x80 > n + len + 1;
}
static inline void append_str(char *dst, int *plen, char *s)
{
    int n;
    int len;
    int ok;
    if (s != 0) {
        n = strlen_8c12b0cc(s);
        len = *plen;
        ok = 0x80 > n + len + 1;
        if (ok) {
            strncpy_8c12b154(dst + len, s, n);
            *plen += n;
        }
    }
}
static inline void append_char(char *dst, int *plen, char c)
{
    int len;
    int ok;
    len = *plen;
    ok = 0x80 > len + 1 + 1;
    if (ok) {
        *plen = len + 1;
        dst[len] = c;
    }
}
static inline int find_ja(char *s, int len)
{
    int i;
    int m1;
    char *q;
    char c0;
    char c1;
    m1 = -1;
    q = s + 1;
    for (i = 0; i < len + m1; i++) {
        c0 = s[i];
        c1 = q[i];
        if ((c0 == 0x4a || c0 == 0x6a) && c1 == 0x61) {
            return i;
        }
    }
    return len;
}
void operation_8c20b5b8(Object *o, int a1, char *a2, char *dst, int *plen)
{
    char buf[0x20];
    int kind;
    int n;
    int lim;
    int la;
    int lb;
    int len;
    int pos;
    int ok;
    kind = operation_8c210724(a1);
    if (kind != 7) {
        n = o->f14;
        lim = *(int *)((char *)0x8c2e1710 + (kind << 2));
        if (n > 0) {
            if (n > lim) {
                n = lim;
            }
            operation_8c18eb64(n, buf);
            switch (kind) {
            case 0:
            case 5:
                if (kind == 5 && g_8c5051e0 == 2) {
                    la = strlen_8c12b0cc(a2);
                    lb = strlen_8c12b0cc(buf);
                    len = *plen;
                    ok = fits(la + lb + 1, len);
                    if (!ok) {
                        return;
                    }
                    pos = find_ja(a2, la);
                    if (pos != 0) {
                        strncpy_8c12b154(dst + len, a2, pos);
                        *plen += pos;
                    }
                    append_str(dst, plen, buf);
                    if (operation_8c20b458(dst, plen) > 0xf) {
                        append_char(dst, plen, 0xa);
                    } else {
                        append_char(dst, plen, 0x20);
                    }
                    la -= pos;
                    if (la > 0) {
                        strncpy_8c12b154(dst + *plen, a2 + pos, la);
                        *plen += la;
                    }
                    return;
                }
                append_str(dst, plen, buf);
                if (g_8c5051e0 != 0) {
                    append_char(dst, plen, 0x20);
                }
                append_str(dst, plen, a2);
                break;
            case 1:
                append_str(dst, plen, a2);
                append_char(dst, plen, 0x2b);
                append_str(dst, plen, buf);
                break;
            case 2:
                append_str(dst, plen, a2);
                append_str(dst, plen, g_8c335efc + 0x61);
                append_str(dst, plen, buf);
                break;
            case 3:
            case 4:
                append_str(dst, plen, a2);
                append_str(dst, plen, buf);
                break;
            }
            return;
        }
    }
    append_str(dst, plen, a2);
}

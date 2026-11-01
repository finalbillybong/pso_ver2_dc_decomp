/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c210894
 * function: operation_8c210894
 * language: c
 * reference size: 376 bytes
 * compiled size: 376 bytes (+0.0%)
 * differing lines: 82 of 163 reference instruction lines
 * differing bytes: 65
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Menu {
    char unknown0[0x8];
    short *f08;
    int f0c;
    short *f10;
    int f14;
    short *f18;
    int f1c;
    short *f20;
    int f24;
} Menu;
extern int g_8c418248;
extern char **g_8c5051f0;
extern Menu *g_8c5051f4;
extern int lookup_low_id(int);
extern void strncpy_8c12b154(void *, void *, int);
#define H(b, i) (*(short *)((char *)(b) + ((i) << 1)))
#define NAME(i) (*(char **)((char *)g_8c5051f0 + ((i) << 2)))
void operation_8c210894(void)
{
    int n;
    short *list;
    int i;
    int k1;
    int k2;
    int m;
    int p;
    int k;
    short *q;
    short *l;
    int j;
    n = 0;
    list = g_8c5051f4->f08;
    H(list, n++) = 0x1b7;
    k1 = 0x7e4;
    k2 = 0x457;
    for (i = 0; i < 0xc; i++) {
        p = lookup_low_id(i);
        if (p != 0) {
            strncpy_8c12b154(NAME(i), (void *)(p + k1), 0x18);
            if (i != g_8c418248) {
                H(list, n++) = i + k2;
                if (n >= 0x10) {
                    break;
                }
            }
        } else {
            *NAME(i) = 0;
        }
    }
    g_8c5051f4->f0c = n;
    j = 0;
    k2 = 0x1b4;
    m = -1;
    l = g_8c5051f4->f10;
    H(l, j) = k2;
    for (k = j + 1; j < n + m; j++) {
        H(l, k++) = H(list + 1, j);
    }
    H(l, k++) = 0x1b5;
    H(l, k++) = 0x1b6;
    H(l, k++) = 0x1b7;
    g_8c5051f4->f14 = k;
    j = 0;
    q = g_8c5051f4->f20;
    l = g_8c5051f4->f18;
    m = -1;
    *q = H(l, j) = 0x1b4;
    q++;
    for (p = j + 1; j < n + m; j++) {
        *q++ = H(l, p++) = H(list + 1, j);
    }
    *q = H(l, p++) = 0x1b7;
    H(l, p++) = 0x1b8;
    g_8c5051f4->f1c = p;
    g_8c5051f4->f24 = p - 1;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cc8e4
 * function: operation_8c1cc8e4
 * language: c
 * reference size: 556 bytes
 * compiled size: 560 bytes (+0.7%)
 * differing lines: 136 of 278 reference instruction lines
 * differing bytes: 178
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    unsigned char k0;
    unsigned char k1;
    unsigned char k2;
    char unknown3[0x1];
    int f04[4];
} Rec;
void operation_8c1cc8e4(Rec *a, int n, int mode)
{
    int i;
    int j;
    int oi;
    int oj;
    int f;
    int m;
    unsigned char x;
    unsigned char y;
    m = -1;
    for (i = 0; i < n + m; i++) {
        oi = i * 0x14;
        for (j = i + 1; j < n; j++) {
            switch (mode) {
            case 0: {
                Rec t;
                oj = j * 0x14;
                if (*((unsigned char *)&a->k0 + oi) > *((unsigned char *)&a->k0 + oj)) {
                    t = *(Rec *)((char *)a + oi);
                    *(Rec *)((char *)a + oi) = *(Rec *)((char *)a + oj);
                    *(Rec *)((char *)a + oj) = t;
                }
                break;
            }
            case 1: {
                Rec t;
                oj = j * 0x14;
                x = *((unsigned char *)&a->k0 + oi);
                y = *((unsigned char *)&a->k0 + oj);
                if (x > y) {
                    f = 1;
                } else if (x == y && *((unsigned char *)&a->k1 + oi) > *((unsigned char *)&a->k1 + oj)) {
                    f = 1;
                } else {
                    f = 0;
                }
                if (f != 0) {
                    t = *(Rec *)((char *)a + oi);
                    *(Rec *)((char *)a + oi) = *(Rec *)((char *)a + oj);
                    *(Rec *)((char *)a + oj) = t;
                }
                break;
            }
            case 2: {
                Rec t;
                oj = j * 0x14;
                x = *((unsigned char *)&a->k0 + oi);
                y = *((unsigned char *)&a->k0 + oj);
                if (x > y) {
                    f = 1;
                } else if (x == y) {
                    x = *((unsigned char *)&a->k1 + oi);
                    y = *((unsigned char *)&a->k1 + oj);
                    if (x > y) {
                        f = 1;
                    } else if (x == y && *((unsigned char *)&a->k2 + oi) > *((unsigned char *)&a->k2 + oj)) {
                        f = 1;
                    } else {
                        f = 0;
                    }
                } else {
                    f = 0;
                }
                if (f != 0) {
                    t = *(Rec *)((char *)a + oi);
                    *(Rec *)((char *)a + oi) = *(Rec *)((char *)a + oj);
                    *(Rec *)((char *)a + oj) = t;
                }
                break;
            }
            }
        }
    }
}

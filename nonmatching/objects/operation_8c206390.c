/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c206390
 * function: operation_8c206390
 * language: c
 * reference size: 296 bytes
 * compiled size: 292 bytes (-1.4%)
 * differing lines: 118 of 139 reference instruction lines
 * differing bytes: 205
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
#define P(b) (*(short *)((char *)((char *)o + 0x1012) + (b)))
#define S(b) (*(short *)((char *)((char *)o + 0x3014) + (b)))
#define C(b) (*(short *)((char *)((char *)o + 0x5016) + (b)))
void operation_8c206390(Object *o, int a1)
{
    int k = a1 << 1;
    int v;
    int t;
    short n = 0x1000;
    if (P(k) != n) {
        if (C(k) == 0x1000) {
            v = S(k);
        } else if (S(k) == 0x1000) {
            v = C(k);
        } else {
            v = S(k);
            if (C(v << 1) != 0x1000) {
                do {
                    v = C(v << 1);
                } while (C(v << 1) != n);
                *(short *)((char *)o + 0x5016 + (P(v << 1) << 1)) = S(v << 1);
                P(S(v << 1) << 1) = P(v << 1);
                S(v << 1) = S(k);
                P(S(k) << 1) = v;
            }
            C(v << 1) = C(k);
            P(C(k) << 1) = v;
        }
        P(v << 1) = P(k);
        t = P(k) << 1;
        if (C(t) == a1) {
            C(t) = v;
        } else {
            S(t) = v;
        }
        P(k) = 0x1000;
    }
}

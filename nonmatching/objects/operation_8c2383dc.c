/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2383dc
 * function: operation_8c2383dc
 * language: c
 * reference size: 68 bytes
 * compiled size: 68 bytes (+0.0%)
 * differing lines: 6 of 29 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c247e8c(int);
int operation_8c2383dc(int a0)
{
    int r;
    int m;
    int v;
    v = a0;
    m = 0xffff;
    a0 = (short)(a0 >> 0x10) & m;
    r = operation_8c247e8c(a0);
    if (r < 4 || 0xc < r) {
        r = -1;
    } else {
        r = (unsigned short)(a0 ^ v);
    }
    if (r < 0) {
        r = 0;
    }
    return r;
}

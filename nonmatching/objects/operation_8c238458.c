/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238458
 * function: operation_8c238458
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 18 of 38 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
int operation_8c238458(int a0)
{
    int v2;
    int t1;
    int m;
    if (a0 == 0) {
        return 0;
    }
    m = 0xffff;
    v2 = a0;
    v2 = (short)((unsigned int)v2 >> 0x10) & m;
    t1 = operation_8c247e8c(v2);
    if (4 > t1 || t1 > 0xc) {
        v2 = -1;
    } else {
        v2 = (unsigned short)(v2 ^ a0);
    }
    if (operation_8c238e7c(v2) != 0) {
        return 0;
    }
    return v2;
}

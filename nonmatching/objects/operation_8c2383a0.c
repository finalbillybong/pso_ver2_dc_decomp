/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2383a0
 * function: operation_8c2383a0
 * language: c
 * reference size: 60 bytes
 * compiled size: 60 bytes (+0.0%)
 * differing lines: 16 of 26 reference instruction lines
 * differing bytes: 16
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
int operation_8c2383a0(unsigned int a0)
{
    int v2;
    int t1;
    t1 = 0xffff;
    v2 = (short)(a0 >> 16) & t1;
    t1 = operation_8c247e8c(v2);
    if (t1 < 4 || 0xc < t1) {
        return -1;
    }
    return (unsigned short)(v2 ^ a0);
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2333b8
 * function: operation_8c2333b8
 * language: c
 * reference size: 36 bytes
 * compiled size: 40 bytes (+11.1%)
 * differing lines: 18 of 18 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c2333b8(int a0)
{
    int *home = &a0;
    int v5;
    (void)home;
    v5 = ((int (*)(int, int))0x8c378bf8)(2, a0);
    if (v5 == -8) {
        v5 = ((int (*)(int))0x8c378cfc)(0);
    }
    return v5;
}

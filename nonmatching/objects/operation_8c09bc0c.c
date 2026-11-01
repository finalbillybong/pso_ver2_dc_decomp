/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09bc0c
 * function: operation_8c09bc0c
 * language: c
 * reference size: 72 bytes
 * compiled size: 68 bytes (-5.6%)
 * differing lines: 2 of 33 reference instruction lines
 * differing bytes: 67
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
void operation_8c09bc0c(int a0, int *a1)
{
    int v4;
    int v1;
    int v3;
    v4 = 3;
    if (a0 >= 0) {
        goto L_start;
    }
L_start:;
    a0 *= v4;
    for (v1 = 0; v4 > v1; v1++) {
        v3 = *(int *)((char *)0x8c30179c + (v1 + a0 << 2));
        if (v3 == 7) {
            v3 = 4;
        } else if (v3 == 8) {
            v3 = 0;
        }
        *(int *)((char *)a1 + (v1 << 2)) = v3;
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c234838
 * function: operation_8c234838
 * language: c
 * reference size: 38 bytes
 * compiled size: 36 bytes (-5.3%)
 * differing lines: 13 of 19 reference instruction lines
 * differing bytes: 29
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c234838(void)
{
    int v1;
    int t1;
    v1 = (int)(void *)0x8c378e04;
L_8c23483e:;
    t1 = ((int (*)(void))(v1))();
    if (t1 == 3) {
        return 0;
    }
    if (t1 != 1) {
        goto L_8c23483e;
    }
    return 1;
}

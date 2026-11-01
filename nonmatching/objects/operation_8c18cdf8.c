/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18cdf8
 * function: operation_8c18cdf8
 * language: c
 * reference size: 36 bytes
 * compiled size: 28 bytes (-22.2%)
 * differing lines: 4 of 18 reference instruction lines
 * differing bytes: 34
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
};
struct S_vv1 {
    char f00;
};
int operation_8c18cdf8(int a0, int a1, int a2)
{
    S_vv1 *v1;
    S_vv3 *v3;
    if (a0 != 0 && a2 != 0) {
        v1 = (S_vv1 *)a1;
        v3 = (S_vv3 *)a0;
        do {
            a2 -= 1;
            v3->f00 = v1->f00;
            v1 = (S_vv1 *)((char *)v1 + 1);
            v3 = (S_vv3 *)((char *)v3 + 1);
        } while (a2 != 0);
    }
    return (int)(a0);
}

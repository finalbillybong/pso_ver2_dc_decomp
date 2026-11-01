/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c174
 * function: operation_8c12c174
 * language: c
 * reference size: 32 bytes
 * compiled size: 30 bytes (-6.2%)
 * differing lines: 16 of 15 reference instruction lines
 * differing bytes: 25
 * provenance: generator draft (mode extern)
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
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
int operation_8c12c174(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    if (a1 > 0) {
        v1 = (S_vv1 *)a0;
        v2 = (int)0;
        do {
            if (v1->f00 != 0) {
                return 0;
            }
            v2 = (int)(v2 + 1);
            v1 = (S_vv1 *)((char *)v1 + 1);
        } while (!(v2 >= a1));
    }
    return 1;
}

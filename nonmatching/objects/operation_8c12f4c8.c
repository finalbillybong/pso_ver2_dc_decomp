/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f4c8
 * function: operation_8c12f4c8
 * language: c
 * reference size: 76 bytes
 * compiled size: 68 bytes (-10.5%)
 * differing lines: 51 of 37 reference instruction lines
 * differing bytes: 74
 * provenance: generator draft (mode bgotoext)
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
struct S_vv1 {
    unsigned char f00;
};
struct S_vv3 {
    char f00;
};
int operation_8c12f4c8(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    S_vv3 *v3;
    int v4;
    int v5;
    int v11;
    v11 = (int)0;
    if (a1 > 0) {
        v1 = (S_vv1 *)(a0 + 0);
        v2 = (int)0;
        v3 = (S_vv3 *)(a0 + 0);
        v4 = (int)0;
L_8c12f4e2:;
        v5 = (int)(v1->f00 & 1);
        v1->f00 = (unsigned int)v1->f00 >> 1;
        if (v2 != 0) {
            v3->f00 |= 0x80;
        }
        if (!((v4 + 1) >= a1)) {
            v1 = (S_vv1 *)((char *)v1 + 1);
            v2 = (int)v5;
            v3 = (S_vv3 *)((char *)v3 + 1);
            v4 = (int)(v4 + 1);
            goto L_8c12f4e2;
        }
        v11 = (int)v5;
    }
    return (int)(v11);
}

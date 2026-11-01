/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f6a4
 * function: operation_8c12f6a4
 * language: c
 * reference size: 120 bytes
 * compiled size: 132 bytes (+10.0%)
 * differing lines: 76 of 59 reference instruction lines
 * differing bytes: 121
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_x48304 S_x48304;
struct S_vv2 {
    unsigned char f00;
};
struct S_vv1 {
    unsigned char f00;
};
struct S_x48304 {
    char f00;
};
int operation_8c12f6a4(int a0, unsigned int a1, int a2, int a3)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v3;
    int v5;
    int v6;
    int v7;
    int v4;
    int v8;
    v8 = (int)1;
    v6 = (int)0;
    if ((unsigned int)(a3 + -1 + a1) >= a1) {
        v1 = (S_vv1 *)(a3 + -1 + a2);
        v2 = (S_vv2 *)(a3 + -1 + a1);
        v3 = (int)0;
        v4 = (int)1;
L_8c12f6c4:;
        v5 = (int)(v2->f00 - v1->f00 - v3);
        if (!(v5 >= 0)) {
            v6 = (int)1;
            v7 = (int)(v5 + 0x100);
        } else {
            v6 = (int)0;
            v7 = (int)v5;
        }
        v8 = (int)v4;
        if (v7 != 0) {
            v8 = (int)0;
        }
        ((S_x48304 *)(a3 + -1 + a1))->f00 = v7;
        if ((unsigned int)((int)v2 + -1) >= a1) {
            v1--;
            v2--;
            v3 = (int)v6;
            v4 = (int)v8;
            goto L_8c12f6c4;
        }
    }
    if (v6 == 1 && a0 == 0) {
        return -1;
    }
    if (v8 == 1) {
        return 0;
    }
    return 1;
}

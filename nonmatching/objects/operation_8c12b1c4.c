/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b1c4
 * function: operation_8c12b1c4
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 78 of 63 reference instruction lines
 * differing bytes: 118
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d99c0 S_g8c4d99c0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_vv1_0 {
    char f00;
};
struct S_g8c4d99c0 {
    char f00;
};
struct S_vv5 {
    char f00;
};
struct S_vv6 {
    char f00;
};
extern int call_8c12b184(S_vv5 *);
S_vv5 *operation_8c12b1c4(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    S_vv5 *v5;
    S_vv6 *v6;
    int t1;
    v1 = (S_vv1 *)(void *)0x8c4d99c0;
    if (a0 != 0) {
        v1->f00 = (S_vv1_0 *)a0;
    }
    if (v1->f00 == 0) {
        return 0;
    }
    while (v1->f00->f00 != 0) {
        v2 = (int)0;
        while (*(char *)((char *)((char *)v2 + 0x0) + (a1)) != 0 && *(char *)((char *)((char *)v2 + 0x0) + (a1)) != (*(S_g8c4d99c0 **)0x8c4d99c0)->f00) {
            v2 = (int)(v2 + 1);
        }
        if (*(char *)((char *)((char *)v2 + 0x0) + (a1)) == 0) {
            goto L_8c12b210;
        }
        v1->f00 = (S_vv1_0 *)((int)v1->f00 + 1);
    }
L_8c12b210:;
    v5 = (S_vv5 *)v1->f00;
    if (v5->f00 == 0) {
        v1->f00 = (S_vv1_0 *)0;
        return 0;
    }
    t1 = call_8c12b184(v5);
    v1->f00 = (S_vv1_0 *)t1;
    if (t1 != 0) {
        v6 = (S_vv6 *)v1->f00;
        v6->f00 = 0;
        v1->f00 = (S_vv1_0 *)((int)v1->f00 + 1);
    }
    return v5;
}

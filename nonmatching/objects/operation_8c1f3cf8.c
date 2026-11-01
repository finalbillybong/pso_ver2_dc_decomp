/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3cf8
 * function: operation_8c1f3cf8
 * language: c
 * reference size: 126 bytes
 * compiled size: 96 bytes (-23.8%)
 * differing lines: 35 of 35 reference instruction lines
 * differing bytes: 114
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -30 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    unsigned char f00;
};
struct S_vv2 {
    int f00;
};
extern int strncmp(void *, int, int);
int operation_8c1f3cf8(int a0, int a1)
{
    int *home = &a0;
    int *home1 = &a1;
    unsigned int v1;
    S_vv3 *v3;
    unsigned char v5;
    S_vv2 *v2;
    int t1;
    (void)home;
    (void)home1;
    v1 = (unsigned int)(void *)0x8c4e3180;
    v2 = (S_vv2 *)(void *)0x8c4e3590;
    goto L_8c1f3d62;
    v3 = (S_vv3 *)v1;
L_8c1f3d44:;
    v5 = (unsigned char)v3->f00;
    if (v5 == a1) {
        t1 = strncmp((void *)((int)v3 + 1), a0, v5);
        if (t1 == 0) {
            return 1;
        }
    }
    v1 = (unsigned int)((int)v3 + 1 + v5);
L_8c1f3d62:;
    if (!(v1 >= (unsigned int)v2->f00)) {
        v3 = (S_vv3 *)v1;
        goto L_8c1f3d44;
    }
    return 0;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3a58
 * function: operation_8c1f3a58
 * language: c
 * reference size: 112 bytes
 * compiled size: 100 bytes (-10.7%)
 * differing lines: 58 of 45 reference instruction lines
 * differing bytes: 95
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char f00;
    char f01;
};
struct Arg1 {
    char f00;
};
struct S_vv3 {
    char f00;
};
extern int call_8c1f72f0(char, Arg1 *);
int operation_8c1f3a58(int a0, Arg1 *a1, int a2)
{
    int *home2 = &a2;
    S_vv4 *v4;
    S_vv3 *v3;
    int v2;
    int v1;
    int t1;
    (void)home2;
    v2 = (int)a2;
    v3 = (S_vv3 *)a0;
    v1 = (int)1;
    while (v4->f01 != 0 && v2 > 0) {
        t1 = call_8c1f72f0(a1->f00, a1);
        v4 = (S_vv4 *)a1;
        if (t1 != 0) {
            if (!(v2 > v1)) {
                goto L_8c1f3a9a;
            }
            v3->f00 = a1->f00;
            v2 = (int)(v2 + -1);
            v3 = (S_vv3 *)((char *)v3 + 1);
            v4 = (S_vv4 *)((char *)a1 + 0x1);
        }
        v3->f00 = v4->f00;
        v2 = (int)(v2 + -1);
        v3 = (S_vv3 *)((char *)v3 + 1);
    }
L_8c1f3a9a:;
    v3->f00 = 0;
    return a2 - v2;
}

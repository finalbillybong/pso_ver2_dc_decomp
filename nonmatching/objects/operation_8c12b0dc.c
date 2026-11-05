/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b0dc
 * function: operation_8c12b0dc
 * language: c
 * reference size: 56 bytes
 * compiled size: 60 bytes (+7.1%)
 * differing lines: 44 of 27 reference instruction lines
 * differing bytes: 57
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: DIVERGED on offline start: new character to Pioneer 2 (66 RAM bytes differ outside
 *   timing noise, in heap/buffers); known incorrect
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct S_vv1 {
    char f00;
};
struct S_vv3 {
    char f00;
};
struct Arg1 {
    unsigned char f00;
};
int operation_8c12b0dc(int a0, Arg1 *a1, unsigned int a2)
{
    S_vv1 *v1;
    S_vv3 *v3;
    unsigned int v4;
    unsigned int v7;
    v1 = (S_vv1 *)a0;
    while (v1->f00 != 0) {
        v1 = (S_vv1 *)((char *)v1 + 1);
    }
    v7 = (unsigned int)0;
    if (!((unsigned int)0 >= a2)) {
        v3 = (S_vv3 *)v1;
        v4 = (unsigned int)0;
        do {
            v3->f00 = a1->f00;
            if (a1->f00 == 0) {
                v7 = (unsigned int)v4;
                v1 = (S_vv1 *)((int)v3 + 1);
                goto L_8c12b104;
            }
            v4 = (unsigned int)(v4 + 1);
            v3 = (S_vv3 *)((char *)v3 + 1);
        } while (!(v4 >= a2));
        v7 = (unsigned int)v4;
        v1 = (S_vv1 *)v3;
    }
L_8c12b104:;
    if (v7 >= a2) {
        v1->f00 = 0;
    }
    return (int)(a0);
}

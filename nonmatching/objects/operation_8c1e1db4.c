/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e1db4
 * function: operation_8c1e1db4
 * language: c
 * reference size: 120 bytes
 * compiled size: 116 bytes (-3.3%)
 * differing lines: 48 of 53 reference instruction lines
 * differing bytes: 88
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv22 S_vv22;
typedef struct S_vv23 S_vv23;
struct Arg1 {
    char f00;
    char f01;
};
struct S_vv22 {
    char f00;
    char f01;
    char f02;
};
struct S_vv23 {
    char f00;
    char f01;
    char f02;
};
struct Object {
    char unknown0[0xa8];
    int fa8;
    int fac;
    char unknownb0[0x8];
    int fb8;
};
void operation_8c1e1db4(Object *o, Arg1 *a1)
{
    S_vv22 *v22;
    S_vv23 *v23;
    char v25;
    int v24;
    char v26;
    int v21;
    unsigned int v27;
    v21 = (int)a1->f01;
    v22 = (S_vv22 *)((int)a1 + (a1->f01 + 3));
    v23 = (S_vv23 *)a1;
    v22->f00 = a1->f00;
    goto L_8c1e1df2;
L_8c1e1dc6:;
    v23->f00 = v22->f00;
    v25 = (char)v22->f01;
    v23->f01 = v25;
    v23->f02 = v22->f02;
    v23 = (S_vv23 *)((char *)v23 + 3);
    v24 = (int)v25;
    v22 = (S_vv22 *)((char *)v22 + 3);
    goto L_8c1e1dea;
L_8c1e1de0:;
    v23->f00 = v22->f00;
    v22 = (S_vv22 *)((char *)v22 + 1);
    v23 = (S_vv23 *)((char *)v23 + 1);
L_8c1e1dea:;
    if ((char)v24 != 0) {
        v24 -= 1;
        goto L_8c1e1de0;
    }
L_8c1e1df2:;
    v26 = (char)v22->f00;
    if ((char)v26 != 0) {
        goto L_8c1e1dc6;
    }
    v23->f00 = v26;
    o->fb8 += v21 + 3;
    v27 = (unsigned int)o->fac;
    if (!(v27 > (unsigned int)o->fa8)) {
        return;
    }
    o->fac = v27 - (v21 + 3);
}

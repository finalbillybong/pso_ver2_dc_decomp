/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f71c
 * function: operation_8c12f71c
 * language: c
 * reference size: 52 bytes
 * compiled size: 60 bytes (+15.4%)
 * differing lines: 38 of 26 reference instruction lines
 * differing bytes: 54
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char f00;
};
struct Object {
    char tag;
};
int operation_8c12f71c(Object *o, Arg1 *a1, unsigned int a2)
{
    char v4;
    int v8;
    int v3;
    int v10;
    if (a2 == 0) {
        return 0;
    }
    v8 = (int)o;
    v10 = (int)a1;
    if (!((unsigned int)0 >= a2)) {
        v3 = (int)0;
L_8c12f72e:;
        v4 = (char)a1->f00;
        if (o->tag == v4 && !((unsigned int)(v3 + 1) >= a2)) {
            v3 = (int)(v3 + 1);
            goto L_8c12f72e;
        }
        v8 = (int)((char *)o + 0x1);
        v10 = (int)((char *)a1 + 0x1);
    }
    return *(unsigned char *)((char *)v8 - 0x1) - *(unsigned char *)((char *)v10 - 0x1);
}

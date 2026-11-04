/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e588
 * function: operation_8c18e588
 * language: c
 * reference size: 168 bytes
 * compiled size: 160 bytes (-4.8%)
 * differing lines: 48 of 69 reference instruction lines
 * differing bytes: 137
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_4 Arg1_4;
typedef struct S_vv1 S_vv1;
struct Arg1 {
    char unknown0[0x4];
    Arg1_4 *f04;
};
struct S_vv1 {
    char f00;
    char f01;
};
struct Object {
    char unknown0[0x14];
    int f14;
    int dispatch;
    char unknown1c[0x38];
    int f54;
    char unknown58[0x4c];
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
};
extern void hs_8c18e394(int, void *, int);
void operation_8c18e588(Object *o, Arg1 *a1)
{
    S_vv1 *v1;
    int v2;
    int v6;
    v1 = (S_vv1 *)a1->f04;
    v2 = (int)v1->f00;
    o->fb4 = v2 & 0x20;
    o->fb0 = v1->f00 & 0x10;
    o->fa8 = v1->f00 & 0xf;
    if (((v2 & 0x40)) != 0) {
        o->fac = v1->f01;
        v6 = (int)((int)v1 + 2);
    } else {
        o->fac = 0;
        v6 = (int)((int)v1 + 1);
    }
    hs_8c18e394(v6, ((char *)o + 0xa0), 0xb4);
    o->fa4 = 0;
    if (o->fb4 != 0) {
        o->dispatch = (int)(o->f54);
    } else {
        o->dispatch = (int)(o->f14);
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a39bc
 * function: operation_8c0a39bc
 * language: c
 * reference size: 440 bytes
 * compiled size: 444 bytes (+0.9%)
 * differing lines: 102 of 186 reference instruction lines
 * differing bytes: 368
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_d8 Arg0_d8;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x4c];
    int f4c;
    char unknown50[0x14];
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    char unknown7c[0xc];
    int f88;
    int f8c;
    int f90;
    float f94;
    float f98;
    int f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    float fb4;
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    char unknownc8[0x10];
    Arg0_d8 *fd8;
};
struct S_vv6 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x4];
    int f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x20];
    int f98;
    int f9c;
    int fa0;
};
void operation_8c0a39bc(Object *o)
{
    S_vv6 *v6;
    if (o->f4c == 0) {
        o->fa4 = o->f64;
        o->fa8 = o->f68;
        o->fac = o->f6c;
        o->fb0 = o->f70;
        o->fb4 = o->f74;
        o->fb8 = o->f78;
    } else {
        o->fbc = o->f70;
        o->fc0 = o->f74;
        o->fc4 = o->f78;
    }
    v6 = (S_vv6 *)o->fd8;
    if (v6 != 0) {
        v6->f3c = o->fa4;
        v6->f40 = o->fa8;
        v6->f44 = o->fac;
        v6->f64 = (int)(o->f9c);
        v6->f6c = o->fb0;
        v6->f70 = o->fb4;
        v6->f74 = o->fb8;
        v6->f98 = (int)(o->f88);
        v6->fa0 = (int)(o->f90);
        v6->f9c = (int)(o->f8c);
        v6->f54 = o->f94;
        v6->f58 = o->f98;
        v6->f5c = o->fa0;
        v6->f48 = o->fbc;
        v6->f4c = o->fc0;
        v6->f50 = o->fc4;
        v6->f34 |= 2;
    }
}

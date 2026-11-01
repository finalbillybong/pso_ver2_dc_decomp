/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c089da0
 * function: operation_8c089da0
 * language: c
 * reference size: 248 bytes
 * compiled size: 252 bytes (+1.6%)
 * differing lines: 24 of 79 reference instruction lines
 * differing bytes: 223
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c469d60 S_g8c469d60;
typedef struct S_g8c469d60_42c S_g8c469d60_42c;
typedef struct S_g8c469d60_430 S_g8c469d60_430;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x68];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x5c];
    int ff0;
    float ff4;
    int ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
};
struct S_g8c469d60 {
    char unknown0[0x42c];
    S_g8c469d60_42c *f42c;
    S_g8c469d60_430 *f430;
};
struct S_g8c469d60_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
};
struct S_g8c469d60_430 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c2fff94;
extern int g_8c2fffa8;
extern int g_8c44be04;
extern S_g8c469d60 *g_8c469d60;
extern int g_8c469d64;
extern int g_8c469d68;
extern void TObjWarpBase_ctor_8c08860c(Object *, int, int);
extern int call_8c18e8a0(void *, int);
Object *operation_8c089da0(Object *o, int a1, int a2)
{
    int t1;
    TObjWarpBase_ctor_8c08860c(o, a1, a2);
    o->dispatch = (void *)0x8c2650bc;
    o->tag = (int)(g_8c2fff94);
    o->size = 0xf4;
    o->ff0 = (int)(o->f88);
    if (g_8c469d68 != 0) {
        o->ff0 = g_8c44be04 + 1;
    }
    o->dispatch = (void *)0x8c264fb4;
    o->tag = (int)(g_8c2fffa8);
    o->size = 0x10c;
    o->ff4 = 0.0f;
    o->ff8 = 0;
    t1 = call_8c18e8a0((void *)(o->f90), 2);
    o->f90 = (Arg0_90 *)t1;
    o->ffc = (int)(g_8c469d60->f42c->f08);
    o->f100 = (int)(g_8c469d60->f42c->f18);
    o->f104 = (int)(g_8c469d60->f430->f04);
    o->f108 = (int)(g_8c469d64);
    return o;
}

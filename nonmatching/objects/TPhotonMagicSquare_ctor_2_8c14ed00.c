/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14ed00
 * function: TPhotonMagicSquare_ctor_2_8c14ed00
 * language: c
 * reference size: 336 bytes
 * compiled size: 332 bytes (-1.2%)
 * differing lines: 34 of 121 reference instruction lines
 * differing bytes: 281
 * provenance: generator draft (mode bgotoext)
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct S_g8c4db380_430 S_g8c4db380_430;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x30];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x1c];
    Arg0_94 *f94;
    float f98;
    float f9c;
    float fa0;
    Block16 fa4;
    int fb4;
    int fb8;
    Vector3 fbc;
    int fc8;
    float fcc;
    int fd0;
};
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
    S_g8c4db380_430 *f430;
};
struct S_g8c4db380_42c {
    char unknown0[0x28];
    int f28;
    int f2c;
};
struct S_g8c4db380_430 {
    char unknown0[0x14];
    int f14;
};
struct Arg0_94 {
    char unknown0[0x4];
    int f04;
};
struct Arg3 {
    Vector3 f00;
};
extern int g_8c3157a8;
extern S_g8c4db380 *g_8c4db380;
extern void TObjectShared_ctor_8c01d1ec(Object *);
Object *TPhotonMagicSquare_ctor_2_8c14ed00(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c26e4a8;
    o->tag = (int)(g_8c3157a8);
    o->size = 0xd4;
    o->f38 = (int)(g_8c4db380->f42c->f28);
    o->f94 = (Arg0_94 *)g_8c4db380->f430->f14;
    o->fa0 = 0.0f;
    o->f98 = (float)(unsigned int)o->f94->f04 - 1.0f;
    o->f9c = 0.1f;
    o->f28 = (int)(g_8c4db380->f42c->f2c);
    o->f6c = 0.0f;
    o->f70 = 0.0f;
    o->f74 = 0.0f;
    *(Block16 *)&o->fa4 = *(Block16 *)&*(Block16 *)((char *)0x8c315748 + (a2 << 4));
    *(Vector3 *)&o->fbc = *(Vector3 *)&a3->f00;
    o->fb4 = 0;
    o->fb8 = 0;
    o->fc8 = a4;
    o->fcc = 0.04f;
    o->fd0 = 0xffffff;
    return o;
}

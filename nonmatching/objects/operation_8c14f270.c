/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14f270
 * function: operation_8c14f270
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 54 of 102 reference instruction lines
 * differing bytes: 33
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x4c];
    int f94;
    int f98;
    int f9c;
    int fa0;
    char unknowna4[0x8];
    int fac;
};
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
};
struct S_g8c4db380_42c {
    char unknown0[0x58];
    int f58;
    int f5c;
    char unknown60[0x8];
    int f68;
    int f6c;
    char unknown70[0x8];
    int f78;
    int f7c;
    char unknown80[0x8];
    int f88;
    int f8c;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c3157c0;
extern S_g8c4db380 *g_8c4db380;
extern void TObjectShared_ctor_8c01d1ec(Object *);
Object *operation_8c14f270(Object *o, int a1, Arg2 *a2)
{
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c26e4e8;
    o->tag = (int)(g_8c3157c0);
    o->size = 0xb0;
    if (o->fac == 1) {
        o->f94 = (int)(g_8c4db380->f42c->f8c);
        o->f98 = (int)(g_8c4db380->f42c->f7c);
        o->f9c = (int)(g_8c4db380->f42c->f88);
        o->fa0 = (int)(g_8c4db380->f42c->f78);
    } else {
        o->f94 = (int)(g_8c4db380->f42c->f6c);
        o->f98 = (int)(g_8c4db380->f42c->f5c);
        o->f9c = (int)(g_8c4db380->f42c->f68);
        o->fa0 = (int)(g_8c4db380->f42c->f58);
    }
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199688
 * function: TAdTitle_ctor_8c199688
 * language: c
 * reference size: 388 bytes
 * compiled size: 392 bytes (+1.0%)
 * differing lines: 128 of 147 reference instruction lines
 * differing bytes: 319
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
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    char f9c;
    char unknown9d[0x3];
    int fa0;
};
extern int g_8c31cb20;
extern char g_8c4dc444;
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TAdTitle_ctor_8c199688(Object *o, int a1, int a2)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272994;
    o->tag = (int)(g_8c31cb20);
    o->size = 0xac;
    o->f9c = a2;
    o->fa0 = 0;
    g_8c4dc444 = 0;
    o->f2c = 0.0f;
    o->f30 = 34.0f;
    o->f34 = 256.0f;
    o->f38 = 118.0f;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 1.0f;
    o->f48 = 0.328125f;
    o->f4c = 256.0f;
    o->f50 = 34.0f;
    o->f54 = 512.0f;
    o->f58 = 118.0f;
    o->f5c = 0.0f;
    o->f60 = 0.328125f;
    o->f64 = 1.0f;
    o->f68 = 0.65625f;
    o->f6c = 512.0f;
    o->f70 = 34.0f;
    o->f74 = 639.0f;
    o->f78 = 122.0f;
    o->f7c = 0.0f;
    o->f80 = 0.65625f;
    o->f84 = 0.5f;
    o->f88 = 1.0f;
    o->f8c = (o->f74 - o->f2c) * 0.5f;
    o->f90 = (o->f78 - o->f30) * 0.5f + o->f30;
    o->f94 = 1.0f;
    o->f98 = 1.0f;
    return o;
}

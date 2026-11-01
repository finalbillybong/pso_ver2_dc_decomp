/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0058
 * function: TEffect_ctor_8c0a0058
 * language: c
 * reference size: 172 bytes
 * compiled size: 176 bytes (+2.3%)
 * differing lines: 74 of 78 reference instruction lines
 * differing bytes: 155
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
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    float f24;
    float f28;
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
    int f58;
    int f5c;
    int f60;
    float f64;
    float f68;
    int f6c;
    int f70;
};
extern int g_8c3021e8;
extern S_g8c44be9c *g_8c44be9c;
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TEffect_ctor_8c0a0058(Object *o)
{
    TObject_ctor_8c0330e4((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c2659d8;
    o->tag = (int)(g_8c3021e8);
    o->size = 0x74;
    o->f24 = 0.0f;
    o->f28 = 0.0f;
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    o->f34 = 0.0f;
    o->f38 = 0.0f;
    o->f3c = 0.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    o->f58 = 0;
    o->f5c = 0;
    o->f60 = 0;
    o->f64 = 0.0f;
    o->f68 = 0.0f;
    o->f6c = 0;
    o->f70 = 0;
    o->f20 = 0;
    return o;
}

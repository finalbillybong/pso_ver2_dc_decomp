/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22c2b8
 * function: TAdRicoRing_ctor_8c22c2b8
 * language: c
 * reference size: 252 bytes
 * compiled size: 260 bytes (+3.2%)
 * differing lines: 30 of 112 reference instruction lines
 * differing bytes: 250
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c506320 S_g8c506320;
typedef struct S_g8c506320_42c S_g8c506320_42c;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    int f4c;
    int f50;
    int f54;
    char unknown58[0x4];
    float f5c;
    float f60;
    float f64;
    int f68;
    int f6c;
    int f70;
};
struct S_g8c506320 {
    char unknown0[0x42c];
    S_g8c506320_42c *f42c;
};
struct S_g8c506320_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c338350;
extern S_g8c506320 *g_8c506320;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c01c434(void);
Object *TAdRicoRing_ctor_8c22c2b8(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278e68;
    o->f30 = 0;
    o->tag = (int)(g_8c338350);
    o->size = 0x74;
    o->f50 = (int)(g_8c506320->f42c->f08);
    o->f54 = (int)(g_8c506320->f42c->f0c);
    o->f2c = 0.0f;
    o->f28 = 0.0f;
    o->f24 = 0.0f;
    o->f20 = 0.0f;
    o->f48 = 0.0f;
    o->f44 = 0.0f;
    o->f40 = 0.0f;
    o->f3c = 0.0f;
    o->f64 = 0.0f;
    o->f60 = 0.0f;
    o->f5c = 0.0f;
    o->f70 = 0;
    o->f6c = 0;
    o->f68 = 0;
    o->f38 = 0.0f;
    o->f34 = 0x5b0;
    o->f30 |= 4;
    t1 = operation_8c01c434();
    switch (t1) {
    case 0:
        o->f4c = 0x12;
        break;
    case 1:
        o->f4c = 0x15;
    }
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ea350
 * function: operation_8c0ea350
 * language: c
 * reference size: 836 bytes
 * compiled size: 840 bytes (+0.5%)
 * differing lines: 298 of 279 reference instruction lines
 * differing bytes: 650
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    short f2c;
    char unknown2e[0x12];
    short f40;
    char unknown42[0xa];
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
    float f9c;
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
    float fc8;
    float fcc;
    float fd0;
    float fd4;
    float fd8;
    float fdc;
    float fe0;
    float fe4;
    float fe8;
    float fec;
    float ff0;
    float ff4;
    float ff8;
    float ffc;
    float f100;
    float f104;
    float f108;
    float f10c;
    float f110;
    float f114;
    float f118;
    int f11c;
    int f120;
};
extern char g_8c470364;
extern char g_8c470365;
extern void TObject_ctor_8c0330e4(Object *, int);
Object *operation_8c0ea350(Object *o, int a1)
{
    TObject_ctor_8c0330e4(o, a1);
    o->dispatch = (void *)0x8c267fb0;
    o->f11c = 0;
    g_8c470364 = 0;
    o->f120 = 0;
    o->f2c = 0;
    o->f40 = 0;
    g_8c470365 = 0;
    o->f4c = 0.0f;
    o->f50 = 34.0f;
    o->f54 = 256.0f;
    o->f58 = 118.0f;
    o->f5c = 0.0f;
    o->f60 = 0.0f;
    o->f64 = 1.0f;
    o->f68 = 0.328125f;
    o->f6c = 256.0f;
    o->f70 = 34.0f;
    o->f74 = 512.0f;
    o->f78 = 118.0f;
    o->f7c = 0.0f;
    o->f80 = 0.328125f;
    o->f84 = 1.0f;
    o->f88 = 0.65625f;
    o->f8c = 512.0f;
    o->f90 = 34.0f;
    o->f94 = 639.0f;
    o->f98 = 122.0f;
    o->f9c = 0.0f;
    o->fa0 = 0.65625f;
    o->fa4 = 0.5f;
    o->fa8 = 1.0f;
    o->f10c = (o->f94 - o->f4c) * 0.5f;
    o->f110 = (o->f98 - o->f50) * 0.5f + o->f50;
    o->f114 = 1.0f;
    o->f118 = 1.0f;
    o->fac = 0.0f;
    o->fb0 = 326.0f;
    o->fb4 = 639.0f;
    o->fb8 = 375.0f;
    o->fbc = 0.50390625f;
    o->fc0 = 0.65625f;
    o->fc4 = 0.62890625f;
    o->fc8 = 0.84765625f;
    o->fcc = 0.0f;
    o->fd0 = 375.0f;
    o->fd4 = 639.0f;
    o->fd8 = 424.0f;
    o->fdc = 0.71875f;
    o->fe0 = 0.65625f;
    o->fe4 = 0.84375f;
    o->fe8 = 0.84765625f;
    o->fec = 496.0f;
    o->ff0 = 419.0f;
    o->ff4 = 516.0f;
    o->ff8 = 439.0f;
    o->ffc = 0.63671875f;
    o->f100 = 0.65625f;
    o->f104 = 0.71484375f;
    o->f108 = 0.734375f;
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22f1bc
 * function: operation_8c22f1bc
 * language: c
 * reference size: 764 bytes
 * compiled size: 764 bytes (+0.0%)
 * differing lines: 162 of 273 reference instruction lines
 * differing bytes: 278
 * provenance: generator draft (mode switch2ext)
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
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    float f20;
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
    int fe0;
};
extern int g_8c506524;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c3727a0(int);
extern void TAdDrawLineCtrl_create_8c227b34(int, int, float);
Object *operation_8c22f1bc(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278f00;
    o->fe0 = 0xff;
    g_8c506524 = 0;
    o->f20 = 156.0f;
    o->f24 = 174.0f;
    o->f28 = 213.0f;
    o->f2c = 261.0f;
    o->f30 = 0.0f;
    o->f34 = 0.0f;
    o->f38 = 0.4453125f;
    o->f3c = 0.671875f;
    o->f40 = 156.0f;
    o->f44 = 174.0f;
    o->f48 = 213.0f;
    o->f4c = 261.0f;
    o->f50 = 0.4453125f;
    o->f54 = 0.0f;
    o->f58 = 0.890625f;
    o->f5c = 0.671875f;
    o->f60 = 148.0f;
    o->f64 = 150.0f;
    o->f68 = 220.0f;
    o->f6c = 175.0f;
    o->f70 = 0.0f;
    o->f74 = 0.0f;
    o->f78 = 0.5625f;
    o->f7c = 0.1953125f;
    o->f80 = 240.0f;
    o->f84 = 150.0f;
    o->f88 = 312.0f;
    o->f8c = 175.0f;
    o->f90 = 0.0f;
    o->f94 = 0.1953125f;
    o->f98 = 0.5625f;
    o->f9c = 0.390625f;
    o->fa0 = 332.0f;
    o->fa4 = 150.0f;
    o->fa8 = 404.0f;
    o->fac = 175.0f;
    o->fb0 = 0.0f;
    o->fb4 = 0.390625f;
    o->fb8 = 0.5625f;
    o->fbc = 0.5859375f;
    o->fc0 = 424.0f;
    o->fc4 = 150.0f;
    o->fc8 = 496.0f;
    o->fcc = 175.0f;
    o->fd0 = 0.0f;
    o->fd4 = 0.5859375f;
    o->fd8 = 0.5625f;
    o->fdc = 0.78125f;
    v1 = (int)0;
    while ((unsigned int)8 > (unsigned int)(unsigned char)v1) {
        t1 = call_8c3727a0((int)((unsigned char)v1));
        *(int *)((char *)((char *)o + 0xe4) + ((unsigned char)v1 << 2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    TAdDrawLineCtrl_create_8c227b34((int)o, 7, 0.0f);
    TAdDrawLineCtrl_create_8c227b34((int)o, 4, 0.0f);
    return o;
}

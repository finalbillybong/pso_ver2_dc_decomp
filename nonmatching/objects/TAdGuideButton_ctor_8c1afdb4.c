/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1afdb4
 * function: TAdGuideButton_ctor_8c1afdb4
 * language: c
 * reference size: 852 bytes
 * compiled size: 852 bytes (+0.0%)
 * differing lines: 270 of 297 reference instruction lines
 * differing bytes: 271
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2368 S_g8c4e2368;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    unsigned char f20;
    char unknown21[0x3];
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
    float fe0;
};
struct S_g8c4e2368 {
    char f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int g_8c32600c;
extern int g_8c4e2364;
extern S_g8c4e2368 *g_8c4e2368;
extern int g_8c4e2370;
extern float g_8c4e2374;
Object *TAdGuideButton_ctor_8c1afdb4(Object *o, int a1, int a2, S_g8c4e2368 *a3, float f0)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274b84;
    o->tag = g_8c32600c;
    o->size = 0xe4;
    o->f20 = 0xff;
    g_8c4e2364 = a2;
    g_8c4e2368 = a3;
    g_8c4e2374 = f0;
    g_8c4e2370 = 0;
    o->f24 = 193.0f;
    o->f28 = 417.0f;
    o->f2c = 213.0f;
    o->f30 = 437.0f;
    o->f34 = 0.5859375f;
    o->f38 = 0.4453125f;
    o->f3c = 0.7421875f;
    o->f40 = 0.6015625f;
    if (g_8c4e2368->f00 == 0) {
        o->f24 = 496.0f;
        o->f28 = 419.0f;
        o->f2c = 516.0f;
        o->f30 = 439.0f;
        o->f34 = 0.5859375f;
        o->f38 = 0.4453125f;
        o->f3c = 0.7421875f;
        o->f40 = 0.6015625f;
    }
    o->f44 = 337.0f;
    o->f48 = 417.0f;
    o->f4c = 357.0f;
    o->f50 = 437.0f;
    o->f54 = 0.75f;
    o->f58 = 0.4453125f;
    o->f5c = 0.90625f;
    o->f60 = 0.6015625f;
    o->f64 = 62.0f;
    o->f68 = 150.0f;
    o->f6c = 134.0f;
    o->f70 = 175.0f;
    o->f74 = 0.0f;
    o->f78 = 0.0f;
    o->f7c = 0.5625f;
    o->f80 = 0.1953125f;
    o->f84 = 154.0f;
    o->f88 = 150.0f;
    o->f8c = 226.0f;
    o->f90 = 175.0f;
    o->f94 = 0.0f;
    o->f98 = 0.1953125f;
    o->f9c = 0.5625f;
    o->fa0 = 0.390625f;
    o->fa4 = 246.0f;
    o->fa8 = 150.0f;
    o->fac = 318.0f;
    o->fb0 = 175.0f;
    o->fb4 = 0.0f;
    o->fb8 = 0.390625f;
    o->fbc = 0.5625f;
    o->fc0 = 0.5859375f;
    o->fc4 = 338.0f;
    o->fc8 = 150.0f;
    o->fcc = 410.0f;
    o->fd0 = 175.0f;
    o->fd4 = 0.0f;
    o->fd8 = 0.5859375f;
    o->fdc = 0.5625f;
    o->fe0 = 0.78125f;
    return o;
}

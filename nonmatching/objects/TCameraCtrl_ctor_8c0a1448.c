/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a1448
 * function: TCameraCtrl_ctor_8c0a1448
 * language: c
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 24 of 225 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TCameraCtrl.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    int f34;
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
    char unknown60[0x4];
    short f64;
    char unknown66[0x2];
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    char unknown84[0x8];
    int f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    int fa8;
    int fac;
    int fb0;
    char unknownb4[0x4];
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    float fd0;
    float fd4;
    int fd8;
    char unknowndc[0x4];
    int fe0;
    int fe4;
    int fe8;
    float fec;
    float ff0;
    float ff4;
};
struct S_L8c46efc8 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c303330;
extern Object *g_8c46ee80;
extern S_L8c46efc8 g_8c46efc8;
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TCameraCtrl_ctor_8c0a1448(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c265ad4;
    o->tag = (int)(g_8c303330);
    o->size = 0xf8;
    g_8c46ee80 = o;
    o->fe0 = 0;
    o->fe8 = 0;
    o->fe4 = 0;
    o->fec = 0.0f;
    o->ff0 = 0.0f;
    o->ff4 = 0.0f;
    o->f90 = 0.0f;
    o->f94 = 0.0f;
    o->f98 = 0.0f;
    o->fb8 = 0.0f;
    o->fbc = 0.0f;
    o->fc0 = 0.0f;
    o->f9c = 0.0f;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->fc4 = 0.0f;
    o->fc8 = 0.0f;
    o->fcc = 0.0f;
    o->fa8 = 0;
    o->fac = 0;
    o->fb0 = 0;
    o->fd8 = 0;
    o->fd0 = 0.0f;
    o->fd4 = 0.0f;
    o->f8c = 0;
    o->f68 = 0.0f;
    o->f6c = 0.0f;
    o->f70 = 0.0f;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    o->f34 = 0;
    o->f64 = 0;
    o->f38 = 0.0f;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = 0.0f;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    o->f58 = 0.0f;
    o->f5c = 0.0f;
    o->f74 = 0.0f;
    o->f78 = 0.0f;
    o->f7c = 0.0f;
    o->f80 = 0.0f;
    o->f80 = 0.0f;
    o->f80 = 0.0f;
    v1 = (int)0;
    while (0xb > v1) {
        t1 = ((int (*)(void))(*(int *)((char *)0x8c303304 + (v1 << 2))))();
        v2 = (int)(&g_8c46efc8)->f04;
        (&g_8c46efc8)->f04 = v2 + 1;
        *(int *)((char *)0x8c3032d8 + (v2 << 2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    return o;
}

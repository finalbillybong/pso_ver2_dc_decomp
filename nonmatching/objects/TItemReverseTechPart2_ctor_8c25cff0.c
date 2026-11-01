/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25cff0
 * function: TItemReverseTechPart2_ctor_8c25cff0
 * language: c
 * reference size: 1108 bytes
 * compiled size: 1108 bytes (+0.0%)
 * differing lines: 580 of 395 reference instruction lines
 * differing bytes: 712
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    int f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    float fb4;
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    int fd0;
    int fd4;
    int fd8;
    int fdc;
    float fe0;
    float fe4;
    float fe8;
    float fec;
    float ff0;
    float ff4;
    float ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    float f10c;
    float f110;
    float f114;
    float f118;
    float f11c;
    float f120;
    float f124;
    int f128;
    int f12c;
    int f130;
    int f134;
    float f138;
    float f13c;
    float f140;
    float f144;
    float f148;
    float f14c;
    float f150;
    int f154;
    int f158;
};
extern int g_8c3404d8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c25d634(int, Object *, void *);
Object *TItemReverseTechPart2_ctor_8c25cff0(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c34;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f6c = 1.0f;
    o->f70 = 1.0f;
    o->f98 = 1.0f;
    o->f9c = 1.0f;
    o->fc4 = 1.0f;
    o->fc8 = 1.0f;
    o->ff0 = 1.0f;
    o->ff4 = 1.0f;
    o->f11c = 1.0f;
    o->f120 = 1.0f;
    o->f148 = 1.0f;
    o->f14c = 1.0f;
    o->tag = (int)(g_8c3404d8);
    o->size = 0x15c;
    o->f20 = 0x12c;
    o->f24 = 0;
    o->f28 = a2;
    o->f2c = 0;
    o->f30 = 128.0f;
    o->f34 = 0.0f;
    o->f38 = 512.0f;
    o->f3c = 512.0f;
    o->f48 = 0.5f;
    o->f4c = 0x12c;
    o->f50 = 0;
    o->f54 = a2;
    o->f58 = 0xe;
    o->f5c = 0.0f;
    o->f60 = 0.0f;
    o->f64 = 100.0f;
    o->f68 = 480.0f;
    o->f74 = 0.5f;
    o->f6c = 0.1953125f;
    o->f70 = 0.9375f;
    o->f78 = 0x3c;
    o->f7c = 0x3c;
    o->f80 = a2;
    o->f84 = 0xe;
    o->f88 = 128.0f;
    o->f8c = 0.0f;
    o->f90 = 512.0f;
    o->f94 = 512.0f;
    o->fa0 = 0.6f;
    o->fa4 = 0x3c;
    o->fa8 = 0x3c;
    o->fac = a2;
    o->fb0 = 0xe;
    o->fb4 = 0.0f;
    o->fb8 = 0.0f;
    o->fbc = 100.0f;
    o->fc0 = 480.0f;
    o->fcc = 0.6f;
    o->fc4 = 0.1953125f;
    o->fc8 = 0.9375f;
    o->fd0 = 0x12c;
    o->fd4 = 0;
    o->fd8 = a2;
    o->fdc = 0;
    o->fe0 = 316.0f;
    o->fe4 = 32.0f;
    o->fe8 = 300.0f;
    o->fec = 300.0f;
    o->ff8 = 0.3f;
    o->ffc = 0x12c;
    o->f100 = 0;
    o->f104 = a2;
    o->f108 = 0;
    o->f10c = 316.0f;
    o->f110 = 148.0f;
    o->f114 = 300.0f;
    o->f118 = 300.0f;
    o->f124 = 0.3f;
    o->f128 = 0x1194;
    o->f12c = 0x1e;
    o->f130 = a2;
    o->f134 = 0xf;
    o->f138 = 10.0f;
    o->f13c = 0.0f;
    o->f140 = 340.0f;
    o->f144 = 480.0f;
    o->f150 = 0.75f;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
    if (t1 != 0) {
        call_8c25d634(t1, o, (void *)(&o->f128));
    }
    o->f154 = 0;
    o->f158 = 0;
    return o;
}

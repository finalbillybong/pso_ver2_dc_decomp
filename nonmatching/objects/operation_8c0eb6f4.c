/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0eb6f4
 * function: operation_8c0eb6f4
 * language: c
 * reference size: 1196 bytes
 * compiled size: 1196 bytes (+0.0%)
 * differing lines: 30 of 416 reference instruction lines
 * differing bytes: 42
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_38 S_g8c467180_38;
typedef struct S_g8c467180_38_10 S_g8c467180_38_10;
typedef struct S_g8c467180_38_14 S_g8c467180_38_14;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_154 Arg0_154;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    char unknown28[0x4];
    int f2c;
    char unknown30[0xc];
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
    float f11c;
    float f120;
    float f124;
    float f128;
    float f12c;
    float f130;
    float f134;
    float f138;
    unsigned char f13c;
    char unknown13d[0x14];
    char f151;
    char unknown152[0x2];
    Arg0_154 *f154;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x38];
    S_g8c467180_38 *f38;
};
struct S_g8c467180_38 {
    char unknown0[0x10];
    S_g8c467180_38_10 *f10;
    S_g8c467180_38_14 *f14;
};
struct Arg0_154 {
    char unknown0[0x5c];
    float f5c;
};
extern Block8 g_8c308990;
extern Block8 g_8c308998;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2e24;
extern char g_8c3089a0[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c01c250(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdBack_ctor_8c198294(void *, int);
extern void TAdTitle_ctor_8c199688(int, Object *, int);
extern int operation_8c1ca7dc(void);
extern void call_8c1003d0(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void TAdGuideButton_create_8c1afd58(int, int, int, float);
extern void TAdDrawLineCtrl_create_8c227b34(int, int, float);
extern void operation_8c0ec2d0(void *);
extern void operation_8c180d54(void);
Object *operation_8c0eb6f4(Object *o)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c267fcc;
    o->f24 = 0;
    o->f2c = 0;
    o->f13c = 0xff;
    o->f20 = 0;
    o->f151 = 0;
    operation_8c01c250(2);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t1 != 0) {
        TAdBack_ctor_8c198294((void *)t1, (int)o);
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xac);
    if (t2 != 0) {
        TAdTitle_ctor_8c199688(t2, o, 1);
    }
    t3 = operation_8c1ca7dc();
    if ((char)t3 != 0 && g_8c4e2e24 == 0) {
    } else {
        call_8c1003d0((void *)((g_8c3089a0 + 0x32)));
    }
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&g_8c308990;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&g_8c308998;
    t4 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f154 = (Arg0_154 *)t4;
    TAdGuideButton_create_8c1afd58((int)o, (int)(g_8c467180->f38->f10), (int)(g_8c467180->f38->f14), -1.0f / (o->f154->f5c + 0.1495f));
    TAdDrawLineCtrl_create_8c227b34((int)o, 1, 0.0f);
    if (g_8c4e2e24 != 0) {
        operation_8c0ec2d0((void *)o);
        operation_8c180d54();
        g_8c4e2e24 = 0;
    }
    o->f3c = 192.0f;
    o->f40 = 180.0f;
    o->f44 = 448.0f;
    o->f48 = 208.0f;
    o->f4c = 0.0f;
    o->f50 = 0.328125f;
    o->f54 = 1.0f;
    o->f58 = 0.4375f;
    o->f5c = 192.0f;
    o->f60 = 273.0f;
    o->f64 = 448.0f;
    o->f68 = 301.0f;
    o->f6c = 0.0f;
    o->f70 = 0.4375f;
    o->f74 = 1.0f;
    o->f78 = 0.546875f;
    o->f7c = 155.0f;
    o->f80 = 180.0f;
    o->f84 = 171.0f;
    o->f88 = 208.0f;
    o->f8c = 0.5859375f;
    o->f90 = 0.0f;
    o->f94 = 0.7109375f;
    o->f98 = 0.21875f;
    o->f9c = 171.0f;
    o->fa0 = 180.0f;
    o->fa4 = 469.0f;
    o->fa8 = 208.0f;
    o->fac = 0.7109375f;
    o->fb0 = 0.0f;
    o->fb4 = 0.8359375f;
    o->fb8 = 0.21875f;
    o->fbc = 469.0f;
    o->fc0 = 180.0f;
    o->fc4 = 485.0f;
    o->fc8 = 208.0f;
    o->fcc = 0.8359375f;
    o->fd0 = 0.0f;
    o->fd4 = 0.9609375f;
    o->fd8 = 0.21875f;
    o->fdc = 155.0f;
    o->fe0 = 180.0f;
    o->fe4 = 171.0f;
    o->fe8 = 208.0f;
    o->fec = 0.5859375f;
    o->ff0 = 0.21875f;
    o->ff4 = 0.7109375f;
    o->ff8 = 0.4375f;
    o->ffc = 171.0f;
    o->f100 = 180.0f;
    o->f104 = 469.0f;
    o->f108 = 208.0f;
    o->f10c = 0.7109375f;
    o->f110 = 0.21875f;
    o->f114 = 0.8359375f;
    o->f118 = 0.4375f;
    o->f11c = 469.0f;
    o->f120 = 180.0f;
    o->f124 = 485.0f;
    o->f128 = 208.0f;
    o->f12c = 0.8359375f;
    o->f130 = 0.21875f;
    o->f134 = 0.9609375f;
    o->f138 = 0.4375f;
    return o;
}

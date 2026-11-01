/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ec388
 * function: operation_8c0ec388
 * language: c
 * reference size: 1468 bytes
 * compiled size: 1464 bytes (-0.3%)
 * differing lines: 224 of 509 reference instruction lines
 * differing bytes: 877
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_g8c467180_3c S_g8c467180_3c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_18c Arg0_18c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x4];
    int f30;
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
    float f13c;
    float f140;
    float f144;
    float f148;
    float f14c;
    float f150;
    float f154;
    float f158;
    float f15c;
    float f160;
    float f164;
    float f168;
    float f16c;
    float f170;
    unsigned char f174;
    char unknown175[0x1];
    char f176;
    char unknown177[0x1];
    int f178;
    char unknown17c[0x10];
    Arg0_18c *f18c;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x3c];
    S_g8c467180_3c *f3c;
};
struct S_g8c467180_3c {
    char unknown0[0x10];
    int f10;
    int f14;
};
struct Arg0_18c {
    char unknown0[0x5c];
    float f5c;
};
extern Block8 g_8c3089e0;
extern Block8 g_8c3089e8;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c467180 *g_8c467180;
extern int g_8c4703c0;
extern int g_8c4703c4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c01c250(int);
extern int operation_8c177a00(int, int);
extern void select_state2_8c01c1b4(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdBack_ctor_8c198294(void *, int);
extern void TAdTitle_ctor_8c199688(int, Object *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void TAdGuideButton_create_8c1afd58(int, int, int, float);
extern void TAdDrawLineCtrl_create_8c227b34(int, int, float);
Object *operation_8c0ec388(Object *o)
{
    Frame frame;
    Object **home = &o;
    float v1;
    float v2;
    float v3;
    int t3;
    int t2;
    int t1;
    int t4;
    int t5;
    int t6;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c267fe8;
    operation_8c01c250(2);
    g_8c4703c0 = 0;
    g_8c4703c4 = 0;
    o->f18c = (Arg0_18c *)0;
    o->f34 = 192.0f;
    o->f38 = 133.0f;
    o->f3c = 448.0f;
    o->f40 = 161.0f;
    o->f44 = 0.0f;
    o->f48 = 0.0f;
    o->f4c = 1.0f;
    o->f50 = 0.109375f;
    o->f54 = 192.0f;
    o->f58 = 193.0f;
    o->f5c = 448.0f;
    o->f60 = 221.0f;
    o->f64 = 0.0f;
    o->f68 = 0.109375f;
    o->f6c = 1.0f;
    o->f70 = 0.21875f;
    o->f74 = 192.0f;
    o->f78 = 253.0f;
    o->f7c = 448.0f;
    o->f80 = 281.0f;
    o->f84 = 0.0f;
    o->f88 = 0.21875f;
    o->f8c = 1.0f;
    o->f90 = 0.32421875f;
    v1 = (float)155.0f;
    o->f94 = v1;
    o->f98 = 133.0f;
    v2 = (float)171.0f;
    o->f9c = v2;
    o->fa0 = 161.0f;
    o->fa4 = 0.5859375f;
    o->fa8 = 0.0f;
    v3 = (float)0.7109375f;
    o->fac = v3;
    o->fb0 = 0.21875f;
    o->fb4 = v2;
    o->fb8 = 133.0f;
    o->fbc = 469.0f;
    o->fc0 = 161.0f;
    o->fc4 = v3;
    o->fc8 = 0.0f;
    o->fcc = 0.8359375f;
    o->fd0 = 0.21875f;
    o->fd4 = 469.0f;
    o->fd8 = 133.0f;
    o->fdc = 485.0f;
    o->fe0 = 161.0f;
    o->fe4 = 0.8359375f;
    o->fe8 = 0.0f;
    o->fec = 0.9609375f;
    o->ff0 = 0.21875f;
    o->ff4 = v1;
    o->ff8 = 133.0f;
    o->ffc = v2;
    o->f100 = 161.0f;
    o->f104 = 0.5859375f;
    o->f108 = 0.21875f;
    o->f10c = v3;
    o->f110 = 0.4375f;
    o->f114 = v2;
    o->f118 = 133.0f;
    o->f11c = 469.0f;
    o->f120 = 161.0f;
    o->f124 = v3;
    o->f128 = 0.21875f;
    o->f12c = 0.8359375f;
    o->f130 = 0.4375f;
    o->f134 = 469.0f;
    o->f138 = 133.0f;
    o->f13c = 485.0f;
    o->f140 = 161.0f;
    o->f144 = 0.8359375f;
    o->f148 = 0.21875f;
    o->f14c = 0.9609375f;
    o->f150 = 0.4375f;
    o->f154 = 192.0f;
    o->f158 = 313.0f;
    o->f15c = 448.0f;
    o->f160 = 341.0f;
    o->f164 = 0.0f;
    o->f168 = 0.54296875f;
    o->f16c = 1.0f;
    o->f170 = 0.65234375f;
    o->f28 = 0;
    o->f30 = 0;
    o->f174 = 0xff;
    o->f20 = 0;
    o->f176 = 0;
    t3 = operation_8c177a00(2, 0x37);
    t1 = operation_8c177a00(0, 0x35);
    t2 = operation_8c177a00(1, 0x37);
    o->f178 = t1 + t2 + t3;
    if (o->f178 != 0) {
    } else {
        o->f04 |= 1;
        select_state2_8c01c1b4();
        return o;
    }
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t4 != 0) {
        TAdBack_ctor_8c198294((void *)t4, (int)o);
    }
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xac);
    if (t5 != 0) {
        TAdTitle_ctor_8c199688(t5, o, 0);
    }
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&g_8c3089e0;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&g_8c3089e8;
    t6 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f18c = (Arg0_18c *)t6;
    TAdGuideButton_create_8c1afd58((int)o, (int)(g_8c467180->f3c->f10), (int)(g_8c467180->f3c->f14), -1.0f / (o->f18c->f5c + 0.1495f));
    TAdDrawLineCtrl_create_8c227b34((int)o, 2, 0.0f);
    return o;
}

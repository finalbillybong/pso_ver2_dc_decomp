/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1da224
 * function: operation_8c1da224
 * language: c++
 * reference size: 848 bytes
 * compiled size: 844 bytes (-0.5%)
 * differing lines: 114 of 325 reference instruction lines
 * differing bytes: 659
 * provenance: generator draft (experimental generator, mode bgotoext)
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
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2f40 S_g8c4e2f40;
typedef struct S_g8c4e2f40_42c S_g8c4e2f40_42c;
typedef struct S_g8c4e2f40_430 S_g8c4e2f40_430;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_c4 Arg0_c4;
typedef struct Arg0_e4 Arg0_e4;
typedef struct S_vv11 S_vv11;
typedef struct S_x27008 S_x27008;
typedef struct S_x27120 S_x27120;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x30];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    int f90;
    float f94;
    float f98;
    Arg0_9c *f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    float fb4;
    int fb8;
    int fbc;
    int fc0;
    Arg0_c4 *fc4;
    float fc8;
    float fcc;
    float fd0;
    float fd4;
    float fd8;
    float fdc;
    int fe0;
    Arg0_e4 *fe4;
    int fe8;
} ObjectData;
struct S_g8c4e2f40 {
    char unknown0[0x42c];
    S_g8c4e2f40_42c *f42c;
    S_g8c4e2f40_430 *f430;
};
struct S_g8c4e2f40_42c {
    char unknown0[0x48];
    int f48;
    int f4c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
struct S_g8c4e2f40_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_9c {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    Block72 f04;
};
struct S_vv11 {
    char unknown0[0xc0];
    int fc0;
};
struct S_x27008 {
    Vector3 f00;
};
struct S_x27120 {
    Vector3 f00;
};
extern int g_8c32ab0c;
extern int g_8c32ab10;
extern Block72 g_8c32ab1c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2f40 *g_8c4e2f40;
extern "C" void TObjectShared_ctor_8c01d1ec(Object *, void *);
extern "C" int operator_new_8c18de4c(int);
extern "C" int rand(void);
extern "C" float njSin_8c37eb0c(void *);
extern "C" Object *operation_8c1da224(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    S_vv11 *v11;
    int v10;
    int v9;
    int v13;
    int t1;
    int t2;
    int t3;
    float t4;
    (void)home;
    {
        Object *base = o;
        TObjectShared_ctor_8c01d1ec(base, g_8c44be98);
        *(void **)((char *)base + 0x18) = (void *)(void *)0x8c277284;
        ((ObjectData *)base)->tag = (int)(g_8c32ab0c);
        ((ObjectData *)base)->size = 0x9c;
        ((ObjectData *)base)->f94 = 2000.0f;
        ((ObjectData *)base)->f98 = 0.0f;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c277244;
    ((ObjectData *)o)->tag = (int)(g_8c32ab10);
    ((ObjectData *)o)->size = 0xec;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2f40->f42c->f48;
    ((ObjectData *)o)->f98 = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2f40->f42c->f4c);
    ((ObjectData *)o)->f9c = (Arg0_9c *)g_8c4e2f40->f430->f04;
    ((ObjectData *)o)->fa0 = (float)(unsigned int)((ObjectData *)o)->f9c->f04 - 1.0f;
    ((ObjectData *)o)->fa4 = 1.0f;
    ((ObjectData *)o)->fa8 = 0.0f;
    ((ObjectData *)o)->fac = ((ObjectData *)o)->f6c + 1.0f;
    ((ObjectData *)o)->fb0 = ((ObjectData *)o)->f70 + 50.0f;
    ((ObjectData *)o)->fb4 = ((ObjectData *)o)->f74 + 100.0f;
    ((ObjectData *)o)->fb8 = 0;
    ((ObjectData *)o)->fbc = (int)((ObjectData *)o)->f88 + 3;
    {
        Object *base = o;
        if (!(((ObjectData *)base)->fbc >= 0)) {
            ((ObjectData *)base)->fbc = 1;
        } else {
            if (((ObjectData *)base)->fbc > 6) {
                ((ObjectData *)base)->fbc = 6;
            }
        }
    }
    t1 = operator_new_8c18de4c((int)(((ObjectData *)o)->fbc * 0xc));
    ((ObjectData *)o)->fc0 = (int)t1;
    t2 = operator_new_8c18de4c((int)(((ObjectData *)o)->fbc << 2));
    ((ObjectData *)o)->fc4 = (Arg0_c4 *)(int)t2;
    *(Block72 *)&(&frame)->f04 = *(Block72 *)&g_8c32ab1c;
    v9 = (int)0x8000;
    v13 = (int)0;
    goto L_8c1da3d2;
    v10 = (int)0;
L_8c1da3aa:;
    *(Vector3 *)&((S_x27008 *)(v11->fc0 + v10 * 0xc))->f00 = *(Vector3 *)&((S_x27120 *)(v10 * 0xc + (char *)&(&frame)->f04))->f00;
    *(int *)((char *)((char *)((ObjectData *)o)->fc4 + 0x0) + (v10 << 2)) = (int)v9;
    v13 = (int)(v10 + 1);
L_8c1da3d2:;
    v10 = (int)v13;
    v11 = (S_vv11 *)o;
    if (((ObjectData *)o)->fbc > v13) {
        goto L_8c1da3aa;
    }
    ((ObjectData *)o)->fd0 = 0.0f;
    ((ObjectData *)o)->fcc = 0.0f;
    ((ObjectData *)o)->fc8 = 0.0f;
    ((ObjectData *)o)->fdc = (float)((ObjectData *)o)->f8c * 0.1f + 1.0f;
    ((ObjectData *)o)->fe0 = (int)(360.0f / (30.0f / ((ObjectData *)o)->fdc) * 65536.0f / 360.0f);
    t3 = rand();
    ((ObjectData *)o)->fe4 = (Arg0_e4 *)(int)((float)t3 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    ((ObjectData *)o)->fd4 = (float)((ObjectData *)o)->f90 * 0.1f + 1.0f;
    {
        Object *base = o;
        t4 = njSin_8c37eb0c((void *)(((ObjectData *)base)->fe4));
        ((ObjectData *)base)->fd8 = ((ObjectData *)base)->fd4 * t4;
    }
    ((ObjectData *)o)->fe8 = 0;
    return o;
}

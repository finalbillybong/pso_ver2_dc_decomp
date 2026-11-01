/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c0040
 * function: TOLightMachine01_ctor_8c1c0040
 * language: c++
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 64 of 148 reference instruction lines
 * differing bytes: 188
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2c40 S_g8c4e2c40;
typedef struct S_g8c4e2c40_42c S_g8c4e2c40_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_ac Arg0_ac;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x4c];
    int f88;
    int f8c;
    char unknown90[0x4];
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    int fa8;
    Arg0_ac *fac;
    int fb0;
} ObjectData;
struct S_g8c4e2c40 {
    char unknown0[0x42c];
    S_g8c4e2c40_42c *f42c;
};
struct S_g8c4e2c40_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c328698;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2c40 *g_8c4e2c40;
extern "C" void TObjectShared_ctor_8c01d1ec(Object *, void *);
extern "C" int rand(int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" Object *TOLightMachine01_ctor_8c1c0040(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    float t2;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27579c;
    ((ObjectData *)o)->tag = (int)(g_8c328698);
    ((ObjectData *)o)->size = 0xb4;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2c40->f42c->f18;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2c40->f42c->f1c);
    ((ObjectData *)o)->f94 = 500.0f;
    ((ObjectData *)o)->f98 = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f34 |= 0x40000000;
    ((ObjectData *)o)->fa4 = (float)((ObjectData *)o)->f88 * 0.1f + 1.0f;
    ((ObjectData *)o)->fa8 = (int)(360.0f / (30.0f / ((ObjectData *)o)->fa4) * 65536.0f / 360.0f);
    t1 = rand(0xa8);
    ((ObjectData *)o)->fac = (Arg0_ac *)(int)((float)t1 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    ((ObjectData *)o)->f9c = (float)((ObjectData *)o)->f8c * 0.1f + 0.5f;
    {
        Object *base = o;
        t2 = njSin_8c37eb0c((void *)(((ObjectData *)base)->fac));
        ((ObjectData *)base)->fa0 = ((ObjectData *)base)->f9c * t2;
    }
    ((ObjectData *)o)->fb0 = 0;
    return o;
}

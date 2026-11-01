/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c131fb0
 * function: operation_8c131fb0
 * language: c++
 * reference size: 772 bytes
 * compiled size: 772 bytes (+0.0%)
 * differing lines: 252 of 306 reference instruction lines
 * differing bytes: 312
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d9a60 S_g8c4d9a60;
typedef struct S_g8c4d9a60_42c S_g8c4d9a60_42c;
typedef struct S_g8c4d9a60_430 S_g8c4d9a60_430;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_s10c Arg0_s10c;
typedef struct Arg0_s3c Arg0_s3c;
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
    int f3c;
    char unknown40[0x2c];
    float f6c;
    char unknown70[0x18];
    int f88;
    int f8c;
    char unknown90[0x54];
    int fe4;
    char unknowne8[0x4];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x4];
    int f104;
    float f108;
    int f10c;
    char unknown110[0x8];
    float f118;
    float f11c;
    float f120;
    float f124;
    float f128;
    float f12c;
    int f130;
    Arg0_134 *f134;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s10c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4d9a60 {
    char unknown0[0x42c];
    S_g8c4d9a60_42c *f42c;
    S_g8c4d9a60_430 *f430;
};
struct S_g8c4d9a60_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4d9a60_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c3128a0;
extern int g_8c3128a4;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d9a60 *g_8c4d9a60;
extern "C" void operation_8c0ee870(void *, void *);
extern "C" int rand(int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" Object *operation_8c131fb0(Object *o, int a1)
{
    Object **home = &o;
    char *v1;
    int v5;
    int t1;
    float t2;
    int t3;
    float t4;
    (void)home;
    {
        Object *self = o;
        Object **home2 = &self;
        (void)home2;
        operation_8c0ee870((void *)o, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26cc80;
        ((ObjectData *)self)->tag = (int)(g_8c3128a0);
        ((ObjectData *)self)->size = 0x138;
        ((ObjectData *)self)->f104 = 0;
        ((ObjectData *)self)->f108 = ((ObjectData *)self)->f6c + 50.0f;
        *(Vector3 *)((char *)self + 0x10c) = *(Vector3 *)((char *)self + 0x3c);
        ((ObjectData *)self)->f120 = 0.0f;
        ((ObjectData *)self)->f11c = 0.0f;
        ((ObjectData *)self)->f118 = 0.0f;
        ((ObjectData *)self)->f12c = (float)((ObjectData *)self)->f88 * 0.1f + 1.0f;
        ((ObjectData *)self)->f130 = (int)(360.0f / (30.0f / ((ObjectData *)self)->f12c) * 65536.0f / 360.0f);
        t1 = rand(0x130);
        ((ObjectData *)self)->f134 = (Arg0_134 *)(int)((float)t1 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        ((ObjectData *)self)->f124 = (float)((ObjectData *)self)->f8c * 0.1f + 1.0f;
        {
            Object *base = self;
            t2 = njSin_8c37eb0c((void *)(((ObjectData *)base)->f134));
            ((ObjectData *)base)->f128 = ((ObjectData *)base)->f124 * t2;
        }
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26cc38;
    ((ObjectData *)o)->tag = (int)(g_8c3128a4);
    ((ObjectData *)o)->size = 0x138;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4d9a60->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4d9a60->f42c->f0c);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4d9a60->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 1.1f;
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->f12c = (float)((ObjectData *)o)->f88 * 0.1f + 1.0f;
    ((ObjectData *)o)->f130 = (int)(360.0f / (30.0f / ((ObjectData *)o)->f12c) * 65536.0f / 360.0f);
    t3 = rand(0x130);
    ((ObjectData *)o)->f134 = (Arg0_134 *)(int)((float)t3 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    ((ObjectData *)o)->f124 = (float)((ObjectData *)o)->f8c * 0.1f + 1.0f;
    {
        Object *base = o;
        t4 = njSin_8c37eb0c((void *)(((ObjectData *)base)->f134));
        ((ObjectData *)base)->f128 = ((ObjectData *)base)->f124 * t4;
    }
    return o;
}

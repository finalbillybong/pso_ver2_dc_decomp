/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c3b34
 * function: TODragonflyMachine01_ctor_8c1c3b34
 * language: c++
 * reference size: 480 bytes
 * compiled size: 476 bytes (-0.8%)
 * differing lines: 54 of 175 reference instruction lines
 * differing bytes: 240
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TODragonflyMachine01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d00 S_g8c4e2d00;
typedef struct S_g8c4e2d00_42c S_g8c4e2d00_42c;
typedef struct S_g8c4e2d00_430 S_g8c4e2d00_430;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_f4 Arg0_f4;
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
    char unknown3c[0x4c];
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
    char unknown100[0x24];
    float f124;
    float f128;
    float f12c;
    int f130;
    Arg0_134 *f134;
    short f138;
    short f13a;
    int f13c;
} ObjectData;
struct S_g8c4e2d00 {
    char unknown0[0x42c];
    S_g8c4e2d00_42c *f42c;
    S_g8c4e2d00_430 *f430;
};
struct S_g8c4e2d00_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4e2d00_430 {
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
extern int g_8c328a30;
extern S_g8c4e2d00 *g_8c4e2d00;
extern "C" void TODragonfly_ctor_8c1318a4(Object *);
extern "C" int rand(int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" Object *TODragonflyMachine01_ctor_8c1c3b34(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    float t2;
    (void)home;
    TODragonfly_ctor_8c1318a4(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275c04;
    ((ObjectData *)o)->tag = (int)(g_8c328a30);
    ((ObjectData *)o)->size = 0x140;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2d00->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2d00->f42c->f0c);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4e2d00->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 1.0f;
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->f12c = (float)((ObjectData *)o)->f88 * 0.1f + 1.0f;
    ((ObjectData *)o)->f130 = (int)(360.0f / (30.0f / ((ObjectData *)o)->f12c) * 65536.0f / 360.0f);
    t1 = rand(0x130);
    ((ObjectData *)o)->f134 = (Arg0_134 *)(int)((float)t1 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    ((ObjectData *)o)->f124 = (float)((ObjectData *)o)->f8c * 0.1f + 1.0f;
    {
        Object *base = o;
        t2 = njSin_8c37eb0c(((ObjectData *)base)->f134);
        ((ObjectData *)base)->f128 = ((ObjectData *)base)->f124 * t2;
    }
    ((ObjectData *)o)->f138 = 0;
    ((ObjectData *)o)->f13a = 0;
    ((ObjectData *)o)->f13c = 0;
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15d230
 * function: TOSensorGeneral01_ctor_8c15d230
 * language: c++
 * reference size: 272 bytes
 * compiled size: 268 bytes (-1.5%)
 * differing lines: 12 of 99 reference instruction lines
 * differing bytes: 160
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c4db160 S_g8c4db160;
typedef struct S_g8c4db160_42c S_g8c4db160_42c;
typedef struct S_g8c4db164 S_g8c4db164;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    char unknown70[0x1c];
    int f8c;
    char unknown90[0x68];
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
    int f108;
    char unknown10c[0x10];
    int f11c;
    int f120;
    int f124;
} ObjectData;
struct S_g8c4db164 {
    int f00;
};
struct S_g8c4db160 {
    char unknown0[0x42c];
    S_g8c4db160_42c *f42c;
};
struct S_g8c4db160_42c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern "C" void TOSensor_ctor_8c15c7cc(void *);
extern "C" void operation_8c112f78(void *);
extern "C" Object *TOSensorGeneral01_ctor_8c15d230(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TOSensor_ctor_8c15c7cc((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26efa4;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c316794);
    ((ObjectData *)o)->size = 0x128;
    o->v6(a2);
    operation_8c112f78((void *)o);
    ((ObjectData *)o)->f28 = (int)((*(S_g8c4db164 **)0x8c4db164)->f00);
    ((ObjectData *)o)->f38 = (Arg0_38 *)(*(S_g8c4db160 **)0x8c4db160)->f42c->f08;
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f104 = ((ObjectData *)o)->f6c + 50.0f;
    if (0.0f > ((ObjectData *)o)->f104) {
        ((ObjectData *)o)->f104 = 0.0f;
    }
    if (!(((ObjectData *)o)->f8c >= 0)) {
        ((ObjectData *)o)->f108 = 2;
    } else {
        ((ObjectData *)o)->f108 = 1;
    }
    ((ObjectData *)o)->f11c = 0;
    ((ObjectData *)o)->f120 = 3;
    ((ObjectData *)o)->f124 = 0x5a;
    return o;
}

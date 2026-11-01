/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ed888
 * function: TObjLight_ctor_8c0ed888
 * language: c++
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 86 of 132 reference instruction lines
 * differing bytes: 133
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Arg2 Arg2;
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
    virtual void v6(Arg2 *);
};
typedef struct ObjectData {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4c];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x1c];
    int f94;
    char unknown98[0x8];
    int fa0;
    char unknowna4[0x1c];
    Block16 fc0;
    char unknownd0[0xc];
    Vector3 fdc;
    float fe8;
    float fec;
    float ff0;
    float ff4;
    float ff8;
    float ffc;
    float f100;
} ObjectData;
struct Arg2 {
    char unknown0[0x8];
    short f08;
};
extern int g_8c308dc8;
extern "C" char g_8c418280[];
extern "C" void TObjectShared_ctor_8c01d1ec(Object *);
extern "C" Object *TObjLight_ctor_8c0ed888(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c268020;
    ((ObjectData *)o)->tag = (int)(g_8c308dc8);
    ((ObjectData *)o)->size = 0x104;
    o->v6(a2);
    ((ObjectData *)o)->f94 = a2->f08;
    ((ObjectData *)o)->ff4 = 0.5f;
    ((ObjectData *)o)->ff8 = ((ObjectData *)o)->f6c;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f70;
    ((ObjectData *)o)->f100 = ((ObjectData *)o)->f74;
    ((ObjectData *)o)->fe8 = 0.0f;
    ((ObjectData *)o)->fec = 0.0f;
    ((ObjectData *)o)->ff0 = 0.0f;
    ((ObjectData *)o)->fa0 = 0;
    *(Block16 *)&((ObjectData *)o)->fc0 = *(Block16 *)&*(Block16 *)(g_8c418280 + 0x24);
    *(Vector3 *)&((ObjectData *)o)->fdc = *(Vector3 *)&*(Vector3 *)(g_8c418280 + 0xc);
    ((ObjectData *)o)->ff4 = 0.5f;
    ((ObjectData *)o)->ff8 = 0.0f;
    ((ObjectData *)o)->ffc = 0.0f;
    ((ObjectData *)o)->f100 = 0.0f;
    ((ObjectData *)o)->f04 |= 0x10;
    return o;
}

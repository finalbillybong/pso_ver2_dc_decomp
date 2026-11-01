/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02f684
 * function: operation_8c02f684
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 28 of 76 reference instruction lines
 * differing bytes: 47
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
class Object;
struct Frame {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
    Block8 f04;
    int f0c;
    char unknown10[0x1];
    char f11;
    char unknown12[0x2];
    int f14;
    char unknown18[0x2c];
    int f44;
    char unknown48[0x2c];
    int f74;
    char unknown78[0x2c];
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa64];
    Block8 fa64;
    char unknowna6c[0x8];
    unsigned short fa74;
    char unknowna76[0x2a];
    int faa0;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void memset_8c12b880(Frame *, int, int);
extern "C" void strncpy_8c12b154(void *, void *, int);
extern "C" void operation_8c02f684(Object *o)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x584));
    memset_8c12b880((Frame *)((&frame)), 0, 0xa4);
    (&frame)->f00 = 0x9c;
    (&frame)->f02 = 0xa4;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&((ObjectData *)o)->fa64;
    (&frame)->f0c = ((ObjectData *)o)->fa74 & 0xffff;
    (&frame)->f11 = ((ObjectData *)o)->faa0;
    strncpy_8c12b154((void *)(&(&frame)->f14), (void *)(((char *)o + 0x3046)), 0x30);
    strncpy_8c12b154((void *)(&(&frame)->f44), (void *)(((char *)o + 0x3076)), 0x30);
    strncpy_8c12b154((void *)(&(&frame)->f74), (void *)(((char *)o + 0x30a6)), 0x30);
    o->v9((&frame), (unsigned short)(&frame)->f02);
}

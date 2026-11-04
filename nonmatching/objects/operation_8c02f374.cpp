/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02f374
 * function: operation_8c02f374
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 4 of 90 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
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
class Object;
typedef struct Block_frame_0 {
    char f00;
    char f01;
    short f02;
    int f04;
} Block_frame_0;
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
    virtual void v9(void *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    unsigned char f08;
    char f09;
    unsigned short f0a;
    Block_frame_0 f0c;
    char f14[0x10];
    char f24[0x10];
    char f34;
    char f35;
    char f36;
    char f37;
};
extern "C" char g_8c2e7ce0[];
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" void operation_8c02f374(Object *o, int a1, int a2, int a3, int a4, int a5, int a6)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x4d2));
    if (((ObjectData *)o)->fa7c != 0) {
        (&frame)->f08 = 0xc1;
        (&frame)->f09 = 3;
        (&frame)->f0a = 0x30;
        (&frame)->f00.f00 = 0;
        (&frame)->f00.f01 = 0;
        (&frame)->f00.f02 = 0;
        (&frame)->f00.f04 = 0;
        frame.f0c = frame.f00;
        (&frame)->f34 = a3;
        (&frame)->f35 = a4;
        (&frame)->f36 = a5;
        (&frame)->f37 = a6;
        strncpy_8c12b154(frame.f14, a1, 0x10);
        strncpy_8c12b154(frame.f24, a2, 0x10);
        o->v9(&(&frame)->f08, (unsigned short)(&frame)->f0a);
    }
}

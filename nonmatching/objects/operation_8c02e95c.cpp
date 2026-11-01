/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02e95c
 * function: operation_8c02e95c
 * language: c++
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 34 of 65 reference instruction lines
 * differing bytes: 57
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
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
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    unsigned short f02;
    Block8 f04;
    char unknownc[0x210];
    Block8 f21c;
};
extern "C" char g_8c2e7ce0[];
extern "C" void memset_8c12b880(Frame *, int, int);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" int strlen_8c12b0cc(void *);
extern "C" void operation_8c02e95c(Object *o, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    o->v4((g_8c2e7ce0 + 0x3ab));
    if (((ObjectData *)o)->fa7c != 0) {
        memset_8c12b880((Frame *)((&frame)), 0, 0x20c);
        (&frame)->f00 = 6;
        (&frame)->f01 = 0;
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&(&frame)->f21c;
        v1 = (char *)((char *)(&frame) + 0xc);
        strncpy_8c12b154(v1, a1, 0x1ff);
        t1 = strlen_8c12b0cc(v1) + 1;
        (&frame)->f02 = (unsigned int)(t1 + 0xf) >> 2 << 2;
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0107c0
 * function: operation_8c0107c0
 * language: c++
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 46 of 150 reference instruction lines
 * differing bytes: 28
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
typedef struct Frame Frame;
typedef struct S_g8c2e2178 S_g8c2e2178;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
};
typedef struct ObjectData {
    char unknown0[0x20];
    int f20;
    short f24;
    short f26;
    short f28;
    char unknown2a[0x1];
    char f2b;
    short f2c;
    short f2e;
    int f30;
    char unknown34[0xa28];
    int fa5c;
} ObjectData;
struct Frame {
    int f00;
    short f04;
    short f06;
    char f08;
    char f09;
    char f0a;
    char f0b;
    short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
};
extern int g_8c4621a8;
extern "C" int call_8c3ca534(int, Frame *);
extern "C" void call_8c01daf0(void);
extern "C" int operation_8c0109c8(void *);
extern "C" void operation_8c010a18(Object *);
extern "C" int operation_8c036544(void);
extern "C" int call_8c01e180(void);
extern "C" void time_hierarchy_visit(void *);
extern "C" void hierarchy_output_cycle(void *);
extern "C" void call_8c2280f0(void);
extern "C" void wait_vsync_and_flip_8c380516(void);
extern "C" int operation_8c0107c0(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    ((ObjectData *)o)->f28 = -1;
    ((ObjectData *)o)->fa5c = 0;
    ((ObjectData *)o)->f2c = 0;
    ((ObjectData *)o)->f2e = 0;
    ((ObjectData *)o)->f2b = 1;
    ((ObjectData *)o)->f30 = 0;
    (&frame)->f00 = (int)(((ObjectData *)o)->f20);
    (&frame)->f04 = ((ObjectData *)o)->f24;
    (&frame)->f06 = ((ObjectData *)o)->f26;
    g_8c4621a8 = 1;
    (&frame)->f08 = 0;
    (&frame)->f09 = 0x78;
    (&frame)->f0a = 0;
    (&frame)->f0b = 0;
    (&frame)->f0c = 0;
    (&frame)->f10 = 0;
    (&frame)->f14 = 0;
    t1 = call_8c3ca534(0x4110, (Frame *)((&frame)));
    g_8c4621a8 = 0;
    ((ObjectData *)o)->f28 = t1;
    if (!(((ObjectData *)o)->f28 >= 0)) {
        o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-((ObjectData *)o)->f28 & 0xf) << 2)));
        return -1;
    }
    v1 = (int)0x884;
    for (;;) {
        call_8c01daf0();
        t2 = operation_8c0109c8((void *)o);
        if ((short)t2 != 0) {
            o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-t2 & 0xf) << 2)));
            return -2;
        }
        operation_8c010a18(o);
        if ((unsigned int)(*(unsigned short *)((char *)((char *)o + 0x0) + (v1)) & 0xffff) >= (unsigned int)4) {
            break;
        }
        t3 = operation_8c036544();
        if (t3 == 0) {
            return -3;
        }
        t4 = call_8c01e180();
        if ((char)t4 != 0) {
            return -2;
        }
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        hierarchy_output_cycle((void *)((void *)0x8c44bec8));
        call_8c2280f0();
        wait_vsync_and_flip_8c380516();
    }
    *(Object **)((char *)0x8c2e20f0 + (((ObjectData *)o)->f28 << 2)) = (Object *)o;
    return ((ObjectData *)o)->f28;
}

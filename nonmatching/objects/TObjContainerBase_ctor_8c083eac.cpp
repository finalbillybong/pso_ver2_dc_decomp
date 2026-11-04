/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c083eac
 * function: TObjContainerBase_ctor_8c083eac
 * language: c++
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 24 of 78 reference instruction lines
 * differing bytes: 38
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjContainerBase.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x2e0];
    float f350;
    float f354;
    float f358;
    char unknown35c[0x1c];
    float f378;
    int f37c;
    int f380;
} ObjectData;
extern int g_8c2ff590;
extern "C" void call_8c043418(Object *);
extern "C" void initialize_context_blend_8c1f1430(void *);
extern "C" void operation_8c1f156c(void *);
extern "C" Object *TObjContainerBase_ctor_8c083eac(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c043418(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c264d1c;
    initialize_context_blend_8c1f1430((void *)(((char *)o + 0x35c)));
    ((ObjectData *)o)->tag = (int)(g_8c2ff590);
    ((ObjectData *)o)->size = 0x384;
    o->v6(a2);
    ((ObjectData *)o)->f350 = 400.0f;
    ((ObjectData *)o)->f354 = 10.0f;
    ((ObjectData *)o)->f358 = 400.0f;
    if (((ObjectData *)o)->f6c > 0.0f) {
        ((ObjectData *)o)->f37c = 1;
    } else {
        ((ObjectData *)o)->f37c = 0;
    }
    operation_8c1f156c((void *)(((char *)o + 0x35c)));
    ((ObjectData *)o)->f378 = 300.0f;
    ((ObjectData *)o)->f380 = 0;
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c22ac
 * function: operation_8c1c22ac
 * language: c++
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 14 of 93 reference instruction lines
 * differing bytes: 25
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c4dc5e0 S_g8c4dc5e0;
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
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x4c];
    int f94;
    Vector3 f98;
    float fa4;
    int fa8;
    int fac;
    int fb0;
    char unknownb4[0x220];
    int f2d4;
} ObjectData;
extern "C" void TObjectShared_ctor_8c01d1ec(Object *);
extern "C" int call_8c1c2464(Object *);
extern "C" void call_8c1c2470(Object *);
extern "C" void operation_8c1a19a4(void *, int);
extern "C" Object *operation_8c1c22ac(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275938;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c328928);
    ((ObjectData *)o)->size = 0x2d8;
    o->v6(a2);
    ((ObjectData *)o)->f94 = (int)(((char *)o + 0xac));
    *(Vector3 *)&((ObjectData *)o)->f98 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->fa4 = 2000.0f;
    ((ObjectData *)o)->fa8 = 0xde0;
    ((ObjectData *)o)->fac = 8;
    ((ObjectData *)o)->fb0 = (int)(((char *)o + 0xb4));
    ((ObjectData *)o)->f2d4 = 0;
    t1 = call_8c1c2464(o);
    if (t1 != 0) {
        call_8c1c2470(o);
        if (*(int *)0x8c4dc5e0 != 0) {
            operation_8c1a19a4((void *)(*(S_g8c4dc5e0 **)0x8c4dc5e0), (int)(((char *)o + 0x94)));
            ((ObjectData *)o)->f2d4 = 1;
        }
    }
    return o;
}

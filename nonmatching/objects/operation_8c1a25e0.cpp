/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a25e0
 * function: operation_8c1a25e0
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 14 of 56 reference instruction lines
 * differing bytes: 27
 * provenance: generator draft (mode ccastext)
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
typedef struct S_g8c4dc6a0 S_g8c4dc6a0;
typedef struct S_g8c4dc6a0_42c S_g8c4dc6a0_42c;
typedef struct S_g8c4dc6a0_42c_8 S_g8c4dc6a0_42c_8;
typedef struct S_g8c4dc6a0_430 S_g8c4dc6a0_430;
typedef struct S_g8c4dc6a0_430_4 S_g8c4dc6a0_430_4;
typedef struct S_g8c4dc6a4 S_g8c4dc6a4;
typedef struct Arg0_64 Arg0_64;
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
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
} ObjectData;
struct S_g8c4dc6a0 {
    char unknown0[0x42c];
    S_g8c4dc6a0_42c *f42c;
    S_g8c4dc6a0_430 *f430;
};
struct S_g8c4dc6a0_42c {
    char unknown0[0x8];
    S_g8c4dc6a0_42c_8 *f08;
};
struct S_g8c4dc6a0_430 {
    char unknown0[0x4];
    S_g8c4dc6a0_430_4 *f04;
};
extern S_g8c4dc6a0 *g_8c4dc6a0;
extern S_g8c4dc6a4 *g_8c4dc6a4;
extern "C" void operation_8c1a25e0(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        ((void (*)(void *))0x8c3827d8)(g_8c4dc6a4);
        ((void (*)(void))0x8c38ae68)();
        ((void (*)(void *))0x8c382a40)(((char *)o + 0x3c));
        ((void (*)(int, void *))0x8c37df90)(0, ((ObjectData *)o)->f64);
        ((void (*)(void))0x8c391c94)();
        ((void (*)(void *, void *, float))0x8c3ac53a)(g_8c4dc6a0->f42c->f08, g_8c4dc6a0->f430->f04, ((ObjectData *)o)->ff8);
        ((void (*)(void))0x8c391cc4)();
        ((void (*)(void))0x8c38ad10)();
    }
}

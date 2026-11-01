/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1be5fc
 * function: TObjCityAreaWarp_v09_8c1be5fc
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 14 of 56 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_42c_8 S_g8c4e2b80_42c_8;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_34 S_g8c4e2b80_430_34;
typedef struct S_g8c4e2b84 S_g8c4e2b84;
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
    char unknown68[0x8c];
    float ff4;
} ObjectData;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x8];
    S_g8c4e2b80_42c_8 *f08;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x34];
    S_g8c4e2b80_430_34 *f34;
};
extern "C" void TObjCityAreaWarp_v09_8c1be5fc(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 32.0f);
    if (t1 != 0) {
        ((void (*)(void *))0x8c3827d8)(*(S_g8c4e2b84 **)0x8c4e2b84);
        ((void (*)(void))0x8c38ae68)();
        ((void (*)(void *))0x8c382a40)(((char *)o + 0x3c));
        ((void (*)(int, void *))0x8c37df90)(0, ((ObjectData *)o)->f64);
        ((void (*)(void))0x8c391c94)();
        {
            S_g8c4e2b80 *g = *(S_g8c4e2b80 **)0x8c4e2b80;
            ((void (*)(float, void *, void *))0x8c3ac53a)(((ObjectData *)o)->ff4, g->f42c->f08, g->f430->f34);
        }
        ((void (*)(void))0x8c391cc4)();
        ((void (*)(void))0x8c38ad10)();
    }
}

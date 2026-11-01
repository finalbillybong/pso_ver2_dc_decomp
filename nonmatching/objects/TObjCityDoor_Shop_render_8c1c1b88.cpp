/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c1b88
 * function: TObjCityDoor_Shop_render_8c1c1b88
 * language: c++
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 18 of 50 reference instruction lines
 * differing bytes: 31
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
typedef struct S_g8c4e2b80_42c_98 S_g8c4e2b80_42c_98;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_44 S_g8c4e2b80_430_44;
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual int v23();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x84];
    float fec;
} ObjectData;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x98];
    S_g8c4e2b80_42c_98 *f98;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x44];
    S_g8c4e2b80_430_44 *f44;
};
extern S_g8c4e2b80 *g_8c4e2b80;
extern S_g8c4e2b84 *g_8c4e2b84;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3ac53a(float, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCityDoor_Shop_render_8c1c1b88(Object *o)
{
    int t1;
    t1 = o->v23();
    if (t1 != 0) {
        call_8c3827d8(g_8c4e2b84);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3ac53a(((ObjectData *)o)->fec, (void *)(g_8c4e2b80->f42c->f98), (void *)(g_8c4e2b80->f430->f44));
        njPopMatrixEx_8c38ad10();
    }
}

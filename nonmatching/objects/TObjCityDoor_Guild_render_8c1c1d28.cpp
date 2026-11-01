/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c1d28
 * function: TObjCityDoor_Guild_render_8c1c1d28
 * language: c++
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 8 of 51 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode bgotoext)
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
extern S_g8c4e2b84 *g_8c4e2b84;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c1beb60(int);
extern "C" int operation_8c1beb7c(int);
extern "C" void call_8c3ac53a(int, int, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCityDoor_Guild_render_8c1c1d28(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = o->v23();
    if (t1 != 0) {
        call_8c3827d8(g_8c4e2b84);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        t2 = operation_8c1beb60(0x15);
        t3 = operation_8c1beb7c(0xc);
        call_8c3ac53a(t2, t3, ((ObjectData *)o)->fec);
        njPopMatrixEx_8c38ad10();
    }
}

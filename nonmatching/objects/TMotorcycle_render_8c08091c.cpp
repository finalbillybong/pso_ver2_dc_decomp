/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08091c
 * function: TMotorcycle_render_8c08091c
 * language: c++
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 14 of 44 reference instruction lines
 * differing bytes: 15
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
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
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
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
} ObjectData;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c37e0c8(int, void *, void *, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TMotorcycle_render_8c08091c(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37e0c8(0, (void *)(((ObjectData *)o)->f60), (void *)(((ObjectData *)o)->f64), (void *)(((ObjectData *)o)->f68));
        call_8c3a944a((void *)(((ObjectData *)o)->f38));
        njPopMatrixEx_8c38ad10();
    }
}

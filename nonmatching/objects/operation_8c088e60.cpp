/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c088e60
 * function: operation_8c088e60
 * language: c++
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 10 of 58 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Arg0_124 Arg0_124;
typedef struct Arg0_128 Arg0_128;
typedef struct Arg0_12c Arg0_12c;
typedef struct Arg0_130 Arg0_130;
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
    char unknown68[0xb8];
    float f120;
    Arg0_124 *f124;
    Arg0_128 *f128;
    Arg0_12c *f12c;
    Arg0_130 *f130;
} ObjectData;
extern "C" void hs_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void hs_8c3a944a(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void hs_8c3ac53a(void *, void *, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c088e60(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        hs_8c3827d8(((ObjectData *)o)->f130);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(((char *)o + 0x3c));
        njRotateY_8c37df90(0, ((ObjectData *)o)->f64);
        hs_8c3a944a(((ObjectData *)o)->f124);
        reset_state_8c391c94();
        hs_8c3ac53a(((ObjectData *)o)->f128, ((ObjectData *)o)->f12c, ((ObjectData *)o)->f120);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}

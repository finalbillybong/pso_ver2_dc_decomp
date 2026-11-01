/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15ad68
 * function: TObjVoloptPillar_render_8c15ad68
 * language: c++
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 46 of 124 reference instruction lines
 * differing bytes: 60
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
typedef struct S_g8c4dab40 S_g8c4dab40;
typedef struct S_g8c4dab44 S_g8c4dab44;
typedef struct S_g8c4dab48 S_g8c4dab48;
typedef struct S_g8c4dab4c S_g8c4dab4c;
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
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    float ff0;
} ObjectData;
extern S_g8c4dab40 *g_8c4dab40;
extern S_g8c4dab44 *g_8c4dab44;
extern S_g8c4dab48 *g_8c4dab48;
extern S_g8c4dab4c *g_8c4dab4c;
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void operation_8c013e74(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njRotateX_8c37dd28(int, int);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c11a920(void);
extern "C" void TObjVoloptPillar_render_8c15ad68(Object *o)
{
    float v1;
    int t1;
    t1 = o->v11(400.0f, 40.0f);
    v1 = (float)/* ? fr15 */ 0;
    if (t1 != 0) {
        call_8c013c58(o);
        operation_8c1086fc();
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c3827d8(g_8c4dab48);
        call_8c3aa716(g_8c4dab40);
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, ((ObjectData *)o)->f3c, ((ObjectData *)o)->ff0, ((ObjectData *)o)->f44);
        call_8c3827d8(g_8c4dab4c);
        call_8c3aa716(g_8c4dab44);
        njPopMatrixEx_8c38ad10();
        operation_8c013e74();
        reset_state_8c391cc4();
        v1 = (float)90.0f;
        v1 = (float)(v1 - ((ObjectData *)o)->f40);
        v1 = (float)(v1 * 0.0111111114f);
        v1 = (float)(v1 + 1.0f);
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, ((ObjectData *)o)->f3c, 0.3f, ((ObjectData *)o)->f44);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njRotateX_8c37dd28(0, -0x4000);
        njScale_8c37e2e4(0, v1, v1, v1);
        call_8c11a920();
        njPopMatrixEx_8c38ad10();
    }
}

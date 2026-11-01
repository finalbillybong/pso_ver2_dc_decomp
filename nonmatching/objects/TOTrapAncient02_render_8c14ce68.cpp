/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14ce68
 * function: TOTrapAncient02_render_8c14ce68
 * language: c++
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 52 of 128 reference instruction lines
 * differing bytes: 50
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
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_368 Arg0_368;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_4 S_vv4_4;
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
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2f4];
    int f35c;
    float f360;
    float f364;
    Arg0_368 *f368;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv2_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x28];
    S_vv3_30 *f30;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TOTrapAncient02_render_8c14ce68(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    ((ObjectData *)o)->f35c = (int)t1;
    if (((ObjectData *)o)->f35c == 1) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        njTranslate_8c3829bc(0, v1->f08, v1->f0c + ((ObjectData *)o)->f360, v1->f10);
        call_8c3aa702((void *)(v1->f04));
        njPushMatrixEx_8c38ae68();
        v2 = (S_vv2 *)v1->f2c;
        njTranslate_8c3829bc(0, v2->f08, v2->f0c + ((ObjectData *)o)->f364, v2->f10);
        call_8c3aa702((void *)(v2->f04));
        reset_state_8c391c94();
        njPushMatrixEx_8c38ae68();
        v3 = (S_vv3 *)v2->f2c;
        translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
        call_8c3aa702((void *)(v3->f04));
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        v4 = (S_vv4 *)v3->f30;
        translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f368));
        call_8c3aa702((void *)(v4->f04));
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1141f4
 * function: TOKeyAncient02_render_8c1141f4
 * language: c++
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 4 of 137 reference instruction lines
 * differing bytes: 17
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
typedef struct S_g8c4d8244 S_g8c4d8244;
typedef struct S_g8c4d8248 S_g8c4d8248;
typedef struct S_g8c4d8248_0 S_g8c4d8248_0;
typedef struct Arg0_120 Arg0_120;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_2c S_vv4_2c;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
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
    char unknown68[0x90];
    float ff8;
    float ffc;
    char unknown100[0xc];
    int f10c;
    char unknown110[0x10];
    Arg0_120 *f120;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x24];
    S_vv4_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
extern S_g8c4d8244 *g_8c4d8244;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njScaleV_8c37e3d0(int, void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOKeyAncient02_render_8c1141f4(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        v2 = (S_vv2 *)v1->f2c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
        njScaleV_8c37e3d0(0, (void *)(((char *)o + 0x6c)));
        reset_state_8c391c94();
        call_8c3aa702((void *)(v2->f04));
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
        v3 = (S_vv3 *)v2->f30;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
        call_8c3aa702((void *)(v3->f04));
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
        call_8c3827d8((void *)(*(S_g8c4d8248_0 **)((char *)((char *)*(S_g8c4d8248 **)0x8c4d8248 + 0x0) + (((ObjectData *)o)->f10c << 2))));
        reset_state_8c391c94();
        v4 = (S_vv4 *)g_8c4d8244;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
        call_8c3aa702((void *)(v4->f04));
        v5 = (S_vv5 *)v4->f2c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f120));
        call_8c3aa702((void *)(v5->f04));
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}

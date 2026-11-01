/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15ceac
 * function: TOSensorAncient01_render_8c15ceac
 * language: c++
 * reference size: 672 bytes
 * compiled size: 672 bytes (+0.0%)
 * differing lines: 204 of 293 reference instruction lines
 * differing bytes: 502
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
typedef struct S_g8c4db144 S_g8c4db144;
typedef struct S_g8c4db144_0 S_g8c4db144_0;
typedef struct S_g8c4db144_4 S_g8c4db144_4;
typedef struct Arg0_120 Arg0_120;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_30 S_vv10_30;
typedef struct S_vv10_4 S_vv10_4;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_2c S_vv14_2c;
typedef struct S_vv14_4 S_vv14_4;
typedef struct S_vv15 S_vv15;
typedef struct S_vv15_30 S_vv15_30;
typedef struct S_vv15_4 S_vv15_4;
typedef struct S_vv16 S_vv16;
typedef struct S_vv16_30 S_vv16_30;
typedef struct S_vv16_4 S_vv16_4;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_30 S_vv17_30;
typedef struct S_vv17_4 S_vv17_4;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_4 S_vv18_4;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
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
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x28];
    int f90;
    char unknown94[0x64];
    float ff8;
    float ffc;
    char unknown100[0x1c];
    int f11c;
    Arg0_120 *f120;
    float f124;
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
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    char unknown8[0x28];
    S_vv6_30 *f30;
};
struct S_vv10 {
    char unknown0[0x4];
    S_vv10_4 *f04;
    char unknown8[0x28];
    S_vv10_30 *f30;
};
struct S_vv14 {
    char unknown0[0x4];
    S_vv14_4 *f04;
    char unknown8[0x24];
    S_vv14_2c *f2c;
};
struct S_vv15 {
    char unknown0[0x4];
    S_vv15_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    S_vv15_30 *f30;
};
struct S_vv16 {
    char unknown0[0x4];
    S_vv16_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    S_vv16_30 *f30;
};
struct S_vv17 {
    char unknown0[0x4];
    S_vv17_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    S_vv17_30 *f30;
};
struct S_vv18 {
    char unknown0[0x4];
    S_vv18_4 *f04;
    float f08;
    float f0c;
    float f10;
};
extern S_g8c4db144 *g_8c4db144;
extern int g_8c4db154;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c3a9436(void *);
extern "C" void TOSensorAncient01_render_8c15ceac(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv6 *v6;
    S_vv10 *v10;
    S_vv14 *v14;
    S_vv15 *v15;
    S_vv16 *v16;
    S_vv17 *v17;
    S_vv18 *v18;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0) {
        return;
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    call_8c3827d8((void *)(*(S_g8c4db144_0 **)((char *)((char *)g_8c4db144 + 0x0) + (((ObjectData *)o)->f90 << 3))));
    v1 = (S_vv1 *)((ObjectData *)o)->f38;
    translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
    call_8c3aa702((void *)(v1->f04));
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    v2 = (S_vv2 *)v1->f2c;
    if ((float)((ObjectData *)o)->f11c < 30.0f) {
        call_8c3827d8((void *)(*(S_g8c4db144_4 **)((char *)((char *)g_8c4db144 + 0x4) + (g_8c4db154 << 3))));
    }
    translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
    call_8c3aa702((void *)(v2->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v6 = (S_vv6 *)v2->f30;
    if (60.0f > (float)((ObjectData *)o)->f11c) {
        call_8c3827d8((void *)(*(S_g8c4db144_4 **)((char *)((char *)g_8c4db144 + 0x4) + (g_8c4db154 << 3))));
    }
    translate_current_matrix_v_8c382a40((void *)((int)v6 + 8));
    call_8c3aa702((void *)(v6->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v10 = (S_vv10 *)v6->f30;
    if (90.0f > (float)((ObjectData *)o)->f11c) {
        call_8c3827d8((void *)(*(S_g8c4db144_4 **)((char *)((char *)g_8c4db144 + 0x4) + (g_8c4db154 << 3))));
    }
    translate_current_matrix_v_8c382a40((void *)((int)v10 + 8));
    call_8c3aa702((void *)(v10->f04));
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
    njPushMatrixEx_8c38ae68();
    v14 = (S_vv14 *)v10->f30;
    translate_current_matrix_v_8c382a40((void *)((int)v14 + 8));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f120));
    reset_state_8c391c94();
    call_8c3aa702((void *)(v14->f04));
    reset_state_8c391cc4();
    njPushMatrixEx_8c38ae68();
    v15 = (S_vv15 *)v14->f2c;
    njTranslate_8c3829bc(0, ((ObjectData *)o)->f124 + v15->f08, v15->f0c, v15->f10);
    call_8c3aa702((void *)(v15->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v16 = (S_vv16 *)v15->f30;
    njTranslate_8c3829bc(0, v16->f08, v16->f0c, v16->f10 - ((ObjectData *)o)->f124);
    call_8c3a9436((void *)(v16->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v17 = (S_vv17 *)v16->f30;
    njTranslate_8c3829bc(0, v17->f08 - ((ObjectData *)o)->f124, v17->f0c, v17->f10);
    call_8c3a9436((void *)(v17->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v18 = (S_vv18 *)v17->f30;
    njTranslate_8c3829bc(0, v18->f08, v18->f0c, v18->f10 + ((ObjectData *)o)->f124);
    call_8c3a9436((void *)(v18->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
}

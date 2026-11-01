/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1af72c
 * function: TODoorVoShip_render_8c1af72c
 * language: c++
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 16 of 156 reference instruction lines
 * differing bytes: 38
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
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_30 S_vv5_30;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
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
    char unknown68[0x80];
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x4];
    int f104;
    Arg0_108 *f108;
    Arg0_10c *f10c;
    Arg0_110 *f110;
} ObjectData;
struct S_vv1 {
    char unknown0[0x2c];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x28];
    S_vv5_30 *f30;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
};
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3adf38(void *, void *, void *, float);
extern "C" void call_8c38c0f0(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c3aa702(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TODoorVoShip_render_8c1af72c(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv5 *v5;
    S_vv7 *v7;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0) {
        return;
    }
    if (((((ObjectData *)o)->f104 & 0xe)) != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3adf38((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), (void *)(((ObjectData *)o)->f108), ((ObjectData *)o)->fe8);
        call_8c3827d8((void *)(((ObjectData *)o)->f110));
        g_8c575570 = (g_8c46f560 = g_8c575570) | 0x20;
        call_8c38c0f0((void *)(((char *)o + 0x114)));
        reset_state_8c391c94();
        v1 = (S_vv1 *)((ObjectData *)o)->f10c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        v2 = (S_vv2 *)v1->f2c;
        if (((((ObjectData *)o)->f104 & 4)) != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
            call_8c3aa702((void *)(v2->f04));
            njPopMatrixEx_8c38ad10();
        }
        v5 = (S_vv5 *)v2->f30;
        if (((((ObjectData *)o)->f104 & 2)) != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
            call_8c3aa702((void *)(v5->f04));
            njPopMatrixEx_8c38ad10();
        }
        v7 = (S_vv7 *)v5->f30;
        if (((((ObjectData *)o)->f104 & 8)) != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v7 + 8));
            call_8c3aa702((void *)(v7->f04));
            njPopMatrixEx_8c38ad10();
        }
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
        call_8c38c0f0((void *)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d8f10
 * function: TObjCity_Season_21_21_render_8c1d8f10
 * language: c++
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 12 of 69 reference instruction lines
 * differing bytes: 28
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
typedef struct S_L8c4e2ef4 S_L8c4e2ef4;
typedef struct S_L8c4e2ef4_10 S_L8c4e2ef4_10;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct S_g8c4e2f0c S_g8c4e2f0c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_ec Arg0_ec;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_18 S_vv1_42c_18;
typedef struct S_vv1_42c_8 S_vv1_42c_8;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_4 S_vv1_430_4;
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
    char unknown68[0x7c];
    int fe4;
    float fe8;
    Arg0_ec *fec;
} ObjectData;
struct S_L8c4e2ef4 {
    char unknown0[0x10];
    S_L8c4e2ef4_10 *f10;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct S_vv1_42c {
    char unknown0[0x8];
    S_vv1_42c_8 *f08;
    char unknownc[0xc];
    S_vv1_42c_18 *f18;
};
struct S_vv1_430 {
    char unknown0[0x4];
    S_vv1_430_4 *f04;
};
extern S_g8c4e2f0c *g_8c4e2f0c;
extern S_L8c4e2ef4 g_8c4e2ef4;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c0cd63c(void *, int, void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCity_Season_21_21_render_8c1d8f10(Object *o)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (((ObjectData *)o)->fe4 << 2));
    if (v1 != 0) {
        t1 = o->v11(800.0f, 60.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)((&g_8c4e2ef4)->f10));
            call_8c0cd63c(g_8c4e2f0c, 0, (void *)(((ObjectData *)o)->fec));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3aa716((void *)(v1->f42c->f08));
            call_8c3addea((void *)(v1->f42c->f18), (void *)(v1->f430->f04), ((ObjectData *)o)->fe8);
            njPopMatrixEx_8c38ad10();
        }
    }
}

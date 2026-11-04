/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16201c
 * function: TODoorMachine01_render_8c16201c
 * language: c++
 * reference size: 548 bytes
 * compiled size: 544 bytes (-0.7%)
 * differing lines: 204 of 229 reference instruction lines
 * differing bytes: 288
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TODoorMachine01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db204 S_g8c4db204;
typedef struct S_g8c4db204_0 S_g8c4db204_0;
typedef struct S_g8c4db204_4 S_g8c4db204_4;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_2c S_vv11_2c;
typedef struct S_vv11_4 S_vv11_4;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_2c S_vv13_2c;
typedef struct S_vv13_4 S_vv13_4;
typedef struct S_vv14 S_vv14;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_2c S_vv18_2c;
typedef struct S_vv18_4 S_vv18_4;
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
    char unknown68[0x7c];
    int fe4;
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct S_vv11 {
    char unknown0[0x4];
    S_vv11_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv11_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct S_vv13 {
    char unknown0[0x4];
    S_vv13_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv13_2c *f2c;
};
struct S_vv14 {
    char unknown0[0x30];
    int f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30 *f30;
};
struct S_vv18 {
    char unknown0[0x4];
    S_vv18_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv18_2c *f2c;
};
struct S_g8c4db204 {
    char unknown0[0x4];
    S_g8c4db204_4 *f04;
};
extern S_g8c4db204 *g_8c4db204;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c162240(Object *, void *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3addea(Arg0_38 *, void *, float);
extern "C" void TODoorMachine01_render_8c16201c(Object *o)
{
    int v10;
    S_vv11 *v11;
    int v12;
    S_vv13 *v13;
    S_vv14 *v14;
    int v15;
    char *v16;
    int v17;
    S_vv18 *v18;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0 || operation_8c0eeb00((void *)o, 30.0f) == 0) {
        return;
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    switch (((ObjectData *)o)->fe4) {
    case 0:
        v10 = (int)(((((ObjectData *)o)->f108 & 0x10000)) != 0);
        v11 = (S_vv11 *)((ObjectData *)o)->f38->f2c;
        call_8c3827d8((void *)(*(S_g8c4db204_0 **)((char *)((char *)g_8c4db204 + 0x0) + (v10 << 2))));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, v11->f08, v11->f0c, v11->f10);
        call_8c3aa702((void *)(v11->f04));
        call_8c162240(o, (void *)(v11->f2c), v10);
        njPopMatrixEx_8c38ad10();
        v12 = (int)(((((ObjectData *)o)->f108 & 0x20000)) != 0);
        v13 = (S_vv13 *)((ObjectData *)o)->f38->f2c->f30;
        call_8c3827d8((void *)(*(S_g8c4db204_0 **)((char *)((char *)g_8c4db204 + 0x0) + (v12 << 2))));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, v13->f08, v13->f0c, v13->f10);
        call_8c3aa702((void *)(v13->f04));
        v14 = (S_vv14 *)v13->f2c;
        call_8c162240(o, (void *)v14, v12);
        v15 = (int)(((((ObjectData *)o)->f108 & 0x40000)) != 0);
        v16 = (char *)v14->f30;
        call_8c3827d8((void *)(*(S_g8c4db204_0 **)((char *)((char *)g_8c4db204 + 0x0) + (v15 << 2))));
        call_8c162240(o, (void *)v16, v15);
        njPopMatrixEx_8c38ad10();
        v17 = (int)(((((ObjectData *)o)->f108 & 0x80000)) != 0);
        v18 = (S_vv18 *)((ObjectData *)o)->f38->f2c->f30->f30;
        call_8c3827d8((void *)(*(S_g8c4db204_0 **)((char *)((char *)g_8c4db204 + 0x0) + (v17 << 2))));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, v18->f08, v18->f0c, v18->f10);
        call_8c3aa702((void *)(v18->f04));
        call_8c162240(o, (void *)(v18->f2c), v17);
        njPopMatrixEx_8c38ad10();
        break;
    default:
        call_8c3827d8((void *)(g_8c4db204->f04));
        call_8c3addea((Arg0_38 *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
        break;
    }
    njPopMatrixEx_8c38ad10();
}

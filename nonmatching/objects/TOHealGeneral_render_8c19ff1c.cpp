/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19ff1c
 * function: TOHealGeneral_render_8c19ff1c
 * language: c++
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 24 of 100 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_104 Arg0_104;
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
    char unknown100[0x4];
    Arg0_104 *f104;
    float f108;
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
    float f08;
    float f0c;
    float f10;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3a9436(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void TOHealGeneral_render_8c19ff1c(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int t1;
    float d;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        call_8c3a9436((void *)(v1->f04));
        njPushMatrixEx_8c38ae68();
        v2 = (S_vv2 *)v1->f2c;
        translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f104));
        call_8c3a9436((void *)(v2->f04));
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        v3 = (S_vv3 *)v2->f30;
        d = ((ObjectData *)o)->f108;
        njTranslate_8c3829bc(0, v3->f08, v3->f0c - d, v3->f10);
        njRotateY_8c37df90(0, (void *)(-(int)(((ObjectData *)o)->f104)));
        call_8c3a9436((void *)(v3->f04));
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19ff1c
 * function: TOHealGeneral_render_8c19ff1c
 * language: c++
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 20 of 100 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOHealGeneral.h (shared layout for modders; this draft keeps its own local types)
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
    char *pm5;
    ObjectData *pm4;
    int t1;
    void *pm7;
    float pm2;
    int pm6;
    void *pm9;
    float pm3;
    float pm8;
    pm8 = ((ObjectData *)o)->ffc;
    pm4 = (ObjectData *)o;
    pm2 = pm8;
    t1 = o->v11((pm4)->ff8, pm2);
    if (t1 != 0) {
        S_vv2 *v2;
        S_vv3 *v3;
        S_vv1 *v1;
        pm5 = (char *)o;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((pm5 + 0x3c)));
        pm4 = (ObjectData *)o;
        njRotateY_8c37df90(0, (void *)((pm4)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        t1 = (int)v1 + 8;
        translate_current_matrix_v_8c382a40((void *)(t1));
        call_8c3a9436((void *)(v1->f04));
        njPushMatrixEx_8c38ae68();
        v2 = (S_vv2 *)v1->f2c;
        pm6 = (int)v2;
        t1 = pm6;
        pm7 = (void *)(8 + t1);
        translate_current_matrix_v_8c382a40(pm7);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f104));
        call_8c3a9436((void *)(v2->f04));
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        pm4 = (ObjectData *)o;
        v3 = (S_vv3 *)v2->f30;
        pm3 = v3->f08;
        pm2 = v3->f10;
        njTranslate_8c3829bc(0, pm3, v3->f0c - ((ObjectData *)o)->f108, pm2);
        t1 = (int)((pm4)->f104);
        pm6 = -t1;
        njRotateY_8c37df90(0, (void *)(pm6));
        pm9 = (void *)(v3->f04);
        pm7 = pm9;
        call_8c3a9436(pm7);
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
    }
}

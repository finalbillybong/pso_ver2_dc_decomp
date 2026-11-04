/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f219c
 * function: TOCapsuleAncient01_render_8c0f219c
 * language: c++
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 12 of 96 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOCapsuleAncient01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_11c Arg0_11c;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
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
    int f104;
    char unknown108[0x10];
    int f118;
    Arg0_11c *f11c;
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
extern "C" void TOCapsuleAncient01_render_8c0f219c(Object *o)
{
    S_vv1 *v1;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    ((ObjectData *)o)->f118 = (int)t1;
    if (((ObjectData *)o)->f118 == 1) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        njTranslate_8c3829bc(0, v1->f08, v1->f0c, v1->f10);
        call_8c3aa702((void *)(v1->f04));
        if (((ObjectData *)o)->f104 == 1) {
            reset_state_8c391c94();
            v1 = (S_vv1 *)v1->f2c;
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, v1->f08, v1->f0c, v1->f10);
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f11c));
            call_8c3aa702((void *)(v1->f04));
            njPopMatrixEx_8c38ad10();
            reset_state_8c391cc4();
        }
        njPopMatrixEx_8c38ad10();
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1dafbc
 * function: operation_8c1dafbc
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 8 of 95 reference instruction lines
 * differing bytes: 10
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
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_a4_0 Arg0_a4_0;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_a8_0 Arg0_a8_0;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_b4_0 Arg0_b4_0;
typedef struct Arg0_b4_4 Arg0_b4_4;
typedef struct Arg0_b4_8 Arg0_b4_8;
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
    char unknown0[0x94];
    float f94;
    float f98;
    char unknown9c[0x4];
    int fa0;
    Arg0_a4 *fa4;
    Arg0_a8 *fa8;
    int fac;
    char unknownb0[0x4];
    Arg0_b4 *fb4;
} ObjectData;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c1dafbc(Object *o)
{
    int v4;
    char *v2;
    int v3;
    int v1;
    int t1;
    t1 = o->v11(((ObjectData *)o)->f94, ((ObjectData *)o)->f98);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        v1 = (int)0;
        while (((ObjectData *)o)->fa0 > v1) {
            v2 = (char *)v1;
            v3 = (int)((int)(v2) << 2);
            call_8c3827d8((void *)(*(Arg0_a8_0 **)((char *)((char *)((ObjectData *)o)->fa8 + 0x0) + (v3))));
            njPushMatrixEx_8c38ae68();
            v4 = (int)(v1 * 0xc);
            translate_current_matrix_v_8c382a40((void *)((int)((ObjectData *)o)->fac + v4));
            njRotateZ_8c37e02c(0, (void *)(*(Arg0_b4_8 **)((char *)((char *)((ObjectData *)o)->fb4 + 0x8) + (v4))));
            njRotateX_8c37dd28(0, (void *)(*(Arg0_b4_0 **)((char *)((char *)((ObjectData *)o)->fb4 + 0x0) + (v4))));
            njRotateY_8c37df90(0, (void *)(*(Arg0_b4_4 **)((char *)((char *)((ObjectData *)o)->fb4 + 0x4) + (v4))));
            call_8c3aa716((void *)(*(Arg0_a4_0 **)((char *)((char *)((ObjectData *)o)->fa4 + 0x0) + (v3))));
            njPopMatrixEx_8c38ad10();
            v1 = (int)(v1 + 1);
        }
        njPopMatrixEx_8c38ad10();
    }
}

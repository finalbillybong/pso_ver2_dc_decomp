/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24b070
 * function: operation_8c24b070
 * language: c++
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 18 of 66 reference instruction lines
 * differing bytes: 14
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
typedef struct S_g8c510f80 S_g8c510f80;
typedef struct S_g8c510f80_42c S_g8c510f80_42c;
typedef struct S_g8c510f80_42c_8 S_g8c510f80_42c_8;
typedef struct S_g8c510f80_42c_c S_g8c510f80_42c_c;
typedef struct S_g8c510f80_430 S_g8c510f80_430;
typedef struct S_g8c510f80_430_4 S_g8c510f80_430_4;
typedef struct S_g8c510f84 S_g8c510f84;
typedef struct S_g8c510f84_4 S_g8c510f84_4;
typedef struct S_g8c510f84_4_4 S_g8c510f84_4_4;
typedef struct S_g8c510f88 S_g8c510f88;
typedef struct S_g8c510f88_4 S_g8c510f88_4;
typedef struct S_g8c510f88_4_4 S_g8c510f88_4_4;
typedef struct Arg0_64 Arg0_64;
class Object;
struct S_g8c510f84 {
    char unknown0[0x4];
    S_g8c510f84_4 *f04;
};
struct S_g8c510f84_4 {
    char unknown0[0x4];
    S_g8c510f84_4_4 *f04;
};
struct S_g8c510f88 {
    char unknown0[0x4];
    S_g8c510f88_4 *f04;
};
struct S_g8c510f88_4 {
    char unknown0[0x4];
    S_g8c510f88_4_4 *f04;
};
struct S_g8c510f80 {
    char unknown0[0x42c];
    S_g8c510f80_42c *f42c;
    S_g8c510f80_430 *f430;
};
struct S_g8c510f80_42c {
    char unknown0[0x8];
    S_g8c510f80_42c_8 *f08;
    S_g8c510f80_42c_c *f0c;
};
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
    char unknown68[0x80];
    float fe8;
} ObjectData;
struct S_g8c510f80_430 {
    char unknown0[0x4];
    S_g8c510f80_430_4 *f04;
};
extern S_g8c510f80 *g_8c510f80;
extern S_g8c510f84 *g_8c510f84;
extern S_g8c510f88 *g_8c510f88;
extern "C" void call_8c0345cc(void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c24b070(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c0345cc((void *)(g_8c510f84->f04->f04), 0);
        call_8c0345cc((void *)(g_8c510f88->f04->f04), 0);
        call_8c3827d8((void *)(g_8c510f80->f42c->f0c));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3addea((void *)(g_8c510f80->f42c->f08), (void *)(g_8c510f80->f430->f04), ((ObjectData *)o)->fe8);
        njPopMatrixEx_8c38ad10();
    }
}

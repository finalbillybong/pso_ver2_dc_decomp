/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1db550
 * function: TOSoulDF_render_8c1db550
 * language: c++
 * reference size: 296 bytes
 * compiled size: 292 bytes (-1.4%)
 * differing lines: 56 of 104 reference instruction lines
 * differing bytes: 255
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_cc Arg0_cc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
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
    char unknown68[0x64];
    Arg0_cc *fcc;
} ObjectData;
struct S_vv1 {
    Block16 f00;
};
struct S_vv2 {
    Block16 f00;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void set_child_blend(void);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c37ebdc(void *, void *, int);
extern "C" void reset_state_8c391cc4(void);
extern "C" void restore_child_blend(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOSoulDF_render_8c1db550(Object *o)
{
    int t1;
    t1 = o->v11(1000.0f, 100.0f);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xb4)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        g_8c46f560 = (int)(g_8c575570);
        *(Block16 *)0x8c46f564 = *(Block16 *)0x8c5755ac;
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        set_child_blend();
        reset_state_8c391c94();
        call_8c37ebdc((void *)(((char *)o + 0x94)), (void *)(((ObjectData *)o)->fcc), 0x28);
        reset_state_8c391cc4();
        restore_child_blend();
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        *(Block16 *)0x8c5755ac = *(Block16 *)0x8c46f564;
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
    }
}

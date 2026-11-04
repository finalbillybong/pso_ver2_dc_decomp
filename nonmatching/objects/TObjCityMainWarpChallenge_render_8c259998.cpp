/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c259998
 * function: TObjCityMainWarpChallenge_render_8c259998
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 22 of 82 reference instruction lines
 * differing bytes: 43
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjCityMainWarpChallenge.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_42c_38 S_g8c4e2b80_42c_38;
typedef struct S_g8c4e2b80_42c_a8 S_g8c4e2b80_42c_a8;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_3c S_g8c4e2b80_430_3c;
typedef struct S_g8c4e2b84 S_g8c4e2b84;
typedef struct Arg0_64 Arg0_64;
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
    char unknown68[0x88];
    int ff0;
    float ff4;
} ObjectData;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x38];
    S_g8c4e2b80_42c_38 *f38;
    char unknown3c[0x6c];
    S_g8c4e2b80_42c_a8 *fa8;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x3c];
    S_g8c4e2b80_430_3c *f3c;
};
extern int g_8c46ee80;
extern S_g8c4e2b80 *g_8c4e2b80;
extern S_g8c4e2b84 *g_8c4e2b84;
extern "C" float distance_xz(void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCityMainWarpChallenge_render_8c259998(Object *o)
{
    float t1;
    int t2;
    if (((ObjectData *)o)->ff0 == 0xe) {
        t1 = distance_xz((void *)(g_8c46ee80 + 0x90), (void *)(((char *)o + 0x3c)));
        if (!(t1 > 160000.0f)) {
            goto L_8c2599d6;
        }
        return;
    }
    t2 = o->v11(400.0f, 40.0f);
    if (t2 != 0) {
L_8c2599d6:;
        call_8c3827d8(g_8c4e2b84);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3a944a((void *)(g_8c4e2b80->f42c->fa8));
        reset_state_8c391c94();
        call_8c3ac53a((void *)(g_8c4e2b80->f42c->f38), (void *)(g_8c4e2b80->f430->f3c), ((ObjectData *)o)->ff4);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}

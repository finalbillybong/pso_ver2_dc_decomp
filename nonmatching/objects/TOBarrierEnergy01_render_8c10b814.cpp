/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10b814
 * function: TOBarrierEnergy01_render_8c10b814
 * language: c++
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 8 of 63 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOBarrierEnergy01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7cc4 S_g8c4d7cc4;
typedef struct S_g8c4d7cc4_8 S_g8c4d7cc4_8;
typedef struct S_g8c4d7cc8 S_g8c4d7cc8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
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
} ObjectData;
struct S_g8c4d7cc4 {
    char unknown0[0x8];
    S_g8c4d7cc4_8 *f08;
};
extern S_g8c4d7cc4 *g_8c4d7cc4;
extern S_g8c4d7cc8 *g_8c4d7cc8;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c3a944a(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOBarrierEnergy01_render_8c10b814(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        void *pm2;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        reset_state_8c391c94();
        pm2 = (void *)(((ObjectData *)o)->ff4);
        call_8c3addea((void *)(((ObjectData *)o)->f38), pm2, ((ObjectData *)o)->fe8);
        reset_state_8c391cc4();
        call_8c3827d8((void *)(g_8c4d7cc4->f08));
        call_8c3a944a(g_8c4d7cc8);
        njPopMatrixEx_8c38ad10();
    }
}

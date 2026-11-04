/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d9134
 * function: TObjCity_Season_SonicAdv2_render_8c1d9134
 * language: c++
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 42 of 128 reference instruction lines
 * differing bytes: 120
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjCity_Season_SonicAdv2.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2ef4 S_L8c4e2ef4;
typedef struct S_L8c4e2ef4_14 S_L8c4e2ef4_14;
typedef struct Frame Frame;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_8 S_vv1_42c_8;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_4 S_vv1_430_4;
class Object;
typedef struct Block_frame_18 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_18;
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
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x20];
    int f88;
    char unknown8c[0x58];
    int fe4;
    float fe8;
} ObjectData;
struct S_L8c4e2ef4 {
    char unknown0[0x14];
    S_L8c4e2ef4_14 *f14;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Block_frame_18 f18;
};
extern S_L8c4e2ef4 g_8c4e2ef4;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3addea(float, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c05b9f4(int, int, int, int);
extern "C" void TObjCity_Season_SonicAdv2_render_8c1d9134(Object *o)
{
    Frame frame;
    int v2;
    int v3;
    int v4;
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (((ObjectData *)o)->fe4 << 2));
    if (v1 != 0) {
        t1 = o->v11(800.0f, 20.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)((&g_8c4e2ef4)->f14));
            v2 = (int)((ObjectData *)o)->f88;
            if (!(v2 >= 0)) {
                v3 = (int)0;
                v4 = (int)v3;
            } else {
                v4 = (int)v2;
                if (v2 >= 4) {
                    v4 = (int)3;
                }
            }
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3addea(((ObjectData *)o)->fe8, (void *)(*(S_vv1_42c_8 **)((char *)((char *)v1->f42c + 0x8) + (v4 << 4))), (void *)(*(S_vv1_430_4 **)((char *)((char *)v1->f430 + 0x4) + (v4 << 3))));
            njPopMatrixEx_8c38ad10();
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f18.f04 += 0.037f;
            (&frame)->f0c = 0.0f;
            (&frame)->f00 = 1.0f;
            (&frame)->f10 = 1.0f;
            (&frame)->f04 = 0.0f;
            (&frame)->f14 = 0.0f;
            (&frame)->f08 = 1.3f;
            operation_8c05b9f4((int)(&(&frame)->f18), (int)(&(&frame)->f0c), (int)(((ObjectData *)o)->f64), (int)(&frame));
        }
    }
}

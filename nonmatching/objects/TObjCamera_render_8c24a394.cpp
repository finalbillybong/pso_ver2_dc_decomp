/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24a394
 * function: TObjCamera_render_8c24a394
 * language: c++
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 20 of 93 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjCamera.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510ee0 S_g8c510ee0;
typedef struct S_g8c510ee0_42c S_g8c510ee0_42c;
typedef struct S_g8c510ee0_42c_8 S_g8c510ee0_42c_8;
typedef struct S_g8c510ee0_42c_c S_g8c510ee0_42c_c;
typedef struct S_g8c510ee0_430 S_g8c510ee0_430;
typedef struct S_g8c510ee0_430_4 S_g8c510ee0_430_4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x56816_0 S_x56816_0;
class Object;
struct S_g8c510ee0 {
    char unknown0[0x42c];
    S_g8c510ee0_42c *f42c;
    S_g8c510ee0_430 *f430;
};
struct S_g8c510ee0_42c {
    char unknown0[0x8];
    S_g8c510ee0_42c_8 *f08;
    S_g8c510ee0_42c_c *f0c;
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
    char unknownec[0x14];
    int f100;
} ObjectData;
struct S_g8c510ee0_430 {
    char unknown0[0x4];
    S_g8c510ee0_430_4 *f04;
};
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3af5ee(void *);
extern "C" void call_8c3ac53a(float, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c246154(void *, void *);
extern "C" void operation_8c24a5a8();
extern "C" void TObjCamera_render_8c24a394(Object *o)
{
    int v2;
    int v1;
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c3827d8((void *)((*(S_g8c510ee0 **)0x8c510ee0)->f42c->f0c));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        *(int *)0x8c510f44 = 0;
        call_8c3af5ee(operation_8c24a5a8);
        call_8c3ac53a(((ObjectData *)o)->fe8, (void *)((*(S_g8c510ee0 **)0x8c510ee0)->f42c->f08), (void *)((*(S_g8c510ee0 **)0x8c510ee0)->f430->f04));
        call_8c3af5ee((void *)0);
        njPopMatrixEx_8c38ad10();
        if (((ObjectData *)o)->f100 != 0) {
            v2 = (int)0;
            v1 = (int)0x104;
            while (8 > v2) {
                if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2)) != 0) {
                    operation_8c246154((void *)(*(S_x56816_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2))), (void *)(v2 * 0xc + 0x8c510ee4));
                }
                v2 = (int)(v2 + 1);
            }
        }
    }
}

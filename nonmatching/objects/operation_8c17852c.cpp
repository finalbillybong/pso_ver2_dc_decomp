/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17852c
 * function: operation_8c17852c
 * language: c++
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 4 of 115 reference instruction lines
 * differing bytes: 12
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
typedef struct S_g8c4db8e0 S_g8c4db8e0;
typedef struct S_g8c4db8e0_42c S_g8c4db8e0_42c;
typedef struct S_g8c4db8e0_42c_8 S_g8c4db8e0_42c_8;
typedef struct S_g8c4db8e4 S_g8c4db8e4;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
class Arg0_374;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x2e8];
    int f350;
    char unknown354[0x20];
    Arg0_374 *f374;
};
struct S_g8c4db8e0 {
    char unknown0[0x42c];
    S_g8c4db8e0_42c *f42c;
};
struct S_g8c4db8e0_42c {
    char unknown0[0x8];
    S_g8c4db8e0_42c_8 *f08;
};
class Arg0_374 {
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
typedef struct Arg0_374Data {

} Arg0_374Data;
extern int g_8c46f560;
extern S_g8c4db8e0 *g_8c4db8e0;
extern S_g8c4db8e4 *g_8c4db8e4;
extern int g_8c575570;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void scale_current_matrix_v_8c37e390(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c38c0e6(int, int);
extern "C" void call_8c37b566(int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c17852c(Object *o)
{
    char *v27;
    int v1;
    int t1;
    v1 = (int)1;
    v27 = (char *)o->f374;
    if (v27 != 0) {
        t1 = hierarchy_is_active((void *)v27);
        if (t1 != 0) {
            v1 = o->f374->v11(400.0f, 20.0f);
        }
    }
    if (v1 != 0) {
        call_8c3827d8(g_8c4db8e4);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        scale_current_matrix_v_8c37e390((void *)(((char *)o + 0x6c)));
        switch (o->f350) {
            case 0:
            case 1:
            call_8c3aa716((void *)(g_8c4db8e0->f42c->f08));
            break;
            case 2:
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x8820;
            call_8c38c0f0((void *)(((char *)o + 0x35c)));
            call_8c3aa716((void *)(g_8c4db8e0->f42c->f08));
            g_8c575570 &= ~0x8820;
            call_8c38c0e6(0xff00, 0);
            call_8c37b566(0x2500);
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
        }
        njPopMatrixEx_8c38ad10();
    }
}

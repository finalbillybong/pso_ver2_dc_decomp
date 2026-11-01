/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b9338
 * function: operation_8c1b9338
 * language: c++
 * reference size: 536 bytes
 * compiled size: 532 bytes (-0.7%)
 * differing lines: 24 of 205 reference instruction lines
 * differing bytes: 504
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
typedef struct S_L8c327758 S_L8c327758;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_518 Arg0_518;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x40032 S_x40032;
class Arg0_520;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0xc];
    int f3a0;
    float f3a4;
    char unknown3a8[0x8];
    int f3b0;
    char unknown3b4[0x38];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct Frame {
    Vector3 f00;
    char unknownc[0x18];
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x40032 {
    Vector3 f00;
};
class Arg0_520 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct Arg0_520Data {

} Arg0_520Data;
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c327758 g_8c327758;
extern "C" void call_8c1b86dc(Object *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjBs4CutAtk_ctor_8c1b71f4(void *, int, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, int, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b9338(Object *o)
{
    Frame frame;
    int v5;
    int t2;
    float v13;
    int v6;
    int v14;
    int v15;
    int v23;
    int t1;
    int v16;
    int t3;
    if (o->f3a0 > 0x2a) {
        o->f3a4 = 1.0f - (float)((int)o->f3a0 + -0x2a) / 7.0f;
    } else {
        o->f3a4 = 1.0f;
    }
    call_8c1b86dc(o);
    if (o->f3a0 == 0x28) {
        v5 = (int)((int)o->f390 + -4 & 1);
        v6 = (int)o->f3b0;
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            TObjBs4CutAtk_ctor_8c1b71f4((void *)t1, (int)o, v6, v5);
        }
        play_se_8c05fbf8(0x30028, (void *)(((char *)o + 0x3c)), 0, 1);
    }
    v13 = (float)o->f3f0;
    if (!(3.0f > v13) && !(v13 > 9.0f)) {
        v14 = (int)((int)o->f390 + -4 & 1);
        v15 = (int)(v14 << 2);
        t2 = call_8c119190((void *)(*(Arg0_518 **)((char *)((char *)o + 0x518) + (v15))), v13);
        if (t2 != 0) {
            njPushMatrixEx_8c38ae68();
            njUnitMatrix_8c37b5c4(0);
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3be280(0, t2, (void *)(((char *)(&frame) + 0xc)));
            call_8c3be280(0, (int)(t2 + 0xc), (void *)((char *)(&frame) + 0x18));
            njPopMatrixEx_8c38ad10();
            (*(Arg0_520 **)((char *)((char *)o + 0x520) + (v15)))->v5(((char *)(&frame) + 0xc), (int)((char *)(&frame) + 0x18));
        }
    }
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v23 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v23 != -1) {
            o->f3ec = (int)v23;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v23 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x40032 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t3 = call_8c18e6fc((Frame *)((&frame)));
        if (t3 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}

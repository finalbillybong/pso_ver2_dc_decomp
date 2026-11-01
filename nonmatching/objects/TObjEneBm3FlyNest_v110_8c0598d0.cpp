/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0598d0
 * function: TObjEneBm3FlyNest_v110_8c0598d0
 * language: c++
 * reference size: 652 bytes
 * compiled size: 648 bytes (-0.6%)
 * differing lines: 20 of 255 reference instruction lines
 * differing bytes: 380
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
typedef struct Frame Frame;
typedef struct S_g8c2f1b78 S_g8c2f1b78;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_3b0 Arg0_3b0;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
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
    char unknown68[0xa8];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x260];
    float f378;
    float f37c;
    float f380;
    char unknown384[0x24];
    int f3a8;
    Arg0_3ac *f3ac;
    Arg0_3b0 *f3b0;
} ObjectData;
struct Arg0_110 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x2c];
    int f34;
    char unknown38[0x3c];
    int f74;
};
struct S_vv8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv9 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    Vector3 f00;
};
extern "C" char g_8c2f33d0[];
extern "C" int call_8c05a0a8(void);
extern "C" int pack_ids_8c05a09c(int, int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void call_8c05ba9c(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3addea(void *, int, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3aa716(void *);
extern "C" void TObjEneBm3FlyNest_v110_8c0598d0(Object *o)
{
    Frame frame;
    float v7;
    S_vv8 *v8;
    S_vv9 *v9;
    float v10;
    float v13;
    int v16;
    float v19;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        if (((ObjectData *)o)->f3a8 != 2) {
            if (((ObjectData *)o)->f3a8 == 5) {
                goto L_8c05992e;
            }
            if (((ObjectData *)o)->f3a8 == 9) {
                goto L_8c059912;
            }
        }
        t2 = pack_ids_8c05a09c(0, 0);
        debug_print_at_8c38cf80(t2, (void *)((g_8c2f33d0 + 0x1b4)));
        goto L_8c059948;
L_8c059912:;
        t3 = pack_ids_8c05a09c(0, 0);
        debug_print_at_8c38cf80(t3, (void *)((g_8c2f33d0 + 0x1c3)));
        goto L_8c059948;
L_8c05992e:;
        t4 = pack_ids_8c05a09c(0, 0);
        debug_print_at_8c38cf80(t4, (void *)((g_8c2f33d0 + 0x1d0)));
L_8c059948:;
        t5 = pack_ids_8c05a09c(0, 1);
        debug_print_at_8c38cf80(t5, (void *)((g_8c2f33d0 + 0x1df)), ((ObjectData *)o)->f3ac);
        t6 = pack_ids_8c05a09c(0, 2);
        debug_print_at_8c38cf80(t6, (void *)((g_8c2f33d0 + 0x1ef)), ((ObjectData *)o)->f3b0);
    }
    if (((ObjectData *)o)->f3a8 != 2) {
        if (((ObjectData *)o)->f3a8 == 5) {
            goto L_8c0599da;
        }
        if (((ObjectData *)o)->f3a8 == 9) {
            goto L_8c0599ae;
        }
    }
    v7 = (float)0.0f;
    v16 = (int)*(int *)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (((ObjectData *)o)->f110->f04 << 3));
    v19 = (float)v7;
    goto L_8c059a00;
L_8c0599ae:;
    v8 = (S_vv8 *)*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (((ObjectData *)o)->f110->f74 << 3));
    v16 = (int)v8;
    v13 = (float)(float)(v8->f04 + -1);
    if (0.0f > (float)(v8->f04 + -1)) {
        v16 = (int)v8;
        v19 = (float)((float)(v8->f04 + -1) + 4294967296.0f);
        goto L_8c059a00;
L_8c0599da:;
        v9 = (S_vv9 *)*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (((ObjectData *)o)->f110->f34 << 3));
        v13 = (float)(float)(v9->f04 + -1);
        if (0.0f > (float)(v9->f04 + -1)) {
            v10 = (float)((float)(v9->f04 + -1) + 4294967296.0f);
            v13 = (float)v10;
        }
        v16 = (int)v9;
    }
    v19 = (float)v13;
L_8c059a00:;
    t7 = o->v11(500.0f, 120.0f);
    if (t7 != 0) {
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c2f33c4;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, -5.0f, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        operation_8c05baa8();
        operation_8c1086fc();
        call_8c3addea((void *)(((ObjectData *)o)->f38), v16, v19);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    njTranslate_8c3829bc(0, ((ObjectData *)o)->f378, ((ObjectData *)o)->f37c, ((ObjectData *)o)->f380);
    call_8c3aa716((void *)(*(S_g8c2f1b78 **)0x8c2f1b78));
    njPopMatrixEx_8c38ad10();
}

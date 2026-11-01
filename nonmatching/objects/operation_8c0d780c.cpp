/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d780c
 * function: operation_8c0d780c
 * language: c++
 * reference size: 924 bytes
 * compiled size: 920 bytes (-0.4%)
 * differing lines: 130 of 356 reference instruction lines
 * differing bytes: 315
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fdc8 S_g8c46fdc8;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv27 S_vv27;
typedef struct S_vv40 S_vv40;
typedef struct S_vv40_2c S_vv40_2c;
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
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x14];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x18];
    S_vv27 *f130;
    char unknown134[0x1d6];
    short f30a;
    char unknown30c[0x64];
    float f370;
    float f374;
    float f378;
    float f37c;
} ObjectData;
struct Arg0_28 {
    Arg0_28_0 *f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c[3];
};
struct S_g8c46fdc8 {
    int f00;
};
struct S_vv27 {
    char unknown0[0x4];
    int f04;
};
struct S_vv40 {
    char unknown0[0x2c];
    S_vv40_2c *f2c;
};
extern int g_8c575570;
extern "C" char g_8c3071b4[];
extern "C" int call_8c05a0a8(void);
extern "C" int pack_ids_8c05a09c(int, int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void call_8c3827d8(Arg0_28 *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c3ab76a(void *);
extern "C" void draw_tree_a702(void *, void *, float);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void set_stream_mode_8c3ab8f8(void *, float);
extern "C" void call_8c3aba08(int, S_vv40 *, int);
extern "C" void call_8c3be280(int, Frame *, Frame *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c38cd98(int, int, float);
extern "C" void call_8c3aa716(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c0d780c(Object *o)
{
    Frame frame;
    int v1;
    int v11;
    int v5;
    int v13;
    int v12;
    int v16;
    int v17;
    int v20;
    int v22;
    int v23;
    int v25;
    float v26;
    float v28;
    S_vv27 *v27;
    float v31;
    float v32;
    float v35;
    S_vv40 *v40;
    float v41;
    int v48;
    int v52;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        v1 = (int)(1.0f > ((ObjectData *)o)->f370);
        if (v1 != 0) {
            t2 = pack_ids_8c05a09c(0, 0);
            debug_print_at_8c38cf80(t2, (void *)((g_8c3071b4 + 0x14f)));
        } else {
            t3 = pack_ids_8c05a09c(0, 0);
            debug_print_at_8c38cf80(t3, (void *)((g_8c3071b4 + 0x15d)));
        }
        v5 = (int)(1.0f <= ((ObjectData *)o)->f374);
        if (v5 != 0) {
            t4 = pack_ids_8c05a09c(0, 1);
            debug_print_at_8c38cf80(t4, (void *)((g_8c3071b4 + 0x16c)));
        } else {
            t5 = pack_ids_8c05a09c(0, 1);
            debug_print_at_8c38cf80(t5, (void *)((g_8c3071b4 + 0x175)));
        }
    }
    v11 = (int)(1.0f <= ((ObjectData *)o)->f374);
    t6 = o->v11(400.0f, 15.0f);
    if (t6 == 0) {
        return;
    }
    call_8c3827d8((Arg0_28 *)(((ObjectData *)o)->f28));
    operation_8c1086fc();
    if (v11 != 0) {
        v12 = (int)((ObjectData *)o)->f28->f00;
        v16 = (int)0;
        goto L_8c0d796e;
        v13 = (int)0;
        do {
            *(int *)((char *)frame.f0c + (v13 << 2)) = (int)(*(int *)((char *)((char *)v12 + 0x2c) + (v13 * 0xc)));
            v16 = (int)(v13 + 1);
L_8c0d796e:;
            v13 = (int)v16;
        } while (3 > v16);
        v17 = (int)0;
        while (3 > v17) {
            *(int *)((char *)((char *)v12 + 0x2c) + (v17 * 0xc)) = (int)(*(int *)((char *)((char *)v12 + 0x8) + (v17 * 0xc)));
            v17 = (int)(v17 + 1);
        }
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    njScale_8c37e2e4(0, 1.0f, 1.0f, 1.0f);
    call_8c3ab76a((void *)((void *)0x8c2e8988));
    v22 = (int)0;
    goto L_8c0d79f2;
    v20 = (int)0;
    do {
        (*(S_g8c46fdc8 **)((char *)0x8c46fdc8 + (v20 << 2)))->f00 = -0x4f5000;
        v22 = (int)(v20 + 1);
L_8c0d79f2:;
        v20 = (int)v22;
    } while (3 > v22);
    if (((ObjectData *)o)->f30a != 0) {
    } else {
        v25 = (int)((ObjectData *)o)->f378;
        if (!(v25 >= 0)) {
            v25 = 0;
        } else if (v25 >= 0xb) {
            v25 = 0xa;
        }
        v35 = ((ObjectData *)o)->f37c;
        v27 = (S_vv27 *)*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (*(int *)((char *)((char *)((ObjectData *)o)->f110 + 0x4) + (v25 << 4)) << 3));
        if (0.0f > v35) {
            v35 = 0.0f;
        } else {
            v23 = v27->f04 + -1;
            if (v35 > (float)(unsigned int)v23) {
                v35 = (float)(unsigned int)v23;
            }
        }
        draw_tree_a702((void *)(((ObjectData *)o)->f38), (void *)v27, v35);
        ((ObjectData *)o)->f130 = (S_vv27 *)v27;
        ((ObjectData *)o)->ff8 = v35;
        (&frame)->f00 = 0.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        set_stream_mode_8c3ab8f8((void *)(((ObjectData *)o)->f130), ((ObjectData *)o)->ff8);
        v40 = (S_vv40 *)((ObjectData *)o)->f38;
        call_8c3aba08(0, v40, 0);
        call_8c3aba08(0, (S_vv40 *)(v40->f2c), 0);
        call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrixEx_8c38ad10();
        v41 = (float)(&frame)->f04;
        t7 = pack_ids_8c05a09c(0, 4);
        call_8c38cd98(t7, 5, v41);
        goto L_8c0d7b48;
    }
    g_8c575570 &= -0x401;
    call_8c3aa716((void *)(((ObjectData *)o)->f38));
L_8c0d7b48:;
    njPopMatrixEx_8c38ad10();
    if (v11 != 0) {
        v12 = (int)((ObjectData *)o)->f28->f00;
        v48 = 0;
        while (3 > v48) {
            *(int *)((char *)((char *)v12 + 0x2c) + (v48 * 0xc)) = (int)(*(int *)((char *)frame.f0c + (v48 << 2)));
            v48 = v48 + 1;
        }
    }
    reset_state_8c391cc4();
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c072918
 * function: operation_8c072918
 * language: c++
 * reference size: 1816 bytes
 * compiled size: 1816 bytes (+0.0%)
 * differing lines: 250 of 658 reference instruction lines
 * differing bytes: 447
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c2fd340 S_L8c2fd340;
typedef struct S_c8c198d98 S_c8c198d98;
typedef struct Frame Frame;
typedef struct S_frame_c S_frame_c;
typedef struct S_g8c4182cc S_g8c4182cc;
typedef struct S_g8c468928 S_g8c468928;
typedef struct S_g8c468928_42c S_g8c468928_42c;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_e0 S_g8c46ee80_e0;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_6a8 Arg0_6a8;
typedef struct S_vv32 S_vv32;
typedef struct S_x80352 S_x80352;
typedef struct S_x81360 S_x81360;
class Object;
class Arg0_s704;
typedef struct Block_frame_28 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_28;
typedef struct Block_frame_1c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_1c;
typedef struct Block_L8c2fd340_0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
} Block_L8c2fd340_0;
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
    virtual void v11(float, float);
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    int f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x29e];
    short f30a;
    char unknown30c[0xd0];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    Vector3 f408;
    Vector3 f414;
    Vector3 f420;
    Vector3 f42c;
    Vector3 f438;
    Vector3 f444;
    char unknown450[0x1ac];
    float f5fc;
    char unknown600[0xa8];
    Arg0_6a8 *f6a8;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    Block_frame_1c f1c;
    Block_frame_28 f28;
    Block16 f34;
};
struct S_g8c468928 {
    char unknown0[0x42c];
    S_g8c468928_42c *f42c;
};
struct S_g8c468928_42c {
    char unknown0[0x18];
    int f18;
};
struct S_L8c2fd340 {
    Block_L8c2fd340_0 f00;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
    char unknown9c[0x44];
    S_g8c46ee80_e0 *fe0;
};
struct S_g8c46ee80_e0 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_c8c198d98 {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
struct S_vv32 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x80352 {
    float f00;
};
struct S_x81360 {
    float f00;
};
class Arg0_s704 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8();
};
typedef struct Arg0_s704Data {

} Arg0_s704Data;
extern S_g8c4182cc *g_8c4182cc;
extern S_g8c468928 *g_8c468928;
extern int g_8c46892c;
extern int g_8c468964;
extern int g_8c468968;
extern int g_8c46896c;
extern int g_8c468970;
extern int g_8c468978;
extern Vector3 g_8c468998;
extern Vector3 g_8c4689a4;
extern float g_8c4689b0;
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f560;
extern int g_8c575570;
extern S_L8c2fd340 g_8c2fd340;
extern "C" char g_8c418280[];
extern "C" int operation_8c03d338(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void call_8c38c0f0(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" int operation_8c0727b0(int, void *, float);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" S_c8c198d98 *operation_8c198d98(void *, int);
extern "C" void clear_depth_mode(void *);
extern "C" void set_depth_mode(void *);
extern "C" void update_context_blend(void *);
extern "C" int depth_amount_negative(void *);
extern "C" void call_8c3a9cec(float, float);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c1086fc(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c0149c8(void *);
extern "C" void call_8c38c0e6(int, int);
extern "C" void visit_hierarchy_10(void *);
extern "C" void operation_8c072830();
extern "C" void operation_8c072918(Object *o)
{
    Frame frame;
    char *v1;
    short v86;
    int v3;
    int v10;
    int v21;
    int v12;
    S_vv32 *v32;
    int v31;
    int v36;
    int v35;
    int v30;
    int v33;
    int v46;
    int v48;
    int v45;
    int v67;
    char *v82;
    int t1;
    int t2;
    float t3;
    int t4;
    float t5;
    float t6;
    int t7;
    int t8;
    S_c8c198d98 *t9;
    int t10;
    int t11;
    S_c8c198d98 *t12;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v111();
        return;
    }
    g_8c468964 = (int)(((char *)o + 0x408));
    g_8c46892c = 0;
    g_8c468968 = 0;
    g_8c46896c = (int)(((char *)o + 0x450));
    g_8c468970 = (int)(((ObjectData *)o)->f3dc);
    o->v11(1000.0f, 1000.0f);
    t2 = ((Arg0_s704 *)((char *)o + 0x704))->v8();
    if (t2 == 0) {
    } else {
        if (!(-5.0f > ((ObjectData *)o)->f5fc) && ((ObjectData *)o)->f30a != 0x16) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njTranslate_8c3829bc(0, 0.0f, 2.0f, 0.0f);
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            njScale_8c37e2e4(0, 2.0f, 0.001f, 2.0f);
            njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
            njRotateZ_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
            {
                Block16 *p_ = (Block16 *)&(&g_8c2fd340)->f00;
                *(Block16 *)&(&frame)->f34 = *p_;
            }
            v1 = (char *)((ObjectData *)o)->f38;
            ((ObjectData *)o)->f38 = (int)(g_8c468928->f42c->f18);
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            call_8c38c0f0((void *)(&(&frame)->f34));
            operation_8c01cc90((void *)o);
            g_8c575570 = (int)(g_8c46f560);
            ((ObjectData *)o)->f38 = (int)v1;
            njPopMatrixEx_8c38ad10();
            v3 = (int)(&g_8c2fd340)->f00.f08;
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        operation_8c05baa8();
        g_8c46f560 = (int)(g_8c575570);
        v86 = (short)((ObjectData *)o)->f30a;
        if (v86 == 0x16) {
            ((Arg0_s704 *)((char *)o + 0x704))->v6();
            v67 = (int)v3;
        } else {
            if (g_8c46ee80 == 0) {
            } else {
                if (v86 == 0x1d) {
                } else {
                    if (v86 == 0x16) {
                    } else {
                        if (v86 == 0x15) {
                        } else {
                            switch (((ObjectData *)o)->f404) {
                            case 0:
                                if (g_8c46ee80->fe0 == 0) {
                                    v12 = (int)0;
                                } else {
                                    *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&g_8c46ee80->f90;
                                    (&frame)->f28.f04 = 0.0f;
                                    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&g_8c46ee80->fe0->f3c;
                                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f1c), (void *)(&(&frame)->f28));
                                    (&frame)->f1c.f04 = 0.0f;
                                    t3 = normalize_xz_checked((void *)(&(&frame)->f1c));
                                    *(Vector3 *)&g_8c468998 = *(Vector3 *)&(&frame)->f28;
                                    *(Vector3 *)&g_8c4689a4 = *(Vector3 *)&(&frame)->f1c;
                                    (&frame)->f0c = (int)(((char *)o + 0x474));
                                    g_8c4689b0 = t3;
                                    (&frame)->f10 = (int)(((char *)o + 0x480));
                                    (&frame)->f14 = (int)(((char *)o + 0x48c));
                                    (&frame)->f18 = (int)(((char *)o + 0x498));
                                    v21 = (int)0;
                                    goto L_8c072c1e;
                                    v10 = (int)0;
                                    do {
                                        t4 = operation_8c0727b0((int)o, (void *)(*(S_frame_c **)((char *)&(&frame)->f0c + (v10 << 2))), 12.0f);
                                        if (t4 != 0) {
                                            v12 = (int)1;
                                            goto L_8c072c24;
                                        }
                                        v21 = (int)(v10 + 1);
L_8c072c1e:;
                                        v10 = (int)v21;
                                    } while (4 > v21);
                                    v12 = (int)0;
L_8c072c24:;
                                    switch (((ObjectData *)o)->f30a) {
                                    case 9:
                                        if (v12 == 0) {
                                            t5 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                                            (&frame)->f00 = ((ObjectData *)o)->f3c - t5 * 25.0f;
                                            (&frame)->f04 = 0.0f;
                                            t6 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                                            (&frame)->f08 = ((ObjectData *)o)->f44 - t6 * 25.0f;
                                            t7 = operation_8c0727b0((int)o, (void *)(&frame), 20.0f);
                                            v12 = (int)t7;
                                        }
                                        if (v12 == 0) {
                                            t12 = operation_8c198d98((void *)(((ObjectData *)o)->f6a8), 1);
                                            v30 = (int)t12->fe0;
                                            v35 = (int)t12;
                                            v36 = (int)0;
                                            goto L_8c072cf6;
                                            v31 = (int)0;
                                            v32 = (S_vv32 *)t12;
                                            do {
                                                t8 = operation_8c0727b0((int)o, (void *)(v32->fdc + v31 * 0x2c + 0x1c), ((S_x80352 *)(v32->fdc + 0xc + v31 * 0x2c))->f00);
                                                if (t8 != 0) {
                                                    v33 = (int)1;
                                                    goto L_8c072cfc;
                                                }
                                                v35 = (int)v32;
                                                v36 = (int)(v31 + 1);
L_8c072cf6:;
                                                v31 = (int)v36;
                                                v32 = (S_vv32 *)v35;
                                            } while (v30 > v36);
                                            v12 = (int)0;
                                        }
                                        v33 = (int)v12;
L_8c072cfc:;
                                        if (v33 == 0) {
                                            t9 = operation_8c198d98((void *)(((ObjectData *)o)->f6a8), 2);
                                            v45 = (int)t9->fe0;
                                            v48 = (int)0;
                                            goto L_8c072d52;
                                            v46 = (int)0;
                                            do {
                                                t10 = operation_8c0727b0((int)o, (void *)(t9->fdc + v46 * 0x2c + 0x1c), ((S_x81360 *)(t9->fdc + 0xc + v46 * 0x2c))->f00);
                                                if (t10 != 0) {
                                                    v67 = (int)1;
                                                    goto L_8c072d58;
                                                }
                                                v48 = (int)(v46 + 1);
L_8c072d52:;
                                                v46 = (int)v48;
                                            } while (v45 > v48);
                                            v33 = (int)0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            v67 = (int)0;
L_8c072d58:;
            if (v67 != 0) {
                clear_depth_mode((void *)(((char *)o + 0x704)));
            } else {
                set_depth_mode((void *)(((char *)o + 0x704)));
            }
            update_context_blend((void *)(((char *)o + 0x704)));
            t11 = depth_amount_negative((void *)(((char *)o + 0x704)));
            if (t11 != 0) {
                ((Arg0_s704 *)((char *)o + 0x704))->v6();
            }
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f5fc, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        njRotateZ_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
        njScale_8c37e2e4(0, 2.0f, 2.0f, 2.0f);
        call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * 0.5f, *(float *)(g_8c418280 + 0x20) * 0.5f);
        set_transform_node_callback(operation_8c072830);
        operation_8c1086fc();
        operation_8c01cc90((void *)o);
        reset_state_8c391cc4();
        set_transform_node_callback((void *)0);
        operation_8c0149c8(g_8c4182cc);
        njPopMatrixEx_8c38ad10();
        call_8c38c0e6(0xff00, 0);
        g_8c575570 = (int)(g_8c46f560);
        goto L_8c072f4a;
    }
    v82 = (char *)((ObjectData *)o)->f38;
    ((ObjectData *)o)->f38 = (int)(g_8c468978);
    set_transform_node_callback(operation_8c072830);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f5fc, 0.0f);
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
    njRotateZ_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
    njScale_8c37e2e4(0, 2.0f, 2.0f, 2.0f);
    operation_8c01cc90((void *)o);
    njPopMatrixEx_8c38ad10();
    set_transform_node_callback((void *)0);
    ((ObjectData *)o)->f38 = (int)v82;
    o->v11(1000.0f, 1000.0f);
    v67 = (int)v82;
L_8c072f4a:;
    *(Vector3 *)&((ObjectData *)o)->f42c = *(Vector3 *)&((ObjectData *)o)->f408;
    *(Vector3 *)&((ObjectData *)o)->f438 = *(Vector3 *)&((ObjectData *)o)->f414;
    vector_sub_in_place_8c37f6f0((void *)(((char *)o + 0x438)), (void *)(((char *)o + 0x42c)));
    *(Vector3 *)&((ObjectData *)o)->f444 = *(Vector3 *)&((ObjectData *)o)->f420;
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x400;
    visit_hierarchy_10((void *)(((char *)o + 0x3e0)));
    g_8c575570 = (int)(g_8c46f560);
}

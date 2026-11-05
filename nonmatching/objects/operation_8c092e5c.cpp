/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c092e5c
 * function: operation_8c092e5c
 * language: c++
 * reference size: 3008 bytes
 * compiled size: 3004 bytes (-0.1%)
 * differing lines: 338 of 1138 reference instruction lines
 * differing bytes: 2069
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct Frame Frame;
typedef struct Arg0_424 Arg0_424;
typedef struct Arg0_484 Arg0_484;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
class Object;
class Arg0_3ac;
class Arg0_3dc;
typedef struct Block_p0_4c0 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_p0_4c0;
typedef struct Block_frame_10 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_10;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_1c {
    float f00;
    float f04;
    float f08;
} Block_frame_1c;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
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
    virtual void v11();
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
    virtual void v112();
    virtual int v113();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    Arg0_3dc *f3dc;
    char unknown3e0[0x4];
    int f3e4;
    char unknown3e8[0x20];
    float f408;
    char unknown40c[0x4];
    float f410;
    float f414;
    int f418;
    char unknown41c[0x4];
    int f420;
    Arg0_424 *f424;
    char unknown428[0x44];
    Vector3 f46c;
    char unknown478[0xc];
    Arg0_484 *f484;
    char unknown488[0x38];
    Block_p0_4c0 f4c0;
    int f4d0;
    char unknown4d4[0x10];
    unsigned short f4e4;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    float f00;
};
struct S_vv5 {
    float f00;
};
struct Frame {
    float f00;
    Block_frame_4 f04;
    Block_frame_10 f10;
    Block_frame_1c f1c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_484 {
    float f00;
};
class Arg0_3ac {
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
    virtual void v11();
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
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
    virtual void v81(int);
};
typedef struct Arg0_3acData {
    char unknown0[0x20];
    short f20;
} Arg0_3acData;
class Arg0_3dc {
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
    virtual void v11();
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
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual int v121(void *);
};
typedef struct Arg0_3dcData {

} Arg0_3dcData;
extern Block16 g_8c284fc8;
extern Block16 g_8c284fd8;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" int call_8c05c2dc(Object *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int call_8c090e60(Object *, Frame *, float);
extern "C" void operation_8c090d88(void *, float);
extern "C" float signed_inv_sqrt_8c37f6d8(float);
extern "C" void play_se_8c05fbf8(int, void *, int, int, float, float);
extern "C" void clamp_and_dispatch_contact(void *, float, float, float);
extern "C" void append_position_ring(void *, void *, int, float);
extern "C" void call_8c05c750(Object *, int, float);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void create_effect_7cc0(void *, int, int, int);
extern "C" int operation_8c05b228(short);
extern "C" int operation_8c05b32c(void *);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c092e5c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int v8;
    float v58;
    float v174;
    float v59;
    float v62;
    float v63;
    float v71;
    float v72;
    int v81;
    int v83;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    float t10;
    int t11;
    float t12;
    int t13;
    int t14;
    int t15;
    int t16;
    float t17;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    v2 = (S_vv2 *)((char *)o + 0x490);
    v3 = (S_vv3 *)((char *)o + 0x494);
    v4 = (S_vv4 *)((char *)o + 0x4a0);
    v5 = (S_vv5 *)((char *)o + 0x4a4);
    switch (a1) {
    case 4:
        if (((ObjectData *)o)->f418 == 4) {
            ((ObjectData *)o)->ff0 = 2;
            ((ObjectData *)o)->f418 = 5;
        }
        operation_8c059ef8((void *)o, 7);
        *(int *)((char *)o + 0x3e4) &= -0x400001;
        o->v102();
        ((ObjectData *)o)->f3e4 &= -0x80001;
        v1->f00 = 0;
        v2->f00 = 0x28;
        v3->f00 = 0;
        v4->f00 = 0.0f;
        v5->f00 = 0.0f;
        return;
    case 3:
        t1 = o->v113();
        if (t1 != 0) {
            return;
        }
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 0xe);
            v8 = (int)1;
        } else {
            v8 = (int)0;
        }
        if (v8 != 0) {
            return;
        }
        if (v1->f00 != 4) {
            return;
        }
        operation_8c059ea4((void *)o, 8);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 == 0) {
            t2 = call_8c05c0dc(o, 200.0f);
            if (t2 == 0) {
                return;
            }
        } else {
            t3 = call_8c05c2dc(o);
            if (t3 == 0) {
                return;
            }
        }
        switch (v1->f00) {
        case 0:
            set_fields_wrapper_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            t4 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            t5 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t4 * 65536.0f / 6.28318405f)), 0x400);
            ((ObjectData *)o)->f64 = (int)t5;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            v2->f00 += 1;
            if (!(v2->f00 > 0x28)) {
            } else {
                v2->f00 = 0;
                v1->f00 = 1;
                if (((((ObjectData *)o)->f3e4 & 0x40000)) == 0) {
                } else {
                    if (!(40.0f > ((ObjectData *)o)->f3c8)) {
                        goto L_8c093250;
                    }
                    v1->f00 = 2;
                    *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&g_8c284fd8;
                    if ((((ObjectData *)o)->f4c0.f08 * 255.0f) > 2147483648.0f) {
                    }
                    if ((((ObjectData *)o)->f4c0.f0c * 255.0f) > 2147483648.0f) {
                    }
                    ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
                    goto L_8c093250;
                }
                if (100.0f > ((ObjectData *)o)->f3c8) {
                    t6 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f4e4));
                    ((ObjectData *)o)->f3dc = (Arg0_3dc *)(int)t6;
                    t7 = ((ObjectData *)o)->f3dc->v121(((ObjectData *)o)->f3ac);
                    if (t7 != 0) {
                        ((ObjectData *)o)->f3e4 |= 0x40000;
                    } else {
                        t8 = call_8c090e60(o, (Frame *)((&frame)), 10000.0f);
                        if (t8 != 0) {
                            if (!(100.0f > (&frame)->f00)) {
                                goto L_8c093250;
                            }
                            ((ObjectData *)o)->f3e4 |= 0x40000;
                        } else {
                            v1->f00 = 4;
                        }
                    }
                }
            }
L_8c093250:;
            operation_8c090d88((void *)o, ((ObjectData *)o)->f3c.f04 + ((ObjectData *)o)->f410);
            *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f10.f04 = ((ObjectData *)o)->f414;
            o->v107();
            break;
        case 1:
            if (v2->f00 == 0) {
                set_fields_wrapper_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
                v58 = (float)1800.0f;
                t9 = signed_inv_sqrt_8c37f6d8(v58);
                v174 = (float)(t9 * 30.0f);
                if (v3->f00 == 1) {
                    v3->f00 = 0;
                    v59 = (float)(v174 * -1.0f);
                    v62 = (float)v59;
                } else {
                    v3->f00 = 1;
                    v62 = (float)v174;
                }
                v63 = (float)(((ObjectData *)o)->f3c4 * v62);
                ((ObjectData *)o)->f3bc = ((ObjectData *)o)->f3bc * v174 + v63;
                ((ObjectData *)o)->f3c4 = ((ObjectData *)o)->f3c4 * v174 - ((ObjectData *)o)->f3bc * v62;
                v4->f00 = v58 * t9 * 0.25f;
                v5->f00 = (((ObjectData *)o)->f408 - ((ObjectData *)o)->f410) * 0.25f;
                play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x324)), 0, 0, v63, v62);
            }
            ((ObjectData *)o)->fdc->f18 |= 0x50;
            v2->f00 += 1;
            if (v2->f00 >= 4) {
                v2->f00 = 0;
                v1->f00 = 0;
                ((ObjectData *)o)->fdc->f18 &= -0x51;
            }
            ((ObjectData *)o)->f414 += v5->f00;
            clamp_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, v4->f00);
            append_position_ring((void *)(((ObjectData *)o)->f424), (void *)(((char *)o + 0x430)), (int)(((ObjectData *)o)->f4d0), 1.2f);
            break;
        case 2:
            set_fields_wrapper_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            t10 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            t11 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t10 * 65536.0f / 6.28318405f)), 0x400);
            ((ObjectData *)o)->f64 = (int)t11;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            v71 = (float)(((ObjectData *)o)->f3c.f04 + ((ObjectData *)o)->f408);
            v72 = (float)(v71 - ((ObjectData *)o)->f414);
            *(int *)((char *)o + 0x3e4) &= -0x80001;
            if (!(0.5f > v72)) {
                ((ObjectData *)o)->f414 += 0.5f;
            } else {
                if (!(v72 > -0.5f)) {
                    ((ObjectData *)o)->f414 -= 0.5f;
                } else {
                    ((ObjectData *)o)->f414 = v71;
                    ((ObjectData *)o)->f3e4 |= 0x80000;
                }
            }
            if (18.0f > ((ObjectData *)o)->f3c8) {
                v81 = (int)(20.0f > ((ObjectData *)o)->f410);
                if (v81 == 0) {
                    goto L_8c0938aa;
                }
                v2->f00 = 0;
                v1->f00 = 3;
                goto L_8c0938aa;
            }
            if (((ObjectData *)o)->f3c8 > 40.0f) {
                v1->f00 = 1;
            }
            call_8c05c750(o, 0x200, ((ObjectData *)o)->f484->f00);
            break;
        case 3:
            set_fields_wrapper_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            t12 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            t13 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t12 * 65536.0f / 6.28318405f)), 0x400);
            ((ObjectData *)o)->f64 = (int)t13;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            v2->f00 += 1;
            if (v2->f00 == 0x14) {
                *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&((ObjectData *)o)->f46c;
                call_8c3bdf60((void *)(&(&frame)->f1c), (void *)(((char *)o + 0x478)));
                (&frame)->f1c.f00 *= 0.5f;
                (&frame)->f1c.f04 *= 0.5f;
                (&frame)->f1c.f08 *= 0.5f;
                create_effect_7cc0((void *)(&(&frame)->f1c), 0x113, 0, 0x14);
            } else {
                if (v2->f00 == 0x19) {
                    ((ObjectData *)o)->f420 += 1;
                    v83 = (int)(20.0f > ((ObjectData *)o)->f410);
                    if (v83 != 0) {
                        t14 = ((ObjectData *)o)->f3ac->v22(o, 1.0f);
                        if (t14 != 0) {
                            ((ObjectData *)o)->f3ac->v24(o, 1.0f);
                            ((ObjectData *)o)->f3ac->v27(o, 3.0f);
                            t15 = operation_8c05b228(((Arg0_3acData *)((ObjectData *)o)->f3ac)->f20);
                            if (t15 != 0) {
                                t16 = operation_8c05b32c((void *)(((ObjectData *)o)->f3ac));
                                if (t16 != 0) {
                                    t17 = object_random_fraction((void *)o);
                                    if (0.05f > t17) {
                                        ((ObjectData *)o)->f3ac->v58();
                                        ((ObjectData *)o)->f3ac->v81(0);
                                    }
                                }
                            }
                        }
                    }
                    ((void (*)(int, void *, int, int))play_se_8c05fbf8)(0x30019, ((char *)o + 0x324), 0, 0);
                } else {
                    if (!(v2->f00 > 0x32)) {
                    } else {
                        if (((ObjectData *)o)->f420 >= 3) {
                            v1->f00 = 4;
                        } else {
                            v2->f00 = 0;
                            if (13.0f > ((ObjectData *)o)->f3c8) {
                                v1->f00 = 3;
                            } else {
                                if (40.0f > ((ObjectData *)o)->f3c8) {
                                    v1->f00 = 2;
                                } else {
                                    v1->f00 = 1;
                                    *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&g_8c284fc8;
                                    if ((((ObjectData *)o)->f4c0.f08 * 255.0f) > 2147483648.0f) {
                                    }
                                    if ((((ObjectData *)o)->f4c0.f0c * 255.0f) > 2147483648.0f) {
                                    }
                                    ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
                                    if (((ObjectData *)o)->f3c8 > 100.0f) {
                                        ((ObjectData *)o)->f3e4 &= -0x40001;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            operation_8c090d88((void *)o, ((ObjectData *)o)->f408 + ((ObjectData *)o)->f3c.f04);
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f04.f04 = ((ObjectData *)o)->f414;
            o->v107();
        case 4:
            break;
        }
L_8c0938aa:;
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f3e4 &= -0x40001;
        *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&g_8c284fc8;
        ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
        ((ObjectData *)o)->fdc->f18 &= -0x51;
    }
}

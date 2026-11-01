/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c092490
 * function: operation_8c092490
 * language: c++
 * reference size: 2508 bytes
 * compiled size: 2508 bytes (+0.0%)
 * differing lines: 144 of 967 reference instruction lines
 * differing bytes: 843
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_484 Arg0_484;
typedef struct S_vv1 S_vv1;
typedef struct S_vv103 S_vv103;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
typedef struct S_vv63 S_vv63;
typedef struct S_vv64 S_vv64;
typedef struct S_vv99 S_vv99;
class Object;
class Arg0_3dc;
typedef struct Block_p0_4c0 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_p0_4c0;
typedef struct Block_vv3_0 {
    float f00;
    float f04;
    float f08;
} Block_vv3_0;
typedef struct Block_frame_4 {
    float f00;
    float f04;
    float f08;
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
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    Vector3 f3b0;
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    Arg0_3dc *f3dc;
    char unknown3e0[0x4];
    int f3e4;
    char unknown3e8[0x1c];
    float f404;
    char unknown408[0x10];
    int f418;
    char unknown41c[0x4];
    int f420;
    char unknown424[0x60];
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
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv5 {
    S_vv5_0 *f00;
};
struct Frame {
    float f00;
    Block_frame_4 f04;
};
struct S_vv3 {
    Block_vv3_0 f00;
};
struct Arg0_484 {
    char unknown0[0x18];
    int f18;
    int f1c;
    int f20;
    int f24;
};
struct S_vv63 {
    char unknown0[0x4];
    short f04;
};
struct S_vv64 {
    char unknown0[0x4];
    short f04;
};
struct S_vv99 {
    char unknown0[0x4];
    short f04;
};
struct S_vv103 {
    char unknown0[0x4];
    short f04;
};
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
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" int call_8c05c2dc(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int call_8c090e60(Object *, Frame *, float);
extern "C" void call_8c05c69c(Object *, int, float);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEneMe1Canadin_EffLine_ctor_8c0cb4d0(void *, int, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, S_vv3 *);
extern "C" float normalize_xz_checked(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void TObjEneMe1Canadin_EffDischarge_ctor_8c0cb6a0(int, Object *, void *, S_vv3 *);
extern "C" void operation_8c090d88(void *, float);
extern "C" void operation_8c092490(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v54;
    int v18;
    S_vv4 *v4;
    S_vv5 *v5;
    int v62;
    S_vv63 *v63;
    S_vv64 *v64;
    int v22;
    int v65;
    S_vv99 *v99;
    S_vv103 *v103;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    float t10;
    int t11;
    float t12;
    int t13;
    int t14;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    v2 = (S_vv2 *)((char *)o + 0x490);
    v3 = (S_vv3 *)((char *)o + 0x4ac);
    v4 = (S_vv4 *)((char *)o + 0x4b8);
    v5 = (S_vv5 *)((char *)o + 0x4bc);
    switch (a1) {
    case 4:
        operation_8c059ef8((void *)o, 6);
        *(int *)((char *)o + 0x3e4) |= 0x10000;
        ((ObjectData *)o)->f3e4 &= -0x400001;
        o->v102();
        *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&*(Block16 *)0x8c284fc8;
        ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
        v1->f00 = 1;
        v2->f00 = 0;
        v4->f00 = (S_vv4_0 *)0;
        v5->f00 = (S_vv5_0 *)0;
        return;
    case 3:
        t1 = o->v113();
        if (t1 != 0) {
            return;
        }
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 0xe);
            v18 = (int)1;
        } else {
            v18 = (int)0;
        }
        if (v18 != 0) {
            return;
        }
        if (v1->f00 != 6) {
            return;
        }
        if (((((ObjectData *)o)->f3e4 & 0x100000)) != 0) {
            operation_8c059ea4((void *)o, 8);
            return;
        }
        operation_8c059ea4((void *)o, 9);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 == 1) {
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
        operation_8c05c184((void *)o);
        switch (v1->f00) {
        case 1:
            aim_direction_8c05bdd4((void *)o);
            v22 = (int)0;
            if (70.0f > ((ObjectData *)o)->f3c8) {
                v22 = (int)1;
                t4 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f4e4));
                ((ObjectData *)o)->f3dc = (Arg0_3dc *)(int)t4;
                t5 = ((ObjectData *)o)->f3dc->v121(((ObjectData *)o)->f3ac);
                if (t5 == 0) {
                    t6 = call_8c090e60(o, (Frame *)((&frame)), 22500.0f);
                    if (t6 != 0) {
                        if ((&frame)->f00 > 70.0f) {
                            v22 = (int)0;
                        }
                    }
                }
            }
            if (v22 != 0) {
                v1->f00 = 2;
                ((ObjectData *)o)->f3e4 |= 0x40000;
                if (((ObjectData *)o)->f418 != 4) {
                    goto L_8c0927fa;
                }
                ((ObjectData *)o)->ff0 = 2;
                ((ObjectData *)o)->f418 = 5;
            } else {
                if (((ObjectData *)o)->f418 == 5) {
                    ((ObjectData *)o)->ff0 = 3;
                    ((ObjectData *)o)->f418 = 4;
                }
            }
L_8c0927fa:;
            call_8c05c69c(o, 0x200, 0.5f);
            v5 = (S_vv5 *)v22;
            break;
        case 2:
            aim_direction_8c05bdd4((void *)o);
            t7 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            t8 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t7 * 65536.0f / 6.28318405f)), 0x400);
            ((ObjectData *)o)->f64 = (int)t8;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            if (((ObjectData *)o)->ff0 != 1) {
                v54 = (int)v3;
                goto L_8c092d08;
            }
            v1->f00 = 3;
            *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&*(Block16 *)0x8c284fd8;
            ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
            *(Vector3 *)&v3->f00 = *(Vector3 *)&((ObjectData *)o)->f3b0;
            t9 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x4c);
            if (t9 != 0) {
                TObjEneMe1Canadin_EffLine_ctor_8c0cb4d0((void *)t9, (int)o, (int)(((char *)o + 0x430)), (int)v3);
            }
            v4->f00 = (S_vv4_0 *)(int)t9;
            play_se_8c05fbf8(0x2001b, (void *)(((char *)o + 0x324)), 0, 0);
            play_se_8c05fbf8(0x2001e, (void *)(((char *)o + 0x324)), 0, 0);
            v5 = (S_vv5 *)t9;
            break;
        case 3:
            aim_direction_8c05bdd4((void *)o);
            t10 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            t11 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t10 * 65536.0f / 6.28318405f)), 0x400);
            ((ObjectData *)o)->f64 = (int)t11;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((ObjectData *)o)->f3b0;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f04), v3);
            t12 = normalize_xz_checked((void *)(&(&frame)->f04));
            if (0.6f > t12) {
                *(Vector3 *)&v3->f00 = *(Vector3 *)&((ObjectData *)o)->f3b0;
                v54 = (int)v3;
            } else {
                v3->f00.f00 += (&frame)->f04.f00 * 0.6f;
                v3->f00.f04 += (&frame)->f04.f04 * 0.6f;
                v3->f00.f08 += (&frame)->f04.f08 * 0.6f;
                v54 = (int)((int)v3 + 8);
            }
            if (v5->f00 == 0) {
                t13 = create_effect_769c((void *)(((char *)o + 0x430)), 0xf7);
                v5->f00 = (S_vv5_0 *)(int)t13;
                if (v5->f00 == 0) {
                    goto L_8c092b1c;
                }
                set_effect_bit0((void *)(v5->f00));
            } else {
                call_8c0a7608((void *)(v5->f00), (void *)(((char *)o + 0x430)));
            }
L_8c092b1c:;
            v2->f00 += 1;
            v62 = (int)v2->f00;
            if (!(v62 > ((ObjectData *)o)->f484->f18)) {
                goto L_8c092d08;
            }
            v1->f00 = 4;
            v2->f00 = 0;
            v63 = (S_vv63 *)v4->f00;
            v63->f04 |= 1;
            v4->f00 = (S_vv4_0 *)0;
            v64 = (S_vv64 *)v5->f00;
            if (v64 == 0) {
                goto L_8c092d08;
            }
            v64->f04 |= 1;
            v5->f00 = (S_vv5_0 *)0;
            v3 = (S_vv3 *)v54;
            break;
        case 4:
            v2->f00 += 1;
            v65 = (int)v2->f00;
            if (!(v65 >= ((ObjectData *)o)->f484->f1c)) {
                v54 = (int)v3;
                goto L_8c092d08;
            }
            v1->f00 = 5;
            v2->f00 = 0;
            ((ObjectData *)o)->f3e4 &= -0x40001;
            *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&*(Block16 *)0x8c284fc8;
            ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
            ((ObjectData *)o)->f420 += 1;
            t14 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x6c);
            if (t14 != 0) {
                TObjEneMe1Canadin_EffDischarge_ctor_8c0cb6a0(t14, o, (void *)(((char *)o + 0x430)), v3);
            }
            play_se_8c05fbf8(0x20008, (void *)(((char *)o + 0x324)), 0, 0);
            break;
        case 5:
            v2->f00 += 1;
            if (v2->f00 > ((ObjectData *)o)->f484->f20) {
                v2->f00 = 0;
                if (((ObjectData *)o)->f420 >= ((ObjectData *)o)->f484->f24) {
                    v1->f00 = 6;
                } else {
                    v1->f00 = 1;
                }
            }
        }
        v54 = (int)v3;
L_8c092d08:;
        operation_8c090d88((void *)o, ((ObjectData *)o)->f40 + ((ObjectData *)o)->f404);
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f3e4 &= -0x40001;
        *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&*(Block16 *)0x8c284fc8;
        ((ObjectData *)o)->f4d0 = (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f00 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f04 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f08 * 255.0f) << 8 | (unsigned char)(unsigned int)(((ObjectData *)o)->f4c0.f0c * 255.0f);
        if (v4->f00 != 0) {
            v99 = (S_vv99 *)v4->f00;
            v99->f04 |= 1;
            v4->f00 = (S_vv4_0 *)0;
        }
        if (v5->f00 != 0) {
            v103 = (S_vv103 *)v5->f00;
            v103->f04 |= 1;
            v5->f00 = (S_vv5_0 *)0;
        }
    }
}

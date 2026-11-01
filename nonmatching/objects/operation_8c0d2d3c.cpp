/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d2d3c
 * function: operation_8c0d2d3c
 * language: c++
 * reference size: 1252 bytes
 * compiled size: 1260 bytes (+0.6%)
 * differing lines: 318 of 496 reference instruction lines
 * differing bytes: 1147
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_454 Arg0_454;
typedef struct S_vv1 S_vv1;
typedef struct S_vv115 S_vv115;
typedef struct S_vv116 S_vv116;
typedef struct S_vv117 S_vv117;
typedef struct S_vv118 S_vv118;
typedef struct S_vv119 S_vv119;
typedef struct S_vv2 S_vv2;
typedef struct S_vv41_410 S_vv41_410;
typedef struct S_vv41_414 S_vv41_414;
typedef struct S_vv41_42c S_vv41_42c;
typedef struct S_vv41_454 S_vv41_454;
typedef struct S_vv41_s418 S_vv41_s418;
typedef struct S_vv89 S_vv89;
typedef struct S_x52720 S_x52720;
typedef struct S_x57264_0 S_x57264_0;
typedef struct S_x57712_0 S_x57712_0;
class Object;
class Arg0_s418;
class S_vv14;
class S_vv41;
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
};
typedef struct ObjectData {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2ea];
    int f3dc;
    char unknown3e0[0x30];
    int f410;
    char unknown414[0x88];
    float f49c;
} ObjectData;
struct S_x52720 {
    char unknown0[0xc];
    int f0c;
    float f10;
    float f14;
};
struct S_vv2 {
    float f00;
};
struct S_vv1 {
    int f00;
};
class S_vv41 {
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
};
typedef struct S_vv41Data {
    char unknown0[0x64];
    int f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x314];
    S_vv41_410 *f410;
    S_vv41_414 *f414;
} S_vv41Data;
struct S_vv118 {
    int f00;
};
struct S_vv41_s418 {
    char unknown0[0x14];
    S_vv41_42c *f14;
};
struct S_vv41_42c {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    int f1c;
};
struct Frame {
    Vector3 f00;
};
struct S_vv89 {
    Vector3 f00;
};
struct S_vv41_454 {
    char unknown0[0x4];
    short f04;
};
struct S_vv116 {
    int f00;
};
struct S_vv117 {
    int f00;
};
struct S_vv115 {
    int f00;
};
struct S_vv119 {
    int f00;
};
struct Arg0_454 {
    char unknown0[0x4];
    short f04;
};
class S_vv14 {
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
    virtual int v105();
};
typedef struct S_vv14Data {

} S_vv14Data;
class Arg0_s418 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
extern "C" char g_8c306ec4[];
extern "C" char g_8c46fc9c[];
extern "C" void operation_8c059ef8(void *, int);
extern "C" int operation_8c05bbf8(void);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(int);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" void call_8c0a7608(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" void call_8c0f3e04(void *, void *, Frame *, void *);
extern "C" void operation_8c0d2d3c(Object *o, int a1)
{
    Frame frame;
    char *v114;
    int v56;
    S_vv1 *v1;
    int v3;
    int v5;
    S_vv14 *v14;
    S_vv2 *v2;
    S_vv2 *v3p;
    int v31;
    int v37;
    int v75;
    int v55;
    int v66;
    int v74;
    int v102;
    int v18;
    float v65;
    S_vv41 *v41;
    int v54;
    int v57;
    int v58;
    int v67;
    int v70;
    int v76;
    S_vv118 *v118;
    S_vv89 *v89;
    int v90;
    int v91;
    int v95;
    S_vv116 *v116;
    S_vv117 *v117;
    S_vv115 *v115;
    int v79;
    S_vv119 *v119;
    int v108;
    int v109;
    int v113;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (S_vv1 *)((char *)o + 0x488);
    v2 = (S_vv2 *)((char *)o + 0x498);
    v3p = (S_vv2 *)((char *)o + 0x49c);
    if (a1 == 0) {
        v37 = (int)o;
        v41 = (S_vv41 *)o;
    } else {
        if (a1 == 3) {
            v14 = (S_vv14 *)o;
            v18 = (int)o;
        } else {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c0d31b0;
                }
                return;
            }
            o->v102();
            {
                int *pf1 = (int *)((char *)o + 0x3dc);
                *pf1 = (unsigned int)*pf1 >> 2 << 2;
            }
            ((ObjectData *)o)->f3dc |= 4;
            operation_8c059ef8((void *)o, 5);
            v114 = (char *)((ObjectData *)o)->f410;
            ((ObjectData *)o)->ff0 = ((S_x52720 *)((int)(v114) * 0x60 + g_8c46fc9c))->f0c;
            v2->f00 = ((S_x52720 *)((int)(v114) * 0x60 + g_8c46fc9c))->f14;
            v3p->f00 = ((S_x52720 *)((int)(v114) * 0x60 + g_8c46fc9c))->f10;
            v1->f00 = 0;
            v5 = (int)0;
            goto L_8c0d2e14;
            v3 = (int)0;
            do {
                *(int *)((char *)((char *)o + 0x454) + (v3 << 2)) = 0;
                v5 = (int)(v3 + 1);
L_8c0d2e14:;
                v3 = (int)v5;
            } while (2 > v5);
            t1 = operation_8c05bbf8();
            if (t1 != 0) {
                *(float *)(g_8c306ec4 + 0x48) = 2.0f;
                *(float *)(g_8c306ec4 + 0x38) = 2.0f;
            } else {
                *(float *)(g_8c306ec4 + 0x48) = 0.8f;
                *(float *)(g_8c306ec4 + 0x38) = 0.8f;
            }
            play_se_8c05fbf8(0x30020, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x100);
            return;
        }
        if (v1->f00 != 3) {
            return;
        }
        t2 = v14->v105();
        if (t2 != 0) {
            operation_8c059ea4((void *)v18, 9);
            v31 = (int)1;
        } else {
            v31 = (int)0;
        }
        if (v31 != 0) {
            return;
        }
        operation_8c059ea4((void *)v18, 4);
        return;
    }
    operation_8c01c5f0(v37);
    if (v1->f00 != 0) {
        if (v1->f00 == 1) {
            goto L_8c0d30fc;
        }
        if (v1->f00 == 2) {
            goto L_8c0d3140;
        }
    } else {
        v54 = (int)1;
        v55 = (int)0;
        while (2 > v55) {
            v56 = (int)(v55 << 2);
            v58 = (int)v54;
            if (*(int *)((char *)((char *)v41 + 0x454) + (v56)) == 0) {
                t3 = create_effect_769c((void *)((int)v41 + 0x324), 0xdc);
                *(int *)((char *)((char *)v41 + 0x454) + (v56)) = (int)t3;
                if (*(int *)((char *)((char *)v41 + 0x454) + (v56)) != 0) {
                    set_effect_bit0((void *)(*(S_vv41_454 **)((char *)((char *)v41 + 0x454) + (v56))));
                    v58 = (int)v54;
                } else {
                    v57 = (int)0;
                    while (v55 > v57) {
                        set_effect_bit0((void *)(*(S_vv41_454 **)((char *)((char *)v41 + 0x454) + (v57 << 2))));
                        v57 = (int)(v57 + 1);
                    }
                    v58 = (int)0;
                    goto L_8c0d2f78;
                }
            }
            v55 = (int)(v55 + 1);
        }
L_8c0d2f78:;
        if (v58 != 0) {
            v65 = (float)((S_vv41Data *)v41)->ff8;
            if (v3p->f00 > v65 && !(v2->f00 > v65)) {
                v66 = (int)0x454;
                v70 = (int)0;
                goto L_8c0d2fb2;
                v67 = (int)0;
                do {
                    set_effect_bit0((void *)(*(S_x57264_0 **)((char *)((char *)((int)v41 + v66) + 0x0) + (v67 << 2))));
                    v70 = (int)(v67 + 1);
L_8c0d2fb2:;
                    v67 = (int)v70;
                } while (2 > v70);
                v58 = (int)v67;
                v55 = (int)v66;
                goto L_8c0d2ff4;
            }
            v74 = (int)0x43c;
            v75 = (int)0x454;
            v79 = (int)0;
            goto L_8c0d2fee;
            v76 = (int)0;
            do {
                call_8c0a7608((void *)(*(S_x57712_0 **)((char *)((char *)((int)v41 + v75) + 0x0) + (v76 << 2))), (int)((int)v41 + v76 * 0xc + v74));
                v79 = (int)(v76 + 1);
L_8c0d2fee:;
                v76 = (int)v79;
            } while (2 > v79);
            v58 = (int)v76;
            v55 = (int)v74;
        }
L_8c0d2ff4:;
        t4 = check_range_8c01cf68((void *)v41, v2->f00);
        if (t4 == 0) {
        } else {
            v118 = (S_vv118 *)(((int)(((S_vv41Data *)v41)->f410) << 2) + ((int)v41 + 0x434));
            v118->f00 |= 3;
            ((void (*)(void *))(((S_vv41_s418 *)((char *)v41 + 0x418))->f14->f14))((void *)((int)v41 + 0x418));
            v89 = (S_vv89 *)((char *)((int)(((S_vv41Data *)v41)->f410) * 0x60 + g_8c46fc9c) + 0x54);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v89->f00;
            rotate_scalar_pair((void *)(&frame), (void *)(((char *)(&frame) + 0x8)), (int)(((S_vv41Data *)v41)->f64));
            call_8c3bdf60((Frame *)((&frame)), (void *)((int)v41 + 0x3c));
            call_8c0f3e04((void *)(((S_vv41Data *)v41)->f414), (void *)(((S_vv41Data *)v41)->f410), (Frame *)((&frame)), (void *)((int)v41 + 0x3b0));
            v1->f00 = 1;
            v95 = (int)0;
            goto L_8c0d30cc;
            v90 = (int)0;
            do {
                v91 = (int)(v90 << 2);
                if (*(int *)((char *)((char *)v41 + 0x454) + (v91)) != 0) {
                    (*(S_vv41_454 **)((char *)((char *)v41 + 0x454) + (v91)))->f04 |= 1;
                    *(int *)((char *)((char *)v41 + 0x454) + (v91)) = 0;
                }
                v95 = (int)(v90 + 1);
L_8c0d30cc:;
                v90 = (int)v95;
            } while (2 > v95);
            play_se_8c05fbf8(0x30021, (void *)((int)v41 + 0x3c), 0, 0);
            update_last_effect(-0x100);
            goto L_8c0d3188;
L_8c0d30fc:;
            if (((*(int *)((char *)((char *)v41 + 0x434) + ((int)(((S_vv41Data *)v41)->f410) << 2)) & 2)) == 0) {
                v1->f00 = 2;
                v116 = (S_vv116 *)((int)v41 + 0x434 + ((int)(((S_vv41Data *)v41)->f410) << 2));
                v116->f00 |= 4;
                v117 = (S_vv117 *)((int)v41 + 0x434 + ((int)(((S_vv41Data *)v41)->f410) << 2));
                v117->f00 = (unsigned int)v117->f00 >> 1 << 1;
                goto L_8c0d3188;
L_8c0d3140:;
                t5 = ((int (*)(void *))(((S_vv41_s418 *)((char *)v41 + 0x418))->f14->f1c))((void *)((int)v41 + 0x418));
                if (t5 != 0) {
                    v115 = (S_vv115 *)(((int)(((S_vv41Data *)v41)->f410) << 2) + ((int)v41 + 0x434));
                    v115->f00 &= -5;
                    if (((S_vv41Data *)v41)->f410 == 0) {
                        ((S_vv41Data *)v41)->f410 = (S_vv41_410 *)1;
                    } else {
                        ((S_vv41Data *)v41)->f410 = (S_vv41_410 *)0;
                    }
                    v1->f00 = 3;
                }
            }
        }
        v102 = (int)v55;
    }
    v55 = (int)v102;
L_8c0d3188:;
    v41->v108();
    v41->v95();
    return;
L_8c0d31b0:;
    ((Arg0_s418 *)((char *)o + 0x418))->v2();
    v119 = (S_vv119 *)((char *)(int *)((char *)o + 0x434) + (((ObjectData *)o)->f410 << 2));
    v119->f00 &= -8;
    v113 = (int)0;
    goto L_8c0d3208;
    v108 = (int)0;
    do {
        v109 = (int)(v108 << 2);
        if (*(int *)((char *)((char *)o + 0x454) + (v109)) != 0) {
            (*(Arg0_454 **)((char *)((char *)o + 0x454) + (v109)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x454) + (v109)) = 0;
        }
        v113 = (int)(v108 + 1);
L_8c0d3208:;
        v108 = (int)v113;
    } while (2 > v113);
}

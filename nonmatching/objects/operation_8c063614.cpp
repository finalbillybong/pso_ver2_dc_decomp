/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c063614
 * function: operation_8c063614
 * language: c++
 * reference size: 1272 bytes
 * compiled size: 1252 bytes (-1.6%)
 * differing lines: 334 of 476 reference instruction lines
 * differing bytes: 1185
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_x72528 S_x72528;
typedef struct S_x82048 S_x82048;
class Object;
class Arg0_3ac;
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
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2b0];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x28];
    int f3f4;
    char unknown3f8[0x24];
    float f41c;
    float f420;
    int f424;
    float f428;
} ObjectData;
struct S_vv4 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_x72528 {
    int f00;
};
struct S_vv6 {
    int f00;
};
struct S_vv2 {
    float f00;
};
struct S_x82048 {
    float f00;
};
struct S_vv3 {
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
};
typedef struct Arg0_3acData {

} Arg0_3acData;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int call_8c0613a4(Object *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int operation_8c05c1f0(Object *);
extern "C" int operation_8c05bbf8(void);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c05b60c(int, void *);
extern "C" void operation_8c05b638(int, void *);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" void operation_8c063614(Object *o, int a1)
{
    S_vv5 *v5;
    S_vv4 *v4;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv6 *v6;
    S_vv1 *v1;
    float v33;
    float v34;
    float v35;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    int t10;
    v1 = (S_vv1 *)((char *)o + 0x448);
    v2 = (S_vv2 *)o;
    v2 = (S_vv2 *)((char *)v2 + 1104);
    v3 = (S_vv3 *)o;
    v3 = (S_vv3 *)((char *)v3 + 1108);
    v4 = (S_vv4 *)((char *)o + 0x438);
    v5 = (S_vv5 *)((char *)o + 0x43c);
    v6 = (S_vv6 *)o;
    v6 = (S_vv6 *)((char *)v6 + 1156);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0xc;
        operation_8c059ef8((void *)o, 0xd);
        o->v102();
        *(int *)((char *)o + 0x424) &= -3;
        ((ObjectData *)o)->f424 |= 4;
        v4->f00 = 0;
        v5->f00 = 0;
        t1 = call_8c0613a4(o);
        v1->f00 = (int)t1;
        ((S_x72528 *)(((char *)o + 0x44c)))->f00 = 0;
        if (((ObjectData *)o)->f3c8 > 40.0f) {
            ((ObjectData *)o)->f3c8 = 40.0f;
        }
        ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c = ((ObjectData *)o)->f3c8 / 13.333333f;
        v6->f00 = 0;
        ((ObjectData *)o)->f428 = 0.0f;
        v2->f00 = ((ObjectData *)o)->f40;
        ((S_x82048 *)(((char *)o + 0x458)))->f00 = 20.0f;
        v3->f00 = -0.088888891f;
        return;
    case 3:
        if (v4->f00 != 2) {
            return;
        }
        operation_8c059ea4((void *)o, 0xd);
        return;
    case 0:
        switch (v4->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                if (v6->f00 != 0) {
                    v4->f00 = 2;
                } else {
                    v4->f00 = 1;
                    v5->f00 = 0;
                }
            }
            t2 = check_range_8c01cf68((void *)o, 5.0f);
            if (t2 != 0) {
                create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
            }
            t3 = check_range_8c01cf68((void *)o, 6.0f);
            if (t3 != 0) {
                play_se_8c05fbf8(0x30020, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            t4 = check_range_8c01cf68((void *)o, 24.0f);
            if (t4 != 0) {
                play_se_8c05fbf8(0x30021, (void *)(((char *)o + 0x3c)), 0, 0);
                update_last_effect(-0x500);
            }
            t5 = check_range_8c01cf68((void *)o, 20.0f);
            if (t5 != 0) {
                v6->f00 = 0;
                t6 = operation_8c05c1f0(o);
                if (t6 != 0) {
                    t7 = ((ObjectData *)o)->f3ac->v22(o, 1.0f);
                    if (t7 != 0) {
                        ((ObjectData *)o)->f3ac->v24(o, 1.0f);
                        ((ObjectData *)o)->f3ac->v27(o, 7.0f);
                        v6->f00 = 1;
                        t8 = operation_8c05bbf8();
                        if (t8 != 0) {
                            t9 = object_random_fraction((void *)o);
                            if (!(t9 > 0.1f)) {
                                if (((ObjectData *)o)->f3f4 != 0) {
                                    operation_8c05b60c((int)o, (void *)(((ObjectData *)o)->f3ac));
                                } else {
                                    operation_8c05b638((int)o, (void *)(((ObjectData *)o)->f3ac));
                                }
                            }
                        }
                    }
                }
            }
            v33 = (float)((ObjectData *)o)->f420;
            v34 = (float)((ObjectData *)o)->f41c;
            if (v33 != v34) {
                if (v33 > v34) {
                    ((ObjectData *)o)->f420 = v33 - 0.1f;
                    if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                        goto L_8c06395a;
                    }
                    ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
                } else {
                    ((ObjectData *)o)->f420 = v33 + 0.1f;
                    v35 = (float)((ObjectData *)o)->f41c;
                    if (((ObjectData *)o)->f420 > v35) {
                        ((ObjectData *)o)->f420 = v35;
                    }
                }
            }
L_8c06395a:;
            t10 = angle_step((int)(((ObjectData *)o)->f64), (int)(v1->f00), 0x1000);
            ((ObjectData *)o)->f64 = (int)t10;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            operation_8c0610c8((void *)o, (int)(((ObjectData *)o)->f64));
            if (!(((ObjectData *)o)->ff8 > 30.0f)) {
                slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f420);
                ((ObjectData *)o)->f428 = (((ObjectData *)o)->ff8 - 15.0f) * (((ObjectData *)o)->ff8 - 15.0f) * v3->f00 + 20.0f + v2->f00 - ((ObjectData *)o)->f40;
                goto L_8c063aba;
            }
            if (v6->f00 == 0) {
                ((ObjectData *)o)->f420 *= 0.8f;
                slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f420);
            }
            ((ObjectData *)o)->f428 = 0.0f;
            break;
        case 1:
            operation_8c01c5f0(o);
            v5->f00 += 1;
            if (v5->f00 >= 0xa) {
                v4->f00 = 2;
            }
            operation_8c0610c8((void *)o, (int)(((ObjectData *)o)->f64));
            if (v6->f00 == 0) {
                ((ObjectData *)o)->f420 *= 0.8f;
                slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f420);
            }
        }
L_8c063aba:;
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f428 = 0.0f;
    }
}

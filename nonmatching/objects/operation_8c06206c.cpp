/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06206c
 * function: operation_8c06206c
 * language: c++
 * reference size: 1584 bytes
 * compiled size: 1584 bytes (+0.0%)
 * differing lines: 512 of 576 reference instruction lines
 * differing bytes: 626
 * provenance: generator draft (mode uctern)
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
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv16 S_vv16;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
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
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0xe];
    float f100;
    char unknown104[0x2a8];
    Arg0_3ac *f3ac;
    float f3b0;
    char unknown3b4[0x4];
    float f3b8;
    char unknown3bc[0xc];
    float f3c8;
    char unknown3cc[0x28];
    int f3f4;
    char unknown3f8[0x18];
    float f410;
    char unknown414[0x4];
    float f418;
    float f41c;
    float f420;
} ObjectData;
struct S_vv2 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv4 {
    float f00;
};
struct S_vv16 {
    int f00;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" float object_random_fraction(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" float scale_by_half_angle(int, float);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(int);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" float call_8c130334(float, float);
extern "C" void operation_8c0610c8(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int operation_8c05af28(void *, int);
extern "C" void call_8c061170(Object *);
extern "C" float operation_8c05b8e8(int, float, float);
extern "C" void call_8c05c580(Object *, int, float);
extern "C" void operation_8c06206c(Object *o, int a1)
{
    S_vv3 *v3;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv4 *v4;
    S_vv5 *v5;
    float v7;
    int v6;
    S_vv16 *v16;
    int v12;
    int v34;
    int v50;
    float v54;
    float v64;
    float v65;
    float v66;
    float v90;
    float v91;
    float v92;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    int t8;
    int t9;
    int t10;
    float t11;
    float t12;
    int t13;
    int t14;
    float t15;
    float t16;
    float t17;
    float t18;
    float t19;
    int t20;
    int t21;
    v1 = (S_vv1 *)((char *)o + 0x438);
    v2 = (S_vv2 *)((char *)o + 0x43c);
    v3 = (S_vv3 *)((char *)o + 0x440);
    v4 = (S_vv4 *)((char *)o + 0x450);
    v5 = (S_vv5 *)((char *)o + 0x484);
    if (a1 == 0) {
        v34 = (int)o;
        v16 = (S_vv16 *)v5;
    } else {
        if (a1 == 3) {
            v12 = (int)o;
            v16 = (S_vv16 *)v5;
        } else {
            if (a1 != 4) {
                return;
            }
            ((ObjectData *)o)->ff0 = 1;
            operation_8c059ef8((void *)o, 7);
            o->v102();
            v2->f00 = 0;
            v1->f00 = 0;
            t1 = object_random_fraction((void *)o);
            v3->f00 = (int)(t1 * 20.0f);
            v5->f00 = 0;
            t18 = object_random_fraction((void *)o);
            v6 = (int)(int)(t18 * 65536.0f);
            t19 = object_random_fraction((void *)o);
            v7 = (float)(t19 * 120.0f);
            t2 = njSin_8c37eb0c(v6);
            ((ObjectData *)o)->f3b0 = v7 * t2 + ((ObjectData *)o)->f410;
            t3 = njCos_8c38c154(v6);
            ((ObjectData *)o)->f3b8 = v7 * t3 + ((ObjectData *)o)->f418;
            t4 = object_random_fraction((void *)o);
            ((ObjectData *)o)->f41c = t4 * 0.7f + 0.3f;
            ((ObjectData *)o)->f420 = 0.0f;
            t5 = scale_by_half_angle(0x200, ((ObjectData *)o)->f41c);
            v4->f00 = t5 + 2.0f;
            aim_direction_8c05bdd4((void *)o);
            return;
        }
        if (v16->f00 == 0) {
            return;
        }
        t6 = object_random_fraction((void *)v12);
        if (0.5f > t6) {
            operation_8c059ea4((void *)o, 8);
            return;
        }
        operation_8c059ea4((void *)o, 9);
        return;
    }
    operation_8c01c5f0(v34);
    if (((ObjectData *)o)->f3f4 != 0) {
        t20 = call_8c05c0dc(o, 350.0f);
        v50 = (int)t20;
    } else {
        t21 = call_8c05c0dc(o, 250.0f);
        v50 = (int)t21;
    }
    if (v50 != 0) {
        if (22500.0f > ((((ObjectData *)o)->f3ac->f44 - ((ObjectData *)o)->f44) * (((ObjectData *)o)->f3ac->f44 - ((ObjectData *)o)->f44) + (((ObjectData *)o)->f3ac->f3c - ((ObjectData *)o)->f3c) * (((ObjectData *)o)->f3ac->f3c - ((ObjectData *)o)->f3c))) {
            v16->f00 = 1;
        }
        njSin_8c37eb0c((int)(((ObjectData *)o)->f64));
        v54 = (float)((ObjectData *)o)->f3c;
        v54 = (float)(v54 + 0.0f);
        njCos_8c38c154((int)(((ObjectData *)o)->f64));
        t7 = call_8c130334(((ObjectData *)o)->f3ac->f3c - v54, ((ObjectData *)o)->f3ac->f44 - (((ObjectData *)o)->f44 + 0.0f));
        operation_8c0610c8((void *)o, (int)((int)(t7 * 65536.0f / 6.28318405f)));
    } else {
        operation_8c0610c8((void *)o, (int)(((ObjectData *)o)->f64));
    }
    if (v1->f00 != 0) {
        if (v1->f00 == 1) {
            goto L_8c0624c4;
        }
        if (v1->f00 == 2) {
            goto L_8c0625f0;
        }
    } else {
        t8 = check_range_8c01cf68((void *)o, 7.0f);
        if (t8 == 0) {
            t9 = check_range_8c01cf68((void *)o, 24.0f);
            if (t9 == 0) {
                goto L_8c06237a;
            }
        }
        play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x1000);
L_8c06237a:;
        aim_direction_8c05bdd4((void *)o);
        v64 = (float)((ObjectData *)o)->f420;
        v65 = (float)((ObjectData *)o)->f41c;
        if (v64 != v65) {
            if (v64 > v65) {
                ((ObjectData *)o)->f420 = v64 - 0.05f;
                if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                    goto L_8c0623ea;
                }
                ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
            } else {
                ((ObjectData *)o)->f420 = v64 + 0.05f;
                v66 = (float)((ObjectData *)o)->f41c;
                if (((ObjectData *)o)->f420 > v66) {
                    ((ObjectData *)o)->f420 = v66;
                }
            }
        }
L_8c0623ea:;
        v2->f00 += 1;
        if (((ObjectData *)o)->f3c8 < v4->f00 || v2->f00 > 0x64) {
            v1->f00 = 1;
            ((ObjectData *)o)->f41c = 0.0f;
            goto L_8c062460;
        }
        t10 = operation_8c05af28((void *)o, 0x14);
        if (t10 != 0) {
            v2->f00 = 0;
            call_8c061170(o);
            t11 = operation_8c05b8e8((int)o, 0.3f, 1.0f);
            ((ObjectData *)o)->f41c = t11;
            t12 = scale_by_half_angle(0x200, ((ObjectData *)o)->f41c);
            v4->f00 = t12 + 2.0f;
        }
L_8c062460:;
        ((ObjectData *)o)->f100 = ((ObjectData *)o)->f420 * 1.1f;
        call_8c05c580(o, (int)((int)(((ObjectData *)o)->f420 * 512.0f)), ((ObjectData *)o)->f420);
        goto L_8c06264e;
L_8c0624c4:;
        t13 = check_range_8c01cf68((void *)o, 7.0f);
        if (t13 == 0) {
            t14 = check_range_8c01cf68((void *)o, 24.0f);
            if (t14 == 0) {
                goto L_8c0624f6;
            }
        }
        play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x1000);
L_8c0624f6:;
        aim_direction_8c05bdd4((void *)o);
        v90 = (float)((ObjectData *)o)->f420;
        v91 = (float)((ObjectData *)o)->f41c;
        if (v90 != v91) {
            if (v90 > v91) {
                ((ObjectData *)o)->f420 = v90 - 0.02f;
                if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                    goto L_8c062566;
                }
                ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
            } else {
                ((ObjectData *)o)->f420 = v90 + 0.02f;
                v92 = (float)((ObjectData *)o)->f41c;
                if (((ObjectData *)o)->f420 > v92) {
                    ((ObjectData *)o)->f420 = v92;
                }
            }
        }
L_8c062566:;
        if (!(((ObjectData *)o)->f420 > 0.1f)) {
            v1->f00 = 2;
            t15 = operation_8c05b8e8((int)o, 240.0f, 360.0f);
            v2->f00 = (int)t15;
            ((ObjectData *)o)->ff0 = 0;
        }
        ((ObjectData *)o)->f100 = ((ObjectData *)o)->f420 * 1.1f;
        call_8c05c580(o, (int)((int)(((ObjectData *)o)->f420 * 512.0f)), ((ObjectData *)o)->f420);
        goto L_8c06264e;
L_8c0625f0:;
        ((ObjectData *)o)->ff0 = 0;
        v2->f00 -= 1;
        if (!(v2->f00 > 0)) {
            call_8c061170(o);
            t16 = operation_8c05b8e8((int)o, 0.3f, 1.0f);
            ((ObjectData *)o)->f41c = t16;
            ((ObjectData *)o)->f420 = 0.0f;
            t17 = scale_by_half_angle(0x200, ((ObjectData *)o)->f41c);
            v4->f00 = t17 + 2.0f;
            v1->f00 = 0;
            ((ObjectData *)o)->ff0 = 1;
        }
        o->v108();
    }
L_8c06264e:;
    o->v95();
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c062eb8
 * function: operation_8c062eb8
 * language: c++
 * reference size: 1884 bytes
 * compiled size: 1904 bytes (+1.1%)
 * differing lines: 652 of 746 reference instruction lines
 * differing bytes: 1743
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_3ac_64 Arg0_3ac_64;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_64 S_vv7_64;
typedef struct S_x39664 S_x39664;
typedef struct S_x73376 S_x73376;
typedef struct S_x88384 S_x88384;
class Object;
typedef struct Block_vv5_0 {
    float f00;
    float f04;
    float f08;
} Block_vv5_0;
typedef struct Block_p0_3ac_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3ac_3c;
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
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    char unknown4c[0x4];
    float f50;
    char unknown54[0x10];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0xe];
    float f100;
    char unknown104[0x2a8];
    Arg0_3ac *f3ac;
    char unknown3b0[0x6c];
    float f41c;
    float f420;
} ObjectData;
struct S_x73376 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_x39664 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    float f00;
};
struct S_x88384 {
    float f00;
};
struct S_vv5 {
    Block_vv5_0 f00;
};
struct S_vv6 {
    float f00;
    float f04;
    float f08;
};
struct S_vv7 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    S_vv7_64 *f64;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    Block_p0_3ac_3c f3c;
    char unknown48[0x1c];
    Arg0_3ac_64 *f64;
};
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" float object_random_fraction(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void operation_8c01c5f0(void *);
extern "C" int call_8c05c2dc(Object *);
extern "C" float signed_inv_sqrt_8c37f6d8(float);
extern "C" float operation_8c05b8e8(int, float, float);
extern "C" int cross_xz_negative(void *, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int operation_8c05af28(void *, int);
extern "C" void set_field_8c05af54(void *);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void operation_8c062eb8(Object *o, int a1)
{
    Frame frame;
    int v86;
    S_vv3 *v3;
    S_vv1 *v1;
    int v87;
    S_vv2 *v2;
    S_vv5 *v5;
    int v88;
    S_vv6 *v6;
    int v72;
    S_vv7 *v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v89;
    float v19;
    float v20;
    float v37;
    float v36;
    float v38;
    float v47;
    float v49;
    float v48;
    float v50;
    float v52;
    float v51;
    float v53;
    float v54;
    float v55;
    float v56;
    float v60;
    float v59;
    float v61;
    S_vv4 *v4;
    float v85;
    float t1;
    float t2;
    float t3;
    int t4;
    float t5;
    float t6;
    float t7;
    float t8;
    int t9;
    int t10;
    int t11;
    float t12;
    int t13;
    int t14;
    int t15;
    float t16;
    float t17;
    float t18;
    int t19;
    float t20;
    float t21;
    float t22;
    v1 = (S_vv1 *)((char *)o + 0x448);
    v2 = (S_vv2 *)((char *)o + 0x450);
    v3 = (S_vv3 *)((char *)o + 0x43c);
    v4 = (S_vv4 *)((char *)o + 0x440);
    v5 = (S_vv5 *)((char *)o + 0x460);
    v6 = (S_vv6 *)((char *)o + 0x46c);
    v88 = (int)0x454;
    v87 = (int)0x444;
    v86 = (int)0x438;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        operation_8c059ef8((void *)o, 0xa);
        o->v102();
        ((ObjectData *)o)->f41c = 0.7f;
        ((S_x73376 *)((int)o + v86))->f00 = 0;
        v3->f00 = 0;
        v4->f00 = 0;
        ((S_x39664 *)((int)o + v87))->f00 = 0;
        v1->f00 = 0;
        v2->f00 = 0.0f;
        ((S_x88384 *)((int)o + v88))->f00 = 0.0f;
        v5->f00.f00 = 0.0f;
        v5->f00.f04 = 0.0f;
        v5->f00.f08 = 0.0f;
        v6->f00 = 0.0f;
        v6->f04 = 0.0f;
        v6->f08 = 0.0f;
        set_field_8c05af48((void *)o);
        return;
    case 3:
        v7 = (S_vv7 *)((ObjectData *)o)->f3ac;
        if (v7 == 0) {
            operation_8c059ea4((void *)o, 7);
            return;
        }
        if (((S_x73376 *)((int)o + v86))->f00 > 0x1c2) {
            ((S_x73376 *)((int)o + v86))->f00 = 0;
            t1 = object_random_fraction((void *)o);
            if (!(0.5f > t1)) {
                return;
            }
            operation_8c059ea4((void *)o, 0xb);
            return;
        }
        if (!(((S_x73376 *)((int)o + v86))->f00 > 0x2d)) {
            return;
        }
        v8 = (float)((((ObjectData *)o)->f3c - v7->f3c) * (((ObjectData *)o)->f3c - v7->f3c) + (((ObjectData *)o)->f44 - v7->f44) * (((ObjectData *)o)->f44 - v7->f44));
        if (!(10000.0f > v8)) {
            t2 = object_random_fraction((void *)o);
            if (0.5f > t2) {
                operation_8c059ea4((void *)o, 8);
                return;
            }
            operation_8c059ea4((void *)o, 9);
            return;
        }
        if (900.0f > v8) {
            operation_8c059ea4((void *)o, 0xb);
            return;
        }
        t21 = njSin_8c37eb0c((void *)(v7->f64));
        t22 = njCos_8c38c154((void *)(((ObjectData *)o)->f3ac->f64));
        v9 = (float)(t21 * v6->f00 + t22 * v6->f08);
        t3 = njCos_8c38c154((void *)0x6aaa);
        if (!(t3 > v9)) {
            return;
        }
        operation_8c059ea4((void *)o, 0xb);
        return;
    case 0:
        operation_8c01c5f0((void *)o);
        t4 = call_8c05c2dc(o);
        if (t4 == 0) {
            return;
        }
        switch (v4->f00) {
        case 0:
            v4->f00 = 1;
            *(Vector3 *)&v5->f00 = *(Vector3 *)&((ObjectData *)o)->f3ac->f3c;
            v10 = (float)((ObjectData *)o)->f3c;
            v11 = (float)((ObjectData *)o)->f44;
            v12 = (float)(v10 - v5->f00.f00);
            v13 = (float)(v11 - v5->f00.f08);
            v89 = (float)(v12 * v12 + v13 * v13);
            t5 = signed_inv_sqrt_8c37f6d8(v89);
            v6->f00 = v12 * t5;
            v6->f04 = 0.0f;
            v6->f08 = v13 * t5;
            v2->f00 = v89 * t5;
            t6 = operation_8c05b8e8((int)o, 50.0f, 80.0f);
            ((S_x88384 *)((int)o + v88))->f00 = t6;
            t7 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            (&frame)->f18 = t7;
            (&frame)->f1c = 0.0f;
            t8 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            (&frame)->f20 = t8;
            (&frame)->f0c = ((ObjectData *)o)->f3ac->f3c.f00 - ((ObjectData *)o)->f3c;
            (&frame)->f10 = 0.0f;
            (&frame)->f14 = ((ObjectData *)o)->f3ac->f3c.f08 - ((ObjectData *)o)->f44;
            t9 = cross_xz_negative((void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
            if (t9 != 0) {
                v1->f00 = -1;
            } else {
                v1->f00 = 1;
            }
        }
        ((S_x73376 *)((int)o + v86))->f00 += 1;
        t10 = check_range_8c01cf68((void *)o, 7.0f);
        if (t10 == 0) {
            t11 = check_range_8c01cf68((void *)o, 24.0f);
            if (t11 == 0) {
                goto L_8c06325a;
            }
        }
        play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x1000);
L_8c06325a:;
        if (((S_x39664 *)((int)o + v87))->f00 > 0) {
            ((S_x39664 *)((int)o + v87))->f00 -= 1;
            if (v1->f00 > 0) {
                v2->f00 -= 0.5f;
                goto L_8c0632da;
            }
            v2->f00 += 0.5f;
        } else {
            v19 = (float)v2->f00;
            v20 = (float)(v19 - ((S_x88384 *)((int)o + v88))->f00);
            if (v20 > 0.2f) {
                v2->f00 = v19 - 0.2f;
            } else {
                if (-0.2f > v20) {
                    v2->f00 = v19 + 0.2f;
                } else {
                    v2->f00 = ((S_x88384 *)((int)o + v88))->f00;
                }
            }
        }
L_8c0632da:;
        switch (v4->f00) {
        case 1:
            ((ObjectData *)o)->f41c = 0.7f;
            v36 = (float)((ObjectData *)o)->f41c;
            v37 = (float)((ObjectData *)o)->f420;
            if (v37 != v36) {
                if (v37 > v36) {
                    ((ObjectData *)o)->f420 = v37 - 0.12f;
                    if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                        goto L_8c063342;
                    }
                    ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
                } else {
                    ((ObjectData *)o)->f420 = v37 + 0.12f;
                    v38 = (float)((ObjectData *)o)->f41c;
                    if (((ObjectData *)o)->f420 > v38) {
                        ((ObjectData *)o)->f420 = v38;
                    }
                }
            }
L_8c063342:;
            v47 = (float)((ObjectData *)o)->f3c;
            v48 = (float)(v47 - v5->f00.f00);
            v49 = (float)((ObjectData *)o)->f44;
            v50 = (float)(v49 - v5->f00.f08);
            t12 = signed_inv_sqrt_8c37f6d8(v48 * v48 + v50 * v50);
            v6->f00 = v48 * t12;
            v6->f04 = 0.0f;
            v6->f08 = v50 * t12;
            if (v1->f00 >= 0) {
                v51 = (float)v6->f00;
                v52 = (float)v6->f08;
                v55 = (float)v52;
                v56 = (float)-v51;
            } else {
                v53 = (float)v6->f08;
                v54 = (float)v6->f00;
                v53 = (float)-v53;
                v55 = (float)v53;
                v56 = (float)v54;
            }
            t13 = operation_8c05af28((void *)o, 1);
            if (t13 != 0) {
                set_field_8c05af48((void *)o);
            } else {
                set_field_8c05af54((void *)o);
            }
            slide_and_apply_contact((void *)o, v55, v56, ((ObjectData *)o)->f420);
            t14 = operation_8c05af28((void *)o, 0xa);
            if (t14 == 0) {
                goto L_8c0634d4;
            }
            v3->f00 = 0;
            v4->f00 = 2;
            break;
        case 2:
            ((ObjectData *)o)->f41c = 0.5f;
            v59 = (float)((ObjectData *)o)->f41c;
            v60 = (float)((ObjectData *)o)->f420;
            if (v60 != v59) {
                if (v60 > v59) {
                    ((ObjectData *)o)->f420 = v60 - 0.12f;
                    if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                        goto L_8c06344a;
                    }
                    ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
                } else {
                    ((ObjectData *)o)->f420 = v60 + 0.12f;
                    v61 = (float)((ObjectData *)o)->f41c;
                    if (((ObjectData *)o)->f420 > v61) {
                        ((ObjectData *)o)->f420 = v61;
                    }
                }
            }
L_8c06344a:;
            v3->f00 += 1;
            if (v3->f00 >= 0x28) {
                v72 = (int)((ObjectData *)o)->f64;
            } else {
                v72 = (int)&*(int *)((char *)((char *)((ObjectData *)o)->f64 + 0x0) + (v1->f00 << 11));
            }
            t16 = njSin_8c37eb0c((void *)v72);
            t17 = njCos_8c38c154((void *)v72);
            t15 = operation_8c05af28((void *)o, 2);
            if (t15 != 0) {
                v3->f00 = 0;
                set_field_8c05af48((void *)o);
            } else {
                set_field_8c05af54((void *)o);
            }
            slide_and_apply_contact((void *)o, t16, t17, ((ObjectData *)o)->f420);
            if (v3->f00 >= 0x50) {
                v4->f00 = 0;
            }
        }
L_8c0634d4:;
        t18 = call_8c130334(((ObjectData *)o)->f3c - ((ObjectData *)o)->f48, ((ObjectData *)o)->f44 - ((ObjectData *)o)->f50);
        t19 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t18 * 65536.0f / 6.28318405f)), 0x200);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t19;
        ((ObjectData *)o)->f64 = (Arg0_64 *)(short)((ObjectData *)o)->f64;
        ((ObjectData *)o)->f100 = ((ObjectData *)o)->f420 * 1.1f;
        njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        v85 = (float)((ObjectData *)o)->f3c;
        v85 = (float)(v85 + 0.0f);
        njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        t20 = call_8c130334(((ObjectData *)o)->f3ac->f3c.f00 - v85, ((ObjectData *)o)->f3ac->f3c.f08 - (((ObjectData *)o)->f44 + 0.0f));
        operation_8c0610c8((void *)o, (int)((int)(t20 * 65536.0f / 6.28318405f)));
        o->v95();
        if (((((ObjectData *)o)->fdc->f18 & 0x700000)) == 0) {
            return;
        }
        ((S_x39664 *)((int)o + v87))->f00 = 0x14;
        return;
    case 5:
        set_field_8c05af54((void *)o);
    }
}

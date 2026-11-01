/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0629a4
 * function: operation_8c0629a4
 * language: c++
 * reference size: 1300 bytes
 * compiled size: 1292 bytes (-0.6%)
 * differing lines: 114 of 471 reference instruction lines
 * differing bytes: 230
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
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
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
class Object;
typedef struct Block_vv6_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_vv6_0;
typedef struct Block_vv5_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_vv5_0;
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
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    float ffc;
    float f100;
    char unknown104[0x2a8];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x50];
    float f41c;
    float f420;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv6 {
    Block_vv6_0 f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv5 {
    Block_vv5_0 f00;
};
struct S_vv4 {
    int f00;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" float call_8c130334(float, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c2dc(Object *);
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" int angle_step(int, int, int);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void operation_8c0629a4(Object *o, int a1)
{
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv1 *v1;
    float v19;
    float v20;
    float v21;
    float v30;
    float t1;
    float t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    float t10;
    float t11;
    float t12;
    float t13;
    float t14;
    int t15;
    int t16;
    float t17;
    v1 = (S_vv1 *)((char *)o + 0x438);
    v2 = (S_vv2 *)((char *)o + 0x43c);
    v3 = (S_vv3 *)((char *)o + 0x448);
    v4 = (S_vv4 *)((char *)o + 0x44c);
    v5 = (S_vv5 *)((char *)o + 0x460);
    v6 = (S_vv6 *)((char *)o + 0x46c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 3;
        operation_8c059ef8((void *)o, 9);
        o->v102();
        ((ObjectData *)o)->f41c = 2.0f;
        v1->f00 = 0;
        v2->f00 = 0;
        t2 = njSin_8c37eb0c(0x1c71);
        t1 = njCos_8c38c154(0x1c71);
        v6->f00.f08 = ((ObjectData *)o)->f3c4 * t1 - ((ObjectData *)o)->f3bc * t2;
        v6->f00.f00 = t2 * ((ObjectData *)o)->f3c4 + t1 * ((ObjectData *)o)->f3bc;
        t3 = call_8c130334(v6->f00.f00, v6->f00.f08);
        t3 *= 65536.0f;
        v3->f00 = (int)(t3 / 6.28318405f);
        *(Vector3 *)&v5->f00 = *(Vector3 *)&v6->f00;
        v4->f00 = (int)(v3->f00);
        return;
    case 3:
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 7);
            return;
        }
        t4 = check_range_8c01cf68((void *)o, ((ObjectData *)o)->ffc - 1.0f);
        if (t4 == 0) {
            return;
        }
        if (!(90.0f > ((ObjectData *)o)->f3c8)) {
            return;
        }
        operation_8c059ea4((void *)o, 0xa);
        return;
    case 0:
        operation_8c01c5f0(o);
        t5 = call_8c05c2dc(o);
        if (t5 == 0) {
            return;
        }
        t6 = check_range_8c01cf68((void *)o, 5.0f);
        if (t6 != 0) {
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
        }
        t7 = check_range_8c01cf68((void *)o, 18.0f);
        if (t7 != 0) {
            play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x1000);
        }
        t8 = check_range_8c01cf68((void *)o, 15.0f);
        if (t8 == 0) {
        } else {
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            if (v2->f00 == 0) {
                v2->f00 = 1;
                t10 = njSin_8c37eb0c(-0x1c71);
                t9 = njCos_8c38c154(-0x1c71);
                v6->f00.f08 = ((ObjectData *)o)->f3c4 * t9 - ((ObjectData *)o)->f3bc * t10;
                v6->f00.f00 = t10 * ((ObjectData *)o)->f3c4 + t9 * ((ObjectData *)o)->f3bc;
                t11 = call_8c130334(v6->f00.f00, v6->f00.f08);
                v3->f00 = (int)(t11 * 65536.0f / 6.28318405f);
            } else {
                v2->f00 = 0;
                t13 = njSin_8c37eb0c(0x1c71);
                t12 = njCos_8c38c154(0x1c71);
                v6->f00.f08 = ((ObjectData *)o)->f3c4 * t12 - ((ObjectData *)o)->f3bc * t13;
                v6->f00.f00 = t13 * ((ObjectData *)o)->f3c4 + t12 * ((ObjectData *)o)->f3bc;
                t14 = call_8c130334(v6->f00.f00, v6->f00.f08);
                v3->f00 = (int)(t14 * 65536.0f / 6.28318405f);
            }
        }
        t15 = check_range_8c01cf68((void *)o, ((ObjectData *)o)->ffc - 1.0f);
        if (t15 != 0) {
            *(Vector3 *)&v5->f00 = *(Vector3 *)&v6->f00;
            v4->f00 = (int)(v3->f00);
        }
        t16 = angle_step((int)(((ObjectData *)o)->f64), (int)(v4->f00), 0x800);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t16;
        ((ObjectData *)o)->f64 = (Arg0_64 *)(short)((ObjectData *)o)->f64;
        if (!(15.0f > ((ObjectData *)o)->ff8)) {
            ((ObjectData *)o)->f420 *= 0.9f;
            ((ObjectData *)o)->f100 = ((ObjectData *)o)->f420 * 0.5f;
            slide_and_apply_contact((void *)o, v5->f00.f00, v5->f00.f08, ((ObjectData *)o)->f420);
        } else {
            v19 = (float)((ObjectData *)o)->f420;
            v20 = (float)((ObjectData *)o)->f41c;
            if (v19 != v20) {
                if (v19 > v20) {
                    ((ObjectData *)o)->f420 = v19 - 1.0f;
                    if (!(((ObjectData *)o)->f41c > ((ObjectData *)o)->f420)) {
                        goto L_8c062de8;
                    }
                    ((ObjectData *)o)->f420 = ((ObjectData *)o)->f41c;
                } else {
                    ((ObjectData *)o)->f420 = v19 + 1.0f;
                    v21 = (float)((ObjectData *)o)->f41c;
                    if (((ObjectData *)o)->f420 > v21) {
                        ((ObjectData *)o)->f420 = v21;
                    }
                }
            }
L_8c062de8:;
            ((ObjectData *)o)->f100 = ((ObjectData *)o)->f420 * 0.5f;
            slide_and_apply_contact((void *)o, v5->f00.f00, v5->f00.f08, ((ObjectData *)o)->f420);
        }
        njSin_8c37eb0c((int)(((ObjectData *)o)->f64));
        v30 = (float)((ObjectData *)o)->f3c;
        v30 = (float)(v30 + 0.0f);
        njCos_8c38c154((int)(((ObjectData *)o)->f64));
        t17 = call_8c130334(((ObjectData *)o)->f3ac->f3c - v30, ((ObjectData *)o)->f3ac->f44 - (((ObjectData *)o)->f44 + 0.0f));
        operation_8c0610c8((void *)o, (int)((int)(t17 * 65536.0f / 6.28318405f)));
        o->v95();
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0688bc
 * function: operation_8c0688bc
 * language: c++
 * reference size: 1716 bytes
 * compiled size: 1720 bytes (+0.2%)
 * differing lines: 190 of 598 reference instruction lines
 * differing bytes: 1076
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46891c S_g8c46891c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
class Object;
typedef struct Block_p0_3b0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3b0;
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
    virtual void v93(int, int);
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x206];
    short f30a;
    char unknown30c[0x9c];
    volatile unsigned short f3a8;
    char unknown3aa[0x2];
    int f3ac;
    Block_p0_3b0 f3b0;
    char unknown3bc[0xc];
    float f3c8;
    int f3cc;
    int f3d0;
    char unknown3d4[0x8];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x24];
    float f42c;
    char unknown430[0x4];
    float f434;
    char unknown438[0x1b0];
    float f5e8;
    float f5ec;
    float f5f0;
    float f5f4;
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x188];
    float f844;
} ObjectData;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_g8c46891c {
    char unknown0[0x10];
    float f10;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0x4];
    float f1c;
    Vector3 f20;
    char f2c;
    char f2d;
    short f2e;
    short f30;
    short f32;
    int f34;
    float f38;
    float f3c;
};
extern S_g8c46891c *g_8c46891c;
extern "C" int operation_8c05bbf8(void);
extern "C" float scale_by_half_angle(int, float);
extern "C" void operation_8c0368a8(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" void call_8c06741c(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" int call_8c18e8a0(void *, int);
extern "C" int operation_8c05c1f0(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void set_fields_8c05c1a4(void *, void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void call_8c067734(Object *, int);
extern "C" void advance_and_apply_contact(void *, float, float, float);
extern "C" void call_8c05c464(Object *, int, float);
extern "C" void operation_8c0688bc(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    float *v844;
    int v2;
    int v6;
    int v3;
    int v4;
    int v35;
    float v33;
    int v5;
    int t1;
    float t2;
    float t3;
    float t4;
    float t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    float t13;
    int t14;
    int t15;
    float t16;
    float t17;
    float t18;
    float t19;
    float t20;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v844 = (float *)((char *)o + 0x844);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        ((ObjectData *)o)->f404 = 0;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc &= -0xe81;
        v1->f00 = (S_vv1_0 *)0;
        t1 = operation_8c05bbf8();
        if (t1 != 0) {
            t2 = scale_by_half_angle((int)((int)(g_8c46891c->f10 * 320.0f)), g_8c46891c->f10);
            *v844 = t2 + 5.0f;
            return;
        }
        t3 = scale_by_half_angle(0x100, 0.8f);
        *v844 = t3 + 5.0f;
        return;
    case 2:
    case 11:
        o->v93(0x17, 6);
        (&frame)->f2c = 0x12;
        (&frame)->f2d = 5;
        (&frame)->f2e = ((ObjectData *)o)->f20;
        (&frame)->f30 = 0x17;
        (&frame)->f32 = ((ObjectData *)o)->f698;
        (&frame)->f34 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f38 = ((ObjectData *)o)->f6ac;
        (&frame)->f3c = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->f2c));
        return;
    case 9:
        v2 = (int)v1->f00;
        v3 = (int)0;
        if (v2 >= 0x96) {
            if (((ObjectData *)o)->f3ac != 0) {
                if (*v844 > ((ObjectData *)o)->f3c8) {
                    v4 = (int)1;
                    goto L_8c068b70;
                }
                t4 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                (&frame)->f14 = ((ObjectData *)o)->f3c + t4 * 185.0f;
                t5 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                (&frame)->f1c = ((ObjectData *)o)->f44 + t5 * 185.0f;
                *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&((ObjectData *)o)->f3b0;
                vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(&(&frame)->f14));
                t20 = normalize_xz_checked((void *)(&(&frame)->f20));
                v5 = (int)(t20 <= 35.0f);
                if (v5 != 0) {
                    v6 = (int)1;
                    v4 = (int)v6;
                    goto L_8c068b70;
                }
                t6 = operation_8c05bbf8();
                if (t6 == 0) {
                    v4 = (int)v3;
                    goto L_8c068b70;
                }
                if (!((int)(v1->f00) >= 0x258)) {
                    v4 = (int)v3;
                    goto L_8c068b70;
                }
                v4 = (int)1;
                goto L_8c068b70;
            }
        }
        if (v2 >= 0x12c) {
            v3 = (int)1;
        }
        v4 = (int)v3;
L_8c068b70:;
        if (v4 == 0) {
            return;
        }
        call_8c06741c(o);
        return;
    case 8:
        call_8c05c0dc(o, 1000.0f);
        v1->f00 = (S_vv1_0 *)((int)v1->f00 + 1);
        t7 = call_8c18e8a0((void *)(v1->f00), 0x14);
        if (t7 != 0x13) {
            return;
        }
        t8 = operation_8c05c1f0(o);
        if (t8 != 0) {
            operation_8c05c184((void *)o);
        } else {
            set_fields_8c05c1a4((void *)o, (void *)((void *)0x8c284c60));
        }
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3b0.f00;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f3b0.f08;
        (&frame)->f00 = 0x12;
        (&frame)->f01 = 5;
        (&frame)->f02 = ((ObjectData *)o)->f20;
        (&frame)->f04 = ((ObjectData *)o)->f30a;
        (&frame)->f06 = ((ObjectData *)o)->f698;
        (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f0c = ((ObjectData *)o)->f6ac;
        (&frame)->f10 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&frame));
        return;
    case 7:
        ((ObjectData *)o)->f3b0.f00 = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f3b0.f08 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f3cc = (int)(((ObjectData *)o)->f3d0);
        t9 = call_8c05c0dc(o, 1000.0f);
        if (t9 != 0) {
            operation_8c05c184((void *)o);
        } else {
            set_fields_8c05c1a4((void *)o, (void *)((void *)0x8c284c60));
        }
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3b0.f00;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f3b0.f08;
        return;
    case 0:
        t10 = operation_8c05bbf8();
        if (t10 != 0) {
            v33 = (float)g_8c46891c->f10;
        } else {
            v33 = (float)0.8f;
        }
        v35 = (int)(int)(v33 * 320.0f);
        if (((((ObjectData *)o)->fe8 & 4)) != 0) {
            ((ObjectData *)o)->f100 = v33 * 0.125f;
        } else {
            ((ObjectData *)o)->f100 = v33 * 0.6f;
        }
        operation_8c01c5f0(o);
        t11 = check_range_8c01cf68((void *)o, 4.0f);
        if (t11 == 0) {
            t12 = check_range_8c01cf68((void *)o, 24.5f);
            if (t12 == 0) {
                goto L_8c068da2;
            }
        }
        play_se_8c05fbf8(0x30001, (void *)(((char *)o + 0x658)), 0, 0);
L_8c068da2:;
        aim_direction_8c05bdd4((void *)o);
        ((ObjectData *)o)->f5e8 = ((ObjectData *)o)->f3b0.f00 - ((ObjectData *)o)->f42c;
        ((ObjectData *)o)->f5ec = 0.0f;
        ((ObjectData *)o)->f5f0 = ((ObjectData *)o)->f3b0.f08 - ((ObjectData *)o)->f434;
        t13 = normalize_xz_checked((void *)(((char *)o + 0x5e8)));
        ((ObjectData *)o)->f5f4 = t13;
        t14 = check_range_8c01cf68((void *)o, 3.0f);
        if (t14 != 0) {
            call_8c067734(o, 0);
        } else {
            t15 = check_range_8c01cf68((void *)o, 24.0f);
            if (t15 != 0) {
                call_8c067734(o, 1);
            }
        }
        if (4.0f > ((ObjectData *)o)->ff8) {
            t16 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            t17 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            advance_and_apply_contact((void *)o, t16, t17, v33);
            return;
        }
        if (!(9.0f > ((ObjectData *)o)->ff8)) {
            if (19.0f > ((ObjectData *)o)->ff8) {
                call_8c05c464(o, v35, v33);
                return;
            }
            if (24.0f > ((ObjectData *)o)->ff8) {
                t18 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                t19 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                advance_and_apply_contact((void *)o, t18, t19, v33);
                return;
            }
            if (!(30.0f > ((ObjectData *)o)->ff8)) {
                call_8c05c464(o, v35, v33);
            }
        }
        return;
    case 1:
    case 3:
    case 5:
    case 10:
        break;
    }
}

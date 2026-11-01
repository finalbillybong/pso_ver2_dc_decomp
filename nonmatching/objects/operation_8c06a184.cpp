/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06a184
 * function: operation_8c06a184
 * language: c++
 * reference size: 2152 bytes
 * compiled size: 2150 bytes (-0.1%)
 * differing lines: 146 of 832 reference instruction lines
 * differing bytes: 200
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_740 Arg0_740;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv59 S_vv59;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv76 S_vv76;
class Object;
typedef struct Block_vv5_0 {
    float f00;
    float f04;
    float f08;
} Block_vv5_0;
typedef struct Block_frame_20 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_20;
typedef struct Block_frame_2c {
    float f00;
    float f04;
    float f08;
} Block_frame_2c;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
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
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2ac];
    volatile unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x74];
    int f674;
    int f678;
    int f67c;
    float f680;
    float f684;
    float f688;
    float f68c;
    float f690;
    float f694;
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    char unknown6b4[0x74];
    int f728;
    char unknown72c[0x14];
    Arg0_740 *f740;
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
struct S_vv6 {
    S_vv6_0 *f00;
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
    Block_frame_20 f20;
    Block_frame_2c f2c;
};
struct S_vv5 {
    Block_vv5_0 f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct Arg0_740 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x10];
    int f18;
    int f1c;
};
struct S_vv59 {
    char unknown0[0x4];
    short f04;
};
struct S_vv76 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c284c60[];
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c066e30(Object *, S_vv5 *);
extern "C" float call_8c130334(float, float);
extern "C" int operation_8c05b90c(int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" int signed_angle_delta(int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect(void *, int, int);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void call_8c0a7608(S_vv59 *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TBoss1DragonEffBullet_ctor_8c07bdc8(void *, int, void *, void *);
extern "C" void rotate_vector_xz(void *, void *, int);
extern "C" void operation_8c06a184(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv2 *v2;
    int v80;
    float v22;
    float v23;
    float v39;
    int v40;
    int v46;
    S_vv59 *v59;
    S_vv76 *v76;
    int t1;
    float t2;
    int t3;
    float t4;
    float t5;
    float t6;
    float t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    float t19;
    int t20;
    int t21;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    v3 = (S_vv3 *)((char *)o + 0x834);
    v4 = (S_vv4 *)((char *)o + 0x83c);
    v5 = (S_vv5 *)((char *)o + 0x858);
    v6 = (S_vv6 *)((char *)o + 0x874);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x10;
        o->v102();
        ((ObjectData *)o)->f404 = 1;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f3c.f04 + 180.0f;
        ((ObjectData *)o)->f5fc = 180.0f;
        ((ObjectData *)o)->f3dc &= -0xe81;
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = 0;
        v6->f00 = (S_vv6_0 *)0;
        return;
    case 2:
    case 11:
        if (v1->f00 != 3) {
        } else {
            o->v93(0x19, 6);
            (&frame)->f00 = 0x12;
            (&frame)->f01 = 5;
            (&frame)->f02 = ((ObjectData *)o)->f20;
            (&frame)->f04 = 0x19;
            (&frame)->f06 = ((ObjectData *)o)->f698;
            (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f0c = ((ObjectData *)o)->f6ac;
            (&frame)->f10 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&frame));
        }
        return;
    case 9:
        if (v1->f00 != 4) {
            return;
        }
        call_8c06741c(o);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c06a53a;
            }
            if (v1->f00 == 2) {
                goto L_8c06a6b0;
            }
            if (v1->f00 == 3) {
                goto L_8c06a99c;
            }
            return;
        }
        t1 = call_8c066e30(o, v5);
        if (t1 != 0) {
            t2 = call_8c130334(v5->f00.f00 - ((ObjectData *)o)->f3c.f00, v5->f00.f08 - ((ObjectData *)o)->f3c.f08);
            v4->f00 = (S_vv4_0 *)(int)(t2 * 65536.0f / 6.28318405f);
        } else {
            t3 = operation_8c05b90c((int)o);
            v4->f00 = (S_vv4_0 *)(int)t3;
            t4 = njSin_8c37eb0c((void *)(v4->f00));
            v5->f00.f00 = t4 * 125.0f;
            v5->f00.f04 = 0.0f;
            t5 = njCos_8c38c154((void *)(v4->f00));
            v5->f00.f08 = t5 * 125.0f;
        }
        v4->f00 = (S_vv4_0 *)(short)v4->f00;
        v1->f00 = 1;
        if (((ObjectData *)o)->f728 != 0) {
            v4->f00 = (S_vv4_0 *)(short)((ObjectData *)o)->f64;
            *(Vector3 *)&v5->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            t6 = njSin_8c37eb0c((void *)(v4->f00));
            v5->f00.f00 += t6 * 125.0f;
            v5->f00.f04 = 0.0f;
            t7 = njCos_8c38c154((void *)(v4->f00));
            v5->f00.f08 += t7 * 125.0f;
            v1->f00 = 2;
            ((ObjectData *)o)->f674 = 0;
            ((ObjectData *)o)->f64 = (int)(v4->f00);
            ((ObjectData *)o)->ff0 = 0x12;
            ((ObjectData *)o)->f3dc |= 0xc00;
        }
        t8 = signed_angle_delta((int)(((ObjectData *)o)->f64), (int)(v4->f00));
        if (t8 >= 0) {
            ((ObjectData *)o)->f678 = 1;
        } else {
            ((ObjectData *)o)->f678 = -1;
        }
        v80 = (int)v4->f00;
        ((ObjectData *)o)->f674 = (short)((ObjectData *)o)->f674;
        v22 = (float)(float)((ObjectData *)o)->f674;
        t9 = signed_angle_delta((int)(((ObjectData *)o)->f64), v80);
        ((ObjectData *)o)->f684 = -(((float)t9 - v22 * 0.5f * 35.0f) * 2.0f) / 1500.0f;
        v23 = (float)(-(v22 + ((ObjectData *)o)->f684 * 25.0f) / 35.0f);
        ((ObjectData *)o)->f680 = v23;
        ((ObjectData *)o)->f694 = 0.0f;
        ((ObjectData *)o)->f688 = v22;
        ((ObjectData *)o)->f68c = -(((ObjectData *)o)->f684 * 25.0f);
        ((ObjectData *)o)->f690 = (v22 + ((ObjectData *)o)->f680 * 0.5f * 35.0f) * 35.0f;
        ((ObjectData *)o)->f67c = (int)(((ObjectData *)o)->f64);
L_8c06a53a:;
        t10 = check_range_8c01cf68((void *)o, 5.0f);
        if (t10 != 0) {
            play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x658)), 0, 0);
        }
        t11 = check_range_8c01cf68((void *)o, 14.0f);
        if (t11 != 0) {
            create_effect((void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f740->f04), 0x40);
        }
        ((ObjectData *)o)->f694 += 1.0f;
        v39 = (float)((ObjectData *)o)->f694;
        if (!(v39 > 35.0f)) {
            ((ObjectData *)o)->f64 = (int)((((ObjectData *)o)->f680 * 0.5f * v39 + ((ObjectData *)o)->f688) * v39) + (int)((ObjectData *)o)->f67c;
            v46 = (int)0;
        } else {
            if (!(v39 > 60.0f)) {
                ((ObjectData *)o)->f64 = (int)((((ObjectData *)o)->f684 * 0.5f * (v39 - 35.0f) + ((ObjectData *)o)->f68c) * (v39 - 35.0f) + ((ObjectData *)o)->f690) + (int)((ObjectData *)o)->f67c;
                v40 = (int)0;
            } else {
                v40 = (int)1;
            }
            v46 = (int)v40;
        }
        if (v46 == 0) {
            return;
        }
        ((ObjectData *)o)->f674 = 0;
        ((ObjectData *)o)->f64 = (int)(v4->f00);
        v1->f00 = 2;
        ((ObjectData *)o)->ff0 = 0x12;
        ((ObjectData *)o)->f3dc |= 0xc00;
        return;
L_8c06a6b0:;
        t12 = check_range_8c01cf68((void *)o, 2.0f);
        if (t12 != 0) {
            play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x658)), 0, 0);
        }
        t13 = check_range_8c01cf68((void *)o, 45.0f);
        if (t13 != 0) {
            play_se_8c05fbf8(0x3000a, (void *)(((char *)o + 0x658)), 0, 0);
        }
        t14 = check_range_8c01cf68((void *)o, 14.0f);
        if (t14 == 0) {
            t15 = check_range_8c01cf68((void *)o, 53.0f);
            if (t15 == 0) {
                goto L_8c06a718;
            }
        }
        create_effect((void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f740->f04), 0x40);
L_8c06a718:;
        v59 = (S_vv59 *)v6->f00;
        if (v59 == 0) {
            if (20.0f > ((ObjectData *)o)->ff8) {
                goto L_8c06a7ba;
            }
            t16 = create_effect_7708((void *)(((char *)o + 0x42c)), (int)(((ObjectData *)o)->f740->f18), 0x40);
            v6->f00 = (S_vv6_0 *)(int)t16;
        } else {
            if (!(((ObjectData *)o)->ff8 > 40.0f)) {
                call_8c0a7608(v59, (void *)(((char *)o + 0x42c)));
            } else {
                v59->f04 |= 1;
                v6->f00 = (S_vv6_0 *)0;
            }
        }
L_8c06a7ba:;
        t17 = check_range_8c01cf68((void *)o, 47.0f);
        if (t17 == 0) {
            return;
        }
        *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&v5->f00;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(((char *)o + 0x3c)));
        t19 = normalize_xz_checked((void *)(&(&frame)->f20));
        (&frame)->f20.f04 = 0.0f;
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&v5->f00;
        (&frame)->f2c.f04 = *(float *)(g_8c284c60 + 0x4);
        t18 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x4c);
        if (t18 != 0) {
            TBoss1DragonEffBullet_ctor_8c07bdc8((void *)t18, (int)(((char *)o + 0x3e0)), (void *)(((char *)o + 0x42c)), (void *)(&(&frame)->f2c));
        }
        rotate_vector_xz((void *)(&(&frame)->f20), (void *)(&(&frame)->f14), 0x1000);
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&((ObjectData *)o)->f3c;
        (&frame)->f2c.f00 += (&frame)->f14 * t19;
        (&frame)->f2c.f04 = *(float *)(g_8c284c60 + 0x4);
        (&frame)->f2c.f08 += (&frame)->f1c * t19;
        t20 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x4c);
        if (t20 != 0) {
            TBoss1DragonEffBullet_ctor_8c07bdc8((void *)t20, (int)(((char *)o + 0x3e0)), (void *)(((char *)o + 0x42c)), (void *)(&(&frame)->f2c));
        }
        rotate_vector_xz((void *)(&(&frame)->f20), (void *)(&(&frame)->f14), -0x1000);
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&((ObjectData *)o)->f3c;
        (&frame)->f2c.f00 += (&frame)->f14 * t19;
        (&frame)->f2c.f04 = *(float *)(g_8c284c60 + 0x4);
        (&frame)->f2c.f08 += (&frame)->f1c * t19;
        t21 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x4c);
        if (t21 != 0) {
            TBoss1DragonEffBullet_ctor_8c07bdc8((void *)t21, (int)(((char *)o + 0x3e0)), (void *)(((char *)o + 0x42c)), (void *)(&(&frame)->f2c));
        }
        create_effect((void *)(((char *)o + 0x42c)), (int)(((ObjectData *)o)->f740->f1c), 0x40);
        v1->f00 = 3;
        v3->f00 = 0;
        ((ObjectData *)o)->f3dc &= -0xc01;
        return;
L_8c06a99c:;
        v3->f00 += 1;
        if (!(v3->f00 > 0xa)) {
            return;
        }
        v2->f00 += 1;
        if (v2->f00 >= 2) {
            v1->f00 = 4;
            return;
        }
        v1->f00 = 0;
        return;
    case 5:
        if (v6->f00 != 0) {
            v76 = (S_vv76 *)v6->f00;
            v76->f04 |= 1;
            v6->f00 = (S_vv6_0 *)0;
        }
        return;
    case 1:
    case 3:
    case 6:
    case 7:
    case 8:
    case 10:
        break;
    }
}

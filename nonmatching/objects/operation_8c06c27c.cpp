/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06c27c
 * function: operation_8c06c27c
 * language: c++
 * reference size: 2936 bytes
 * compiled size: 3028 bytes (+3.1%)
 * differing lines: 1044 of 1054 reference instruction lines
 * differing bytes: 2822
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +92 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2fce64 S_L8c2fce64;
typedef struct S_L8c2fce78 S_L8c2fce78;
typedef struct S_L8c2fce8c S_L8c2fce8c;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c468900 S_g8c468900;
typedef struct S_g8c468904 S_g8c468904;
typedef struct S_g8c468918 S_g8c468918;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_dc Arg0_73c_dc;
typedef struct Arg0_740 Arg0_740;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_frame_48 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_48;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    char f08;
    char f09;
    short f0a;
    short f0c;
    short f0e;
    int f10;
    float f14;
    float f18;
    char f1c;
    char f1d;
    short f1e;
    short f20;
    short f22;
    int f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    Block_frame_48 f48;
};
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
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x7c];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2ac];
    volatile unsigned short f3a8;
    char unknown3aa[0x6];
    float f3b0;
    float f3b4;
    float f3b8;
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x28];
    float f430;
    char unknown434[0x1c4];
    float f5f8;
    float f5fc;
    char unknown600[0x74];
    int f674;
    char unknown678[0x4];
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
    float f6b4;
    float f6b8;
    char unknown6bc[0x4];
    int f6c0;
    char unknown6c4[0x78];
    Arg0_73c *f73c;
    Arg0_740 *f740;
    char unknown744[0xfc];
    int f840;
    char unknown844[0x4];
    float f848;
    float f84c;
    char unknown850[0x20];
    int f870;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    float f00;
};
struct S_frame_4 {
    int f00;
};
struct S_frame_0 {
    float f00;
};
struct Arg0_740 {
    int f00;
    int f04;
};
struct S_L8c2fce64 {
    char unknown0[0xc];
    int f0c;
};
struct S_L8c2fce78 {
    char unknown0[0xc];
    int f0c;
};
struct S_L8c2fce8c {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_73c {
    char unknown0[0xdc];
    Arg0_73c_dc *fdc;
};
struct Arg0_73c_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern "C" char g_8c284c60[];
extern "C" char g_8c284c9c[];
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int signed_angle_delta(int, int);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" int operation_8c066fb8(void *, void *);
extern "C" void operation_8c01c5f0(void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect(void *, int, int);
extern "C" void advance_and_dispatch_contact(void *, float, float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c07c4b4(int, int);
extern "C" void operation_8c0a1ed0(int);
extern "C" void call_8c05b97c(Object *, void *, void *, void *);
extern "C" int operation_8c05bbf8(void);
extern "C" void set_position_8c0f3504(void *, void *);
extern "C" void call_8c0f363c(Arg0_73c *, void *, int);
extern "C" void call_8c05b54c(Object *, void *);
extern "C" int operation_8c05b90c(int);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" float operation_8c05b8e8(int, float, float);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c07c918(int, void *, void *, void *);
extern "C" void operation_8c06c27c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int v66;
    float v3;
    float v4;
    float v5;
    float v6;
    float v67;
    float v68;
    float v65;
    float v69;
    float v20;
    int v21;
    int v27;
    float v32;
    float t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    int t10;
    float t12;
    float t11;
    float t13;
    float t14;
    int t15;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x850);
    (&frame)->f04 = (S_frame_4 *)((char *)o + 0x83c);
    (&frame)->f00 = (S_frame_0 *)((char *)o + 0x854);
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
        v2->f00 = 0.0f;
        ((ObjectData *)o)->f870 = 0;
        ((ObjectData *)o)->f840 = 0;
        t1 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        (&frame)->f04->f00 = (int)(t1 * 65536.0f / 6.28318405f);
        ((ObjectData *)o)->f3c8 += 5.0f;
        v66 = (int)(&frame)->f04->f00;
        ((ObjectData *)o)->f674 = (short)((ObjectData *)o)->f674;
        v3 = (float)(float)((ObjectData *)o)->f674;
        t2 = signed_angle_delta((int)(((ObjectData *)o)->f64), v66);
        ((ObjectData *)o)->f684 = -(((float)t2 - v3 * 0.5f * 35.0f) * 2.0f) / 1500.0f;
        v4 = (float)(-(v3 + ((ObjectData *)o)->f684 * 25.0f) / 35.0f);
        ((ObjectData *)o)->f680 = v4;
        ((ObjectData *)o)->f694 = 0.0f;
        ((ObjectData *)o)->f688 = v3;
        ((ObjectData *)o)->f68c = -(((ObjectData *)o)->f684 * 25.0f);
        ((ObjectData *)o)->f690 = (v3 + ((ObjectData *)o)->f680 * 0.5f * 35.0f) * 35.0f;
        ((ObjectData *)o)->f67c = (int)(((ObjectData *)o)->f64);
        v5 = (float)13.0f;
        v5 = (float)(v5 / *(float *)0x8c284c94);
        v5 = (float)-v5;
        t3 = signed_sqrt_8c37f6c0((((ObjectData *)o)->f5fc - 169.0f / (*(float *)0x8c284c94 * 2.0f) + 2.0f) / -*(float *)0x8c284c98);
        v6 = (float)((ObjectData *)o)->f3c8;
        if (50.0f > v6) {
            v67 = (float)(v6 / (v5 + t3));
            ((ObjectData *)o)->f84c = v67;
            ((ObjectData *)o)->f848 = v67;
            (&frame)->f00->f00 = 0.0f;
        } else {
            v68 = (float)(50.0f / t3);
            ((ObjectData *)o)->f84c = v68;
            v65 = (float)((ObjectData *)o)->f3c8;
            v69 = (float)((v68 * v5 - (v65 - 50.0f)) * 2.0f / v5);
            (&frame)->f00->f00 = v69 / v5;
            ((ObjectData *)o)->f848 = v68 - v69;
        }
        v2->f00 = 13.0f;
        return;
    case 2:
        if (v1->f00 != 4) {
        } else {
            o->v93(0x1b, 6);
            (&frame)->f1c = 0x12;
            (&frame)->f1d = 5;
            (&frame)->f1e = ((ObjectData *)o)->f20;
            (&frame)->f20 = 0x1b;
            (&frame)->f22 = ((ObjectData *)o)->f698;
            (&frame)->f24 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f28 = ((ObjectData *)o)->f6ac;
            (&frame)->f2c = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f1c));
        }
        return;
    case 11:
        if (v1->f00 != 4) {
        } else {
            o->v93(0x24, 6);
            (&frame)->f08 = 0x12;
            (&frame)->f09 = 5;
            (&frame)->f0a = ((ObjectData *)o)->f20;
            (&frame)->f0c = 0x24;
            (&frame)->f0e = ((ObjectData *)o)->f698;
            (&frame)->f10 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f14 = ((ObjectData *)o)->f6ac;
            (&frame)->f18 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f08));
        }
        return;
    case 9:
        if (v1->f00 != 4) {
            return;
        }
        call_8c06741c(o);
        return;
    case 7:
        ((ObjectData *)o)->f3b0 = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f3b8 = ((ObjectData *)o)->f6b8;
        if (*(int *)0x8c2e2ad8 == 0) {
            return;
        }
        aim_direction_8c05bdd4((void *)o);
        return;
    case 6:
        t4 = operation_8c066fb8((void *)o, (void *)(((char *)o + 0x3b0)));
        if (t4 == 0) {
            ((ObjectData *)o)->f3b0 = 0.0f;
            ((ObjectData *)o)->f3b4 = 0.0f;
            ((ObjectData *)o)->f3b8 = 0.0f;
        }
        aim_direction_8c05bdd4((void *)o);
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3b0;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f3b8;
        return;
    case 0:
        operation_8c01c5f0((void *)o);
        switch (v1->f00) {
        case 0:
            t5 = check_range_8c01cf68((void *)o, 5.0f);
            if (t5 != 0) {
                play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x658)), 0, 0);
            }
            t6 = check_range_8c01cf68((void *)o, 14.0f);
            if (t6 != 0) {
                create_effect((void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f740->f04), 0x40);
            }
            ((ObjectData *)o)->f694 += 1.0f;
            v20 = (float)((ObjectData *)o)->f694;
            if (!(v20 > 35.0f)) {
                ((ObjectData *)o)->f64 = (int)((((ObjectData *)o)->f680 * 0.5f * v20 + ((ObjectData *)o)->f688) * v20) + (int)((ObjectData *)o)->f67c;
                v27 = (int)0;
            } else {
                if (!(v20 > 60.0f)) {
                    ((ObjectData *)o)->f64 = (int)((((ObjectData *)o)->f684 * 0.5f * (v20 - 35.0f) + ((ObjectData *)o)->f68c) * (v20 - 35.0f) + ((ObjectData *)o)->f690) + (int)((ObjectData *)o)->f67c;
                    v21 = (int)0;
                } else {
                    v21 = (int)1;
                }
                v27 = (int)v21;
            }
            if (v27 == 0) {
                return;
            }
            ((ObjectData *)o)->f674 = 0;
            ((ObjectData *)o)->f64 = (int)((&frame)->f04->f00);
            v1->f00 = 1;
            ((ObjectData *)o)->ff0 = 0x16;
            break;
        case 1:
            if (18.0f > ((ObjectData *)o)->ff8) {
                return;
            }
            v1->f00 = 2;
            ((ObjectData *)o)->f3dc |= 0xc00;
            play_se_8c05fbf8(0x30010, (void *)(((char *)o + 0x658)), 0, 0);
            break;
        case 2:
            v32 = (float)v2->f00;
            if (v32 > 0.0f) {
                v2->f00 = v32 + *(float *)0x8c284c94;
                ((ObjectData *)o)->f848 += (&frame)->f00->f00;
                advance_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f848);
            } else {
                v2->f00 = v32 + *(float *)0x8c284c98;
                advance_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f84c);
            }
            ((ObjectData *)o)->f5fc += v2->f00;
            ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f3c.f04 + ((ObjectData *)o)->f5fc;
            if (0.0f > v2->f00) {
                t7 = errno_wrap_8c130334(v2->f00, ((ObjectData *)o)->f848);
                if (-(int)(t7 * 65536.0f / 6.28318405f) > ((ObjectData *)o)->f60) {
                    ((ObjectData *)o)->f60 = -(int)(t7 * 65536.0f / 6.28318405f);
                }
                if (0x2800 > ((ObjectData *)o)->f840) {
                    *(int *)((char *)o + 0x840) += 0x120;
                }
                ((ObjectData *)o)->f68 += ((ObjectData *)o)->f840;
            } else {
                t8 = angle_step((int)(((ObjectData *)o)->f60), 0x4000, 0x200);
                ((ObjectData *)o)->f60 = (int)t8;
            }
            if (!(((ObjectData *)o)->f430 > (*(float *)(g_8c284c60 + 0x4) - 50.0f))) {
                v1->f00 = 3;
                play_se_8c05fbf8(0x3000f, (void *)(((char *)o + 0x658)), 0, 0);
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
                return;
            }
            ((ObjectData *)o)->ff0 = 0x17;
            break;
        case 3:
            if (!(((ObjectData *)o)->f5fc > -400.0f)) {
                v1->f00 = 4;
                ((ObjectData *)o)->f3dc &= -0x101;
            }
            if (((ObjectData *)o)->f5fc > 0.0f) {
            } else {
                if (((ObjectData *)o)->f870 != 0) {
                } else {
                    *(Vector3 *)&(&frame)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
                    (&frame)->f48.f04 = 0.0f;
                    if (0xc > ((ObjectData *)o)->f6c0) {
                        ((ObjectData *)o)->f6c0 += 1;
                        operation_8c07c4b4((int)(*(S_g8c44be98 **)0x8c44be98), (int)(&(&frame)->f48));
                    }
                    create_effect((void *)(&(&frame)->f48), (int)(((ObjectData *)o)->f740->f00), 0x40);
                    operation_8c0a1ed0(1);
                    call_8c05b97c(o, (void *)(*(S_g8c468900 **)((((S_L8c2fce64 *)0x8c2fce64)->f0c << 2) + 0x8c468900)), (void *)(*(S_g8c468904 **)((((S_L8c2fce78 *)0x8c2fce78)->f0c << 2) + 0x8c468904)), (void *)(*(S_g8c468918 **)((((S_L8c2fce8c *)0x8c2fce8c)->f0c << 2) + 0x8c468918)));
                    t9 = operation_8c05bbf8();
                    if (t9 != 0) {
                        set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(((char *)o + 0x3c)));
                        ((ObjectData *)o)->f73c->fdc->f0c = *(float *)(g_8c284c9c + 0x8);
                        ((ObjectData *)o)->f73c->fdc->f18 = 0x13a03;
                        call_8c0f363c((Arg0_73c *)(((ObjectData *)o)->f73c), (void *)((g_8c284c9c + 0xc)), 0);
                    } else {
                        call_8c05b54c(o, (void *)((void *)g_8c284c9c));
                    }
                    call_8c05b97c(o, (void *)(*(S_g8c468900 **)((*(int *)0x8c2fce64 << 2) + 0x8c468900)), (void *)(*(S_g8c468904 **)((*(int *)0x8c2fce78 << 2) + 0x8c468904)), (void *)(*(S_g8c468918 **)((*(int *)0x8c2fce8c << 2) + 0x8c468918)));
                    ((ObjectData *)o)->f870 = 1;
                    o->v97();
                    o->v100();
                    ((ObjectData *)o)->f404 = 2;
                }
            }
            t10 = operation_8c05b90c((int)o);
            t11 = njSin_8c37eb0c(t10);
            t12 = njCos_8c38c154(t10);
            (&frame)->f3c = ((ObjectData *)o)->f3b0 + t11 * 20.0f;
            (&frame)->f40 = ((ObjectData *)o)->f3b4;
            (&frame)->f44 = ((ObjectData *)o)->f3b8 + t12 * 20.0f;
            t13 = operation_8c05b8e8((int)o, 2.0f, 0.5f);
            (&frame)->f30 = t11 * t13;
            t14 = operation_8c05b8e8((int)o, 10.0f, 4.0f);
            (&frame)->f34 = t14;
            (&frame)->f38 = t12 * t13;
            t15 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x58);
            if (t15 != 0) {
                call_8c07c918(t15, (void *)(*(S_g8c44be98 **)0x8c44be98), (void *)(&(&frame)->f3c), (void *)(&(&frame)->f30));
            }
            ((ObjectData *)o)->f5fc += v2->f00;
            advance_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, ((ObjectData *)o)->f84c);
            ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f3c.f04 + ((ObjectData *)o)->f5fc;
            if (0x2800 > ((ObjectData *)o)->f840) {
                *(int *)((char *)o + 0x840) += 0x80;
            }
            ((ObjectData *)o)->f68 += ((ObjectData *)o)->f840;
            break;
        case 4:
            break;
        }
        return;
    case 5:
        ((ObjectData *)o)->f60 = 0;
        ((ObjectData *)o)->f68 = 0;
        return;
    case 1:
    case 3:
    case 8:
    case 10:
        break;
    }
}

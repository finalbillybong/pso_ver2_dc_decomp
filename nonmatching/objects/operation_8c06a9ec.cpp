/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06a9ec
 * function: operation_8c06a9ec
 * language: c++
 * reference size: 1764 bytes
 * compiled size: 1764 bytes (+0.0%)
 * differing lines: 92 of 669 reference instruction lines
 * differing bytes: 77
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
class Object;
typedef struct Block_frame_14 {
    float f00;
    float f04;
    float f08;
} Block_frame_14;
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
    char unknown48[0x18];
    int f60;
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    float ffc;
    char unknown100[0x2a8];
    volatile unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x70];
    int f670;
    char unknown674[0x24];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x184];
    int f840;
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
struct S_vv5 {
    int f00;
};
struct S_vv4 {
    float f00;
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
    Block_frame_14 f14;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern float g_8c284da8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" void seed_random_state(void *, unsigned int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c18e8a0(int, int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" int next_random_state(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TBoss1DragonEffBullet_ctor_8c07bdc8(void *, int, void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int signed_angle_delta(int, int);
extern "C" void operation_8c06a9ec(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v18;
    S_vv4 *v4;
    float v7;
    int v51;
    S_vv5 *v5;
    int *v6;
    int v13;
    float v90;
    int t1;
    S_c8c021ef8 *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    int t10;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    v3 = (S_vv3 *)((char *)o + 0x834);
    v4 = (S_vv4 *)((char *)o + 0x844);
    v5 = (S_vv5 *)((char *)o + 0x83c);
    v6 = (int *)((char *)o + 0x840);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x16;
        o->v102();
        ((ObjectData *)o)->f404 = 1;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40 + 180.0f;
        ((ObjectData *)o)->f5fc = 180.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x281;
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = 0;
        v5->f00 = 0;
        v4->f00 = 13.0f;
        return;
    case 2:
    case 11:
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
        return;
    case 9:
        if (v1->f00 != 6) {
            return;
        }
        call_8c06741c(o);
        return;
    case 7:
        seed_random_state((void *)(((char *)o + 0x744)), (unsigned int)((int)(((ObjectData *)o)->f6b4 * 100.0f) << 0x10 | (unsigned short)(int)(((ObjectData *)o)->f6b8 * 100.0f)));
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (18.0f > ((ObjectData *)o)->ff8) {
                goto L_8c06b00c;
            }
            v1->f00 = 1;
            play_se_8c05fbf8(0x30010, (void *)(((char *)o + 0x658)), 0, 0);
            break;
        case 1:
            operation_8c01c5f0(o);
            v7 = (float)((ObjectData *)o)->ff8;
            if (v7 > 22.0f) {
                ((ObjectData *)o)->f60 = (int)((v7 - 22.0f) / (((ObjectData *)o)->ffc - 22.0f) * -16384.0f);
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
                goto L_8c06b00c;
            }
            ((ObjectData *)o)->ff0 = 0x18;
            v1->f00 = 2;
            break;
        case 2:
            operation_8c01c5f0(o);
            ((ObjectData *)o)->f60 = 0;
            if (!(((ObjectData *)o)->ff8 > 22.0f)) {
                goto L_8c06b00c;
            }
            v5->f00 = 0x1000;
            v1->f00 = 3;
            ((ObjectData *)o)->f670 = 1;
            break;
        case 3:
            v5->f00 += 0x40;
            v13 = (int)0x2000;
            if (v5->f00 > v13) {
                v5->f00 = (int)v13;
            }
            v2->f00 += 1;
            if (v2->f00 >= 4) {
                v2->f00 = 0;
                v3->f00 += 1;
                if (v3->f00 >= 0x28) {
                    v1->f00 = 4;
                    ((ObjectData *)o)->f670 = 0;
                }
                v18 = (int)0;
                if (((v3->f00 & 1)) == 0) {
                    t1 = call_8c18e8a0((int)(v3->f00 >> 1), 4);
                    t2 = lookup_low_id((int)((unsigned short)t1));
                    t3 = active_unflagged_8c05b2dc((void *)t2);
                    if (t3 != 0) {
                        *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&t2->f3c;
                        t4 = next_random_state((void *)(((char *)o + 0x744)));
                        { float d = ((float)(unsigned int)((unsigned int)t4 >> 0x10) / 65536.0f - 0.5f) * 100.0f; (&frame)->f14.f00 += d; }
                        t5 = next_random_state((void *)(((char *)o + 0x744)));
                        { float d = ((float)(unsigned int)((unsigned int)t5 >> 0x10) / 65536.0f - 0.5f) * 100.0f; (&frame)->f14.f08 += d; }
                        v18 = (int)1;
                    }
                }
                if (v18 == 0) {
                    t6 = next_random_state((void *)(((char *)o + 0x744)));
                    (&frame)->f14.f00 = ((float)(unsigned int)((unsigned int)t6 >> 0x10) / 65536.0f - 0.5f) * 700.0f;
                    (&frame)->f14.f04 = 0.0f;
                    t7 = next_random_state((void *)(((char *)o + 0x744)));
                    (&frame)->f14.f00 = ((float)(unsigned int)((unsigned int)t7 >> 0x10) / 65536.0f - 0.5f) * 700.0f;
                }
                t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x4c);
                if (t8 != 0) {
                    TBoss1DragonEffBullet_ctor_8c07bdc8((void *)t8, (int)(((char *)o + 0x3e0)), (void *)(((char *)o + 0x42c)), (void *)(&(&frame)->f14));
                }
            }
            ((ObjectData *)o)->f60 -= v5->f00;
            break;
        case 4:
            v5->f00 -= 0x50;
            v13 = v5->f00;
            v51 = (int)0x1300;
            if (v51 > v13) {
                v5->f00 = (int)v51;
                ((ObjectData *)o)->f60 -= v5->f00;
                if (!(v51 >= (((ObjectData *)o)->f60 & 0xffff))) {
                    if (!((((ObjectData *)o)->f60 & 0xffff) >= 0xed00)) {
                        goto L_8c06b00c;
                    }
                }
                ((ObjectData *)o)->f60 = 0;
                t9 = errno_wrap_8c130334(-((ObjectData *)o)->f3c, -((ObjectData *)o)->f44);
                *v6 = (int)(t9 * 65536.0f / 6.28318405f);
                v1->f00 = 5;
                goto L_8c06b00c;
            }
            ((ObjectData *)o)->f60 -= v13;
            break;
        case 5:
            operation_8c01c5f0(o);
            t10 = signed_angle_delta((int)(((ObjectData *)o)->f64), *v6);
            v90 = (float)((float)t10 * 0.3f);
            if (512.0f > v90) {
                if (!(-512.0f > v90)) {
                    goto L_8c06afd0;
                }
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
L_8c06afd0:;
                ((ObjectData *)o)->f64 = *v6;
                v1->f00 = 6;
                goto L_8c06b00c;
            }
            ((ObjectData *)o)->f64 += (int)v90;
            break;
        case 6:
            operation_8c01c5f0(o);
        }
L_8c06b00c:;
        if (v1->f00 != 1) {
            if (v1->f00 != 2) {
                goto L_8c06b044;
            }
        }
        v4->f00 += g_8c284da8;
        if (0.0f > v4->f00) {
            v4->f00 = 0.0f;
        }
        ((ObjectData *)o)->f5fc += v4->f00;
        if (!(((ObjectData *)o)->f5fc > 180.0f)) {
            ((ObjectData *)o)->f5fc = 180.0f;
        }
L_8c06b044:;
        if (v1->f00 != 3) {
            if (!((unsigned int)1 >= (unsigned int)(v1->f00 + -4))) {
                goto L_8c06b06e;
            }
        }
        ((ObjectData *)o)->f5fc -= 1.0f;
        if (180.0f > ((ObjectData *)o)->f5fc) {
            ((ObjectData *)o)->f5fc = 180.0f;
        }
L_8c06b06e:;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f5fc;
        return;
    case 5:
        ((ObjectData *)o)->f60 = 0;
        ((ObjectData *)o)->fe8 = (unsigned int)((ObjectData *)o)->fe8 >> 1 << 1;
        ((ObjectData *)o)->f670 = 0;
        return;
    case 1:
    case 3:
    case 8:
    case 10:
        break;
    }
}

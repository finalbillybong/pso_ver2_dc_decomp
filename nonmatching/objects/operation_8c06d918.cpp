/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06d918
 * function: operation_8c06d918
 * language: c++
 * reference size: 1400 bytes
 * compiled size: 1400 bytes (+0.0%)
 * differing lines: 172 of 508 reference instruction lines
 * differing bytes: 165
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46891c S_g8c46891c;
typedef struct Arg0_6a4 Arg0_6a4;
typedef struct Arg0_6f4 Arg0_6f4;
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_0 Arg0_73c_0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv14_0 S_vv14_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_0 S_vv6_0;
class Object;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    float f08;
    char unknownc[0x8];
} Block_frame_c;
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
    char unknown48[0x360];
    volatile unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x8];
    Arg0_6a4 *f6a4;
    char unknown6a8[0x4];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x38];
    Arg0_6f4 *f6f4;
    int f6f8;
    char unknown6fc[0x40];
    Arg0_73c *f73c;
    char unknown740[0x13c];
    int f87c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv4 {
    float f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv5 {
    float f00;
};
struct S_vv6 {
    S_vv6_0 *f00;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    char f20;
    char f21;
    short f22;
    short f24;
    short f26;
    int f28;
    float f2c;
    float f30;
};
struct S_g8c46891c {
    char unknown0[0x8];
    float f08;
};
struct Arg0_73c_0 {
    char unknown0[0xc];
    float f0c;
};
struct S_vv14_0 {
    char unknown0[0x18];
    int f18;
};
extern Block20 g_8c2fd304;
extern S_g8c418248 *g_8c418248;
extern S_g8c46891c *g_8c46891c;
extern "C" void process_entries_8c0731d8(void *);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" float object_random_fraction(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void activate_offset_effect_immediately(void *);
extern "C" float call_8c130334(float, float);
extern "C" int offset_effect_threshold_reached(void *);
extern "C" int operation_8c05bbf8(void);
extern "C" void set_position_8c0f3504(void *, void *);
extern "C" void call_8c0f3514(void *, void *, void *, int);
extern "C" void call_8c05b338(Object *, void *, void *, void *);
extern "C" int lookup_low_id(int);
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, int);
extern "C" float normalize_vector_checked(void *);
extern "C" void operation_8c191654(int, int, int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void TObjBoss1MokoHill_Solo_create_8c0ccdc0(void *);
extern "C" void operation_8c06d918(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv3 *v3;
    int v8;
    char *v9;
    int v10;
    int v13;
    char *v14;
    char *v12;
    int v24;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    int t6;
    int t7;
    int t8;
    float t9;
    float t10;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    v3 = (S_vv3 *)((char *)o + 0x844);
    v4 = (S_vv4 *)((char *)o + 0x848);
    v5 = (S_vv5 *)((char *)o + 0x84c);
    v6 = (S_vv6 *)((char *)o + 0x83c);
    switch (a1) {
    case 4:
        o->v102();
        ((ObjectData *)o)->f404 = 2;
        *(int *)((char *)o + 0x3dc) &= -0x101;
        *(float *)((char *)o + 0x5f8) = ((ObjectData *)o)->f3c.f04 + -400.0f;
        *(float *)((char *)o + 0x5fc) = -400.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x381;
        o->v97();
        o->v100();
        process_entries_8c0731d8((void *)(((ObjectData *)o)->f6a4));
        v1->f00 = 0;
        v2->f00 = 0;
        v4->f00 = (float)((ObjectData *)o)->f6f8 * 4.0f + 4.0f;
        v3->f00 = v4->f00 * 2.5f;
        v5->f00 = 350.0f;
        v6->f00 = (S_vv6_0 *)0;
        return;
    case 2:
    case 11:
        o->v93(0x1b, 6);
        (&frame)->f20 = 0x12;
        (&frame)->f21 = 5;
        (&frame)->f22 = ((ObjectData *)o)->f20;
        (&frame)->f24 = 0x1b;
        (&frame)->f26 = ((ObjectData *)o)->f698;
        (&frame)->f28 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f2c = ((ObjectData *)o)->f6ac;
        (&frame)->f30 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->f20));
        return;
    case 9:
        if (((ObjectData *)o)->f87c != 0) {
            call_8c06741c(o);
            ((ObjectData *)o)->f87c = 0;
            return;
        }
        if (v1->f00 != 2) {
            return;
        }
        call_8c06741c(o);
        return;
    case 6:
        t10 = object_random_fraction((void *)o);
        v8 = (int)(int)(t10 * 65536.0f);
        t1 = njSin_8c37eb0c(v8);
        ((ObjectData *)o)->f3c.f00 = t1 * 350.0f;
        t2 = njCos_8c38c154(v8);
        ((ObjectData *)o)->f3c.f08 = t2 * 350.0f;
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c.f00;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f3c.f08;
        return;
    case 0:
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c06dc5c;
            }
            if (v1->f00 == 2) {
                return;
            }
            return;
        }
        v2->f00 += 1;
        v9 = (char *)v2->f00;
        if (60.0f > (float)(int)v9) {
            return;
        }
        v2->f00 = 0;
        v1->f00 = 1;
        activate_offset_effect_immediately((void *)(((ObjectData *)o)->f6f4));
        ((ObjectData *)o)->f3c.f00 = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f3c.f08 = ((ObjectData *)o)->f6b8;
        t3 = call_8c130334(((ObjectData *)o)->f3c.f00, ((ObjectData *)o)->f3c.f08);
        v6->f00 = (S_vv6_0 *)(int)(t3 * 65536.0f / 6.28318405f);
        return;
L_8c06dc5c:;
        v10 = (int)(int)(v3->f00 / v5->f00 * 65536.0f / 6.28318405f);
        v6->f00 = (S_vv6_0 *)((int)v6->f00 + v10);
        t4 = njSin_8c37eb0c((int)(v6->f00));
        ((ObjectData *)o)->f3c.f00 = v5->f00 * t4;
        t5 = njCos_8c38c154((int)(v6->f00));
        ((ObjectData *)o)->f3c.f08 = v5->f00 * t5;
        v5->f00 -= (float)v10 * 0.00106811523f;
        if (5.0f > v5->f00) {
            v1->f00 = 2;
        }
        if (((ObjectData *)o)->f6f4 != 0) {
            t6 = offset_effect_threshold_reached((void *)(((ObjectData *)o)->f6f4));
            if (t6 != 0) {
                *(Block20 *)&(&frame)->f0c = *(Block20 *)&g_8c2fd304;
                (&frame)->f0c.f04 = g_8c46891c->f08;
                t7 = operation_8c05bbf8();
                if (t7 != 0) {
                    v12 = (char *)((ObjectData *)o)->f6a4;
                    set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(((char *)o + 0x3c)));
                    v13 = (int)0xdc;
                    (*(Arg0_73c_0 **)((char *)((char *)((ObjectData *)o)->f73c + 0x0) + (v13)))->f0c = (&frame)->f0c.f08;
                    v14 = (char *)((ObjectData *)o)->f73c;
                    (*(S_vv14_0 **)((char *)((char *)v14 + 0x0) + (v13)))->f18 = 0x13a03;
                    call_8c0f3514((void *)(((ObjectData *)o)->f73c), (void *)(((char *)(&frame) + 0x18)), (void *)(&(&frame)->f0c), (int)(v12));
                } else {
                    call_8c05b338(o, (void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f0c), (void *)(((ObjectData *)o)->f6a4));
                }
            }
        }
        v2->f00 += 1;
        if (v2->f00 > 0xa) {
            t8 = lookup_low_id((int)g_8c418248);
            if (t8 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)(t8 + 0x3c));
                t9 = normalize_vector_checked((void *)(&frame));
                if (!(700.0f > t9)) {
                    v24 = (int)1;
                } else {
                    v24 = (int)(7 - (int)(t9 * 6.0f / 700.0f));
                }
                operation_8c191654(v24, 0xf, 3);
            }
            v2->f00 = 0;
        }
        call_8c05fd7c(0x30011, o, (void *)(((char *)o + 0x658)), 0, 0);
        return;
    case 5:
        o->v98();
        o->v99();
        TObjBoss1MokoHill_Solo_create_8c0ccdc0((void *)(((ObjectData *)o)->f6f4));
        return;
    case 1:
    case 3:
    case 7:
    case 8:
    case 10:
        break;
    }
}

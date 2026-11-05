/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c149af0
 * function: operation_8c149af0
 * language: c++
 * reference size: 2484 bytes
 * compiled size: 2660 bytes (+7.1%)
 * differing lines: 1228 of 955 reference instruction lines
 * differing bytes: 2559
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +176 bytes
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct S_frame_8 S_frame_8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da36c S_g8c4da36c;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_6d8 Arg0_6d8;
typedef struct Arg0_6e8 Arg0_6e8;
typedef struct Arg0_6ec Arg0_6ec;
typedef struct Arg0_6f0 Arg0_6f0;
typedef struct Arg0_75c Arg0_75c;
typedef struct Arg0_s514 Arg0_s514;
typedef struct Arg0_s744 Arg0_s744;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv30 S_vv30;
typedef struct S_vv57 S_vv57;
typedef struct S_vv59 S_vv59;
typedef struct S_vv63 S_vv63;
typedef struct S_vv66 S_vv66;
typedef struct S_x57072 S_x57072;
class Object;
class Arg0_600;
typedef struct Block_p0_744 {
    float f00;
    char unknown4[0x8];
} Block_p0_744;
typedef struct Block_p0_6dc {
    float f00;
    float f04;
    float f08;
} Block_p0_6dc;
typedef struct Block_frame_5c {
    float f00;
    float f04;
    float f08;
} Block_frame_5c;
typedef struct Block_frame_50 {
    float f00;
    float f04;
    float f08;
} Block_frame_50;
typedef struct Block_p0_508 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_508;
typedef struct Block_frame_20 {
    float f00;
    float f04;
    float f08;
} Block_frame_20;
typedef struct Block_frame_2c {
    float f00;
    float f04;
    float f08;
} Block_frame_2c;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0xc];
} Block_frame_c;
typedef struct Block_frame_44 {
    float f00;
    float f04;
    float f08;
} Block_frame_44;
struct Frame {
    int f00;
    S_frame_4 *f04;
    S_frame_8 *f08;
    Block_frame_c f0c;
    Block_frame_20 f20;
    Block_frame_2c f2c;
    float f38;
    float f3c;
    float f40;
    Block_frame_44 f44;
    Block_frame_50 f50;
    Block_frame_5c f5c;
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
    Vector3 f3c;
    char unknown48[0x20];
    int f68;
    char unknown6c[0x7c];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2b0];
    Arg0_3ac *f3ac;
    char unknown3b0[0x2c];
    int f3dc;
    char unknown3e0[0x128];
    Block_p0_508 f508;
    float f514;
    char unknown518[0x15c];
    int f674;
    char unknown678[0x4c];
    float f6c4;
    char unknown6c8[0x10];
    Arg0_6d8 *f6d8;
    Block_p0_6dc f6dc;
    Arg0_6e8 *f6e8;
    Arg0_6ec *f6ec;
    Arg0_6f0 *f6f0;
    char unknown6f4[0x8];
    int f6fc;
    int f700;
    char unknown704[0x18];
    float f71c;
    float f720;
    char unknown724[0x20];
    Block_p0_744 f744;
    char unknown750[0xc];
    Arg0_75c *f75c;
    char unknown760[0x18];
    int f778;
} ObjectData;
struct S_x57072 {
    Vector3 f00;
};
struct S_vv1 {
    int f00;
};
struct S_frame_8 {
    int f00;
};
struct S_frame_4 {
    int f00;
};
struct Arg0_s744 {
    char unknown0[0x4];
    float f04;
    float f08;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_s514 {
    char unknown0[0x4];
    float f04;
    float f08;
};
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
struct S_vv30 {
    Vector3 f00;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
struct S_g8c4da36c {
    float f00;
};
struct S_vv57 {
    char unknown0[0x4];
    short f04;
};
struct S_vv59 {
    char unknown0[0x4];
    short f04;
};
struct S_vv63 {
    char unknown0[0x4];
    short f04;
};
struct S_vv66 {
    char unknown0[0x4];
    short f04;
};
class Arg0_600 {
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
typedef struct Arg0_600Data {

} Arg0_600Data;
extern Block20 g_8c286380;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da36c *g_8c4da36c;
extern "C" char g_8c286300[];
extern "C" void process_entries_8c0731d8(void *);
extern "C" void send_code_8c14472c(void *, int);
extern "C" void operation_8c144d8c(void *);
extern "C" void operation_8c01c5f0(void *);
extern "C" int active_unflagged_8c05b258(void *);
extern "C" void operation_8c185bec(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int operation_8c05bbf8(void);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void set_effect_bit0(void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void normalize_xz_checked(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void create_effect(void *, int, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" float normalize_vector_checked(void *);
extern "C" S_c8c011214 *operation_8c011214(int, int, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c185d30(void *, int, int, int);
extern "C" void operation_8c185e30(void *, void *);
extern "C" void call_8c05b338(Object *, S_vv30 *, void *, void *);
extern "C" void call_8c05fd7c(int, Object *, S_vv30 *, int, int);
extern "C" void operation_8c144ae0(int);
extern "C" void operation_8c185bf4(void *);
extern "C" void operation_8c149af0(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v5;
    S_vv13 *v13;
    float v69;
    float v70;
    float v71;
    float v29;
    S_vv30 *v30;
    float v31;
    float v33;
    float v34;
    int v35;
    float v36;
    float v45;
    S_vv57 *v57;
    S_vv59 *v59;
    S_vv63 *v63;
    S_vv66 *v66;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    float t6;
    S_c8c011214 *t7;
    int t8;
    int t9;
    int t10;
    v1 = (S_vv1 *)((char *)o + 0x704);
    (&frame)->f08 = (S_frame_8 *)((char *)o + 0x708);
    (&frame)->f04 = (S_frame_4 *)((char *)o + 0x714);
    switch (a1) {
    case 4:
        *(int *)((char *)o + 0x3dc) &= -5;
        ((ObjectData *)o)->f3dc |= 0x100;
        o->v102();
        (&frame)->f00 = 0;
        goto L_8c149bf6;
        do {
            (*(Arg0_600 **)((char *)((char *)o + 0x600) + ((&frame)->f00 << 2)))->v102();
            (&frame)->f00 += 1;
L_8c149bf6:;
        } while (0xa > (&frame)->f00);
        ((ObjectData *)o)->ff0 = 0xf;
        ((ObjectData *)o)->f674 = 3;
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((S_x57072 *)(((ObjectData *)o)->f674 * 0xc + g_8c286300))->f00;
        ((ObjectData *)o)->f6c4 = 0.0f;
        ((ObjectData *)o)->f68 = 0;
        process_entries_8c0731d8((void *)(((ObjectData *)o)->f6e8));
        ((ObjectData *)o)->f700 = 0;
        v1->f00 = 0;
        (&frame)->f08->f00 = 0;
        (&frame)->f04->f00 = 0;
        ((ObjectData *)o)->f71c = 0.0f;
        ((ObjectData *)o)->f720 = 0.0f;
        ((ObjectData *)o)->f744.f00 = 0.0f;
        ((Arg0_s744 *)((char *)o + 0x744))->f04 = 0.0f;
        ((Arg0_s744 *)((char *)o + 0x744))->f08 = 0.0f;
        ((ObjectData *)o)->f75c = (Arg0_75c *)0;
        return;
    case 2:
        if (((ObjectData *)o)->f700 != 4) {
            return;
        }
        if (((ObjectData *)o)->f6fc >= 4) {
            send_code_8c14472c((void *)o, 0x1c);
            return;
        }
        send_code_8c14472c((void *)o, 0x1b);
        return;
    case 9:
        if (((ObjectData *)o)->f700 != 4) {
            return;
        }
        operation_8c144d8c((void *)o);
        return;
    case 0:
        operation_8c01c5f0((void *)o);
        ((ObjectData *)o)->f778 = 6;
        if (((ObjectData *)o)->f700 != 0) {
            if (((ObjectData *)o)->f700 == 1) {
                goto L_8c149e28;
            }
            if (((ObjectData *)o)->f700 == 2) {
                goto L_8c14a028;
            }
            if (((ObjectData *)o)->f700 == 3) {
                goto L_8c14a3e4;
            }
            return;
        }
        v1->f00 += 1;
        v5 = (int)v1->f00;
        if (!(v5 >= 0x14)) {
            return;
        }
        v1->f00 = 0;
        ((ObjectData *)o)->f700 = 1;
        process_entries_8c0731d8((void *)(((ObjectData *)o)->f6e8));
        ((ObjectData *)o)->ff0 = 0xd;
        t1 = active_unflagged_8c05b258((void *)(((ObjectData *)o)->f3ac));
        if (t1 != 0) {
            *(Vector3 *)&((ObjectData *)o)->f744 = *(Vector3 *)&((ObjectData *)o)->f3ac->f3c;
        } else {
            ((ObjectData *)o)->f744.f00 = 0.0f;
            ((Arg0_s744 *)((char *)o + 0x744))->f04 = 0.0f;
            ((Arg0_s744 *)((char *)o + 0x744))->f08 = 0.0f;
        }
        *(Vector3 *)&((ObjectData *)o)->f6dc = *(Vector3 *)&((ObjectData *)o)->f508;
        ((ObjectData *)o)->f6dc.f00 += ((ObjectData *)o)->f514 * 30.0f;
        ((ObjectData *)o)->f6dc.f04 += ((Arg0_s514 *)((char *)o + 0x514))->f04 * 30.0f;
        ((ObjectData *)o)->f6dc.f08 += ((Arg0_s514 *)((char *)o + 0x514))->f08 * 30.0f;
        operation_8c185bec((void *)(((ObjectData *)o)->f6d8));
        ((ObjectData *)o)->f3dc |= 0x10;
        play_se_8c05fbf8(0x30009, (void *)(((char *)o + 0x538)), 0, 0);
        return;
L_8c149e28:;
        if (((ObjectData *)o)->f6fc != 0) {
            t2 = operation_8c05bbf8();
            if (t2 != 0) {
                ((ObjectData *)o)->ff8 = 13.0f;
            }
        }
        if (!(((ObjectData *)o)->ff8 > 12.0f)) {
            if (((ObjectData *)o)->f75c == 0) {
                t3 = create_effect_7708((void *)(((char *)o + 0x508)), 0x122, 0x40);
                ((ObjectData *)o)->f75c = (Arg0_75c *)(int)t3;
                if (((ObjectData *)o)->f75c == 0) {
                    goto L_8c149f30;
                }
                set_effect_bit0((void *)(((ObjectData *)o)->f75c));
                goto L_8c149f30;
            }
            *(Vector3 *)&(&frame)->f5c = *(Vector3 *)&((ObjectData *)o)->f508;
            (&frame)->f5c.f00 += ((ObjectData *)o)->f514 * 5.0f * 2.0f;
            (&frame)->f5c.f04 += ((Arg0_s514 *)((char *)o + 0x514))->f04 * 5.0f;
            (&frame)->f5c.f08 += ((Arg0_s514 *)((char *)o + 0x514))->f08 * 5.0f;
            call_8c0a7608((void *)(((ObjectData *)o)->f75c), (void *)(&(&frame)->f5c));
        } else {
            if (((ObjectData *)o)->f75c != 0) {
                v13 = (S_vv13 *)((ObjectData *)o)->f75c;
                v13->f04 |= 1;
                ((ObjectData *)o)->f75c = (Arg0_75c *)0;
            }
        }
L_8c149f30:;
        *(Vector3 *)&((ObjectData *)o)->f6dc = *(Vector3 *)&((ObjectData *)o)->f508;
        ((ObjectData *)o)->f6dc.f00 += ((ObjectData *)o)->f514 * 30.0f;
        ((ObjectData *)o)->f6dc.f04 += ((Arg0_s514 *)((char *)o + 0x514))->f04 * 30.0f;
        ((ObjectData *)o)->f6dc.f08 += ((Arg0_s514 *)((char *)o + 0x514))->f08 * 30.0f;
        if (13.0f > ((ObjectData *)o)->ff8) {
        } else {
            ((ObjectData *)o)->ff8 = 13.0f;
            ((ObjectData *)o)->f700 = 2;
            vector_sub_in_place_8c37f6f0((void *)(((char *)o + 0x744)), (void *)(((char *)o + 0x508)));
            normalize_xz_checked((void *)(((char *)o + 0x744)));
            ((Arg0_s744 *)((char *)o + 0x744))->f04 = 0.0f;
            t4 = errno_wrap_8c130334(((ObjectData *)o)->f744.f00, ((Arg0_s744 *)((char *)o + 0x744))->f08);
            (&frame)->f04->f00 = (int)(t4 * 65536.0f / 6.28318405f);
            ((ObjectData *)o)->f71c = 80.0f;
            create_effect((void *)(((char *)o + 0x508)), 0x126, 0x40);
        }
        return;
L_8c14a028:;
        ((ObjectData *)o)->ff8 = 13.0f;
        ((ObjectData *)o)->f71c += 30.0f;
        if (((ObjectData *)o)->f75c == 0) {
            t5 = create_effect_7708((void *)(((char *)o + 0x508)), 0x177, 0x40);
            ((ObjectData *)o)->f75c = (Arg0_75c *)(int)t5;
            if (((ObjectData *)o)->f75c == 0) {
                goto L_8c14a0e8;
            }
            set_effect_bit0((void *)(((ObjectData *)o)->f75c));
        } else {
            *(Vector3 *)&(&frame)->f50 = *(Vector3 *)&((ObjectData *)o)->f508;
            (&frame)->f50.f00 += ((ObjectData *)o)->f514 * 5.0f * 2.0f;
            (&frame)->f50.f04 += ((Arg0_s514 *)((char *)o + 0x514))->f04 * 5.0f;
            (&frame)->f50.f08 += ((Arg0_s514 *)((char *)o + 0x514))->f08 * 5.0f;
            call_8c0a7608((void *)(((ObjectData *)o)->f75c), (void *)(&(&frame)->f50));
        }
L_8c14a0e8:;
        v69 = (float)((ObjectData *)o)->f71c;
        v70 = (float)((ObjectData *)o)->f508.f04;
        (&frame)->f44.f00 = ((ObjectData *)o)->f744.f00 * v69;
        v71 = (float)(-10.0f - v70);
        (&frame)->f44.f04 = v71;
        (&frame)->f44.f08 = ((Arg0_s744 *)((char *)o + 0x744))->f08 * v69;
        v29 = (float)((10.0f - v70) / v71);
        (&frame)->f38 = (&frame)->f44.f00 * v29;
        v30 = (S_vv30 *)((char *)o + 0x750);
        (&frame)->f3c = (&frame)->f44.f04 * v29;
        (&frame)->f40 = (&frame)->f44.f08 * v29;
        call_8c3bdf60((void *)(&(&frame)->f38), (void *)(((char *)o + 0x508)));
        *(Vector3 *)&v30->f00 = *(Vector3 *)&(&frame)->f44;
        call_8c3bdf60((void *)v30, (void *)(((char *)o + 0x508)));
        ((ObjectData *)o)->f720 += 5.0f;
        v31 = (float)((ObjectData *)o)->f720;
        if (!(20.0f > v31)) {
            ((ObjectData *)o)->f720 = v31 - 20.0f;
        }
        v33 = (float)((ObjectData *)o)->f720;
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&((ObjectData *)o)->f508;
        *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&v30->f00;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(&(&frame)->f2c));
        t6 = normalize_vector_checked((void *)(&(&frame)->f20));
        v34 = (float)((&frame)->f20.f00 * v33 + (&frame)->f2c.f00);
        (&frame)->f2c.f00 = v34;
        v35 = (int)0x176;
        (&frame)->f2c.f04 += (&frame)->f20.f04 * v33;
        (&frame)->f2c.f08 += (&frame)->f20.f08 * v33;
        (&frame)->f20.f00 *= 20.0f;
        (&frame)->f20.f04 *= 20.0f;
        (&frame)->f20.f08 *= 20.0f;
        v45 = (float)v33;
        goto L_8c14a28a;
        v36 = (float)v33;
        do {
            create_effect((void *)(&(&frame)->f2c), v35, 0x40);
            call_8c3bdf60((void *)(&(&frame)->f2c), (void *)(&(&frame)->f20));
            v45 = (float)(v36 + 20.0f);
L_8c14a28a:;
            v36 = (float)v45;
        } while (t6 > v45);
        t7 = operation_8c011214((int)(&(&frame)->f38), (int)v30, 0x16ef);
        if (t7 != 0) {
            *(Vector3 *)&v30->f00 = *(Vector3 *)&t7->f04->f00;
            if (((ObjectData *)o)->f6ec == 0) {
                t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x128);
                if (t8 != 0) {
                    operation_8c185d30((void *)t8, (int)o, 6, 0x124);
                }
                ((ObjectData *)o)->f6ec = (Arg0_6ec *)(int)t8;
            } else {
                operation_8c185e30((void *)(((ObjectData *)o)->f6ec), (void *)v30);
            }
            if (((ObjectData *)o)->f6f0 == 0) {
                t9 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x128);
                if (t9 != 0) {
                    operation_8c185d30((void *)t9, (int)o, 0xf, 0x125);
                }
                ((ObjectData *)o)->f6f0 = (Arg0_6f0 *)(int)t9;
            } else {
                operation_8c185e30((void *)(((ObjectData *)o)->f6f0), (void *)v30);
            }
        }
        *(Block20 *)&(&frame)->f0c = *(Block20 *)&g_8c286380;
        (&frame)->f0c.f04 = g_8c4da36c->f00;
        call_8c05b338(o, v30, (void *)(&(&frame)->f0c), (void *)(((ObjectData *)o)->f6e8));
        call_8c05fd7c(0x3000a, o, v30, 0, 0);
        if (500.0f > ((ObjectData *)o)->f71c) {
            return;
        }
        ((ObjectData *)o)->f71c = 500.0f;
        ((ObjectData *)o)->f700 = 3;
        v57 = (S_vv57 *)((ObjectData *)o)->f75c;
        if (v57 == 0) {
            return;
        }
        v57->f04 |= 1;
        ((ObjectData *)o)->f75c = (Arg0_75c *)0;
        return;
L_8c14a3e4:;
        t10 = operation_8c05bbf8();
        if (t10 != 0) {
            ((ObjectData *)o)->f700 = 4;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        ((ObjectData *)o)->f700 = 4;
        return;
    case 6:
        operation_8c144ae0((int)o);
        return;
    case 5:
        ((ObjectData *)o)->f6fc += 1;
        operation_8c185bf4((void *)(((ObjectData *)o)->f6d8));
        ((ObjectData *)o)->f3dc &= -0x11;
        if (((ObjectData *)o)->f75c != 0) {
            v59 = (S_vv59 *)((ObjectData *)o)->f75c;
            v59->f04 |= 1;
            ((ObjectData *)o)->f75c = (Arg0_75c *)0;
        }
        if (((ObjectData *)o)->f6ec != 0) {
            v63 = (S_vv63 *)((ObjectData *)o)->f6ec;
            v63->f04 |= 1;
            ((ObjectData *)o)->f6ec = (Arg0_6ec *)0;
        }
        if (((ObjectData *)o)->f6f0 != 0) {
            v66 = (S_vv66 *)((ObjectData *)o)->f6f0;
            v66->f04 |= 1;
            ((ObjectData *)o)->f6f0 = (Arg0_6f0 *)0;
        }
        return;
    case 1:
    case 3:
    case 7:
    case 8:
        break;
    }
}

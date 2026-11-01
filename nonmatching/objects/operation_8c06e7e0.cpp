/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06e7e0
 * function: operation_8c06e7e0
 * language: c++
 * reference size: 1944 bytes
 * compiled size: 1944 bytes (+0.0%)
 * differing lines: 108 of 717 reference instruction lines
 * differing bytes: 150
 * provenance: generator draft (mode bgotoext)
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_L8c468904 S_L8c468904;
typedef struct S_L8c468904_10 S_L8c468904_10;
typedef struct Frame Frame;
typedef struct S_g8c468904 S_g8c468904;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_dc Arg0_73c_dc;
typedef struct Arg0_740 Arg0_740;
typedef struct S_vv1 S_vv1;
typedef struct S_vv17 S_vv17;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv36 S_vv36;
typedef struct S_vv4 S_vv4;
typedef struct S_vv41 S_vv41;
typedef struct S_vv45 S_vv45;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
class Object;
typedef struct Block_frame_3c {
    char unknown0[0x8];
    float f08;
    char unknownc[0x8];
} Block_frame_3c;
typedef struct Block_frame_28 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x8];
} Block_frame_28;
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
    virtual void v81(int);
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
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
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
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    char unknown6b4[0x74];
    int f728;
    char unknown72c[0x10];
    Arg0_73c *f73c;
    Arg0_740 *f740;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
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
    char f14;
    char f15;
    short f16;
    short f18;
    short f1a;
    int f1c;
    float f20;
    float f24;
    Block_frame_28 f28;
    Block_frame_3c f3c;
    Vector3 f50;
    int f5c;
    char unknown60[0x4];
    int f64;
    char f68;
    char f69;
    short f6a;
    float f6c;
    float f70;
};
struct Arg0_740 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c468904 {
    S_g8c468904 *f00;
    char unknown4[0xc];
    S_L8c468904_10 *f10;
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
struct S_vv36 {
    char unknown0[0x20];
    short f20;
};
struct S_vv41 {
    char unknown0[0x20];
    short f20;
};
struct S_vv45 {
    char unknown0[0x4];
    short f04;
};
extern Block20 g_8c284c80;
extern Vector3 g_8c284cc4;
extern Vector3 g_8c284cd0;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_L8c468904 g_8c468904;
extern "C" char g_8c2fd350[];
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" int operation_8c05bbf8(void);
extern "C" void operation_8c0a2144(int);
extern "C" void call_8c0a5400(void *, int);
extern "C" void set_view_offsets(void *, void *, void *);
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" void operation_8c191654(int, int, int);
extern "C" void call_8c0c5094(void *, void *, void *);
extern "C" int create_effect_78d0(void *, void *, int, int);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void set_effect_words(void *, void *);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void operation_8c05b950(void *, int, void *, int);
extern "C" void set_position_8c0f3504(void *, void *);
extern "C" void call_8c0f363c(Arg0_73c *, void *, int);
extern "C" void call_8c05b4e4(Object *, void *, void *);
extern "C" void create_effect(void *, int, int);
extern "C" void call_8c067a60(Object *);
extern "C" void operation_8c0a21a4(void);
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void operation_8c177748(int);
extern "C" void call_8c067fbc(Object *);
extern "C" void operation_8c06e7e0(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    float v12;
    S_vv17 *v17;
    S_vv36 *v36;
    S_vv41 *v41;
    S_vv45 *v45;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    v3 = (S_vv3 *)((char *)o + 0x844);
    v4 = (S_vv4 *)((char *)o + 0x874);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x13;
        o->v101();
        ((ObjectData *)o)->f404 = 0;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc |= 0xe80;
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = 0.0f;
        v4->f00 = (S_vv4_0 *)0;
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c2fd350 + 0x357));
        v5 = (S_vv5 *)g_8c46fe20;
        if (v5 != 0) {
            v5->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
        t1 = operation_8c05bbf8();
        if (t1 != 0) {
            (&frame)->f69 = 1;
            (&frame)->f68 = 2;
            (&frame)->f6a = 0;
            (&frame)->f6c = 0.0f;
            (&frame)->f70 = 0.5f;
            operation_8c0a2144(2);
            call_8c0a5400((void *)(&(&frame)->f68), 0x3333);
            set_view_offsets((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x60)));
            return;
        }
        (&frame)->f69 = 0;
        (&frame)->f68 = 2;
        (&frame)->f6a = 0;
        (&frame)->f6c = 0.0f;
        (&frame)->f70 = 0.5f;
        operation_8c0a2144(2);
        call_8c0a5400((void *)(&(&frame)->f68), 0x31c7);
        set_view_offsets((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x60)));
        return;
    case 2:
    case 11:
        if (!(v2->f00 >= 0x32)) {
        } else {
            o->v93(0x16, 6);
            (&frame)->f14 = 0x12;
            (&frame)->f15 = 5;
            (&frame)->f16 = ((ObjectData *)o)->f20;
            (&frame)->f18 = 0x16;
            (&frame)->f1a = ((ObjectData *)o)->f698;
            (&frame)->f1c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f20 = ((ObjectData *)o)->f6ac;
            (&frame)->f24 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f14));
        }
        return;
    case 9:
        if (!(v2->f00 >= 0x32)) {
        } else {
            o->v93(0x16, 6);
            (&frame)->f00 = 0x12;
            (&frame)->f01 = 5;
            (&frame)->f02 = ((ObjectData *)o)->f20;
            (&frame)->f04 = 0x16;
            (&frame)->f06 = ((ObjectData *)o)->f698;
            (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f0c = ((ObjectData *)o)->f6ac;
            (&frame)->f10 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&frame));
        }
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c06ee90;
            }
            return;
        }
        t2 = check_range_8c01cf68((void *)o, 60.0f);
        if (t2 == 0) {
            t3 = check_range_8c01cf68((void *)o, 98.0f);
            if (t3 == 0) {
                goto L_8c06eb3a;
            }
        }
        play_se_8c05fbf8(0x30007, 0, 0, 0);
        operation_8c191654(5, 0xf, 3);
L_8c06eb3a:;
        v12 = (float)((ObjectData *)o)->ff8;
        if (!(25.0f > v12)) {
            if (40.0f > v12) {
                call_8c0c5094((void *)(((char *)o + 0x438)), (void *)(&(&frame)->f5c), (void *)(&(&frame)->f64));
                if (v4->f00 == 0) {
                    t4 = create_effect_78d0((void *)(((char *)o + 0x42c)), (void *)(&(&frame)->f5c), (int)(((ObjectData *)o)->f740->f14), 0x40);
                    v4->f00 = (S_vv4_0 *)(int)t4;
                }
                if (v4->f00 == 0) {
                    goto L_8c06ebf8;
                }
                call_8c0a7608((void *)(v4->f00), (void *)(((char *)o + 0x444)));
                set_effect_words((void *)(v4->f00), (void *)(&(&frame)->f5c));
                goto L_8c06ebf8;
            }
        }
        if (v4->f00 != 0) {
            v17 = (S_vv17 *)v4->f00;
            v17->f04 |= 1;
            v4->f00 = (S_vv4_0 *)0;
        }
L_8c06ebf8:;
        t5 = check_range_8c01cf68((void *)o, 57.0f);
        if (t5 == 0) {
        } else {
            *(Block20 *)&(&frame)->f3c = *(Block20 *)&g_8c284c80;
            (&frame)->f3c.f08 = 12.0f;
            {
                Vector3 *p_ = (Vector3 *)&g_8c284cc4;
                *(Vector3 *)&(&frame)->f50 = *p_;
            }
            rotate_scalar_pair((void *)(&(&frame)->f50), (void *)(((char *)(&frame) + 0x58)), (int)(((ObjectData *)o)->f64));
            call_8c3bdf60((void *)(&(&frame)->f50), (void *)(((char *)o + 0x3c)));
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f10), 0);
            t6 = operation_8c05bbf8();
            if (t6 != 0) {
                set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(&(&frame)->f50));
                ((ObjectData *)o)->f73c->fdc->f0c = (&frame)->f3c.f08;
                ((ObjectData *)o)->f73c->fdc->f18 = 0x13a03;
                call_8c0f363c((Arg0_73c *)(((ObjectData *)o)->f73c), (void *)(((char *)(&frame) + 0x48)), 0);
            } else {
                call_8c05b4e4(o, (void *)(&(&frame)->f50), (void *)(&(&frame)->f3c));
            }
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f00), 0);
            create_effect((void *)(&(&frame)->f50), (int)(((ObjectData *)o)->f740->f08), 0x40);
        }
        t7 = check_range_8c01cf68((void *)o, 88.0f);
        if (t7 == 0) {
        } else {
            *(Block20 *)&(&frame)->f28 = *(Block20 *)&g_8c284c80;
            (&frame)->f28.f08 = 25.0f;
            {
                Vector3 *p_ = (Vector3 *)&g_8c284cd0;
                *(Vector3 *)&(&frame)->f50 = *p_;
            }
            rotate_scalar_pair((void *)(&(&frame)->f50), (void *)(((char *)(&frame) + 0x58)), (int)(((ObjectData *)o)->f64));
            call_8c3bdf60((void *)(&(&frame)->f50), (void *)(((char *)o + 0x3c)));
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f10), 0);
            t8 = operation_8c05bbf8();
            if (t8 != 0) {
                set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(&(&frame)->f50));
                ((ObjectData *)o)->f73c->fdc->f0c = (&frame)->f28.f08;
                ((ObjectData *)o)->f73c->fdc->f18 = 0x13a03;
                call_8c0f363c((Arg0_73c *)(((ObjectData *)o)->f73c), (void *)(((char *)(&frame) + 0x34)), 0);
            } else {
                call_8c05b4e4(o, (void *)(&(&frame)->f50), (void *)(&(&frame)->f28));
            }
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f00), 0);
            create_effect((void *)(&(&frame)->f50), (int)(((ObjectData *)o)->f740->f08), 0x40);
        }
        t9 = check_range_8c01cf68((void *)o, 97.0f);
        if (t9 != 0) {
            call_8c067a60(o);
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        v1->f00 = 1;
        v2->f00 = 0;
        return;
L_8c06ee90:;
        v2->f00 += 1;
        if (!(v2->f00 >= 0x32)) {
            return;
        }
        v36 = (S_vv36 *)g_8c46fe20;
        if (v36 != 0) {
            v36->f20 = (unsigned int)v36->f20 >> 1 << 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 &= -0x11;
            }
        }
        operation_8c0a21a4();
        return;
    case 5:
        refresh_follow_effect_8c05a194((void *)o);
        operation_8c177748(0x17);
        ((ObjectData *)o)->f34 = 0x12008;
        o->v81(0);
        v41 = (S_vv41 *)g_8c46fe20;
        if (v41 != 0) {
            v41->f20 = (unsigned int)v41->f20 >> 1 << 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 &= -0x11;
            }
        }
        operation_8c0a21a4();
        if (v4->f00 != 0) {
            v45 = (S_vv45 *)v4->f00;
            v45->f04 |= 1;
            v4->f00 = (S_vv4_0 *)0;
        }
        if (((ObjectData *)o)->f728 != 0) {
            call_8c067fbc(o);
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

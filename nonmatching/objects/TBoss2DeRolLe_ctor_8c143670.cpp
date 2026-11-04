/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c143670
 * function: TBoss2DeRolLe_ctor_8c143670
 * language: c++
 * reference size: 2596 bytes
 * compiled size: 2604 bytes (+0.3%)
 * differing lines: 560 of 907 reference instruction lines
 * differing bytes: 1601
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TBoss2DeRolLe.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da358 S_g8c4da358;
typedef struct S_g8c4da35c S_g8c4da35c;
typedef struct S_g8c4da368 S_g8c4da368;
typedef struct S_g8c4da36c S_g8c4da36c;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct Arg0_638 Arg0_638;
typedef struct Arg0_6e8 Arg0_6e8;
typedef struct S_vv42_0 S_vv42_0;
typedef struct S_x65968 S_x65968;
typedef struct S_x66624 S_x66624;
typedef struct S_x66848 S_x66848;
typedef struct S_x67072 S_x67072;
typedef struct S_x69312 S_x69312;
typedef struct S_x72672 S_x72672;
typedef struct S_x99472 S_x99472;
typedef struct S_x99696 S_x99696;
typedef struct S_x99920 S_x99920;
class Object;
typedef struct Block_frame_10 {
    int f00;
    char unknown4[0x8];
} Block_frame_10;
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x6];
    int f38;
    Vector3 f3c;
    char unknown48[0xa0];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x80];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x3a];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x40];
    int f3dc;
    int f3e0;
    int f3e4;
    void *f3e8;
    int f3ec;
    int f3f0;
    char unknown3f4[0x20];
    int f414;
    char unknown418[0x144];
    int f55c;
    char unknown560[0xc8];
    float f628;
    float f62c;
    float f630;
    float f634;
    Arg0_638 *f638;
    int f63c;
    char unknown640[0x30];
    int f670;
    int f674;
    int f678;
    int f67c;
    int f680;
    int f684;
    float f688;
    float f68c;
    float f690;
    float f694;
    float f698;
    float f69c;
    float f6a0;
    int f6a4;
    float f6a8;
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    float f6bc;
    float f6c0;
    float f6c4;
    int f6c8;
    int f6cc;
    int f6d0;
    int f6d4;
    int f6d8;
    float f6dc;
    float f6e0;
    float f6e4;
    Arg0_6e8 *f6e8;
    int f6ec;
    int f6f0;
    float f6f4;
    float f6f8;
    int f6fc;
    int f700;
    int f704;
    int f708;
    int f70c;
    int f710;
    int f714;
    int f718;
    float f71c;
    float f720;
    float f724;
    float f728;
    float f72c;
    float f730;
    float f734;
    float f738;
    float f73c;
    float f740;
    float f744;
    float f748;
    float f74c;
    float f750;
    float f754;
    float f758;
    int f75c;
    char unknown760[0x18];
    int f778;
} ObjectData;
struct Frame {
    Vector3 f04;
    Block_frame_10 f10;
};
struct S_x65968 {
    Vector3 f00;
};
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
    int f430;
};
struct S_g8c4da370_42c {
    char unknown0[0x28];
    int f28;
    int f2c;
};
struct S_x99472 {
    float f00;
};
struct S_x99696 {
    float f00;
};
struct S_x99920 {
    float f00;
};
struct S_x66624 {
    float f00;
};
struct S_x66848 {
    float f00;
};
struct S_x67072 {
    float f00;
};
struct S_x69312 {
    Vector3 f00;
};
struct S_g8c4da36c {
    char unknown0[0x18];
    int f18;
    char unknown1c[0x4];
    int f20;
};
struct S_x72672 {
    Vector3 f00;
};
extern int g_8c3150cc;
extern Vector3 g_8c3150d0;
extern int g_8c46ed10;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da358 *g_8c4da358;
extern S_g8c4da35c *g_8c4da35c;
extern S_g8c4da368 *g_8c4da368;
extern S_g8c4da36c *g_8c4da36c;
extern S_g8c4da370 *g_8c4da370;
extern Object *g_8c4da3ac;
extern "C" char g_8c41cba0[];
extern "C" void call_8c05bcc0(Object *);
extern "C" void TObject_ctor_8c0330e4(void *, void *);
extern "C" void operation_8c05a02c(void *, int);
extern "C" void operation_8c059f94(void *);
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" void call_8c01c838(Object *, short);
extern "C" void operation_8c05b950(void *, void *, void *, void *);
extern "C" void word_operation_8c05b678(void *);
extern "C" void operation_8c05b92c(void *, int);
extern "C" void operation_8c05bf44(void *, int);
extern "C" void operation_8c05c1bc(void *, int);
extern "C" int operator_new_8c18de4c(int, int);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TBoss2Tentacle_ctor_8c14202c(int, int, int, int);
extern "C" void TBoss2Joint_ctor_8c174cd8(void *, int, int, int, int, int, int);
extern "C" void TBoss2Mine_ctor_8c16606c(void *, int, int, int);
extern "C" void operation_8c166654(void *, int, int, int);
extern "C" void TBoss2Fin_ctor_8c1aabb4(void *, int, int, int);
extern "C" void TBoss2LaserLight_ctor_8c185ab8(void *, int, int);
extern "C" int game_malloc_8c011ecc(int);
extern "C" void operation_8c0f336c(int, int);
extern "C" void process_entries_8c0731d8(void *);
extern "C" int call_8c05bb18(Object *);
extern "C" void operation_8c144d78(void *);
extern "C" Object *TBoss2DeRolLe_ctor_8c143670(Object *o, int a1, int a2)
{
    Frame frame;
    Object **home = &o;
    int v7;
    int v8;
    int v15;
    int v18;
    int v19;
    int v20;
    int v22;
    int v41;
    int v55;
    int v68;
    int v24;
    int v39;
    int v45;
    char *v59;
    int v64;
    char *v72;
    int v77;
    int v23;
    int v40;
    int v44;
    char *v60;
    int v63;
    char *v73;
    int v76;
    int v38;
    int v52;
    int v57;
    int v70;
    int v56;
    int v69;
    int t2;
    int t3;
    int v21;
    char *v25;
    int v42;
    int t4;
    int t5;
    int v28;
    int v37;
    char *v109;
    int v87;
    int v89;
    int v58;
    char *v61;
    int v100;
    int v103;
    int t1;
    int v71;
    char *v74;
    int v94;
    int v98;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    (void)home;
    call_8c05bcc0(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26df5c;
    TObject_ctor_8c0330e4((void *)(((char *)o + 0x3f4)), (void *)0);
    ((ObjectData *)o)->f684 = 0;
    ((ObjectData *)o)->f688 = 0.0f;
    ((ObjectData *)o)->f68c = 0.0f;
    ((ObjectData *)o)->f690 = 0.0f;
    ((ObjectData *)o)->f694 = 0.0f;
    ((ObjectData *)o)->f698 = 0.0f;
    ((ObjectData *)o)->f69c = 0.0f;
    ((ObjectData *)o)->f6a0 = 0.0f;
    ((ObjectData *)o)->f6a4 = 0;
    ((ObjectData *)o)->f6a8 = 0.0f;
    ((ObjectData *)o)->f6ac = 0.0f;
    ((ObjectData *)o)->f6b0 = 0.0f;
    ((ObjectData *)o)->f6b4 = 0.0f;
    ((ObjectData *)o)->f6b8 = 0.0f;
    ((ObjectData *)o)->f6bc = 0.0f;
    ((ObjectData *)o)->f6c0 = 0.0f;
    ((ObjectData *)o)->tag = (int)(g_8c3150cc);
    ((ObjectData *)o)->size = 0x77c;
    if (g_8c4da3ac == 0) {
        g_8c4da3ac = (Object *)o;
    }
    operation_8c05a02c((void *)o, a2);
    ((ObjectData *)o)->f3dc = 0;
    {
        Object *base = o;
        if (((ObjectData *)base)->f30 < 0 || ((ObjectData *)base)->f30 > 0xb4f) {
            v7 = (int)0;
            goto L_8c1437e6;
        }
        *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&((S_x65968 *)(g_8c46ed10 + ((ObjectData *)base)->f30 * 0xc))->f00;
        v7 = (int)1;
L_8c1437e6:;
        if (v7 != 0) {
            v8 = (int)0x12008;
            if ((v8 & (&frame)->f10.f00) == v8) {
                ((ObjectData *)base)->f3dc |= 0x8000;
            }
        }
    }
    operation_8c059f94((void *)o);
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = (int)(g_8c4da370->f42c->f28);
    ((ObjectData *)o)->f28 = (int)(g_8c4da370->f42c->f2c);
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c314ebc), 3);
    ((ObjectData *)o)->fe8 = 0;
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c314fbc;
    ((ObjectData *)o)->f114 = (int)(g_8c4da370->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    operation_8c05b950((void *)o, g_8c4da358, g_8c4da35c, g_8c4da368);
    word_operation_8c05b678((void *)o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c314ea0;
    operation_8c05b92c((void *)o, 0x2d);
    ((ObjectData *)o)->f398 = 20.0f;
    operation_8c05bf44((void *)o, 0x1e);
    operation_8c05c1bc((void *)o, 0x1e);
    ((ObjectData *)o)->f3e0 = 0;
    ((ObjectData *)o)->f3ec = 0;
    ((ObjectData *)o)->f3f0 = 0;
    v18 = (int)0;
    goto L_8c143970;
    v15 = (int)0;
    do {
        ((S_x99472 *)((char *)(int *)((char *)o + 0x418) + v15 * 0xc))->f00 = 0.0f;
        ((S_x99696 *)((char *)(int *)((char *)o + 0x41c) + v15 * 0xc))->f00 = 0.0f;
        ((S_x99920 *)((char *)(int *)((char *)o + 0x420) + v15 * 0xc))->f00 = 0.0f;
        v18 = (int)(v15 + 1);
L_8c143970:;
        v15 = (int)v18;
    } while (0x14 > v18);
    v20 = (int)0;
    goto L_8c1439b0;
    v19 = (int)0;
    do {
        ((S_x66624 *)((char *)(int *)((char *)o + 0x508) + v19 * 0xc))->f00 = 0.0f;
        ((S_x66848 *)((char *)(int *)((char *)o + 0x50c) + v19 * 0xc))->f00 = 0.0f;
        ((S_x67072 *)((char *)(int *)((char *)o + 0x510) + v19 * 0xc))->f00 = 0.0f;
        v20 = (int)(v19 + 1);
L_8c1439b0:;
        v19 = (int)v20;
    } while (4 > v20);
    t1 = operator_new_8c18de4c(0x100, v19);
    v21 = (int)0;
    ((ObjectData *)o)->f63c = (int)t1;
    v22 = (int)0x15c;
    v23 = (int)0x3f4;
    v24 = (int)0x640;
    goto L_8c143a2a;
    v25 = (char *)v21;
    do {
        v28 = (int)((int)(v25) << 6);
        njUnitMatrix_8c37b5c4((int)((int)((ObjectData *)o)->f63c + v28));
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v22);
        if (t2 != 0) {
            TBoss2Tentacle_ctor_8c14202c(t2, (int)((int)o + v23), (int)((int)((ObjectData *)o)->f63c + v28), (int)(v25));
        }
        *(int *)((char *)((char *)((int)o + v24) + 0x0) + ((int)(v25) << 2)) = (int)t2;
        v21 = (int)(v25 + 1);
L_8c143a2a:;
        v25 = (char *)v21;
    } while (4 > v21);
    v37 = (int)0x560;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&g_8c3150d0;
    v52 = (int)0;
    v44 = (int)(((ObjectData *)o)->f30 + 1);
    v45 = (int)(((ObjectData *)o)->f20 + 1);
    goto L_8c143ae4;
    v38 = (int)0;
    v39 = (int)(((ObjectData *)o)->f20 + 1);
    v40 = (int)(((ObjectData *)o)->f30 + 1);
    do {
        v41 = (int)(v38 * 0xc);
        v42 = (int)(v38 << 2);
        *(Vector3 *)&((S_x69312 *)((int)o + v37 + v41))->f00 = *(Vector3 *)&(&frame)->f04;
        *(int *)((char *)((char *)o + 0x5d8) + (v42)) = -1;
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3d8);
        v44 = (int)v40;
        v45 = (int)v39;
        if (t3 != 0) {
            TBoss2Joint_ctor_8c174cd8((void *)t3, (int)o, v39, v40, (int)((int)o + v41 + v37), (int)(*(S_vv42_0 **)((char *)((char *)v42 + 0x0) + ((int)((void *)0x8c4da308)))), (int)(*(S_vv42_0 **)((char *)((char *)v42 + 0x0) + ((int)((void *)0x8c4da330)))));
            v44 = (int)(v40 + 1);
            v45 = (int)(v39 + 1);
        }
        *(int *)((char *)((char *)o + 0x600) + (v42)) = (int)t3;
        v52 = (int)(v38 + 1);
L_8c143ae4:;
        v38 = (int)v52;
        v39 = (int)v45;
        v40 = (int)v44;
    } while (0xa > v52);
    v55 = (int)0x40c;
    v56 = (int)0x3f4;
    v57 = (int)0x650;
    v58 = (int)0;
    v63 = (int)v40;
    v64 = (int)v39;
    goto L_8c143b4e;
    v59 = (char *)v39;
    v60 = (char *)v40;
    v61 = (char *)v58;
    do {
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v55);
        v63 = (int)v60;
        v64 = (int)v59;
        if (t4 != 0) {
            TBoss2Mine_ctor_8c16606c((void *)t4, (int)((int)o + v56), (int)(v59), (int)(v60));
            v63 = (int)(v60 + 1);
            v64 = (int)(v59 + 1);
        }
        *(int *)((char *)((char *)((int)o + v57) + 0x0) + ((int)(v61) << 2)) = (int)t4;
        v58 = (int)(v61 + 1);
L_8c143b4e:;
        v59 = (char *)v64;
        v60 = (char *)v63;
        v61 = (char *)v58;
    } while (5 > v58);
    v68 = (int)0x42c;
    v69 = (int)0x3f4;
    v70 = (int)0x664;
    v71 = (int)0;
    v76 = (int)v60;
    v77 = (int)v59;
    goto L_8c143ba6;
    v72 = (char *)v59;
    v73 = (char *)v60;
    v74 = (char *)v71;
    do {
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v68);
        v76 = (int)v73;
        v77 = (int)v72;
        if (t5 != 0) {
            operation_8c166654((void *)t5, (int)((int)o + v69), (int)(v72), (int)(v73));
            v76 = (int)(v73 + 1);
            v77 = (int)(v72 + 1);
        }
        *(int *)((char *)((char *)((int)o + v70) + 0x0) + ((int)(v74) << 2)) = (int)t5;
        v71 = (int)(v74 + 1);
L_8c143ba6:;
        v72 = (char *)v77;
        v73 = (char *)v76;
        v74 = (char *)v71;
    } while (3 > v71);
    t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x8c);
    if (t6 != 0) {
        TBoss2Fin_ctor_8c1aabb4((void *)t6, (int)(((char *)o + 0x3f4)), (int)(((char *)o + 0x424)), (int)(((char *)o + 0x490)));
    }
    ((ObjectData *)o)->f670 = (int)t6;
    ((ObjectData *)o)->f674 = 0;
    ((ObjectData *)o)->f678 = 0;
    ((ObjectData *)o)->f67c = 0;
    ((ObjectData *)o)->f680 = 0;
    ((ObjectData *)o)->f684 = 0;
    ((ObjectData *)o)->f688 = 0.0f;
    ((ObjectData *)o)->f68c = 0.0f;
    ((ObjectData *)o)->f690 = 0.0f;
    ((ObjectData *)o)->f694 = 0.0f;
    ((ObjectData *)o)->f698 = 0.0f;
    ((ObjectData *)o)->f69c = 0.0f;
    ((ObjectData *)o)->f6a0 = 0.0f;
    ((ObjectData *)o)->f6a4 = 0;
    ((ObjectData *)o)->f6a8 = 0.0f;
    ((ObjectData *)o)->f6ac = 0.0f;
    ((ObjectData *)o)->f6b0 = 0.0f;
    ((ObjectData *)o)->f6b4 = 0.0f;
    ((ObjectData *)o)->f6b8 = 0.0f;
    ((ObjectData *)o)->f6bc = 0.0f;
    ((ObjectData *)o)->f6c0 = 0.0f;
    ((ObjectData *)o)->f6c4 = 0.0f;
    v109 = (char *)g_8c4da36c->f18;
    ((ObjectData *)o)->f6cc = (int)v109;
    ((ObjectData *)o)->f6c8 = (int)v109;
    ((ObjectData *)o)->f6d0 = (int)(g_8c4da36c->f20);
    ((ObjectData *)o)->f198 = ((ObjectData *)o)->f330 = 0x4e20;
    ((ObjectData *)o)->f6d4 = 0;
    t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
    if (t7 != 0) {
        TBoss2LaserLight_ctor_8c185ab8((void *)t7, (int)(((char *)o + 0x3f4)), (int)(((char *)o + 0x6dc)));
    }
    ((ObjectData *)o)->f6d8 = (int)t7;
    ((ObjectData *)o)->f6dc = 0.0f;
    ((ObjectData *)o)->f6e0 = 0.0f;
    ((ObjectData *)o)->f6e4 = 0.0f;
    t8 = game_malloc_8c011ecc(0x10);
    if (t8 != 0) {
        operation_8c0f336c(t8, 4);
    }
    ((ObjectData *)o)->f6e8 = (Arg0_6e8 *)(int)t8;
    process_entries_8c0731d8((void *)(((ObjectData *)o)->f6e8));
    ((ObjectData *)o)->f6ec = 0;
    ((ObjectData *)o)->f6f0 = 0;
    ((ObjectData *)o)->f6f4 = 1.0f;
    ((ObjectData *)o)->f6f8 = 0.1f;
    v89 = (int)0;
    goto L_8c143e2e;
    v87 = (int)0;
    do {
        *(Vector3 *)&((S_x72672 *)((char *)(int *)((char *)o + 0x538) + v87 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v89 = (int)(v87 + 1);
L_8c143e2e:;
        v87 = (int)v89;
    } while (3 > v89);
    ((ObjectData *)o)->f55c = 0;
    ((ObjectData *)o)->f628 = 1.0f;
    ((ObjectData *)o)->f62c = 1.0f;
    ((ObjectData *)o)->f630 = 1.0f;
    ((ObjectData *)o)->f634 = 1.0f;
    t9 = ((int (*)(int))operator_new_8c18de4c)(0x300);
    ((ObjectData *)o)->f638 = (Arg0_638 *)(int)t9;
    v98 = (int)0;
    goto L_8c143ea6;
    v94 = (int)0;
    do {
        njUnitMatrix_8c37b5c4((int)(&*(int *)((char *)((char *)((ObjectData *)o)->f638 + 0x0) + (v94 << 6))));
        v98 = (int)(v94 + 1);
L_8c143ea6:;
        v94 = (int)v98;
    } while (0xc > v98);
    v103 = (int)0;
    goto L_8c143ecc;
    v100 = (int)0;
    do {
        *(int *)((char *)((char *)o + 0x760) + (v100 << 2)) = 0;
        v103 = (int)(v100 + 1);
L_8c143ecc:;
        v100 = (int)v103;
    } while (6 > v103);
    ((ObjectData *)o)->f778 = 0;
    ((ObjectData *)o)->f6fc = 0;
    ((ObjectData *)o)->f700 = 0;
    ((ObjectData *)o)->f704 = 0;
    ((ObjectData *)o)->f708 = 0;
    ((ObjectData *)o)->f70c = 0;
    ((ObjectData *)o)->f710 = 0;
    ((ObjectData *)o)->f714 = 0;
    ((ObjectData *)o)->f718 = 0;
    ((ObjectData *)o)->f71c = 0.0f;
    ((ObjectData *)o)->f720 = 0.0f;
    ((ObjectData *)o)->f724 = 0.0f;
    ((ObjectData *)o)->f728 = 0.0f;
    ((ObjectData *)o)->f72c = 0.0f;
    ((ObjectData *)o)->f730 = 0.0f;
    ((ObjectData *)o)->f734 = 0.0f;
    ((ObjectData *)o)->f738 = 0.0f;
    ((ObjectData *)o)->f73c = 0.0f;
    ((ObjectData *)o)->f740 = 0.0f;
    ((ObjectData *)o)->f744 = 0.0f;
    ((ObjectData *)o)->f748 = 0.0f;
    ((ObjectData *)o)->f74c = 0.0f;
    ((ObjectData *)o)->f750 = 0.0f;
    ((ObjectData *)o)->f754 = 0.0f;
    ((ObjectData *)o)->f758 = 0.0f;
    ((ObjectData *)o)->f75c = 0;
    ((ObjectData *)o)->f3e4 = 0;
    ((ObjectData *)o)->f3e8 = (void *)(g_8c41cba0 + 0x5c);
    t10 = call_8c05bb18(o);
    if (t10 != 0) {
        ((ObjectData *)o)->f414 = 0;
    } else {
        ((ObjectData *)o)->f414 = 1;
    }
    operation_8c144d78((void *)o);
    if (((((ObjectData *)o)->f3dc & 0x8000)) == 0) {
        ((ObjectData *)o)->f30a = 1;
        o->v93(((ObjectData *)o)->f30a, 4);
    }
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14af90
 * function: TBoss2DeRolLe_render_8c14af90
 * language: c++
 * reference size: 1096 bytes
 * compiled size: 1120 bytes (+2.2%)
 * differing lines: 220 of 419 reference instruction lines
 * differing bytes: 891
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * class header: src/include/classes/TBoss2DeRolLe.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c4182cc S_g8c4182cc;
typedef struct S_g8c4182d4 S_g8c4182d4;
typedef struct S_g8c4da5ec S_g8c4da5ec;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_6d8 Arg0_6d8;
typedef struct S_vv10 S_vv10;
typedef struct S_vv13 S_vv13;
typedef struct S_x48880_0 S_x48880_0;
typedef struct S_x95056 S_x95056;
class Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
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
    virtual void v11(float, float);
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x34];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x370];
    int f3dc;
    char unknown3e0[0x38];
    Vector3 f418;
    char unknown424[0x60];
    Vector3 f484;
    char unknown490[0x198];
    Block16 f628;
    int f638;
    int f63c;
    char unknown640[0x84];
    float f6c4;
    char unknown6c8[0x10];
    Arg0_6d8 *f6d8;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block16 f0c;
    Vector3 f1c;
};
struct S_g8c4da5ec {
    char unknown0[0x2c];
    void *f2c;
};
struct S_vv10 {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x95056 {
    Vector3 f00;
};
struct S_vv13 {
    Vector3 f00;
};
extern Vector3 g_8c315100;
extern S_g8c4182cc *g_8c4182cc;
extern S_g8c4182d4 *g_8c4182d4;
extern int g_8c46f560;
extern int g_8c4da374;
extern int g_8c4da378;
extern int g_8c4da37c;
extern Block16 g_8c4da380;
extern int g_8c4da39c;
extern int g_8c4da3a0;
extern int g_8c4da3a4;
extern int g_8c4da3a8;
extern S_g8c4da5ec *g_8c4da5ec;
extern int g_8c4da5f0;
extern int g_8c575570;
extern "C" char g_8c418280[];
extern "C" void operation_8c14ae60();
extern "C" void TBoss2DeRolLe_render_8c14af90(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    char *v5;
    S_vv10 *v10;
    int v14;
    int v11;
    int v12;
    S_vv13 *v13;
    int t1;
    int t2;
    int t3;
    t1 = ((int (*)(void))0x8c05a0a8)();
    if (t1 != 0) {
        o->v111();
        return;
    }
    o->v11(1000.0f, 1000.0f);
    g_8c46f560 = (int)(g_8c575570);
    ((void (*)(void))0x8c05baa8)();
    ((void (*)(void))0x8c391c94)();
    ((void (*)(void))0x8c38ae68)();
    ((void (*)(void *))0x8c382a40)(((char *)o + 0x3c));
    ((void (*)(int, float, float, float))0x8c3829bc)(0, 0.0f, ((ObjectData *)o)->f6c4, 0.0f);
    ((void (*)(int, void *))0x8c37df90)(0, ((ObjectData *)o)->f64);
    ((void (*)(int, void *))0x8c37dd28)(0, ((ObjectData *)o)->f60);
    ((void (*)(int, void *))0x8c37e02c)(0, ((ObjectData *)o)->f68);
    {
        Vector3 *p_ = (Vector3 *)&g_8c315100;
        *(Vector3 *)&(&frame)->f1c = *p_;
    }
    ((void (*)(void *))0x8c37e390)(&(&frame)->f1c);
    ((void (*)(float, float))0x8c3a9cec)(*(float *)(g_8c418280 + 0x1c) * 0.5f, *(float *)(g_8c418280 + 0x20) * 0.5f);
    ((void (*)(Object *))0x8c145334)(o);
    v1 = (int)0x600;
    v2 = (int)0;
    while (0xa > v2) {
        ((void (*)(void *))0x8c175408)(*(S_x48880_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2)));
        v2 = (int)(v2 + 1);
    }
    if (((((ObjectData *)o)->f3dc & 0x40)) != 0) {
        g_8c4da5ec->f2c = (void *)(void *)0x8c4da3b0;
    } else {
        g_8c4da5ec->f2c = (void *)g_8c4da5f0;
    }
    g_8c4da374 = 0;
    *(Block16 *)&g_8c4da380 = *(Block16 *)&((ObjectData *)o)->f628;
    v5 = (char *)((ObjectData *)o)->f3dc;
    g_8c4da37c = (int)v5;
    g_8c4da378 = 0;
    g_8c4da39c = (int)(((char *)o + 0x418));
    g_8c4da3a4 = (int)(((ObjectData *)o)->f63c);
    g_8c4da3a8 = (int)(((ObjectData *)o)->f638);
    g_8c4da3a0 = (int)(((char *)o + 0x508));
    ((void (*)(void *))0x8c3827d8)(((ObjectData *)o)->f28);
    ((void (*)(void *))0x8c0c4754)(operation_8c14ae60);
    *(Block16 *)&(&frame)->f0c = *(Block16 *)&*(Block16 *)(g_8c418280 + 0x24);
    t2 = ((int (*)(void))0x8c14b868)();
    if (t2 != 0) {
        *(float *)(g_8c418280 + 0x28) = 0.3f;
        *(float *)(g_8c418280 + 0x2c) = 0.4f;
        *(float *)(g_8c418280 + 0x30) = 0.5f;
        ((void (*)(void *))0x8c014a00)(g_8c4182cc);
        ((void (*)(void *))0x8c014ce0)(g_8c4182d4);
    }
    t3 = ((int (*)(void *))0x8c185bfc)(((ObjectData *)o)->f6d8);
    if (t3 != 0) {
        ((void (*)(Object *))0x8c01cd9c)(o);
    } else {
        ((void (*)(Object *))0x8c01cc90)(o);
    }
    *(Block16 *)&*(Block16 *)(g_8c418280 + 0x24) = *(Block16 *)&(&frame)->f0c;
    ((void (*)(int))0x8c0c4754)(0);
    ((void (*)(void *))0x8c0149c8)(g_8c4182cc);
    ((void (*)(void))0x8c38ad10)();
    ((void (*)(int, int))0x8c38c0e6)(0xff00, 0);
    g_8c575570 = (int)(g_8c46f560);
    ((void (*)(void))0x8c391cc4)();
    v10 = (S_vv10 *)((char *)o + 0x560);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f418;
    ((void (*)(Frame *, void *))0x8c3bdf60)((&frame), ((char *)o + 0x484));
    (&frame)->f00.f00 *= 0.5f;
    (&frame)->f00.f04 *= 0.5f;
    (&frame)->f00.f08 *= 0.5f;
    *(Vector3 *)&v10->f00 = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f484;
    ((void (*)(Frame *, void *))0x8c3bdf60)((&frame), ((char *)o + 0x49c));
    (&frame)->f00.f00 *= 0.5f;
    (&frame)->f00.f04 *= 0.5f;
    (&frame)->f00.f08 *= 0.5f;
    *(Vector3 *)&v10->f0c = *(Vector3 *)&(&frame)->f00;
    v14 = (int)0;
    v11 = (int)0x49c;
    v13 = (S_vv13 *)((int)v10 + 0x18);
    v12 = (int)0x418;
    while (8 > v14) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x95056 *)((int)o + v11 + v14 * 0xc))->f00;
        ((void (*)(Frame *, int))0x8c3bdf60)((&frame), (int)o + (v14 + 0xc) * 0xc + v12);
        (&frame)->f00.f00 *= 0.5f;
        (&frame)->f00.f04 *= 0.5f;
        (&frame)->f00.f08 *= 0.5f;
        *(Vector3 *)&v13->f00 = *(Vector3 *)&(&frame)->f00;
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 12);
    }
    ((void (*)(void *))0x8c0332a4)(((char *)o + 0x3f4));
}

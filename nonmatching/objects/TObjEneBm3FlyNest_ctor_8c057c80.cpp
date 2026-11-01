/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c057c80
 * function: TObjEneBm3FlyNest_ctor_8c057c80
 * language: c++
 * reference size: 800 bytes
 * compiled size: 796 bytes (-0.5%)
 * differing lines: 178 of 281 reference instruction lines
 * differing bytes: 532
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467900 S_g8c467900;
typedef struct S_g8c467904 S_g8c467904;
typedef struct S_g8c467908 S_g8c467908;
typedef struct S_g8c467910 S_g8c467910;
typedef struct S_g8c467910_42c S_g8c467910_42c;
typedef struct Arg2 Arg2;
typedef struct S_x15568 S_x15568;
typedef struct S_x96752 S_x96752;
class Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
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
    char unknown2c[0xc];
    int f38;
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x1f2];
    short f30a;
    char unknown30c[0x1c];
    float f328;
    char unknown32c[0x40];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x14];
    int f3b0;
    char unknown3b4[0x10];
    int f3c4;
    int f3c8;
    int f3cc;
    int f3d0;
    char unknown3d4[0xc];
    short f3e0;
    char unknown3e2[0x12];
    float f3f4;
    char unknown3f8[0x80];
    float f478;
    int f47c;
    int f480;
    int f484;
    int f488;
    int f48c;
    int f490;
    int f494;
    int f498;
    int f49c;
    float f4a0;
} ObjectData;
struct S_g8c467910 {
    char unknown0[0x42c];
    S_g8c467910_42c *f42c;
    int f430;
};
struct S_g8c467910_42c {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    int f18;
};
struct Arg2 {
    char unknown0[0x2];
    short f02;
};
struct S_x15568 {
    Vector3 f00;
};
struct S_x96752 {
    Vector3 f00;
};
extern int g_8c2f33a4;
extern S_g8c467900 *g_8c467900;
extern S_g8c467904 *g_8c467904;
extern S_g8c467908 *g_8c467908;
extern S_g8c467910 *g_8c467910;
extern "C" void TObjEneDD_ctor_8c059bc0(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void operation_8c05a02c(void *, Arg2 *);
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" void call_8c01c838(Object *, short);
extern "C" void operation_8c05b950(void *, void *, void *, void *);
extern "C" void set_fields_8c05b664(void *);
extern "C" void operation_8c05b92c(void *, int);
extern "C" void operation_8c058328(void *);
extern "C" void start_context_blend(void *);
extern "C" Object *TObjEneBm3FlyNest_ctor_8c057c80(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v3;
    int v5;
    int v4;
    int v6;
    int v7;
    (void)home;
    TObjEneDD_ctor_8c059bc0((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c262418;
    initialize_context_blend((void *)(((char *)o + 0x45c)));
    ((ObjectData *)o)->tag = (int)(g_8c2f33a4);
    ((ObjectData *)o)->size = 0x4a4;
    operation_8c05a02c((void *)o, a2);
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = (int)(g_8c467910->f42c->f18);
    ((ObjectData *)o)->f28 = (int)(g_8c467910->f42c->f0c);
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c2f327c), 1);
    ((ObjectData *)o)->f328 = ((ObjectData *)o)->f3c.f04 + 20.0f;
    o->v94();
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c2f3304;
    ((ObjectData *)o)->f114 = (int)(g_8c467910->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    operation_8c05b950((void *)o, g_8c467900, g_8c467904, g_8c467908);
    set_fields_8c05b664((void *)o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c2f3260;
    operation_8c05b92c((void *)o, 4);
    ((ObjectData *)o)->f398 = 10.0f;
    operation_8c058328((void *)o);
    if (a2->f02 < ((ObjectData *)o)->f3b0) {
        ((ObjectData *)o)->f3b0 = a2->f02;
    }
    v3 = (int)0;
    while (4 > v3) {
        *(int *)((char *)((char *)o + 0x3b4) + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
    }
    ((ObjectData *)o)->f3c4 = 0;
    ((ObjectData *)o)->f3c8 = 0;
    ((ObjectData *)o)->f3cc = 0;
    ((ObjectData *)o)->f3d0 = 0;
    ((ObjectData *)o)->f3e0 = ((ObjectData *)o)->f20 + 1;
    v5 = (int)0;
    v4 = (int)0xffff;
    while (6 > v5) {
        *(short *)((char *)((char *)o + 0x3d4) + (v5 << 1)) = v4;
        v5 = (int)(v5 + 1);
    }
    v6 = (int)0;
    while (2 > v6) {
        *(Vector3 *)&((S_x15568 *)((char *)(int *)((char *)o + 0x3e4) + v6 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v6 = (int)(v6 + 1);
    }
    ((ObjectData *)o)->f3f4 += 25.0f;
    v7 = (int)0;
    while (8 > v7) {
        *(Vector3 *)&((S_x96752 *)((char *)(int *)((char *)o + 0x3fc) + v7 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v7 = (int)(v7 + 1);
    }
    start_context_blend((void *)(((char *)o + 0x45c)));
    ((ObjectData *)o)->f478 = 0.0f;
    ((ObjectData *)o)->f47c = 0;
    ((ObjectData *)o)->f480 = 0;
    ((ObjectData *)o)->f484 = 0;
    ((ObjectData *)o)->f488 = 0;
    ((ObjectData *)o)->f48c = 0;
    ((ObjectData *)o)->f490 = 0;
    ((ObjectData *)o)->f494 = 0;
    ((ObjectData *)o)->f498 = 0;
    ((ObjectData *)o)->f49c = 0;
    ((ObjectData *)o)->f4a0 = 0.0f;
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
    return o;
}

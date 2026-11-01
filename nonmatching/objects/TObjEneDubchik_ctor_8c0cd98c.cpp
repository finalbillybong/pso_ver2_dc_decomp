/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd98c
 * function: TObjEneDubchik_ctor_8c0cd98c
 * language: c++
 * reference size: 812 bytes
 * compiled size: 836 bytes (+3.0%)
 * differing lines: 224 of 294 reference instruction lines
 * differing bytes: 758
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46faa0 S_g8c46faa0;
typedef struct S_g8c46faa8 S_g8c46faa8;
typedef struct S_g8c46fab0 S_g8c46fab0;
typedef struct S_g8c46fac0 S_g8c46fac0;
typedef struct S_g8c46fac0_42c S_g8c46fac0_42c;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_s158 Arg0_s158;
typedef struct Arg0_s164 Arg0_s164;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg2 Arg2;
class Object;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual void v88(Arg2 *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x9c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    int f158;
    char unknown15c[0x8];
    int f164;
    char unknown168[0x1c];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x120];
    int f2bc;
    char unknown2c0[0x64];
    Block_p0_324 f324;
    short f330;
    short f332;
    char unknown334[0x26];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    float f370;
    char unknown374[0x10];
    int f384;
    int f388;
    int f38c;
    char unknown390[0x18];
    short f3a8;
    char unknown3aa[0x2];
    short f3ac;
    short f3ae;
    char unknown3b0[0x10];
    float f3c0;
    int f3c4;
    int f3c8;
    char unknown3cc[0x20];
    float f3ec;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s164 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s158 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c46fac0 {
    char unknown0[0x42c];
    S_g8c46fac0_42c *f42c;
    int f430;
};
struct Arg2 {
    char unknown0[0xa];
    short f0a;
    char unknownc[0x30];
    short f3c;
    short f3e;
};
struct S_g8c46fac0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c306c34;
extern S_g8c46fac0 *g_8c46fac0;
extern int g_8c46fac8;
extern "C" void TObjEnemyCustom_ctor_8c0c2354(void *);
extern "C" void initialize_object_8c114768(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void call_8c0cfefc(Object *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void attach_and_insert_object(void *);
extern "C" int operation_8c108698(int, int);
extern "C" void request_actor_mode_seven(void *);
extern "C" Object *TObjEneDubchik_ctor_8c0cd98c(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    char *v6;
    char *v5;
    int v22;
    int v1;
    int v23;
    int v4;
    int v8;
    int v7;
    float v21;
    int t1;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c266d58;
    initialize_object_8c114768((void *)(((char *)o + 0x3cc)));
    ((ObjectData *)o)->tag = (int)(g_8c306c34);
    ((ObjectData *)o)->size = 0x438;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v6 = (char *)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    ((ObjectData *)o)->f164 = (int)(((ObjectData *)o)->f3c.f00);
    ((Arg0_s164 *)((char *)o + 0x164))->f04 = (int)v6;
    ((Arg0_s164 *)((char *)o + 0x164))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v5 = (char *)((ObjectData *)o)->f3c.f00;
    v22 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    ((ObjectData *)o)->f158 = (int)v5;
    ((Arg0_s158 *)((char *)o + 0x158))->f04 = (int)v22;
    ((Arg0_s158 *)((char *)o + 0x158))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    ((ObjectData *)o)->f114 = (int)(g_8c46fac0->f430);
    v1 = (int)(a2->f3c != 0);
    ((ObjectData *)o)->f384 = (int)v1;
    ((ObjectData *)o)->f388 = a2->f3e;
    v23 = (int)((ObjectData *)o)->f384;
    ((ObjectData *)o)->f38 = (int)(g_8c46fac0->f42c->f08);
    if (v23 == 0) {
        v4 = (int)g_8c46fac0->f42c->f0c;
    } else {
        v4 = (int)g_8c46fac8;
    }
    ((ObjectData *)o)->f28 = (int)v4;
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c306a6c;
    copy_actor_records((void *)o, (void *)((void *)0x8c306bac), 1);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c306bf4;
    v7 = (int)(((ObjectData *)o)->f384 << 2);
    call_8c0121a0(o, (void *)(*(S_g8c46faa0 **)((char *)0x8c46faa0 + (v7))), (void *)(*(S_g8c46faa8 **)((char *)0x8c46faa8 + (v7))), (void *)(*(S_g8c46fab0 **)((char *)0x8c46fab0 + (v7))));
    call_8c0cfefc(o);
    ((ObjectData *)o)->ff0 = 5;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    ((ObjectData *)o)->f3ae = 0;
    v8 = (int)0;
    while (3 > v8) {
        *(int *)((char *)((char *)o + 0x3b0) + (v8 << 2)) = 0;
        v8 = (int)(v8 + 1);
    }
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f2bc |= 4;
    ((ObjectData *)o)->f3ac = 0;
    ((ObjectData *)o)->f3c0 = 0.0f;
    if (((ObjectData *)o)->f384 != 0) {
        ((ObjectData *)o)->f38c = 0x32;
    } else {
        ((ObjectData *)o)->f38c = 0x18;
    }
    t1 = operation_8c108698(0xffffff, -0x5f8f8f90);
    ((ObjectData *)o)->f3c8 = (int)t1;
    if (a2->f0a != 0) {
        request_actor_mode_seven((void *)o);
    }
    ((ObjectData *)o)->f3c4 = 0;
    ((ObjectData *)o)->f3a8 = 0;
    if ((((int)((ObjectData *)o)->f370 & 1)) != 0) {
        v21 = (float)220.0f;
    } else {
        v21 = (float)170.0f;
    }
    ((ObjectData *)o)->f3ec = v21;
    return o;
}

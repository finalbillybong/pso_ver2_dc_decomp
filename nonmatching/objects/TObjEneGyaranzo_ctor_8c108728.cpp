/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c108728
 * function: TObjEneGyaranzo_ctor_8c108728
 * language: c++
 * reference size: 648 bytes
 * compiled size: 664 bytes (+2.5%)
 * differing lines: 124 of 224 reference instruction lines
 * differing bytes: 532
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TObjEneGyaranzo.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7ba0 S_g8c4d7ba0;
typedef struct S_g8c4d7ba4 S_g8c4d7ba4;
typedef struct S_g8c4d7ba8 S_g8c4d7ba8;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_s158 Arg0_s158;
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
    char unknown2c[0x8];
    int f34;
    int f38;
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    int f158;
    char unknown15c[0x8];
    Vector3 f164;
    char unknown170[0x14];
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
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x18];
    int f3a8;
    char unknown3ac[0x18];
    int f3c4;
    int f3c8;
    int f3cc;
    int f3d0;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s158 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_g8c4d7bbc_42c {
    char unknown0[0x38];
    int f38;
    int f3c;
};
struct Arg2 {
    char unknown0[0xa];
    short f0a;
};
extern int g_8c30b960;
extern S_g8c4d7ba0 *g_8c4d7ba0;
extern S_g8c4d7ba4 *g_8c4d7ba4;
extern S_g8c4d7ba8 *g_8c4d7ba8;
extern S_g8c4d7bbc *g_8c4d7bbc;
extern "C" void TObjEnemyCustom_ctor_8c0c2354(void *);
extern "C" void initialize_object_8c114768(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void operation_8c10a65c(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" int call_8c18e768(int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void request_actor_mode_seven(void *);
extern "C" void start_context_blend(void *);
extern "C" Object *TObjEneGyaranzo_ctor_8c108728(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    char *v1;
    char *v2;
    int t1;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2698e8;
    initialize_object_8c114768((void *)(((char *)o + 0x3e8)));
    initialize_context_blend((void *)(((char *)o + 0x404)));
    ((ObjectData *)o)->tag = (int)(g_8c30b960);
    ((ObjectData *)o)->size = 0x420;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v1 = (char *)((ObjectData *)o)->f3c.f00;
    v2 = (char *)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    ((ObjectData *)o)->f158 = (int)v1;
    ((Arg0_s158 *)((char *)o + 0x158))->f04 = (int)v2;
    ((Arg0_s158 *)((char *)o + 0x158))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    ((ObjectData *)o)->f114 = (int)(g_8c4d7bbc->f430);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c30b834;
    copy_actor_records((void *)o, (void *)((void *)0x8c30b8d0), 1);
    ((ObjectData *)o)->f384 = 0;
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c30b8b4;
    call_8c0121a0(o, g_8c4d7ba0, g_8c4d7ba4, g_8c4d7ba8);
    operation_8c10a65c((void *)o);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    {
        Object *base = o;
        t1 = call_8c18e768((int)(((ObjectData *)base)->f330), 3);
        ((ObjectData *)base)->f3cc = (int)t1;
        ((ObjectData *)o)->f3a8 = 0;
        ((ObjectData *)o)->f3c4 = 0;
        ((ObjectData *)o)->f3c8 = 0;
        ((ObjectData *)o)->f3d0 = 0;
        ((ObjectData *)o)->f38c = 0x19;
        ((ObjectData *)o)->f2bc |= 4;
        *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    }
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f34 |= 0x40000;
    ((ObjectData *)o)->f38 = (int)(g_8c4d7bbc->f42c->f38);
    ((ObjectData *)o)->f28 = (int)(g_8c4d7bbc->f42c->f3c);
    if (a2->f0a != 0) {
        request_actor_mode_seven((void *)o);
    }
    start_context_blend((void *)(((char *)o + 0x404)));
    return o;
}

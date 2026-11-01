/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c078d58
 * function: TObjEneDarkGunner_ctor_8c078d58
 * language: c++
 * reference size: 768 bytes
 * compiled size: 768 bytes (+0.0%)
 * differing lines: 212 of 275 reference instruction lines
 * differing bytes: 198
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c469a80 S_g8c469a80;
typedef struct S_g8c469a84 S_g8c469a84;
typedef struct S_g8c469a88 S_g8c469a88;
typedef struct S_g8c469a94 S_g8c469a94;
typedef struct S_g8c469a94_42c S_g8c469a94_42c;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg2 Arg2;
class Object;
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
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x8];
    int f68;
    char unknown6c[0x70];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
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
    char unknown334[0x22];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    char unknown370[0x14];
    int f384;
    int f388;
    int f38c;
    char unknown390[0x14];
    int f3a4;
    float f3a8;
    float f3ac;
    float f3b0;
    char unknown3b4[0x6];
    short f3ba;
    char unknown3bc[0x60];
    int f41c;
    int f420;
} ObjectData;
struct Arg2 {
    char unknown0[0x3e];
    short f3e;
};
struct S_g8c469a94 {
    char unknown0[0x42c];
    S_g8c469a94_42c *f42c;
    int f430;
};
struct S_g8c469a94_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern int g_8c2fdb64;
extern S_g8c469a94 *g_8c469a94;
extern "C" void TObjEnemyCustom_ctor_8c0c2354(void *);
extern "C" void initialize_object_8c0fbf7c(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void copy_scale_8c07afd8(Object *);
extern "C" Object *TObjEneDarkGunner_ctor_8c078d58(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v9;
    int v1;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c263e38;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x424)));
    ((ObjectData *)o)->tag = (int)(g_8c2fdb64);
    ((ObjectData *)o)->size = 0x448;
    o->v88(a2);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f384 = 0;
    ((ObjectData *)o)->f38c = 0x22;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f388 = a2->f3e;
    ((ObjectData *)o)->f356 = 0xf;
    ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f38 = (int)(g_8c469a94->f42c->f18);
    ((ObjectData *)o)->f28 = (int)(g_8c469a94->f42c->f1c);
    ((ObjectData *)o)->f114 = (int)(g_8c469a94->f430);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c2fda20;
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    copy_actor_records((void *)o, (void *)((void *)0x8c2fdb38), 1);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c2fdb00;
    v1 = (int)(((ObjectData *)o)->f384 << 2);
    call_8c0121a0(o, (void *)(*(S_g8c469a80 **)((char *)0x8c469a80 + (v1))), (void *)(*(S_g8c469a84 **)((char *)0x8c469a84 + (v1))), (void *)(*(S_g8c469a88 **)((char *)0x8c469a88 + (v1))));
    copy_scale_8c07afd8(o);
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    ((ObjectData *)o)->f3a4 = 0x550000;
    ((ObjectData *)o)->f34 |= 0x4040000;
    ((ObjectData *)o)->f68 = 0x8000;
    ((ObjectData *)o)->f3a8 = 0.0f;
    ((ObjectData *)o)->f3b0 = 0.0f;
    ((ObjectData *)o)->f3ac = 0.0f;
    ((ObjectData *)o)->f41c = 0;
    ((ObjectData *)o)->f420 = 0;
    ((ObjectData *)o)->fdc->f18 |= 4;
    ((ObjectData *)o)->fdc->f18 &= -3;
    ((ObjectData *)o)->f3ba = 0;
    v9 = (int)0;
    while (4 > v9) {
        *(int *)((char *)((char *)o + 0x40c) + (v9 << 2)) = 0;
        v9 = (int)(v9 + 1);
    }
    return o;
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c038104
 * function: TObjEneMoja_ctor_8c038104
 * language: c++
 * reference size: 824 bytes
 * compiled size: 824 bytes (+0.0%)
 * differing lines: 170 of 297 reference instruction lines
 * differing bytes: 428
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
typedef struct S_g8c462a00 S_g8c462a00;
typedef struct S_g8c462a00_0 S_g8c462a00_0;
typedef struct S_g8c462a04 S_g8c462a04;
typedef struct S_g8c462a04_0 S_g8c462a04_0;
typedef struct S_g8c462a08 S_g8c462a08;
typedef struct S_g8c462a08_0 S_g8c462a08_0;
typedef struct S_g8c462a10 S_g8c462a10;
typedef struct Arg0_184 Arg0_184;
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
    virtual void v88(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x24];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x14];
    Arg0_184 *f184;
    char unknown188[0x134];
    int f2bc;
    char unknown2c0[0x4a];
    short f30a;
    short f30c;
    char unknown30e[0x16];
    Block_p0_324 f324;
    short f330;
    char unknown332[0x1e];
    int f350;
    char unknown354[0x2];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x10];
    int f36c;
    char unknown370[0x4];
    float f374;
    float f378;
    char unknown37c[0x8];
    int f384;
    char unknown388[0x10];
    int f398;
    int f39c;
    int f3a0;
    int f3a4;
    float f3a8;
    float f3ac;
    float f3b0;
    int f3b4;
} ObjectData;
struct S_g8c462a10 {
    char unknown0[0x430];
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void operation_8c03afac(void *);
extern "C" void operation_8c03af0c(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int operation_8c108698(int, int);
extern "C" void start_context_blend(void *);
extern "C" Object *TObjEneMoja_ctor_8c038104(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v3;
    int t1;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c261768;
    initialize_context_blend((void *)(((char *)o + 0x3b8)));
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c2eddf4);
    ((ObjectData *)o)->size = 0x3d4;
    o->v88(a2);
    {
        Vector3 *dst = (Vector3 *)&((ObjectData *)o)->f164;
        Vector3 *src = (Vector3 *)&((ObjectData *)o)->f3c;
        *dst = *src;
        *(Vector3 *)&((ObjectData *)o)->f158 = *src;
        *dst = *src;
        *(Vector3 *)&((ObjectData *)o)->f48 = *src;
    }
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f3ac = ((ObjectData *)o)->f374 + 0.3f;
    if (0.0f > ((ObjectData *)o)->f3ac) {
        ((ObjectData *)o)->f3ac = 0.0f;
    } else {
        if (((ObjectData *)o)->f3ac > 1.0f) {
            ((ObjectData *)o)->f3ac = 1.0f;
        }
    }
    ((ObjectData *)o)->f3b0 = ((ObjectData *)o)->f378 + 0.6f;
    if (0.0f > ((ObjectData *)o)->f3b0) {
        ((ObjectData *)o)->f3b0 = 0.0f;
    } else {
        if (((ObjectData *)o)->f3b0 > 1.0f) {
            ((ObjectData *)o)->f3b0 = 1.0f;
        }
    }
    operation_8c03afac((void *)o);
    operation_8c03af0c((void *)o);
    ((ObjectData *)o)->f350 = 1;
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c2edd00;
    ((ObjectData *)o)->f114 = (int)((*(S_g8c462a10 **)0x8c462a10)->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    copy_actor_records((void *)o, (void *)((void *)0x8c2eddc8), 1);
    ((ObjectData *)o)->f39c = 0;
    v3 = (int)(((ObjectData *)o)->f384 << 2);
    call_8c0121a0(o, (void *)(*(S_g8c462a00_0 **)((char *)((char *)*(S_g8c462a00 **)0x8c462a00 + 0x0) + (v3))), (void *)(*(S_g8c462a04_0 **)((char *)((char *)*(S_g8c462a04 **)0x8c462a04 + 0x0) + ((int)((ObjectData *)o)->f39c + ((ObjectData *)o)->f384 * 3 << 2))), (void *)(*(S_g8c462a08_0 **)((char *)((char *)*(S_g8c462a08 **)0x8c462a08 + 0x0) + (v3))));
    ((ObjectData *)o)->f36c = ((ObjectData *)o)->f384 * 0x1c + 0x8c2edd90;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f356 = 0;
    ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
    ((ObjectData *)o)->f398 = 0;
    ((ObjectData *)o)->f3a0 = -1;
    ((ObjectData *)o)->f3a4 = 1;
    ((ObjectData *)o)->f2bc |= 1;
    ((ObjectData *)o)->f34 |= 0x40000;
    ((ObjectData *)o)->f3a8 = 0.0f;
    t1 = operation_8c108698(-0xcfcfd0, 0xa303030);
    ((ObjectData *)o)->f3b4 = (int)t1;
    start_context_blend((void *)(((char *)o + 0x3b8)));
    return o;
}

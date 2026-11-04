/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bc534
 * function: TObjEneSaver_ctor_8c0bc534
 * language: c++
 * reference size: 968 bytes
 * compiled size: 984 bytes (+1.7%)
 * differing lines: 210 of 354 reference instruction lines
 * differing bytes: 835
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TObjEneSaver.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f3a0 S_g8c46f3a0;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_g8c46f3a4_0 S_g8c46f3a4_0;
typedef struct S_g8c46f3a8 S_g8c46f3a8;
typedef struct S_g8c46f3b0 S_g8c46f3b0;
typedef struct S_g8c46f3b0_42c S_g8c46f3b0_42c;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_3bc Arg0_3bc;
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
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x18];
    float f6c;
    float f70;
    float f74;
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
    char unknown354[0x6];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    float f370;
    float f374;
    char unknown378[0xc];
    int f384;
    char unknown388[0x4];
    int f38c;
    int f390;
    int f394;
    short f398;
    short f39a;
    int f39c;
    int f3a0;
    short f3a4;
    short f3a6;
    int f3a8;
    Vector3 f3ac;
    int f3b8;
    Arg0_3bc *f3bc;
    char unknown3c0[0x1c];
    int f3dc;
    int f3e0;
    int f3e4;
} ObjectData;
struct S_g8c46f3b0 {
    char unknown0[0x42c];
    S_g8c46f3b0_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c305af8;
extern S_g8c46f3a0 *g_8c46f3a0;
extern S_g8c46f3a4 *g_8c46f3a4;
extern S_g8c46f3a8 *g_8c46f3a8;
extern S_g8c46f3b0 *g_8c46f3b0;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void initialize_object_8c0fbf7c(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" int operation_8c108698(int, int);
extern "C" Object *TObjEneSaver_ctor_8c0bc534(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int v4;
    int v14;
    int v15;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c266330;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x3c0)));
    ((ObjectData *)o)->tag = (int)(g_8c305af8);
    ((ObjectData *)o)->size = 0x3e8;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f74 = 1.0f;
    ((ObjectData *)o)->f70 = 1.0f;
    ((ObjectData *)o)->f6c = 1.0f;
    v1 = (int)(int)(((ObjectData *)o)->f370 + 100.0f);
    ((ObjectData *)o)->f3a4 = v1;
    ((ObjectData *)o)->f3a6 = v1;
    if (0.0f > ((ObjectData *)o)->f374) {
        ((ObjectData *)o)->f374 = 0.0f;
    } else {
        if (((ObjectData *)o)->f374 > 8.0f) {
            ((ObjectData *)o)->f374 = 8.0f;
        }
    }
    ((ObjectData *)o)->f394 = 0;
    ((ObjectData *)o)->f394 |= 1 << (int)((ObjectData *)o)->f374;
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f384 = 0;
    ((ObjectData *)o)->f38c = 0x1e;
    ((ObjectData *)o)->f350 = 0;
    v4 = (int)(((ObjectData *)o)->f384 << 4);
    ((ObjectData *)o)->f38 = (int)(*(int *)((char *)((char *)g_8c46f3b0->f42c + 0x8) + (v4)));
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c46f3b0->f42c + 0xc) + (v4)));
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c305a00;
    ((ObjectData *)o)->f114 = (int)(g_8c46f3b0->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    copy_actor_records((void *)o, (void *)((void *)0x8c305acc), 1);
    ((ObjectData *)o)->f398 = 0;
    ((ObjectData *)o)->f39a = 0;
    call_8c0121a0(o, g_8c46f3a0, (void *)(*(S_g8c46f3a4_0 **)((char *)((char *)g_8c46f3a4 + 0x0) + (((ObjectData *)o)->f398 << 2))), g_8c46f3a8);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c305ab0;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f390 = 1;
    ((ObjectData *)o)->f3a8 = 0;
    *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f324;
    ((ObjectData *)o)->f3b8 = 0;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f34 |= 0x6040000;
    ((ObjectData *)o)->f3a0 = ((ObjectData *)o)->f39c = 0x101;
    t1 = create_effect_7708((void *)(((char *)o + 0x3ac)), (int)(((ObjectData *)o)->f39c), 0x10);
    ((ObjectData *)o)->f3bc = (Arg0_3bc *)(int)t1;
    if (((ObjectData *)o)->f3bc != 0) {
        bind_id((void *)(((ObjectData *)o)->f3bc), (unsigned short)(((ObjectData *)o)->f20));
    }
    v14 = (int)-0x5fcfcfd0;
    v15 = (int)-0xff78;
    t2 = operation_8c108698(v14, v15);
    ((ObjectData *)o)->f3dc = (int)t2;
    t3 = operation_8c108698(-0x5fcfcfd0, -0xff78);
    ((ObjectData *)o)->f3e0 = (int)t3;
    t4 = operation_8c108698(-0x5fcfcfd0, -0xcfcfd0);
    ((ObjectData *)o)->f3e4 = (int)t4;
    return o;
}

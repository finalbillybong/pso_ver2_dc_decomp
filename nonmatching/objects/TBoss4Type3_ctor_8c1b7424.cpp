/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b7424
 * function: TBoss4Type3_ctor_8c1b7424
 * language: c++
 * reference size: 1124 bytes
 * compiled size: 1136 bytes (+1.1%)
 * differing lines: 274 of 412 reference instruction lines
 * differing bytes: 913
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * class header: src/include/classes/TBoss4Type3.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_398_42c Arg0_398_42c;
typedef struct Arg0_398_430 Arg0_398_430;
typedef struct Arg0_398_430_4 Arg0_398_430_4;
typedef struct Arg0_518 Arg0_518;
typedef struct Arg0_51c Arg0_51c;
typedef struct Arg2 Arg2;
typedef struct S_vv4_0 S_vv4_0;
class Object;
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
    virtual void v88(void *);
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
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x4];
    int f64;
    char unknown68[0x10];
    Vector3 f78;
    char unknown84[0x238];
    int f2bc;
    char unknown2c0[0x58];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x2];
    int f334;
    char unknown338[0x22];
    short f35a;
    char unknown35c[0x30];
    int f38c;
    char unknown390[0x4];
    int f394;
    Arg0_398 *f398;
    int f39c;
    char unknown3a0[0x8];
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
    float f3b8;
    int f3bc;
    unsigned short f3c0;
    short f3c2;
    int f3c4;
    char unknown3c8[0x4];
    int f3cc;
    float f3d0;
    int f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
    float f3e4;
    int f3e8;
    int f3ec;
    float f3f0;
    float f3f4;
    int f3f8;
    char unknown3fc[0x11c];
    Arg0_518 *f518;
    Arg0_51c *f51c;
    int f520;
    int f524;
    int f528;
} ObjectData;
struct Arg2 {
    int f00;
};
struct Arg0_398 {
    char unknown0[0x42c];
    Arg0_398_42c *f42c;
    Arg0_398_430 *f430;
};
struct S_c8c1794c8 {
    char unknown0[0x24];
    int f24;
};
extern int g_8c32752c;
extern int g_8c327a70;
extern Vector3 g_8c327bf0;
extern int g_8c4e2280;
extern "C" char g_8c327a88[];
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" int copy_actor_records(void *, void *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void call_8c0121a0(Object *, int, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int call_8c161bdc(void *, int);
extern "C" int game_malloc_8c011ecc(int);
extern "C" void call_8c118ea4(int, int, float, float, float);
extern "C" void draw_grid_selected_rows(void *, void *, void *, int, int);
extern "C" int operation_8c108698(int, int);
extern "C" void call_8c1b8258(Object *);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c1b81b4(void *, int);
extern "C" Object *TBoss4Type3_ctor_8c1b7424(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v4;
    int v3;
    int v5;
    int v1;
    int t2;
    int v8;
    int v9;
    int t1;
    int t6;
    int v2;
    int t4;
    int t5;
    int t3;
    int t7;
    int t8;
    int t9;
    S_c8c1794c8 *t10;
    int t11;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274f10;
    ((ObjectData *)o)->tag = (int)(g_8c32752c);
    ((ObjectData *)o)->size = 0x52c;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f394 = (int)(a2->f00);
    o->v88(((char *)a2 + 0x4));
    ((ObjectData *)o)->f398 = (Arg0_398 *)g_8c4e2280;
    ((ObjectData *)o)->f28 = 0;
    ((ObjectData *)o)->f38 = 0;
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&g_8c327bf0;
    ((ObjectData *)o)->f64 = 0;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    t1 = copy_actor_records((void *)o, (void *)((void *)0x8c327a44), 1);
    ((ObjectData *)o)->f39c = (int)t1;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f31c = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f334 = 0;
    t2 = record24_8c17948c(0x38);
    t3 = record30_8c1794a0(0x38);
    t4 = block32_8c1794b4(0x38);
    call_8c0121a0(o, t2, t3, t4);
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f38c = 0x2f;
    ((ObjectData *)o)->f3ec = 0;
    ((ObjectData *)o)->f3f8 = 0;
    v1 = (int)0x440;
    v2 = (int)0x434;
    ((ObjectData *)o)->f3f4 = 0.6f;
    ((ObjectData *)o)->f3f0 = 0.0f;
    v3 = (int)0;
    while (3 > v3) {
        v4 = (int)(v3 << 2);
        t5 = call_8c161bdc((void *)(*(S_vv4_0 **)((char *)((char *)v4 + 0x0) + ((int)((void *)0x8c327bfc)))), (int)((int)o + v3 * 0x48 + v1));
        *(int *)((char *)((char *)((int)o + v2) + 0x0) + (v4)) = (int)t5;
        v3 = (int)(v3 + 1);
    }
    v5 = (int)*(int *)((char *)((char *)((ObjectData *)o)->f398->f42c + 0x8) + (g_8c327a70 << 4));
    t6 = game_malloc_8c011ecc(0x18);
    if (t6 != 0) {
        call_8c118ea4(t6, 2, 3.0f, 9.0f, 0.6f);
    }
    ((ObjectData *)o)->f518 = (Arg0_518 *)(int)t6;
    draw_grid_selected_rows((void *)(((ObjectData *)o)->f518), (void *)v5, (void *)(*(Arg0_398_430_4 **)((char *)((char *)((ObjectData *)o)->f398->f430 + 0x4) + (*(int *)(g_8c327a88 + 0x44) << 3))), 0x19, 0x1a);
    v8 = (int)-0x5fcfcfd0;
    v9 = (int)-0xff78;
    t7 = operation_8c108698(v8, v9);
    ((ObjectData *)o)->f520 = (int)t7;
    t8 = game_malloc_8c011ecc(0x18);
    if (t8 != 0) {
        call_8c118ea4(t8, 2, 3.0f, 9.0f, 0.6f);
    }
    ((ObjectData *)o)->f51c = (Arg0_51c *)(int)t8;
    draw_grid_selected_rows((void *)(((ObjectData *)o)->f51c), (void *)v5, (void *)(*(Arg0_398_430_4 **)((char *)((char *)((ObjectData *)o)->f398->f430 + 0x4) + (*(int *)(g_8c327a88 + 0x58) << 3))), 0xd, 0xe);
    t9 = operation_8c108698(-0x5fcfcfd0, -0xff78);
    ((ObjectData *)o)->f524 = (int)t9;
    call_8c1b8258(o);
    ((ObjectData *)o)->f3dc = ((ObjectData *)o)->f330;
    ((ObjectData *)o)->f3d4 = 0;
    t10 = record30_8c1794c8(0x38);
    ((ObjectData *)o)->f3d8 = (int)(t10->f24);
    ((ObjectData *)o)->f3b8 = 1.0f;
    ((ObjectData *)o)->f3bc = 0;
    ((ObjectData *)o)->f3ac = 0x10;
    ((ObjectData *)o)->f3a8 = 0x10;
    ((ObjectData *)o)->f3b4 = 0;
    ((ObjectData *)o)->f3b0 = 0;
    ((ObjectData *)o)->f3c2 = ((ObjectData *)o)->f3c0 = 0xffff;
    ((ObjectData *)o)->f3cc = -0x5db4;
    ((ObjectData *)o)->f3c4 = 0;
    ((ObjectData *)o)->f3d0 = 0.0f;
    ((ObjectData *)o)->f3e0 = 0;
    ((ObjectData *)o)->f3e4 = 0.0f;
    {
        Object *base = o;
        t11 = call_8c18e768((int)(((ObjectData *)base)->f330), 2);
        ((ObjectData *)base)->f3e8 = (int)t11;
    }
    ((ObjectData *)o)->f528 = 0;
    operation_8c1b81b4((void *)o, 0);
    return o;
}

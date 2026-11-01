/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137fbc
 * function: TBoss3Volopt_ctor_8c137fbc
 * language: c++
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 48 of 99 reference instruction lines
 * differing bytes: 52
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
typedef struct S_L8c4d9b64 S_L8c4d9b64;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct Arg0_s3c Arg0_s3c;
class Object;
typedef struct Block_L8c4d9b64_0 {
    int f00;
    int f04;
    int f08;
} Block_L8c4d9b64_0;
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
    char unknown22[0xe];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x4];
    int f3c;
    char unknown40[0x2ca];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x44];
    int f3d8;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_L8c4d9b64 {
    Block_L8c4d9b64_0 f00;
};
extern short g_8c313110;
extern int g_8c313114;
extern int g_8c31318c;
extern S_g8c44be90 *g_8c44be90;
extern int g_8c4d9b7c;
extern int g_8c4d9ba0;
extern S_L8c4d9b64 g_8c4d9b64;
extern "C" Object *TBoss3Volopt_ctor_8c137fbc(Object *o, int a1)
{
    Object **home = &o;
    char *v1;
    (void)home;
    ((void (*)(Object *, void *))0x8c0c2354)(o, g_8c44be90);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26d0e0;
    ((ObjectData *)o)->tag = (int)(g_8c31318c);
    ((ObjectData *)o)->size = 0x424;
    o->v88(a1);
    ((void (*)(Object *))0x8c053f34)(o);
    ((void (*)(int))0x8c138598)(0);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&(&g_8c4d9b64)->f00;
    *(Vector3 *)((char *)o + 0x3c) = *(Vector3 *)&(&g_8c4d9b64)->f00;
    ((ObjectData *)o)->f34 |= 0x6040000;
    g_8c313110 = ((ObjectData *)o)->f20 + 0x20;
    g_8c313114 = ((ObjectData *)o)->f30 + 0x20;
    ((ObjectData *)o)->f390 = 0;
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f3d8 = 0;
    ((void (*)(int))0x8c177748)(0x29);
    g_8c4d9b7c = 0;
    g_8c4d9ba0 = -1;
    return o;
}

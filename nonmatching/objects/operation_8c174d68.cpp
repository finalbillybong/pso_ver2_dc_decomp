/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c174d68
 * function: operation_8c174d68
 * language: c++
 * reference size: 360 bytes
 * compiled size: 352 bytes (-2.2%)
 * differing lines: 88 of 119 reference instruction lines
 * differing bytes: 268
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
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
typedef struct S_g8c319228 S_g8c319228;
typedef struct S_g8c319230 S_g8c319230;
typedef struct S_g8c319238 S_g8c319238;
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
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93(int, int);
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
};
typedef struct ObjectData {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x15c];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0xc];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0x8];
    int f3bc;
    float f3c0;
    float f3c4;
    Block16 f3c8;
} ObjectData;
extern Block16 g_8c2866e0;
extern S_g8c319228 *g_8c319228;
extern S_g8c319230 *g_8c319230;
extern S_g8c319238 *g_8c319238;
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void operation_8c05b950(void *, int, int, int);
extern "C" void word_operation_8c05b678(void *);
extern "C" int operation_8c14492c(void);
extern "C" void operation_8c174d68(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = 0;
    ((ObjectData *)o)->f28 = 0;
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c31925c), 1);
    t1 = record24_8c17948c(*(int *)0x8c319228);
    t2 = record30_8c1794a0(*(int *)0x8c319230);
    t3 = block32_8c1794b4(*(int *)0x8c319238);
    operation_8c05b950((void *)o, t1, t2, t3);
    ((ObjectData *)o)->f198 = ((ObjectData *)o)->f330 = 0x4e20;
    word_operation_8c05b678((void *)o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c319240;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f398 = 3.0f;
    o->v102();
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
    ((ObjectData *)o)->f3a8 = 0;
    t4 = operation_8c14492c();
    ((ObjectData *)o)->f3b0 = (int)t4;
    ((ObjectData *)o)->f3bc = -1;
    ((ObjectData *)o)->f3c0 = 1.0f;
    ((ObjectData *)o)->f3c4 = 0.0f;
    *(Block16 *)&((ObjectData *)o)->f3c8 = *(Block16 *)&g_8c2866e0;
}

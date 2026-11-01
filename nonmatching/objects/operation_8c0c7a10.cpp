/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c7a10
 * function: operation_8c0c7a10
 * language: c++
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 20 of 118 reference instruction lines
 * differing bytes: 26
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
typedef struct S_g8c46f9a0 S_g8c46f9a0;
typedef struct S_g8c46f9a8 S_g8c46f9a8;
typedef struct S_g8c46f9b0 S_g8c46f9b0;
class Object;
class Arg0_s3f8;
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x2ce];
    short f30a;
    char unknown30c[0x60];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x48];
    int f3e4;
    int f3e8;
    int f3ec;
    int f3f0;
    float f3f4;
    char unknown3f8[0x1c];
    float f414;
    float f418;
    float f41c;
    int f420;
    int f424;
    int f428;
} ObjectData;
class Arg0_s3f8 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct Arg0_s3f8Data {

} Arg0_s3f8Data;
extern int g_8c46f9c0;
extern int g_8c46f9c4;
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" void operation_8c05b950(void *, void *, void *, void *);
extern "C" void operation_8c05b6a0(Object *);
extern "C" void operation_8c05b92c(Object *, int);
extern "C" void operation_8c0c7dd8(Object *);
extern "C" void run_actor_release_callbacks(void *);
extern "C" void operation_8c0c7a10(Object *o)
{
    int v1;
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = (int)(g_8c46f9c0);
    ((ObjectData *)o)->f28 = (int)(g_8c46f9c4);
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c306674), 1);
    v1 = (int)(((ObjectData *)o)->f3e4 != 1);
    operation_8c05b950((void *)o, (void *)(*(S_g8c46f9a0 **)((char *)0x8c46f9a0 + (v1 << 2))), (void *)(*(S_g8c46f9a8 **)((char *)0x8c46f9a8 + (v1 << 2))), (void *)(*(S_g8c46f9b0 **)((char *)0x8c46f9b0 + (v1 << 2))));
    operation_8c05b6a0(o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c306658;
    if (((ObjectData *)o)->f3e4 == 1) {
        operation_8c05b92c(o, 0x20);
    } else {
        operation_8c05b92c(o, 0x21);
    }
    ((ObjectData *)o)->f398 = 3.0f;
    ((ObjectData *)o)->f3e8 = 0;
    ((ObjectData *)o)->f3ec = 3;
    ((ObjectData *)o)->f3f0 = 3;
    ((ObjectData *)o)->f3f4 = 0.0f;
    ((Arg0_s3f8 *)((char *)o + 0x3f8))->v3();
    ((ObjectData *)o)->f414 = 0.0f;
    ((ObjectData *)o)->f418 = 0.0f;
    ((ObjectData *)o)->f41c = 0.0f;
    ((ObjectData *)o)->f420 = 0;
    ((ObjectData *)o)->f424 = 0;
    ((ObjectData *)o)->f428 = 0;
    operation_8c0c7dd8(o);
    run_actor_release_callbacks((void *)o);
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
}

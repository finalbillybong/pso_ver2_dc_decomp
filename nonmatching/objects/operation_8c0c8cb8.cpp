/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c8cb8
 * function: operation_8c0c8cb8
 * language: c++
 * reference size: 580 bytes
 * compiled size: 584 bytes (+0.7%)
 * differing lines: 190 of 197 reference instruction lines
 * differing bytes: 370
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f9e0 S_g8c46f9e0;
typedef struct S_g8c46f9e4 S_g8c46f9e4;
typedef struct S_g8c46f9e8 S_g8c46f9e8;
typedef struct S_g8c46f9f0 S_g8c46f9f0;
typedef struct S_g8c46f9f0_42c S_g8c46f9f0_42c;
typedef struct S_x45040 S_x45040;
class Object;
class Arg0_s418;
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x6];
    int f38;
    Vector3 f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x96];
    short f1ae;
    char unknown1b0[0x15a];
    short f30a;
    char unknown30c[0x60];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x40];
    short f3dc;
    char unknown3de[0x2];
    float f3e0;
    int f3e4;
    char unknown3e8[0x18];
    short f400;
    short f402;
    int f404;
    int f408;
    int f40c;
    int f410;
    float f414;
    char unknown418[0x1c];
    int f434;
} ObjectData;
struct S_g8c46f9f0 {
    char unknown0[0x42c];
    S_g8c46f9f0_42c *f42c;
    int f430;
};
struct S_g8c46f9f0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_x45040 {
    Vector3 f00;
};
class Arg0_s418 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
extern S_g8c46f9e0 *g_8c46f9e0;
extern S_g8c46f9e4 *g_8c46f9e4;
extern S_g8c46f9e8 *g_8c46f9e8;
extern S_g8c46f9f0 *g_8c46f9f0;
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" void call_8c01c838(Object *, short);
extern "C" void operation_8c05b950(void *, void *, void *, void *);
extern "C" void operation_8c05b6a0(void *);
extern "C" void operation_8c05b92c(void *, int);
extern "C" void operation_8c05bf44(void *, int);
extern "C" void operation_8c05c1bc(void *, int);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c0c7890(int, int, int, int);
extern "C" void operation_8c0c78f4(int, int, int, int);
extern "C" void start_context_blend(void *);
extern "C" void call_8c0c95ac(Object *);
extern "C" void operation_8c0c8cb8(Object *o)
{
    int v1;
    int v2;
    int v7;
    int v8;
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = (int)(g_8c46f9f0->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c46f9f0->f42c->f0c);
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c3066dc), 1);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c306748;
    ((ObjectData *)o)->f114 = (int)(g_8c46f9f0->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    operation_8c05b950((void *)o, g_8c46f9e0, g_8c46f9e4, g_8c46f9e8);
    operation_8c05b6a0((void *)o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c3066c0;
    operation_8c05b92c((void *)o, 0x1f);
    ((ObjectData *)o)->f398 = 15.0f;
    operation_8c05bf44((void *)o, 0x1e);
    operation_8c05c1bc((void *)o, 0x1e);
    set_field_8c05af48((void *)o);
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
    ((ObjectData *)o)->f3dc = 0;
    ((ObjectData *)o)->f3e0 = 0.0f;
    ((ObjectData *)o)->f3e4 = 0;
    ((ObjectData *)o)->f3e4 &= -3;
    v2 = (int)0;
    goto L_8c0c8dac;
    v1 = (int)0;
L_8c0c8d94:;
    *(Vector3 *)&((S_x45040 *)((char *)(int *)((char *)o + 0x3e8) + v1 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v2 = (int)(v1 + 1);
L_8c0c8dac:;
    v1 = (int)v2;
    if (2 > v2) {
        goto L_8c0c8d94;
    }
    v8 = (int)(((ObjectData *)o)->f30 + 2);
    ((ObjectData *)o)->f400 = ((ObjectData *)o)->f20 + 1;
    v7 = (int)(((ObjectData *)o)->f20 + 2);
    operation_8c0c7890((int)o, (int)(((char *)o + 0x3e8)), (int)(((ObjectData *)o)->f20 + 1), (int)(((ObjectData *)o)->f30 + 1));
    ((ObjectData *)o)->f402 = v7;
    operation_8c0c78f4((int)o, (int)(((char *)o + 0x3f4)), v7, v8);
    ((ObjectData *)o)->f404 = 0;
    ((ObjectData *)o)->f408 = 0;
    ((ObjectData *)o)->f40c = 0;
    ((ObjectData *)o)->f410 = ((ObjectData *)o)->f1ae;
    ((ObjectData *)o)->f414 = 1.0f;
    ((Arg0_s418 *)((char *)o + 0x418))->v3();
    ((ObjectData *)o)->f434 = 0;
    start_context_blend((void *)(((char *)o + 0x490)));
    call_8c0c95ac(o);
}

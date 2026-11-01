/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1656bc
 * function: operation_8c1656bc
 * language: c++
 * reference size: 520 bytes
 * compiled size: 520 bytes (+0.0%)
 * differing lines: 78 of 171 reference instruction lines
 * differing bytes: 109
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_vv1_0 S_vv1_0;
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x2ce];
    short f30a;
    char unknown30c[0x60];
    int f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0xc];
    int f3a8;
    float f3ac;
    float f3b0;
    float f3b4;
    float f3b8;
    float f3bc;
    float f3c0;
    int f3c4;
    float f3c8;
    int f3cc;
    float f3d0;
    float f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
    int f3e4;
    int f3e8;
    int f3ec;
    char unknown3f0[0x4];
    int f3f4;
    float f3f8;
    float f3fc;
    float f400;
    float f404;
    float f408;
} ObjectData;
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x8];
    int f38;
};
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void operation_8c05b950(void *, int, int, int);
extern "C" void word_operation_8c05b678(void *);
extern "C" void operation_8c1656bc(Object *o, int a1)
{
    int t1;
    int v1;
    int t2;
    int t3;
    call_8c059c74(o);
    ((ObjectData *)o)->f38 = (int)((*(S_g8c4da370 **)0x8c4da370)->f42c->f38);
    ((ObjectData *)o)->f28 = (int)((*(S_g8c4da370 **)0x8c4da370)->f42c->f2c);
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c3174a8), 1);
    v1 = (int)(a1 << 2);
    t1 = record24_8c17948c((int)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c317458)))));
    t2 = record30_8c1794a0((int)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c317460)))));
    t3 = block32_8c1794b4((int)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c317468)))));
    operation_8c05b950((void *)o, t1, t2, t3);
    word_operation_8c05b678((void *)o);
    ((ObjectData *)o)->f36c = a1 * 0x1c + 0x8c317470;
    ((ObjectData *)o)->f398 = 3.0f;
    o->v101();
    ((ObjectData *)o)->f3a8 = 0;
    ((ObjectData *)o)->f3ac = 0.0f;
    ((ObjectData *)o)->f3b0 = 0.0f;
    ((ObjectData *)o)->f3b4 = 0.0f;
    ((ObjectData *)o)->f3b8 = 0.0f;
    ((ObjectData *)o)->f3bc = 0.0f;
    ((ObjectData *)o)->f3c0 = 0.0f;
    ((ObjectData *)o)->f3c4 = 0;
    ((ObjectData *)o)->f3c8 = 0.0f;
    ((ObjectData *)o)->f3cc = 0;
    ((ObjectData *)o)->f3d0 = 0.0f;
    ((ObjectData *)o)->f3d4 = 0.0f;
    ((ObjectData *)o)->f3d8 = 0;
    ((ObjectData *)o)->f3dc = 0;
    ((ObjectData *)o)->f3e0 = 2;
    ((ObjectData *)o)->f3e4 = 0;
    ((ObjectData *)o)->f3e8 = 0;
    ((ObjectData *)o)->f3ec = 0;
    ((ObjectData *)o)->f3f4 = 0;
    ((ObjectData *)o)->f3f8 = 0.0f;
    ((ObjectData *)o)->f3fc = 0.0f;
    ((ObjectData *)o)->f400 = 0.0f;
    ((ObjectData *)o)->f404 = 0.0f;
    ((ObjectData *)o)->f408 = 0.0f;
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
}

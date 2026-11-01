/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e47cc
 * function: operation_8c0e47cc
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 10 of 92 reference instruction lines
 * differing bytes: 17
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
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv9 S_vv9;
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
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x20];
    short f390;
    char unknown392[0x22];
    float f3b4;
} ObjectData;
struct S_vv9 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern "C" void operation_8c01c5f0(Object *);
extern "C" float call_8c044964(Object *, float, Vector3);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0e47cc(Object *o)
{
    S_vv9 *v9;
    float t1;
    float sum;
    operation_8c01c5f0(o);
    switch (((ObjectData *)o)->f30c) {
    case 0:
        ((ObjectData *)o)->f30c = 1;
        o->v97();
    }
    v9 = (S_vv9 *)((ObjectData *)o)->f334;
    if (v9 != 0) {
        t1 = call_8c044964(o, ((ObjectData *)o)->f3b4, *(Vector3 *)&v9->f324);
        operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(((char *)o + 0x318)));
        sum = ((ObjectData *)o)->f3b4 + ((ObjectData *)o)->fdc->f0c;
        if (sum * sum > t1) {
            ((ObjectData *)o)->f30a = 3;
            ((ObjectData *)o)->f30c = 0;
            ((ObjectData *)o)->f34 &= -0x1001;
            ((ObjectData *)o)->f390 = 0;
        }
    }
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}

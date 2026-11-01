/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c174f1c
 * function: TBoss2Joint_update_8c174f1c
 * language: c++
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 2 of 85 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_3ac Arg0_3ac;
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
    virtual int v92();
    virtual void v93(int, int);
    virtual void v94();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2c2];
    short f30a;
    char unknown30c[0xa0];
    Arg0_3ac *f3ac;
} ObjectData;
struct Arg0_3ac {
    Vector3 f00;
};
extern "C" int operation_8c03d338(void);
extern "C" void latch_counter_8c059ee4(void *);
extern "C" void operation_8c17529c(Object *);
extern "C" void operation_8c1750c8(void *);
extern "C" void call_8c05a108(Object *);
extern "C" void call_8c102e38(void *, int, int, float, int);
extern "C" void TBoss2Joint_update_8c174f1c(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f3ac->f00;
        o->v89();
        t2 = o->v92();
        if (t2 == 0) {
            o->v93(((ObjectData *)o)->f30a, 3);
        }
        o->v93(((ObjectData *)o)->f30a, 0);
        latch_counter_8c059ee4((void *)o);
        operation_8c17529c(o);
        operation_8c1750c8((void *)o);
        o->v94();
        call_8c05a108(o);
        call_8c102e38((void *)(((char *)o + 0x3c)), -0x5db4, 1, 1.2f, 1);
    }
}

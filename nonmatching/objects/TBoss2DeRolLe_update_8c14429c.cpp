/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14429c
 * function: TBoss2DeRolLe_update_8c14429c
 * language: c++
 * reference size: 760 bytes
 * compiled size: 760 bytes (+0.0%)
 * differing lines: 2 of 294 reference instruction lines
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_3e8 Arg0_3e8;
typedef struct Arg0_638 Arg0_638;
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
    virtual int v41();
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    char unknown30c[0xd0];
    int f3dc;
    char unknown3e0[0x4];
    int f3e4;
    Arg0_3e8 *f3e8;
    char unknown3ec[0x28];
    int f414;
    char unknown418[0x220];
    Arg0_638 *f638;
} ObjectData;
struct Arg0_3e8 {
    char unknown0[0x8];
    int f08;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" int call_8c05a0a8(void);
extern "C" void operation_8c09e6d0(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c1764f8(int, Object *, void *);
extern "C" int operation_8c05bae8(void);
extern "C" int call_8c05bb18(Object *);
extern "C" void operation_8c144d8c(Object *);
extern "C" int call_8c05bb24(void);
extern "C" int operation_8c144c60(void *);
extern "C" void operation_8c144c84(Object *);
extern "C" void operation_8c144594(void *);
extern "C" void operation_8c145304(void *);
extern "C" void call_8c1451f4(Object *);
extern "C" void latch_counter_8c059ee4(void *);
extern "C" void operation_8c144698(void *);
extern "C" void call_8c05a108(Object *);
extern "C" void call_8c102e38(float, void *, int, int, int);
extern "C" void call_8c144efc(Object *);
extern "C" void update_hierarchy(void *);
extern "C" void TBoss2DeRolLe_update_8c14429c(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        o->v110();
        return;
    }
    v1 = (int)((ObjectData *)o)->f3dc;
    if (((v1 & 0x8000)) != 0) {
        operation_8c09e6d0((void *)o);
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((v1 & 0x80)) != 0) {
        ((ObjectData *)o)->f3dc = v1 & -0x81;
        ((ObjectData *)o)->f3dc |= 0x40;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x504);
        if (t2 != 0) {
            call_8c1764f8(t2, o, (void *)(((ObjectData *)o)->f638));
        }
    }
    t3 = operation_8c05bae8();
    if (t3 != 0 && ((ObjectData *)o)->f3e4 == 0) {
        t4 = call_8c05bb18(o);
        if (t4 != 0) {
            ((ObjectData *)o)->f414 = 0;
        } else {
            ((ObjectData *)o)->f414 = 1;
        }
    }
    if (((ObjectData *)o)->f3e4 != 0 && ((((ObjectData *)o)->f3e8->f08 & 0x10000)) != 0) {
        switch (((ObjectData *)o)->f414) {
        case 1:
            ((ObjectData *)o)->f414 = 0;
            operation_8c144d8c(o);
            break;
        case 0:
            ((ObjectData *)o)->f414 = 2;
            break;
        case 2:
            ((ObjectData *)o)->f414 = 1;
        }
    }
    t5 = call_8c05bb24();
    o->v50();
    o->v51();
    if (t5 == 0) {
        if (((ObjectData *)o)->f30a == 0x1f || ((ObjectData *)o)->f30a == 0x20 || ((ObjectData *)o)->f30a == 0x1e) {
            ((ObjectData *)o)->f34 |= 0x800;
            goto L_8c1443d0;
        }
        ((ObjectData *)o)->f34 &= -0x801;
L_8c1443d0:;
        if (((ObjectData *)o)->f414 != 1) {
            if (((ObjectData *)o)->f414 == 2) {
                t6 = operation_8c144c60((void *)o);
                if (t6 != 0) {
                    operation_8c144c84(o);
                    goto L_8c14440e;
                }
                o->v93(((ObjectData *)o)->f30a, 2);
            } else {
                operation_8c144594((void *)o);
            }
L_8c14440e:;
            t7 = o->v41();
            if (t7 != 0) {
                o->v70();
            }
            o->v93(((ObjectData *)o)->f30a, 8);
            o->v93(((ObjectData *)o)->f30a, 0);
        } else {
            t8 = o->v41();
            if (t8 != 0) {
                o->v70();
            }
            o->v93(((ObjectData *)o)->f30a, 0);
        }
        operation_8c145304((void *)o);
        call_8c1451f4(o);
    }
    latch_counter_8c059ee4((void *)o);
    o->v94();
    operation_8c144698((void *)o);
    call_8c05a108(o);
    call_8c102e38(2.0f, (void *)(((char *)o + 0x3c)), -0x5db4, 1, 1);
    call_8c144efc(o);
    if (t5 == 0) {
        update_hierarchy((void *)(((char *)o + 0x3f4)));
    }
}

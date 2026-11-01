/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c9258
 * function: operation_8c0c9258
 * language: c++
 * reference size: 440 bytes
 * compiled size: 456 bytes (+3.6%)
 * differing lines: 108 of 185 reference instruction lines
 * differing bytes: 383
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv33 S_vv33;
typedef struct S_vv5 S_vv5;
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
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual int v105();
};
typedef struct ObjectData {
    char unknown0[0x400];
    unsigned short f400;
    unsigned short f402;
} ObjectData;
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
struct S_vv33 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c467874;
extern int g_8c467878;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int operation_8c0113bc(int, int);
extern "C" int call_8c05bf84(Object *, int);
extern "C" int operation_8c05b320(void *);
extern "C" int operation_8c05b29c(int, int);
extern "C" void call_8c05be98(Object *, int);
extern "C" void reset_link_8c05bf28(void *);
extern "C" int operation_8c0c9258(Object *o, float f0, float f1)
{
    int v29;
    S_vv5 *v5;
    float v4;
    int v28;
    short v6;
    int v1;
    int v30;
    short v35;
    int v37;
    int v3;
    int v27;
    float v32;
    short v34;
    int v41;
    int v45;
    S_vv33 *v33;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float t10;
    int t11;
    int t12;
    t1 = o->v105();
    if (t1 != 0) {
        S_c8c053d84 *self;
        S_c8c053d84 **home = &self;
        (void)home;
        v1 = (int)0xffff;
        t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f400));
        self = (S_c8c053d84 *)t2;
        t3 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f402));
        v3 = (int)g_8c467874;
        v4 = (float)f1;
        while ((v3 + g_8c467878) > v3) {
            v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
            if (v5 != (void *)o && (int)(v5) != (int)(self) && (int)v5 != t3) {
                t4 = active_unflagged_8c05b2dc((void *)v5);
                if (t4 != 0) {
                    t5 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)((int)v5 + 0x3c));
                    if (v4 > t5) {
                        t6 = operation_8c0113bc((int)(((char *)o + 0x324)), (int)((int)v5 + 0x324));
                        if (t6 == 0) {
                            v6 = (short)v5->f20;
                            v1 = (int)v6;
                            v4 = (float)t5;
                        }
                    }
                }
            }
            v3 = (int)(v3 + 1);
        }
        t7 = call_8c05bf84(o, v1);
        if (t7 != 0) {
            return 1;
        }
    }
    v30 = (int)0;
    v27 = (int)0xffff;
    v28 = (int)g_8c467874;
    v32 = (float)f1;
    v29 = (int)0x324;
    while (v28 > v30) {
        v33 = (S_vv33 *)*(S_g8c467240 **)((char *)0x8c467240 + (v30 << 2));
        t8 = active_unflagged_8c05b2dc((void *)v33);
        v41 = (int)v27;
        v37 = (int)v27;
        if (t8 != 0) {
            t10 = squared_distance_xz((void *)((int)o + v29), (void *)((int)v33 + v29));
            t9 = operation_8c05b320((void *)v33);
            if (t9 != 0) {
                if (!(f0 > t10)) {
                    v45 = (int)v27;
                    v37 = (int)v27;
                    goto L_8c0c937a;
                }
                t11 = operation_8c05b29c((int)o, (int)v33);
                v45 = (int)v27;
                v37 = (int)v27;
                if (t11 == 0) {
                    goto L_8c0c937a;
                }
                v34 = (short)v33->f20;
                v41 = (int)v34;
                f0 = (float)t10;
            } else {
                v37 = (int)v27;
                if (v32 > t10) {
                    t12 = operation_8c05b29c((int)o, (int)v33);
                    v37 = (int)v27;
                    if (t12 != 0) {
                        v35 = (short)v33->f20;
                        v37 = (int)v35;
                        v32 = (float)t10;
                    }
                }
                v41 = (int)v27;
            }
        }
        v45 = (int)v41;
L_8c0c937a:;
        v30 = (int)(v30 + 1);
    }
    if ((unsigned short)v45 != 0xffff) {
        call_8c05be98(o, v45);
        return 1;
    }
    if ((unsigned short)v37 != 0xffff) {
        call_8c05be98(o, v37);
        return 1;
    }
    reset_link_8c05bf28((void *)o);
    return 0;
}

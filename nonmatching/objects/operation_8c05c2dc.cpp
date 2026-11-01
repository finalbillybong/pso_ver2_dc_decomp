/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05c2dc
 * function: operation_8c05c2dc
 * language: c++
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 4 of 125 reference instruction lines
 * differing bytes: 156
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
typedef struct S_vv16 S_vv16;
typedef struct S_vv6 S_vv6;
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
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    Arg0_3ac *f3ac;
    char unknown3b0[0x24];
    int f3d4;
    int f3d8;
} ObjectData;
struct S_vv6 {
    char unknown0[0x34];
    int f34;
};
struct S_vv16 {
    char unknown0[0x34];
    int f34;
};
extern "C" int hierarchy_is_active(void *);
extern "C" int operation_8c0113bc(int, int);
extern "C" int operation_8c05c2dc(Object *o)
{
    Object *self = o;
    S_vv6 *v6;
    int v7;
    int t2;
    int t1;
    int v5;
    int v13;
    int t3;
    int v24;
    int v15;
    int t4;
    int v26;
    int v17;
    int v3;
    Arg0_3ac *pm8;
    t1 = self->v105();
    if (t1 == 0) {
        if (0 == (int)((unsigned int)0x1000 > (unsigned int)(0xffff & (int)((ObjectData *)self)->f3a8))) {
            pm8 = (Arg0_3ac *)0;
            ((ObjectData *)self)->f3ac = pm8;
            ((ObjectData *)self)->f3a8 = 0xffff;
            return 0;
        }
    }
    if (((ObjectData *)self)->f3d4 >= ((ObjectData *)self)->f3d8) {
        ((ObjectData *)self)->f3d4 = 0;
        v3 = (int)1;
    } else {
        ((ObjectData *)self)->f3d4 += 1;
        v3 = (int)0;
    }
    if (v3 != 0) {
        int pm6;
        unsigned short pm5;
        pm6 = 0;
        v5 = (int)pm6;
        v6 = (S_vv6 *)((ObjectData *)self)->f3ac;
        v7 = 0;
        if (0 != v6) {
            t2 = hierarchy_is_active((void *)v6);
            if (!(0 == t2)) {
                v3 = (int)1;
                v7 = v3;
            }
        }
        if (v7 != 0) {
            int pm7;
            pm7 = v6->f34;
            if (((0x2040800 & pm7)) == 0) {
                v5 = (int)1;
            }
        }
        if (v5 != 0) {
            t1 = operation_8c0113bc((int)(((char *)self + 0x324)), ((int)v6 + 0x324));
            t3 = t1;
            if (0 == t3) {
                v13 = (int)1;
                goto L_8c05c384;
            }
        }
        pm5 = 0;
        v13 = (int)pm5;
    L_8c05c384:
        ;
        if (!(v13 != 0)) {
            goto L_8c05c3bc;
        }
        v26 = 1;
    } else {
        v15 = (int)0;
        v17 = (int)0;
        v6 = (S_vv6 *)((ObjectData *)self)->f3ac;
        if (0 != v6) {
            t4 = hierarchy_is_active((void *)v6);
            if (!(t4 == 0)) {
                v17 = (int)1;
            }
        }
        if (v17 != 0 && 0 == ((v6->f34 & 0x2040800))) {
            v15 = (int)1;
        }
        if (v15 != 0) {
            v5 = (int)v17;
            v7 = (int)v15;
            v24 = (int)1;
        } else {
            v7 = v15;
            v5 = (int)v17;
        L_8c05c3bc:
            ;
            t2 = (int)0;
            ((ObjectData *)self)->f3ac = (Arg0_3ac *)0;
            v24 = t2;
            ((ObjectData *)self)->f3a8 = 0xffff;
        }
        v26 = (int)v24;
    }
    return (int)(v26);
}

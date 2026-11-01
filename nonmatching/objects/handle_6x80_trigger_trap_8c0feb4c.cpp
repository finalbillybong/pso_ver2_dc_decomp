/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0feb4c
 * function: handle_6x80_trigger_trap_8c0feb4c
 * language: c++
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 48 of 109 reference instruction lines
 * differing bytes: 49
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c30ab10 S_g8c30ab10;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv5 S_vv5;
class S_vv6;
class S_vv6 {
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
typedef struct S_vv6Data {
    int f00;
    char unknown4[0x306];
    short f30a;
    char unknown30c[0x86];
    unsigned short f392;
} S_vv6Data;
struct S_vv5 {
    char unknown0[0x4];
    unsigned short f04;
    unsigned short f06;
};
extern "C" void handle_6x80_trigger_trap_8c0feb4c(int a0)
{
    int i;
    int end;
    int tag;
    S_vv6 *p;
    S_vv5 *v5;
    int v7;
    if (a0 != 0) {
        i = *(int *)0x8c467874 + *(int *)0x8c467878;
        tag = *(int *)0x8c30ab10;
        end = *(int *)0x8c467870;
        v5 = (S_vv5 *)a0;
        for (; end > i; i++) {
            p = *(S_vv6 **)((char *)0x8c467240 + (i << 2));
            if (p != 0) {
                v7 = (((S_vv6Data *)p)->f00 == tag);
                if (v7 != 0 && (((S_vv6Data *)p)->f392 & 0xffff) == v5->f04) {
                    switch (v5->f06) {
                    case 0:
                        switch (((S_vv6Data *)p)->f30a) {
                        case 0:
                        case 1:
                            p->v96();
                        }
                        break;
                    case 1:
                        switch (((S_vv6Data *)p)->f30a) {
                        case 0:
                        case 1:
                        case 2:
                            p->v97();
                        }
                        break;
                    case 2:
                        switch (((S_vv6Data *)p)->f30a) {
                        case 0:
                        case 1:
                        case 2:
                        case 3:
                            ((S_vv6Data *)p)->f30a = 4;
                        }
                        break;
                    }
                    return;
                }
            }
        }
    }
}

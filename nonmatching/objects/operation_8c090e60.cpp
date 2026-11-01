/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c090e60
 * function: operation_8c090e60
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 18 of 80 reference instruction lines
 * differing bytes: 108
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_x39568 S_x39568;
class Arg0_3dc;
struct Arg1 {
    float f00;
};
struct Frame {
    unsigned short id;
    char unknown2[0x2];
    float f04;
};
struct Object {
    char unknown0[0x3ac];
    int f3ac;
    char unknown3b0[0x2c];
    Arg0_3dc *f3dc;
    char unknown3e0[0x104];
    unsigned short f4e4;
};
struct S_x39568 {
    float f00;
};
class Arg0_3dc {
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
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual int v121(int);
};
typedef struct Arg0_3dcData {

} Arg0_3dcData;
extern "C" int call_8c05a2e8(Object *, Frame *);
extern "C" int lookup_low_id(int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void operation_8c05bed8(Object *, int);
extern "C" int operation_8c090e60(Object *o, float *out)
{
    Frame frame[4];
    int n;
    int i;
    int id;
    int found;
    int off;
    found = 0;
    *out = -1.0f;
    n = call_8c05a2e8(o, frame);
    for (i = found; i < n; i++) {
        off = i << 3;
        id = lookup_low_id((unsigned short)*(unsigned short *)((char *)frame + off));
        if (o->f3ac != id) {
            o->f3dc = (Arg0_3dc *)lookup_object_by_id(o->f4e4);
            if (o->f3dc->v121(id) != 0) {
                *out = signed_sqrt_8c37f6c0(*(float *)(off + (char *)&frame[0].f04));
                found = 1;
                operation_8c05bed8(o, id);
                break;
            }
        }
    }
    return found;
}

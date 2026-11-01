/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05bfd8
 * function: operation_8c05bfd8
 * language: c++
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 8 of 67 reference instruction lines
 * differing bytes: 95
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
    int f3ac;
} ObjectData;
extern "C" int operation_8c05a430(Object *, float);
extern "C" int operation_8c05a1b4(int, float);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int operation_8c05bfd8(Object *o, float f0)
{
    int v2;
    int v10;
    int v15;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = o->v105();
    if (t1 != 0) {
        t2 = operation_8c05a430(o, f0 * f0);
        v2 = (int)t2;
        if ((unsigned short)t2 != 0xffff) {
            goto L_8c05c01e;
        }
        t4 = operation_8c05a1b4((int)o, f0 * f0);
        v2 = (int)t4;
    } else {
        t5 = operation_8c05a1b4((int)o, f0 * f0);
        v2 = (int)t5;
    }
L_8c05c01e:;
    v10 = (int)0xffff;
    if ((unsigned short)v2 != (unsigned short)v10) {
        ((ObjectData *)o)->f3a8 = v2;
        if ((unsigned short)v2 != v10) {
            t3 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f3a8));
            ((ObjectData *)o)->f3ac = (int)t3;
        } else {
            ((ObjectData *)o)->f3ac = 0;
        }
        v15 = (int)1;
    } else {
        ((ObjectData *)o)->f3ac = 0;
        ((ObjectData *)o)->f3a8 = v10;
        v15 = (int)0;
    }
    return (int)(v15);
}

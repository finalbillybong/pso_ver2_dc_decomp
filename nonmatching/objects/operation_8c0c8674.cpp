/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c8674
 * function: operation_8c0c8674
 * language: c++
 * reference size: 216 bytes
 * compiled size: 220 bytes (+1.9%)
 * differing lines: 10 of 88 reference instruction lines
 * differing bytes: 86
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
typedef struct Arg0_3dc Arg0_3dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_p0_324 {
    float f00;
    float f04;
    float f08;
} Block_p0_324;
struct S_vv1 {
    int f00;
};
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
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x324];
    Block_p0_324 f324;
    char unknown330[0xac];
    Arg0_3dc *f3dc;
    char unknown3e0[0x14];
    float f3f4;
} ObjectData;
struct S_vv2 {
    Vector3 f00;
};
extern "C" void operation_8c059ea4(void *, int);
extern "C" float operation_8c05b8c0(int);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void operation_8c0c8674(Object *o, int a1)
{
    S_vv1 *v1;
    float t1;
    float t2;
    v1 = (S_vv1 *)((char *)o + 0x424);
    switch (a1) {
        case 4:
        v1->f00 = 0;
        return;
        case 3:
        if (!(v1->f00 > 0xf)) {
            return;
        }
        operation_8c059ea4((void *)o, 1);
        return;
        case 0:
        v1->f00 += 1;
        *(Vector3 *)&((ObjectData *)o)->f324 = *(&((S_vv2 *)((ObjectData *)o)->f3dc)->f00);
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f3f4;
        t1 = operation_8c05b8c0((int)o);
        ((ObjectData *)o)->f324.f00 += t1;
        ((ObjectData *)o)->f324.f08 += operation_8c05b8c0((int)o);
        o->v108();
        return;
        case 5:
        reset_segments_8c05a124((void *)o);
    }
}

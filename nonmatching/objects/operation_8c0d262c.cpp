/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d262c
 * function: operation_8c0d262c
 * language: c++
 * reference size: 324 bytes
 * compiled size: 316 bytes (-2.5%)
 * differing lines: 56 of 125 reference instruction lines
 * differing bytes: 281
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original; compiled size
 *   differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg0_s48 Arg0_s48;
class Object;
class Arg0_s3f4;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    int f48;
    char unknown4c[0x8];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x232];
    Vector3 f324;
    char unknown330[0xac];
    int f3dc;
    int f3e0;
    int f3e4;
    char unknown3e8[0x8];
    int f3f0;
    char unknown3f4[0x1c];
    int f410;
    char unknown414[0x6c];
    int f480;
    int f484;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s48 {
    char unknown0[0x4];
    int f04;
    int f08;
};
class Arg0_s3f4 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct Arg0_s3f4Data {

} Arg0_s3f4Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void start_context_blend(void *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c0d262c(Object *o, int a1)
{
    char *v1;
    char *v2;
    int t1;
    switch (a1) {
    case 0:
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        o->v101();
        *(int *)((char *)o + 0x3dc) &= -7;
        ((ObjectData *)o)->f3dc |= 1;
        operation_8c059ef8((void *)o, 2);
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f54;
        *(Vector3 *)((char *)o + 0x48) = *(Vector3 *)&((ObjectData *)o)->f3c;
        *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f3e0 = -1;
        ((ObjectData *)o)->f3e4 = -0x1000000;
        ((ObjectData *)o)->f3f0 = 1;
        ((Arg0_s3f4 *)((char *)o + 0x3f4))->v2();
        ((ObjectData *)o)->f410 = 1;
        start_context_blend((void *)(((char *)o + 0x464)));
        ((ObjectData *)o)->f480 = ((ObjectData *)o)->f3f0 << 0xf;
        ((ObjectData *)o)->f484 = 0;
        return;
    case 3:
        t1 = call_8c05c0dc(o, 400.0f);
        if (t1 != 0) {
            operation_8c059ea4((void *)o, 1);
        }
    }
}

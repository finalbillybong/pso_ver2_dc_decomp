/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c056e28
 * function: operation_8c056e28
 * language: c++
 * reference size: 544 bytes
 * compiled size: 544 bytes (+0.0%)
 * differing lines: 30 of 209 reference instruction lines
 * differing bytes: 25
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
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
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109(float);
};
typedef struct ObjectData {
    char unknown0[0x40];
    float f40;
    char unknown44[0xa4];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0xc];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x4];
    float f328;
    char unknown32c[0x60];
    Arg0_38c *f38c;
    char unknown390[0x4];
    int f394;
    char unknown398[0xac];
    int f444;
    float f448;
    float f44c;
    char unknown450[0x4];
    float f454;
} ObjectData;
struct S_vv1 {
    int f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c05a120(Object *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c055170(Object *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" float normalize_xz_checked(void *);
extern "C" int slide_and_dispatch_contact(void *, float, float, float);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void operation_8c056e28(Object *o, int a1)
{
    S_vv1 *v1;
    float v7;
    int t1;
    int t2;
    float t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x3dc);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 3;
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x444);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        ((ObjectData *)o)->f444 |= 2;
        operation_8c059ef8((void *)o, (int)(((ObjectData *)o)->f30a));
        operation_8c05a120(o);
        t1 = call_8c24e644(0x30025, (void *)(((ObjectData *)o)->f38c));
        play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        v1->f00 = 0;
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        t2 = o->v105();
        if (t2 != 0) {
            o->v109(200.0f);
        }
        if (((ObjectData *)o)->f394 == 3) {
            call_8c055170(o);
            return;
        }
        operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
        return;
    case 0:
        operation_8c01c5f0(o);
        v1->f00 += 1;
        ((ObjectData *)o)->f44c = ((ObjectData *)o)->f318;
        ((ObjectData *)o)->f454 = ((ObjectData *)o)->f320;
        t3 = normalize_xz_checked((void *)(((char *)o + 0x44c)));
        t4 = slide_and_dispatch_contact((void *)o, ((ObjectData *)o)->f44c, ((ObjectData *)o)->f454, t3);
        if (t4 != 0) {
            ((ObjectData *)o)->f444 |= 2;
        } else {
            ((ObjectData *)o)->f444 &= -3;
        }
        v7 = (float)((ObjectData *)o)->f40;
        if (1.2f > (((ObjectData *)o)->f448 - v7)) {
            ((ObjectData *)o)->f448 = v7 + 1.2f;
        }
        ((ObjectData *)o)->f328 = ((ObjectData *)o)->f448;
        ((ObjectData *)o)->f318 *= 0.5f;
        ((ObjectData *)o)->f320 *= 0.5f;
        o->v95();
        return;
    case 5:
        reset_segments_8c05a124((void *)o);
    }
}

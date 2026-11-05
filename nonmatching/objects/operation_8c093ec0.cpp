/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c093ec0
 * function: operation_8c093ec0
 * language: c++
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 78 of 168 reference instruction lines
 * differing bytes: 133
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
typedef struct Arg0_3dc Arg0_3dc;
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
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual int v113();
};
typedef struct ObjectData {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ca];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    Arg0_3dc *f3dc;
    int f3e0;
    int f3e4;
    char unknown3e8[0x1c];
    float f404;
    char unknown408[0x10];
    int f418;
    char unknown41c[0x4];
    int f420;
    char unknown424[0xc0];
    unsigned short f4e4;
} ObjectData;
struct Arg0_3dc {
    char unknown0[0x3e4];
    int f3e4;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void set_fields_8c05c1a4(void *, void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c090d88(Object *, float);
extern "C" void slide_and_dispatch_contact(void *, float, float, float);
extern "C" void operation_8c093ec0(Object *o, int a1)
{
    int t1;
    int t2;
    float t3;
    int t4;
    switch (a1) {
    case 5:
        break;
    case 4:
        if (((ObjectData *)o)->f418 == 5) {
            ((ObjectData *)o)->ff0 = 3;
            ((ObjectData *)o)->f418 = 4;
        }
        operation_8c059ef8((void *)o, 9);
        *(int *)((char *)o + 0x3e4) &= -0x400001;
        o->v101();
        if (((ObjectData *)o)->f3e0 == 1) {
            t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f4e4));
            ((ObjectData *)o)->f3dc = (Arg0_3dc *)(int)t1;
            ((ObjectData *)o)->f3dc->f3e4 |= 8;
        }
        ((ObjectData *)o)->f420 = 0;
        return;
    case 3:
        t2 = o->v113();
        if (t2 != 0) {
            return;
        }
        if (!(1.0f > ((ObjectData *)o)->f3c8)) {
            return;
        }
        operation_8c059ea4((void *)o, 5);
        return;
    case 0:
        operation_8c01c5f0(o);
        set_fields_8c05c1a4((void *)o, (void *)(((char *)o + 0x54)));
        aim_direction_8c05bdd4((void *)o);
        t3 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t4 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)), 0x400);
        ((ObjectData *)o)->f64 = (int)t4;
        ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
        operation_8c090d88(o, ((ObjectData *)o)->f40 + ((ObjectData *)o)->f404);
        slide_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, 0.8f);
        o->v94();
    }
}

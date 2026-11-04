/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c091600
 * function: operation_8c091600
 * language: c++
 * reference size: 464 bytes
 * compiled size: 468 bytes (+0.9%)
 * differing lines: 32 of 177 reference instruction lines
 * differing bytes: 180
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_3ac Arg0_3ac;
class Object;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    virtual void v107(...);
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual int v113();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0x30];
    int f3e0;
    int f3e4;
    char unknown3e8[0x20];
    float f408;
    char unknown40c[0x8];
    float f414;
    int f418;
    char unknown41c[0xb8];
    int f4d4;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
extern "C" void operation_8c059ef8(Object *, int);
extern "C" void operation_8c059ea4(Object *, int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void hs_8c05c0dc(Object *, float);
extern "C" void operation_8c090d88(Object *, float);
extern "C" void operation_8c091600(Object *o, int a1)
{
    Frame frame;
    int t1;
    int t2;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        operation_8c059ef8(o, 2);
        ((ObjectData *)o)->f3e4 &= -0x400001;
        o->v101();
        ((ObjectData *)o)->f418 = 4;
        ((ObjectData *)o)->f4d4 = 1;
        return;
    case 3:
        t1 = o->v113();
        if (t1 != 0) {
            return;
        }
        if (((((ObjectData *)o)->f3e4 & 1)) != 0) {
            ((ObjectData *)o)->f3e4 = (unsigned int)((ObjectData *)o)->f3e4 >> 1 << 1;
            operation_8c059ea4(o, 3);
            return;
        }
        t2 = active_unflagged_8c05b2dc(((ObjectData *)o)->f3ac);
        if (t2 == 0) {
            return;
        }
        operation_8c059ea4(o, 3);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (((ObjectData *)o)->f3e0 != 1) {
            hs_8c05c0dc(o, 200.0f);
        }
        if (((ObjectData *)o)->f3e0 == 2) {
            operation_8c090d88(o, ((ObjectData *)o)->f3c.f04 + 25.0f);
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f0c.f04 = ((ObjectData *)o)->f414;
            o->v107();
        } else {
            operation_8c090d88(o, ((ObjectData *)o)->f408 + ((ObjectData *)o)->f3c.f04);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f00.f04 = ((ObjectData *)o)->f414;
            o->v107((&frame));
        }
        o->v95();
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}

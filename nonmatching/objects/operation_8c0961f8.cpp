/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0961f8
 * function: operation_8c0961f8
 * language: c++
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 32 of 152 reference instruction lines
 * differing bytes: 154
 * provenance: generator draft (mode bgotoext)
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
typedef struct Frame Frame;
typedef struct Arg0_3ac Arg0_3ac;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
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
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107(Frame *);
    virtual void v108();
    virtual void v109();
    virtual void v110();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x1c];
    int f3e4;
    char unknown3e8[0x1c];
    float f404;
    char unknown408[0xc];
    float f414;
    int f418;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c090d88(void *, float);
extern "C" void operation_8c0961f8(Object *o, int a1)
{
    Frame frame;
    int t1;
    float t2;
    int t3;
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    return;
                }
                return;
            }
            if (((ObjectData *)o)->f418 == 5) {
                ((ObjectData *)o)->ff0 = 3;
                ((ObjectData *)o)->f418 = 4;
            }
            operation_8c059ef8((void *)o, 4);
            o->v102();
            return;
        }
        if (((((ObjectData *)o)->f3e4 & 4)) == 0) {
            return;
        }
        o->v110();
        return;
    }
    operation_8c01c5f0(o);
    call_8c05c0dc(o, 200.0f);
    t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
    if (t1 != 0) {
        operation_8c05c184((void *)o);
        aim_direction_8c05bdd4((void *)o);
        t2 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t3 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t2 * 65536.0f / 6.28318405f)), 0x400);
        ((ObjectData *)o)->f64 = (int)t3;
        ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
    }
    operation_8c090d88((void *)o, ((ObjectData *)o)->f404 + ((ObjectData *)o)->f3c.f04);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
    (&frame)->f00.f04 = ((ObjectData *)o)->f414;
    o->v107((&frame));
    o->v95();
}

/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c995c
 * function: operation_8c0c995c
 * language: c++
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 8 of 140 reference instruction lines
 * differing bytes: 13
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x2c4];
    Vector3 f324;
    char unknown330[0x7c];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x4];
    int f3cc;
    char unknown3d0[0x3c];
    int f40c;
} ObjectData;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int call_8c0c9258(Object *, float, float);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void reset_link_8c05bf28(void *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void call_8c0c9410(Object *, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c0c995c(Object *o, int a1)
{
    int v2;
    int v5;
    int v7;
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
            operation_8c059ef8((void *)o, 1);
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f54;
            *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f54;
            *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f54;
            o->v101();
            return;
        }
        if (((ObjectData *)o)->f3cc >= 0x1e) {
            ((ObjectData *)o)->f3cc = 0;
            v2 = (int)1;
        } else {
            ((ObjectData *)o)->f3cc += 1;
            v2 = (int)0;
        }
        if (v2 != 0) {
            t3 = call_8c0c9258(o, 160000.0f, 62500.0f);
            v7 = (int)t3;
        } else {
            t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
            if (t1 != 0) {
                v5 = (int)1;
            } else {
                reset_link_8c05bf28((void *)o);
                v5 = (int)0;
            }
            v7 = (int)v5;
        }
        if (v7 == 0) {
            return;
        }
        operation_8c05c184((void *)o);
        aim_direction_8c05bdd4((void *)o);
        t2 = errno_wrap_8c130334(-((ObjectData *)o)->f3bc, -((ObjectData *)o)->f3c4);
        ((ObjectData *)o)->f40c = (int)(t2 * 65536.0f / 6.28318405f);
        call_8c0c9410(o, 50.0f);
        operation_8c059ea4((void *)o, 2);
        return;
    }
    o->v94();
}

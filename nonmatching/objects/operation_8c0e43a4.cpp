/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e43a4
 * function: operation_8c0e43a4
 * language: c++
 * reference size: 548 bytes
 * compiled size: 552 bytes (+0.7%)
 * differing lines: 26 of 227 reference instruction lines
 * differing bytes: 369
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
typedef struct Frame Frame;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
class Object;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
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
    virtual int v20(int);
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
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x28];
    int f368;
    Arg0_36c *f36c;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_33c {
    char unknown0[0xc];
    int f0c;
};
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_difference(int, int);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0e43a4(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    operation_8c01c5f0(o);
    switch (((ObjectData *)o)->f30c) {
    case 0:
        t1 = check_range_8c01cf68((void *)o, 0.0f);
        if (t1 != 0) {
            o->v93();
        }
        if (((ObjectData *)o)->fec == 0x20) {
            goto L_8c0e4544;
        }
        ((ObjectData *)o)->f30c = 1;
        ((ObjectData *)o)->ff0 = 2;
        break;
    case 1:
        if (((ObjectData *)o)->f334 == 0) {
            goto L_8c0e4544;
        }
        t2 = o->v20(0x1e);
        if (t2 == 0) {
            goto L_8c0e4544;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f334->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x324)));
        t3 = operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(&(&frame)->f0c));
        if (!(22500.0f > ((&frame)->f0c.f00 * (&frame)->f0c.f00 + (&frame)->f0c.f08 * (&frame)->f0c.f08))) {
            if (((ObjectData *)o)->f368 != 0) {
                goto L_8c0e4482;
            }
        }
        ((ObjectData *)o)->f30a = 3;
        ((ObjectData *)o)->f30c = 1;
        ((ObjectData *)o)->ff0 = 2;
        goto L_8c0e4544;
L_8c0e4482:;
        if (!(((ObjectData *)o)->f33c->f0c >= t3)) {
            goto L_8c0e4544;
        }
        ((ObjectData *)o)->f30c = 2;
        ((ObjectData *)o)->ff0 = 0;
        break;
    case 2:
        if (((ObjectData *)o)->f334 != 0) {
            t4 = o->v20(0x1e);
            if (t4 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
                vector_sub_in_place_8c37f6f0((void *)(&frame), (void *)(((char *)o + 0x324)));
                t5 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
                t6 = angle_difference((int)(((ObjectData *)o)->f64), (int)((int)(t5 * 65536.0f / 6.28318405f)));
                if (!(22500.0f > ((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08))) {
                    if (((ObjectData *)o)->f368 != 0) {
                        goto L_8c0e452e;
                    }
                }
                ((ObjectData *)o)->f30a = 3;
                ((ObjectData *)o)->f30c = 1;
                ((ObjectData *)o)->ff0 = 2;
                goto L_8c0e4544;
L_8c0e452e:;
                if (t6 > ((ObjectData *)o)->f33c->f0c) {
                    ((ObjectData *)o)->f30c = 1;
                    ((ObjectData *)o)->ff0 = 2;
                }
            }
        }
    }
L_8c0e4544:;
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}

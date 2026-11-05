/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05e3dc
 * function: TObjEneRe2Flower_render_8c05e3dc
 * language: c++
 * reference size: 752 bytes
 * compiled size: 752 bytes (+0.0%)
 * differing lines: 52 of 284 reference instruction lines
 * differing bytes: 82
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneRe2Flower.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct Arg0_3dc Arg0_3dc;
class Object;
class Arg0_s410;
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
    virtual int v11(float, float);
    virtual int v12(float, float, float);
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    int f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0xd0];
    Arg0_3dc *f3dc;
    int f3e0;
    float f3e4;
    char unknown3e8[0xc];
    int f3f4;
    float f3f8;
    float f3fc;
    float f400;
    float f404;
    float f408;
    float f40c;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct Arg0_28 {
    Arg0_28_0 *f00;
};
struct Arg0_28_0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x8];
    int f14;
    char unknown18[0x8];
    int f20;
    char unknown24[0x8];
    int f2c;
};
class Arg0_s410 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8();
};
typedef struct Arg0_s410Data {

} Arg0_s410Data;
extern "C" int operation_8c03d338(void);
extern "C" int get_game_mode_wrapper_3_8c05bae8(void);
extern "C" void call_8c05ba9c(Object *, Frame *);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(Arg0_28 *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c1086fc(void);
extern "C" void draw_with_alternate_dispatch(void *, void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c05b9e8(Object *);
extern "C" void operation_8c05e36c();
extern "C" void TObjEneRe2Flower_render_8c05e3dc(Object *o)
{
    Frame frame;
    int v1;
    int v14;
    int v15;
    char *v8;
    int v13;
    char *v9;
    int v12;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v111();
        return;
    }
    if (((ObjectData *)o)->f30a == 0xb) {
        return;
    }
    t2 = get_game_mode_wrapper_3_8c05bae8();
    if (t2 != 0) {
        v1 = o->v12(*(float *)0x8c284bd8, *(float *)0x8c284bd4, 20.0f);
    } else {
        t3 = o->v11(400.0f, 20.0f);
        if (t3 != 0) {
            v1 = (int)1;
        } else {
            v1 = (int)0;
        }
    }
    if (v1 == 0) {
        return;
    }
    if (((ObjectData *)o)->f30a != 0xa) {
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c2f3740;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o, (Frame *)((&frame)));
    }
    call_8c05b9dc(o);
    v14 = 0x400;
    if (((((ObjectData *)o)->f3e0 & v14)) != 0) {
        v8 = (char *)((ObjectData *)o)->f28->f00->f08;
        v9 = (char *)((ObjectData *)o)->f28->f00->f14;
        ((ObjectData *)o)->f28->f00->f08 = (int)(((ObjectData *)o)->f28->f00->f20);
        ((ObjectData *)o)->f28->f00->f14 = (int)(((ObjectData *)o)->f28->f00->f2c);
        v12 = (int)v9;
        v13 = (int)v8;
    }
    call_8c3827d8((Arg0_28 *)(((ObjectData *)o)->f28));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f3dc));
    *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
    operation_8c05baa8();
    njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f3e4, 0.0f);
    *(int *)0x8c4679ac = (int)((ObjectData *)o)->f64 - (int)((ObjectData *)o)->f3dc;
    *(int *)0x8c4679b0 = (int)(((char *)o + 0x3f8));
    ((ObjectData *)o)->f3f8 = 0.0f;
    ((ObjectData *)o)->f3fc = 2.0f;
    ((ObjectData *)o)->f400 = 0.0f;
    ((ObjectData *)o)->f404 = 0.0f;
    ((ObjectData *)o)->f408 = 7.0f;
    ((ObjectData *)o)->f40c = 0.0f;
    njScale_8c37e2e4(0, 1.3f, 1.3f, 1.3f);
    set_transform_node_callback(operation_8c05e36c);
    if (((ObjectData *)o)->f30a == 8) {
        v14 = (int)(unsigned char)((ObjectData *)o)->f3f4;
        v15 = (int)(v14 << 0x10);
        *(int *)0x8c4679a8 = -1;
        operation_8c1086fc();
        draw_with_alternate_dispatch((void *)o, (void *)v15);
        reset_state_8c391cc4();
        v1 = (int)v15;
    } else {
        *(int *)0x8c4679a8 = 0;
        operation_8c1086fc();
        if (((((ObjectData *)o)->f3e0 & 8)) != 0) {
            t4 = ((Arg0_s410 *)((char *)o + 0x410))->v8();
            if (t4 == 0) {
                goto L_8c05e5d0;
            }
            ((Arg0_s410 *)((char *)o + 0x410))->v6();
            operation_8c01cc90((void *)o);
            ((Arg0_s410 *)((char *)o + 0x410))->v7();
        } else {
            if (v1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
        }
L_8c05e5d0:;
        reset_state_8c391cc4();
    }
    set_transform_node_callback((void *)0);
    *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
    njPopMatrixEx_8c38ad10();
    call_8c05b9e8(o);
    if (((((ObjectData *)o)->f3e0 & 0x400)) != 0) {
        ((ObjectData *)o)->f28->f00->f08 = (int)v13;
        ((ObjectData *)o)->f28->f00->f14 = (int)v12;
    }
}

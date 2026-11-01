/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cb000
 * function: TObjEneRe4Sorcerer_render_8c0cb000
 * language: c++
 * reference size: 596 bytes
 * compiled size: 596 bytes (+0.0%)
 * differing lines: 54 of 212 reference instruction lines
 * differing bytes: 135
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
typedef struct S_g8c46fa04 S_g8c46fa04;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s418;
class Arg0_s490;
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
    Arg0_64 *f64;
    char unknown68[0x374];
    short f3dc;
    char unknown3de[0x2];
    float f3e0;
    int f3e4;
    char unknown3e8[0x2c];
    float f414;
} ObjectData;
class Arg0_s418 {
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
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
class Arg0_s490 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct Arg0_s490Data {

} Arg0_s490Data;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c05ba9c(Object *, int);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c0cd63c(void *, short, int);
extern "C" void call_8c397c90(void *, float, float);
extern "C" void operation_8c1086fc(void);
extern "C" int update_depth_mode(void *, void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c05b9e8(Object *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c0caf84();
extern "C" void TObjEneRe4Sorcerer_render_8c0cb000(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v111();
        return;
    }
    if (((((ObjectData *)o)->f3e4 & 2)) == 0) {
        v1 = (int)0;
    } else {
        t2 = operation_8c05bae8();
        if (t2 != 0) {
            v1 = o->v12(*(float *)0x8c284bd8, *(float *)0x8c284bd4, 15.0f);
        } else {
            t3 = o->v11(400.0f, 15.0f);
            if (t3 != 0) {
                v1 = (int)1;
            } else {
                v1 = (int)0;
            }
        }
    }
    if (v1 == 0) {
        return;
    }
    if (((((ObjectData *)o)->f3e4 & 0x10)) != 0) {
        call_8c05ba9c(o, 0);
    }
    call_8c05b9dc(o);
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
    operation_8c05baa8();
    call_8c0cd63c((void *)(*(S_g8c46fa04 **)0x8c46fa04), ((ObjectData *)o)->f3dc, 0);
    *(int *)0x8c575570 |= 0x20000;
    call_8c397c90((void *)((void *)0x8c575570), 0.0f, ((ObjectData *)o)->f3e0);
    operation_8c1086fc();
    if (((((ObjectData *)o)->f3e4 & 4)) != 0) {
        ((Arg0_s418 *)((char *)o + 0x418))->v6();
    } else {
        t4 = update_depth_mode((void *)(((char *)o + 0x490)), (void *)(((char *)o + 0x324)));
        if (t4 != 0) {
            ((Arg0_s490 *)((char *)o + 0x490))->v6();
        }
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njTranslate_8c3829bc(0, 0.0f, 22.0f, 0.0f);
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    *(int *)0x8c46f9f8 = *(int *)0x8c46f9f4 = 0;
    *(float *)0x8c46f9fc = ((ObjectData *)o)->f414;
    *(int *)0x8c46fa00 = (int)(((char *)o + 0x3e8));
    set_transform_node_callback(operation_8c0caf84);
    if (v1 == 1) {
        operation_8c01cc90((void *)o);
    } else {
        operation_8c01cd20((void *)o);
    }
    set_transform_node_callback((void *)0);
    njPopMatrixEx_8c38ad10();
    ((Arg0_s418 *)((char *)o + 0x418))->v7();
    *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
    call_8c05b9e8(o);
    reset_state_8c391cc4();
}

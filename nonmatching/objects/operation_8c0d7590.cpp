/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7590
 * function: operation_8c0d7590
 * language: c++
 * reference size: 516 bytes
 * compiled size: 512 bytes (-0.8%)
 * differing lines: 6 of 189 reference instruction lines
 * differing bytes: 268
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fdc8 S_g8c46fdc8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
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
    virtual void v112();
    virtual void v113();
    virtual void v114(int);
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual void v121();
    virtual void v122();
    virtual void v123();
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x10];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2bc];
    Vector3 f324;
    char unknown330[0xb0];
    int f3e0;
    char unknown3e4[0x4];
    float f3e8;
} ObjectData;
struct S_g8c46fdc8 {
    int f00;
};
extern float g_8c284bd4;
extern float g_8c284bd8;
extern int g_8c46f560;
extern int g_8c46fdb8;
extern Vector3 g_8c46fdbc;
extern int g_8c575570;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c05b9dc(Object *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
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
extern "C" void operation_8c0d755c();
extern "C" void operation_8c0d7590(Object *o)
{
    int v1;
    int t3;
    int v6;
    int v7;
    int pm9;
    int t1;
    ObjectData *pm10;
    ObjectData *pm11;
    t1 = operation_8c03d338();
    if (0 != t1) {
        o->v123();
        return;
    }
    if (!(((2 & ((ObjectData *)o)->f3e0)) == 0)) {
        v1 = (unsigned char)(0);
    } else {
        int t2;
        t2 = operation_8c05bae8();
        if (0 != t2) {
            float pm7;
            float pm6;
            pm7 = 15.0f;
            pm6 = pm7;
            v1 = o->v12(g_8c284bd8, g_8c284bd4, pm6);
        } else {
            float pm5;
            pm5 = 15.0f;
            t3 = o->v11(400.0f, pm5);
            if (!(t3 == 0)) {
                v1 = (int)1;
            } else {
                v1 = 0;
            }
        }
    }
    if (v1 != 0) {
        ObjectData *pm4;
        o->v113();
        pm4 = (ObjectData *)o;
        call_8c3827d8((void *)((pm4)->f28));
        call_8c05b9dc(o);
        g_8c46f560 = (int)(g_8c575570);
        operation_8c05baa8();
        operation_8c1086fc();
        pm9 = (int)0x3ec;
        v6 = pm9;
        v7 = (int)0;
        while (v7 < 3) {
            (*(S_g8c46fdc8 **)((char *)0x8c46fdc8 + (v7 << 2)))->f00 = (int)(*(int *)((v6) + (0x0 + (char *)o)));
            v7 = 1 + v7;
        }
        o->v114(v7);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f3e8, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        g_8c46fdb8 = v7 = 0;
        set_transform_node_callback(operation_8c0d755c);
        if (1 == v1) {
            operation_8c01cc90((void *)o);
        } else {
            operation_8c01cd20((void *)o);
        }
        set_transform_node_callback((void *)0);
        njPopMatrixEx_8c38ad10();
        o->v115();
        g_8c575570 = (int)(g_8c46f560);
        call_8c05b9e8(o);
        pm11 = (ObjectData *)o;
        *(&(pm11)->f324) = *(&g_8c46fdbc);
    } else {
        pm10 = (ObjectData *)o;
        *(&(pm10)->f324) = *(&((ObjectData *)o)->f3c);
    }
    reset_state_8c391cc4();
}

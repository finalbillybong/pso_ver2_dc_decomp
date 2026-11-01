/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c094c68
 * function: operation_8c094c68
 * language: c++
 * reference size: 840 bytes
 * compiled size: 840 bytes (+0.0%)
 * differing lines: 4 of 326 reference instruction lines
 * differing bytes: 5
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
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
class Object;
class Arg0_s3e8;
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
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x29e];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
    char unknown330[0xb4];
    int f3e4;
    char unknown3e8[0x28];
    float f410;
    char unknown414[0x18];
    Arg0_42c *f42c;
    Vector3 f430;
    Vector3 f43c;
    Vector3 f448;
    Vector3 f454;
    Vector3 f460;
    Vector3 f46c;
    Vector3 f478;
} ObjectData;
class Arg0_s3e8 {
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
typedef struct Arg0_s3e8Data {

} Arg0_s3e8Data;
extern float g_8c284bd4;
extern float g_8c284bd8;
extern Vector3 g_8c284fb0;
extern Vector3 g_8c284fbc;
extern int g_8c469e14;
extern int g_8c469e18;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c05ba9c(Object *, int);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void draw_with_alternate_dispatch(void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c05b9e8(Object *);
extern "C" void operation_8c094bb4();
extern "C" void operation_8c094c68(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v120();
        return;
    }
    if (((((ObjectData *)o)->f3e4 & 0x400000)) != 0) {
        v1 = (int)0;
    } else {
        t2 = operation_8c05bae8();
        if (t2 != 0) {
            v1 = o->v12(g_8c284bd8, g_8c284bd4, 15.0f);
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
    } else {
        if (((((ObjectData *)o)->f3e4 & 0x1000000)) != 0) {
            call_8c05ba9c(o, 0);
        }
        call_8c05b9dc(o);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        g_8c46f560 = (int)(g_8c575570);
        operation_8c05baa8();
        operation_8c1086fc();
        o->v118();
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f410, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 0xb) {
        } else {
            ((Arg0_s3e8 *)((char *)o + 0x3e8))->v6();
        }
        if (((ObjectData *)o)->f30a != 0xa) {
            g_8c469e14 = 0;
            g_8c469e18 = (int)(((char *)o + 0x430));
            *(Vector3 *)&((ObjectData *)o)->f454 = *(Vector3 *)&g_8c284fb0;
            *(Vector3 *)&((ObjectData *)o)->f43c = *(Vector3 *)&g_8c284fbc;
            set_transform_node_callback(operation_8c094bb4);
            if (v1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            set_transform_node_callback((void *)0);
        } else {
            njRotateZ_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
            g_8c469e14 = -1;
            g_8c469e18 = (int)(((char *)o + 0x430));
            *(Vector3 *)&((ObjectData *)o)->f454 = *(Vector3 *)&g_8c284fb0;
            *(Vector3 *)&((ObjectData *)o)->f43c = *(Vector3 *)&g_8c284fbc;
            set_transform_node_callback(operation_8c094bb4);
            draw_with_alternate_dispatch((void *)o, (void *)(((ObjectData *)o)->f42c));
            set_transform_node_callback((void *)0);
        }
        if (((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 0xb) {
        } else {
            ((Arg0_s3e8 *)((char *)o + 0x3e8))->v7();
        }
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
        g_8c575570 = (int)(g_8c46f560);
        call_8c05b9e8(o);
        return;
    }
    *(Vector3 *)&((ObjectData *)o)->f454 = *(Vector3 *)&g_8c284fb0;
    *(Vector3 *)&((ObjectData *)o)->f43c = *(Vector3 *)&g_8c284fbc;
    *(Vector3 *)&((ObjectData *)o)->f448 = *(Vector3 *)&((ObjectData *)o)->f324;
    *(Vector3 *)&((ObjectData *)o)->f430 = *(Vector3 *)&((ObjectData *)o)->f324;
    *(Vector3 *)&((ObjectData *)o)->f460 = *(Vector3 *)&((ObjectData *)o)->f324;
    *(Vector3 *)&((ObjectData *)o)->f46c = *(Vector3 *)&((ObjectData *)o)->f324;
    *(Vector3 *)&((ObjectData *)o)->f478 = *(Vector3 *)&((ObjectData *)o)->f324;
}

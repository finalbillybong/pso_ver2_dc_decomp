/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0595e4
 * function: TObjEneBm3FlyNest_render_8c0595e4
 * language: c++
 * reference size: 748 bytes
 * compiled size: 748 bytes (+0.0%)
 * differing lines: 58 of 277 reference instruction lines
 * differing bytes: 76
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneBm3FlyNest.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s45c;
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
    char unknown330[0x98];
    int f3c8;
    char unknown3cc[0x18];
    Vector3 f3e4;
    char unknown3f0[0x88];
    float f478;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
class Arg0_s45c {
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
typedef struct Arg0_s45cData {

} Arg0_s45cData;
extern float g_8c284bd4;
extern float g_8c284bd8;
extern Vector3 g_8c2f33b8;
extern int g_8c467914;
extern int g_8c467918;
extern int g_8c46791c;
extern int g_8c467920;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c05ba9c(Object *, Frame *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void set_transform_node_callback(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c05b9e8(Object *);
extern "C" void operation_8c05952c();
extern "C" void operation_8c05956c();
extern "C" void TObjEneBm3FlyNest_render_8c0595e4(Object *o)
{
    Frame frame;
    int v1;
    char *v15;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    ((ObjectData *)o)->f3c8 = 0;
    if (((ObjectData *)o)->f30a == 9) {
    } else {
        t2 = operation_8c05bae8();
        if (t2 != 0) {
            v1 = o->v12(g_8c284bd8 + 25.0f, g_8c284bd4 + 50.0f, 120.0f);
        } else {
            t3 = o->v11(500.0f, 120.0f);
            if (t3 != 0) {
                v1 = (int)1;
            } else {
                v1 = (int)0;
            }
        }
        if (v1 == 0) {
        } else {
            ((ObjectData *)o)->f3c8 = 1;
            if (((ObjectData *)o)->f30a != 9) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2f33b8;
                if (((ObjectData *)o)->f30a == 0 && 1.0f > (10.0f / (((ObjectData *)o)->f478 - 2.0f)) && (10.0f / (((ObjectData *)o)->f478 - 2.0f)) > 0.0f) {
                    (&frame)->f00.f00 = (&frame)->f00.f08 = 10.0f / (((ObjectData *)o)->f478 - 2.0f) * 5.0f;
                }
                call_8c05ba9c(o, (Frame *)((&frame)));
            }
            g_8c46f560 = (int)(g_8c575570);
            g_8c46f574 = (int)(g_8c5755a4);
            v15 = (char *)g_8c5755a8;
            g_8c46f578 = (int)v15;
            t4 = update_depth_mode((void *)(((char *)o + 0x45c)), (void *)(((char *)o + 0x324)));
            if (t4 != 0) {
                ((Arg0_s45c *)((char *)o + 0x45c))->v6();
            }
            call_8c05b9dc(o);
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            njPushMatrixEx_8c38ae68();
            *(int *)0x8c467918 = (int)(((char *)o + 0x3e4));
            *(int *)0x8c467914 = 0;
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f478, 0.0f);
            if (((ObjectData *)o)->f30a == 0) {
                g_8c467920 = 0;
                g_8c46791c = (int)(((char *)o + 0x3fc));
                set_transform_node_callback(operation_8c05956c);
            } else {
                set_transform_node_callback(operation_8c05952c);
            }
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            operation_8c05baa8();
            operation_8c1086fc();
            if (v1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            reset_state_8c391cc4();
            set_transform_node_callback((void *)0);
            njPopMatrixEx_8c38ad10();
            call_8c05b9e8(o);
            ((Arg0_s45c *)((char *)o + 0x45c))->v7();
            g_8c575570 = (int)(g_8c46f560);
            g_8c5755a4 = (int)(g_8c46f574);
            g_8c5755a8 = (int)(g_8c46f578);
        }
    }
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3e4;
}

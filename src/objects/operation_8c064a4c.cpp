typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_8 S_frame_8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_400 Arg0_400;
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0xf4];
    Arg0_400 *f400;
    char unknown404[0x20];
    int f424;
    float f428;
} ObjectData;
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
    S_frame_8 *f08;
};
extern float g_8c284bd4;
extern float g_8c284bd8;
extern int g_8c4688a8;
extern int g_8c4688ac;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c0c5094(void *, Frame *, void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c37e02c(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void call_8c11a920(void);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" int call_8c18e768(void *, int);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c05b9e8(Object *);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c064a4c(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v111();
        return;
    }
    switch (((ObjectData *)o)->f424 & 2) {
    case 0:
        if (((ObjectData *)o)->f30a == 0x11) {
            return;
        }
        t2 = operation_8c05bae8();
        if (t2 != 0) {
            t5 = o->v12(g_8c284bd8, g_8c284bd4, 20.0f);
            v1 = (int)t5;
        } else {
            t3 = o->v11(400.0f, 20.0f);
            if (t3 != 0) {
                v1 = (int)1;
            } else {
                v1 = (int)0;
            }
        }
        if (v1 == 0) {
        } else {
            if (((ObjectData *)o)->f30a != 0x10) {
                call_8c0c5094((void *)(((char *)o + 0x170)), (Frame *)((&frame)), (void *)(&(&frame)->f08));
                call_8c38ae68();
                call_8c382a40((void *)(((char *)o + 0x3c)));
                call_8c3829bc(0, 0.0f, 0.3f, 0.0f);
                call_8c37e02c(0, (void *)((&frame)->f08));
                call_8c37dd28(0, (void *)((&frame)->f00));
                call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                call_8c3829bc(0, 0.0f, 0.0f, -10.0f);
                call_8c37e2e4(0, 1.2f, 1.0f, 3.0f);
                call_8c37dd28(0, (void *)-0x4000);
                call_8c11a920();
                call_8c38ad10();
            }
            call_8c05b9dc(o);
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3829bc(0, 0.0f, 0.0f, -10.0f);
            if (((((ObjectData *)o)->f424 & 4)) != 0) {
                call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f428, 0.0f);
            }
            g_8c4688a8 = 0;
            t4 = call_8c18e768((void *)(((ObjectData *)o)->f400), 2);
            g_8c4688ac = -t4;
            set_transform_node_callback((void *)((void *)0x8c064a14));
            operation_8c05baa8();
            call_8c1086fc();
            if (v1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            set_transform_node_callback((void *)0);
            call_8c38ad10();
            call_8c05b9e8(o);
        }
        call_8c391cc4();
    }
}

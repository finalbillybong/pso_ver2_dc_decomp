typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c119190 S_c8c119190;
typedef struct Frame Frame;
typedef struct S_g8c47062c S_g8c47062c;
typedef struct Arg0_460 Arg0_460;
typedef struct Arg0_460_dc Arg0_460_dc;
typedef struct Arg0_464 Arg0_464;
typedef struct S_vv3 S_vv3;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    int f04;
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
    virtual int v105();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x364];
    Arg0_460 *f460;
    Arg0_464 *f464;
} ObjectData;
struct Arg0_460 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Arg0_460_dc *fdc;
};
struct S_vv3 {
    Vector3 f00;
};
struct S_c8c119190 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0xc];
    Vector3 f24;
};
struct Arg0_460_dc {
    char unknown0[0x2c];
    Vector3 f2c;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" int operation_8c05bbf8(void);
extern "C" S_c8c119190 *call_8c119190(void *, float);
extern "C" void transform_actor_records(void *);
extern "C" void call_8c0f363c(Arg0_460 *, Frame *, void *);
extern "C" void operation_8c0f4ec0(Object *o)
{
    Frame frame;
    float v2;
    S_vv3 *v3;
    int t1;
    S_c8c119190 *t2;
    int t3;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        v2 = (float)7.8f;
    } else {
        v2 = (float)10.8f;
    }
    if (!(v2 > ((ObjectData *)o)->ff8) && !(((ObjectData *)o)->ff8 > 13.0f)) {
        t2 = call_8c119190((void *)(*(S_g8c47062c **)0x8c47062c), ((ObjectData *)o)->ff8);
        *(Vector3 *)&((ObjectData *)o)->f460->f3c = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f460->f64 = (int)(((ObjectData *)o)->f64);
        v3 = (S_vv3 *)((ObjectData *)o)->f460->fdc;
        *(Vector3 *)&v3->f00 = *(Vector3 *)&t2->f0c;
        *(Vector3 *)&((ObjectData *)o)->f460->fdc->f2c = *(Vector3 *)&t2->f24;
        transform_actor_records((void *)(((ObjectData *)o)->f460));
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c30a08c;
        t3 = o->v105();
        if (t3 != 0) {
            (&frame)->f00.f04 |= 2;
        }
        call_8c0f363c((Arg0_460 *)(((ObjectData *)o)->f460), (Frame *)((&frame)), (void *)(((ObjectData *)o)->f464));
    }
}

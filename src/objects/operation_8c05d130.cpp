typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_424 Arg0_424;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_s410 Arg0_s410;
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
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2ee];
    int f3e0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct Arg0_s410 {
    char unknown0[0x14];
    Arg0_424 *f14;
};
struct Arg0_424 {
    char unknown0[0x1c];
    int f1c;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void reset_link_8c05bf28(void *);
extern "C" void operation_8c1147cc(void *);
extern "C" void call_8c1084fc(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c05d130(Object *o, int a1)
{
    int t1;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v101();
        ((ObjectData *)o)->fdc->f44 = (unsigned int)((ObjectData *)o)->fdc->f44 >> 1 << 1;
        ((ObjectData *)o)->f3e0 |= 8;
        operation_8c059ef8((void *)o, 2);
        reset_link_8c05bf28((void *)o);
        operation_8c1147cc((void *)(((char *)o + 0x410)));
        call_8c1084fc((void *)(((char *)o + 0x3c)));
        return;
    case 3:
        t1 = ((int (*)(void *))(((Arg0_s410 *)((char *)o + 0x410))->f14->f1c))((void *)(((char *)o + 0x410)));
        if (t1 == 0) {
            return;
        }
        operation_8c059ea4((void *)o, 2);
        return;
    case 0:
        call_8c01c5f0(o);
        o->v108();
        o->v94();
        return;
    case 5:
        ((ObjectData *)o)->f3e0 &= -9;
        return;
    case 1:
    case 2:
        break;
    }
}

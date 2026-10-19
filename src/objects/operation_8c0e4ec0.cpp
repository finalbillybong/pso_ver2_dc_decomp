typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x214];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x78];
    float f39c;
    float f3a0;
    float f3a4;
} ObjectData;
extern "C" void call_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void apply_object_velocity(void *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c0e4ec0(Object *o)
{
    int t1;
    int t2;
    call_8c01c5f0(o);
    t1 = check_range_8c01cf68((void *)o, 0.0f);
    if (t1 != 0) {
        o->v96();
    }
    t2 = check_range_8c01cf68((void *)o, 16.0f);
    if (t2 != 0) {
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
        o->v92();
    }
    if (((ObjectData *)o)->ff8 < (((ObjectData *)o)->f100 * 30.0f * 0.5f)) {
        apply_object_velocity((void *)o);
        ((ObjectData *)o)->f318 *= 0.5f;
        ((ObjectData *)o)->f320 *= 0.5f;
    } else {
        if (((((ObjectData *)o)->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
    }
    ((ObjectData *)o)->f39c -= ((ObjectData *)o)->f3a0;
    if (!(((ObjectData *)o)->f39c > ((ObjectData *)o)->f3a4)) {
        o->v90();
    }
}

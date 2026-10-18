typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_184 Arg0_184;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0xfc];
    float f180;
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
} ObjectData;
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern "C" int operation_8c03d338(void);
extern "C" void call_8c0e3ce8(Object *);
extern "C" void call_8c0e43a4(Object *);
extern "C" void call_8c0e45cc(Object *);
extern "C" void call_8c0e47cc(Object *);
extern "C" void call_8c0e4a74(Object *);
extern "C" void operation_8c0e4c3c(Object *);
extern "C" void call_8c0e4c70(Object *);
extern "C" void call_8c0e4ec0(Object *);
extern "C" void call_8c027090(Object *);
extern "C" void operation_8c0e3858(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v98();
        return;
    }
    switch (((ObjectData *)o)->f30a) {
    case 0:
        o->v89();
        break;
    case 1:
        call_8c0e3ce8(o);
        break;
    case 2:
        call_8c0e43a4(o);
        break;
    case 3:
        call_8c0e45cc(o);
        break;
    case 4:
        call_8c0e47cc(o);
        break;
    case 5:
        call_8c0e4a74(o);
        break;
    case 6:
        operation_8c0e4c3c(o);
        break;
    case 7:
        call_8c0e4c70(o);
        break;
    case 8:
        call_8c0e4ec0(o);
        break;
    case 9:
        o->v90();
    }
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    call_8c027090(o);
    ((ObjectData *)o)->f180 += 1.0f;
}

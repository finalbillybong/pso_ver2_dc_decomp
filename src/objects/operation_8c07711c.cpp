typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
class Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xa6];
    char f1e6;
    char unknown1e7[0x15];
    int f1fc;
};
struct Frame {
    short f00;
    short f02;
};
class Arg0_13c {
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
};
typedef struct Arg0_13cData {
    char unknown0[0x302];
    short f302;
    short f304;
} Arg0_13cData;
extern "C" void call_8c158570(int, void *, Frame *);
extern "C" void operation_8c07711c(Object *o)
{
    Frame frame;
    if (((o->f1fc & 0x20)) != 0) {
        (&frame)->f02 = 1;
        (&frame)->f00 = 0;
    } else {
        call_8c158570((int)((unsigned char)o->f1e6 & 0x7f), (void *)(&(&frame)->f02), (Frame *)((&frame)));
    }
    ((Arg0_13cData *)o->f13c)->f302 = (&frame)->f02;
    ((Arg0_13cData *)o->f13c)->f304 = (&frame)->f00;
    o->f13c->v80();
}

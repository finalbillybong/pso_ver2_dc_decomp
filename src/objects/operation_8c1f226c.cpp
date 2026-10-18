typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_34_0 Arg0_34_0;
class Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    char unknown38[0x6c];
    Vector3 fa4;
};
struct Arg0_34 {
    Arg0_34_0 *f00;
};
class Arg0_24 {
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
    virtual void v76(void *, void *);
};
typedef struct Arg0_24Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_24Data;
struct Frame {
    char unknown0[0xc];
    Vector3 f0c;
};
extern "C" void call_8c38ade4(void *);
extern "C" int call_8c1f232c(Object *);
extern "C" void call_8c37df90(int, int);
extern "C" void call_8c3bdf60(void *, Frame *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1f226c(Object *o)
{
    Frame frame;
    int t1;
    if (o->f34 != 0) {
        if ((int)(o->f34->f00) == -1) {
            *(Vector3 *)&o->fa4 = *(Vector3 *)&((Arg0_24Data *)o->f24)->f324;
        } else {
            o->f24->v76(o->f34->f00, &o->fa4);
        }
    }
    call_8c38ade4((void *)0x8c400500);
    t1 = call_8c1f232c(o);
    call_8c37df90(0, t1 + 0x8000);
    {
        Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32c40c;
        *(Vector3 *)&(&frame)->f0c = *p_;
    }
    ((void (*)(int, void *, Frame *))0x8c3be280)(0, &(&frame)->f0c, (&frame));
    call_8c3bdf60(&o->fa4, (&frame));
    call_8c38ad10();
}

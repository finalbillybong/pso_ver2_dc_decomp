typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_13c;
struct Object {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x56];
    Arg0_13c *f13c;
    char unknown140[0xbc];
    int f1fc;
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
};
typedef struct Arg0_13cData {
    char unknown0[0x754];
    short f754;
} Arg0_13cData;
extern "C" int call_8c1aaabc(void *);
extern "C" void operation_8c076580(Object *o)
{
    int t1;
    if (o->f13c != 0 && o->fe4 == 2) {
        if (((o->f1fc & 0x20)) != 0) {
            t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
            if ((short)t1 == 2) {
                ((Arg0_13cData *)o->f13c)->f754 = 1;
            }
        }
        o->f13c->v78();
    }
}

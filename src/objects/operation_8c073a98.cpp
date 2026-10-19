typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
class Arg2;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
};
class Arg2 {
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
    virtual int v74(Object *);
};
typedef struct Arg2Data {

} Arg2Data;
extern int g_8c44be04;
extern "C" void operation_195280(short, unsigned int);
extern "C" void operation_8c07484c(void *, int);
extern "C" void operation_8c09e6b4(void *);
extern "C" void operation_8c02a764(int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c073a98(Object *o, int a1, Arg2 *a2)
{
    int t1;
    operation_195280((short)a1, (unsigned int)(o->fe8));
    if (a2 != 0) {
        t1 = a2->v74(o);
        if (t1 != 0) {
            operation_8c07484c((void *)o, 1);
            operation_8c09e6b4((void *)o);
            operation_8c02a764((int)(a2), 0x50002);
            if ((short)a1 == g_8c44be04) {
                create_effect_777c((void *)(((char *)o + 0x3c)), 0x9b);
            }
        }
    }
}

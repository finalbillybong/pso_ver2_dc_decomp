typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    virtual void v81(int);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x358];
    int f390;
    char unknown394[0x4];
    int f398;
} ObjectData;
extern "C" int operation_8c01c25c(void);
extern "C" int call_8c0c349c(void);
extern "C" void call_8c138b48(Object *);
extern "C" int operation_8c139d9c(Object *);
extern "C" void call_8c13a424(void);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c206e2c(void *);
extern "C" void call_8c05fd7c(int, Object *, int, int, int);
extern "C" void operation_8c1399fc(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    switch (((ObjectData *)o)->f398) {
    case -1:
    case 2:
        break;
    case 0:
        ((ObjectData *)o)->f398 = 1;
    case 1:
        t1 = operation_8c01c25c();
        if (t1 == 0x10) {
            t2 = call_8c0c349c();
            if (t2 == 0) {
                goto L_8c139a46;
            }
            call_8c138b48(o);
        } else {
            call_8c138b48(o);
        }
L_8c139a46:;
        t3 = operation_8c139d9c(o);
        if (t3 != 0) {
            call_8c13a424();
            ((ObjectData *)o)->f34 |= 0x800;
            o->v81(0);
            ((ObjectData *)o)->f390 = 5;
            t4 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
            if (t4 != 0) {
                operation_8c206e2c((void *)t4);
            }
        }
        call_8c05fd7c(0x30001, o, 0, 0, 0);
    }
}

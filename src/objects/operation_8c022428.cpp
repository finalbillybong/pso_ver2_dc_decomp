typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg1;
class Arg1 {
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
    virtual void v18(int);
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
    virtual int v30();
};
typedef struct Arg1Data {
    char unknown0[0x134];
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
} Arg1Data;
struct Object {
    char unknown0[0x310];
    int f310;
};
extern "C" int call_8c03b55c(void *, int);
extern "C" void release_child_slot_8c022624(void *, void *);
extern "C" int call_8c02a9e4(Object *);
extern "C" void call_8c01c838(Object *, int);
extern "C" void operation_8c022428(Object *o, Arg1 *a1, int a2)
{
    int v3;
    int v8;
    int v10;
    int v15;
    int t1;
    int t2;
    int t3;
    v3 = (int)0;
    if (((Arg1Data *)a1)->f134 == 1 && ((Arg1Data *)a1)->f136 == 3) {
        v3 = (int)1;
    }
    if (v3 != 0) {
        if (9 > a2 || a2 > 0xc) {
            a2 = 9;
        }
        v8 = a2;
        a1->v18(a2);
    } else {
        t3 = a1->v30();
        v8 = (int)(short)t3;
    }
    t1 = call_8c03b55c((void *)(((char *)o + 0xbcc)), v8);
    if (t1 == 0) {
        v10 = (int)(v8 << 2);
        *(Arg1 **)((char *)((char *)o + 0xbcc) + (v10)) = (Arg1 *)a1;
        a1->v19();
    } else {
        if (t1 != (int)(a1)) {
            release_child_slot_8c022624((void *)o, (void *)t1);
            *(Arg1 **)((char *)((char *)o + 0xbcc) + (v8 << 2)) = (Arg1 *)a1;
            a1->v19();
        }
    }
    v15 = (int)(((o->f310 & 2)) != 0);
    if (v15 != 0) {
        t2 = call_8c02a9e4(o);
        call_8c01c838(o, t2);
    }
}

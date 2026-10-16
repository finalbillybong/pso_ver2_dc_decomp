typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x4];
    char f04;
};
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
    virtual short v30();
};
typedef struct ObjectData {
    char unknown0[0x208];
    short f208;
} ObjectData;
extern "C" int operation_8c073e5c(void *, void *);
extern "C" void call_8c1c934c(Arg1 *, short);
extern "C" int operation_8c17b7e8(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        t2 = o->v30();
        a1->f04 = (short)t2 + -9;
        call_8c1c934c(a1, ((ObjectData *)o)->f208);
        return 1;
    }
    return 0;
}

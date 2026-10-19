typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
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
    virtual int v34();
};
typedef struct ObjectData {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0xa];
    unsigned char f141;
} ObjectData;
struct Arg1 {
    char unknown0[0x4];
    char f04;
};
extern "C" int operation_8c073e5c(void *, void *);
extern "C" void operation_8c1c74a8(void *, int);
extern "C" int operation_8c0e727c(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 != 0) {
        if (((ObjectData *)o)->f136 == 2) {
            a1->f04 = ((ObjectData *)o)->f141;
        }
        t2 = o->v34();
        operation_8c1c74a8((void *)a1, t2);
        return 1;
    }
    return 0;
}

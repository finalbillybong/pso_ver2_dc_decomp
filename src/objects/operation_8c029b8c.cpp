typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v17();
};
typedef struct ObjectData {

} ObjectData;
extern "C" int call_8c02c320(void);
extern "C" void call_8c1a7260(int, int);
extern "C" void operation_8c029b8c(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c02c320();
    t2 = o->v17();
    call_8c1a7260(t1, t2 + 1);
}

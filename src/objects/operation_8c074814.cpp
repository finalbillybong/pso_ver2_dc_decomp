typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
struct Frame {
    char unknown0[0x14];
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
    virtual void v30();
    virtual void v31(Frame *);
};
typedef struct ObjectData {

} ObjectData;
extern "C" int operation_8c2580cc(int);
extern "C" void call_8c1c770c(Frame *, int);
extern "C" int operation_8c074814(Object *o)
{
    Frame frame;
    int t1;
    o->v31((&frame));
    t1 = operation_8c2580cc(0);
    call_8c1c770c((Frame *)((&frame)), t1);
    return (int)(t1);
}

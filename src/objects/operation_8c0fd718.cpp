typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x302];
    short f302;
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
    virtual void v24(int, float);
};
typedef struct ObjectData {

} ObjectData;
extern "C" float operation_8c0fd718(Object *o, Arg1 *a1)
{
    if (a1->f302 != 0) {
        o->v24(0, 1.0f);
    }
    return 0.0f;
}

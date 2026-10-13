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
};
typedef struct ObjectData {
    char unknown0[0x100];
    int f100;
    int f104;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0ffd7c(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
    }
    ((ObjectData *)o)->f100 += ((ObjectData *)o)->f104;
}

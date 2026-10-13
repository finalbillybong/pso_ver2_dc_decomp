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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
};
typedef struct ObjectData {
    char unknown0[0x120];
    int f120;
    int f124;
    int f128;
    int f12c;
} ObjectData;
extern "C" void call_8c0eeb58(void);
extern "C" void operation_8c1307a8(Object *o)
{
    call_8c0eeb58();
    o->v21();
    ((ObjectData *)o)->f128 = 1;
    ((ObjectData *)o)->f120 = 0;
    ((ObjectData *)o)->f124 = 0;
    ((ObjectData *)o)->f12c = (int)(((ObjectData *)o)->f128);
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
};
typedef struct ObjectData {
    char unknown0[0x138];
    unsigned char f138;
} ObjectData;
extern "C" void operation_8c0e6e44(Object *o)
{
    unsigned char v1;
    v1 = (unsigned char)((ObjectData *)o)->f138;
    if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x18 && (unsigned int)0x1a >= (unsigned int)(unsigned char)v1) {
        goto L_8c0e6e68;
    }
    if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x26 && (unsigned int)0x28 >= (unsigned int)(unsigned char)v1) {
L_8c0e6e68:;
        o->v23();
    }
}

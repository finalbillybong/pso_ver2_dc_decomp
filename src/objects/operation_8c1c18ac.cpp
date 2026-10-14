typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_f0 Arg0_f0;
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
    virtual int v15(float);
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    float fec;
    Arg0_f0 *ff0;
} ObjectData;
struct Arg0_f0 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern "C" void operation_8c1c18ac(Object *o)
{
    int t1;
    t1 = o->v15(((ObjectData *)o)->ff0->f08);
    if (t1 == 0) {
        ((ObjectData *)o)->fe4 = 3;
        o->v20();
        return;
    }
    ((ObjectData *)o)->fec += ((ObjectData *)o)->ff0->f00;
    if (!(((ObjectData *)o)->fe8 > ((ObjectData *)o)->fec)) {
        ((ObjectData *)o)->fec = ((ObjectData *)o)->fe8;
        ((ObjectData *)o)->fe4 = 2;
    }
}

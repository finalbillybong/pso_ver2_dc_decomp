typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_dc Arg0_dc;
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
    virtual void v21();
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
    char unknowne8[0x8];
    Arg0_f0 *ff0;
} ObjectData;
struct Arg0_f0 {
    char unknown0[0x4];
    float f04;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern "C" void operation_8c1c185c(Object *o)
{
    int t1;
    t1 = o->v15(((ObjectData *)o)->ff0->f04);
    if (t1 != 0) {
        ((ObjectData *)o)->fe4 = 1;
        o->v21();
        ((ObjectData *)o)->fdc->f18 = (unsigned int)((ObjectData *)o)->fdc->f18 >> 1 << 1;
    }
}

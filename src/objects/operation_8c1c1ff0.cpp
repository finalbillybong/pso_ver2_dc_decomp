typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510ba0 S_g8c510ba0;
typedef struct Arg0_dc Arg0_dc;
class Object;
struct S_g8c510ba0 {
    char unknown0[0x20];
    int f20;
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
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c510ba0 *g_8c510ba0;
extern "C" void operation_8c1c1ff0(Object *o)
{
    int v2;
    int m;
    v2 = g_8c510ba0 == 0 ? -1 : (int)g_8c510ba0->f20;
    m = -1;
    if (v2 != m && v2 == 1) {
        ((ObjectData *)o)->fe4 = 0;
    }
    o->v22();
    if (v2 != -1 && v2 == 1) {
        ((ObjectData *)o)->fdc->f18 |= 1;
    }
}

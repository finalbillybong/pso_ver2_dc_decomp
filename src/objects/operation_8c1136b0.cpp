typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x8];
    short f08;
    char f0a;
    char f0b;
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
};
typedef struct ObjectData {
    char unknown0[0x10c];
    int f10c;
} ObjectData;
extern int g_8c44be04;
extern "C" char g_8c30ff14[];
extern "C" void operation_8c1005bc(int);
extern "C" void operation_03cf50(unsigned short);
extern "C" void operation_03cfe4(unsigned short);
extern "C" void operation_8c1136b0(Object *o, Arg1 *a1)
{
    if (((a1->f0b & 2)) != 0 && a1->f0a == g_8c44be04) {
        operation_8c1005bc((int)(g_8c30ff14 + 0x15));
    }
    if (((a1->f0b & 1)) != 0) {
        operation_03cf50((unsigned short)(a1->f08));
    } else {
        operation_03cfe4((unsigned short)(a1->f08));
    }
    switch (((ObjectData *)o)->f10c) {
    case 0:
        o->v19();
        ((ObjectData *)o)->f10c = 1;
        return;
    case 1:
        o->v20();
        ((ObjectData *)o)->f10c = 0;
    }
}

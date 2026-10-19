typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_100 Arg0_100;
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
};
typedef struct ObjectData {
    char unknown0[0x100];
    Arg0_100 *f100;
} ObjectData;
extern "C" char g_8c33b3e8[];
extern "C" void call_8c38c5b6(int);
extern "C" void call_8c38cf80(int, void *, ...);
extern "C" void operation_8c24b498(Object *o)
{
    o->v21();
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001e, (void *)((g_8c33b3e8 + 0x47)), (void *)(((ObjectData *)o)->f100));
    call_8c38c5b6(-0xf0f10);
}

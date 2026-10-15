typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b84 S_g8c4e2b84;
typedef struct Arg0_64 Arg0_64;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x2c];
    int f94;
    char unknown98[0x8];
    float fa0;
} ObjectData;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c37df90(int, void *);
extern "C" int operation_8c1beb60(int);
extern "C" void call_8c3a944a(int);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1c29ac(Object *o)
{
    int t2;
    if (((ObjectData *)o)->f94 == 0 || o->v11(600.0f, 50.0f) == 0) {
        return;
    }
    call_8c3827d8((void *)(*(S_g8c4e2b84 **)0x8c4e2b84));
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c3829bc(0, 0.0f, ((ObjectData *)o)->fa0, 0.0f);
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    t2 = operation_8c1beb60(0xb);
    call_8c3a944a(t2);
    call_8c38ad10();
}

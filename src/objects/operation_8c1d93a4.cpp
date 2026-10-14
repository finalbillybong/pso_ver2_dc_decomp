typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2f14 S_g8c4e2f14;
typedef struct S_g8c4e2f18 S_g8c4e2f18;
typedef struct S_g8c4e2f1c S_g8c4e2f1c;
typedef struct S_g8c4e2f20 S_g8c4e2f20;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_94 Arg0_94;
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
    Arg0_94 *f94;
} ObjectData;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c0cd63c(void *, void *, int);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1d93a4(Object *o)
{
    int t1;
    if (*(int *)0x8c4e2f10 != 0) {
        t1 = o->v11(800.0f, 100.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(*(S_g8c4e2f1c **)0x8c4e2f1c));
            call_8c0cd63c((void *)(*(S_g8c4e2f20 **)0x8c4e2f20), (void *)(((ObjectData *)o)->f94), 0);
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3a944a((void *)(*(S_g8c4e2f14 **)0x8c4e2f14));
            call_8c3aa716((void *)(*(S_g8c4e2f18 **)0x8c4e2f18));
            call_8c38ad10();
        }
    }
}

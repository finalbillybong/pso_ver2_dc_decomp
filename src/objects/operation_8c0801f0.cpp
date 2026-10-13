typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469b80 S_g8c469b80;
typedef struct S_g8c469b80_0 S_g8c469b80_0;
typedef struct S_g8c469b80_4 S_g8c469b80_4;
typedef struct S_g8c469b80_8 S_g8c469b80_8;
typedef struct S_g8c469b80_c S_g8c469b80_c;
typedef struct Arg0_64 Arg0_64;
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
} ObjectData;
struct S_g8c469b80 {
    S_g8c469b80_0 *f00;
    S_g8c469b80_4 *f04;
    S_g8c469b80_8 *f08;
    S_g8c469b80_c *f0c;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c0801f0(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)((*(S_g8c469b80 **)0x8c469b80)->f00));
        call_8c3a944a((void *)((*(S_g8c469b80 **)0x8c469b80)->f04));
        call_8c3a944a((void *)((*(S_g8c469b80 **)0x8c469b80)->f08));
        call_8c3a944a((void *)((*(S_g8c469b80 **)0x8c469b80)->f0c));
        call_8c38ad10();
    }
}

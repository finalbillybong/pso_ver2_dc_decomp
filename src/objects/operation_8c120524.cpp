typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
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
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x344];
    int f3ac;
    int f3b0;
    float f3b4;
    float f3b8;
} ObjectData;
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ade4(int);
extern "C" void call_8c382a58(int, void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c01cc90(Object *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c013e74(void);
extern "C" void call_8c04a9e0(Object *, int);
extern "C" void operation_8c120524(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->f3b4, ((ObjectData *)o)->f3b8);
    if (t1 != 0 && ((ObjectData *)o)->f3ac == 1) {
        call_8c013c58(o);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c38ade4(0);
        call_8c382a58(0, (void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (((ObjectData *)o)->f3b0 != 0) {
            call_8c3a944a((void *)(((ObjectData *)o)->f38));
        } else {
            call_8c01cc90(o);
        }
        call_8c38ad10();
        call_8c013e74();
        call_8c04a9e0(o, 0);
    }
}

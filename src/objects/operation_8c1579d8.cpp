typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_124 Arg0_124;
typedef struct Arg0_128 Arg0_128;
typedef struct Arg0_12c Arg0_12c;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_138 Arg0_138;
typedef struct Arg0_13c Arg0_13c;
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
    char unknown68[0x24];
    int f8c;
    char unknown90[0x90];
    float f120;
    Arg0_124 *f124;
    Arg0_128 *f128;
    Arg0_12c *f12c;
    Arg0_130 *f130;
    Arg0_134 *f134;
    Arg0_138 *f138;
    Arg0_13c *f13c;
} ObjectData;
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1579d8(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c391c94();
        if (((ObjectData *)o)->f8c >= 0) {
            call_8c3827d8((void *)(((ObjectData *)o)->f130));
            call_8c3addea((void *)(((ObjectData *)o)->f124), (void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f120);
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f134));
        call_8c3aa716((void *)(((ObjectData *)o)->f128));
        call_8c391cc4();
        call_8c3827d8((void *)(((ObjectData *)o)->f138));
        call_8c3aa716((void *)(((ObjectData *)o)->f12c));
        call_8c38ad10();
    }
}

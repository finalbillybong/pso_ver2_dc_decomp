typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dab0c S_g8c4dab0c;
typedef struct S_g8c4dab10 S_g8c4dab10;
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
} ObjectData;
extern S_g8c4dab0c *g_8c4dab0c;
extern S_g8c4dab10 *g_8c4dab10;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c159dd4(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 40.0f);
    if (t1 != 0) {
        call_8c3827d8(g_8c4dab10);
        call_8c38ae68();
        g_8c575570 &= -0x401;
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3aa716(g_8c4dab0c);
        call_8c38ad10();
    }
}

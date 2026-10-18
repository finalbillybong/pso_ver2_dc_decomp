typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469cc0 S_g8c469cc0;
typedef struct S_g8c469cc0_0 S_g8c469cc0_0;
class Object;
struct S_g8c469cc0 {
    S_g8c469cc0_0 *f00;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {

} ObjectData;
extern S_g8c469cc0 *g_8c469cc0;
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c086a7c(void *);
extern "C" void operation_8c086990(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c3827d8((void *)(g_8c469cc0->f00));
        operation_8c086a7c((void *)o);
    }
}

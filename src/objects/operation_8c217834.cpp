typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
class Object;
struct S_c0 {
    char unknown0[0x28];
    float f28;
    float f2c;
    int f30;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
} ObjectData;
extern "C" void call_8c0dbdf4(Object *, S_c0 *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c217834(Object *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    if (!(t1->f30 >= 0)) {
        t1->f28 = (float)((ObjectData *)o)->f64 / 7.5f;
        t1->f2c = t1->f28;
    }
    call_8c0dbdf4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}

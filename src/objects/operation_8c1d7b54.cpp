typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_78 Arg0_78;
class Object;
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
    char unknown0[0x74];
    int f74;
    Arg0_78 *f78;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c1d7bb8(Object *, int);
extern "C" void call_8c1d7c80(Object *, int);
extern "C" void operation_8c1d7b54(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c199b80((void *)(((ObjectData *)o)->f78), t1);
    if (((ObjectData *)o)->f74 != 0) {
        call_8c1d7bb8(o, t1);
        call_8c1d7c80(o, t1);
    }
}

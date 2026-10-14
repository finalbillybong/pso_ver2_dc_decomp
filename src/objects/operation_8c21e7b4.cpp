typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_6c Arg0_6c;
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
    char unknown0[0x6c];
    Arg0_6c *f6c;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c21e9a0(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c21e7b4(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c199b80((void *)(((ObjectData *)o)->f6c), t1);
    call_8c21e9a0(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}

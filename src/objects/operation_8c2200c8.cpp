typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_70 Arg0_70;
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
    char unknown0[0x70];
    Arg0_70 *f70;
} ObjectData;
extern "C" void call_8c220130(Object *);
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void call_8c22016c(Object *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c2200c8(Object *o)
{
    int t1;
    t1 = o->v5();
    call_8c220130(o);
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c22016c(o, t1);
    call_8c199b80((void *)(((ObjectData *)o)->f70), t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}

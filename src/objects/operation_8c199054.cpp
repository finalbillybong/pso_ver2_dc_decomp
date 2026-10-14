typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_8c Arg0_8c;
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
    char unknown0[0x88];
    Arg0_88 *f88;
    Arg0_8c *f8c;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void call_8c1990c4(Object *, int);
extern "C" void call_8c199244(Object *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c199bc8(void *, int, void *);
extern "C" void operation_8c199054(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c1990c4(o, t1);
    call_8c199244(o, t1);
    call_8c199b80((void *)(((ObjectData *)o)->f88), t1);
    call_8c199bc8((void *)(((ObjectData *)o)->f8c), t1, (void *)(((char *)o + 0x78)));
}

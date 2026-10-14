typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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

} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c1de27c(int, int);
extern "C" void call_8c1de51c(int, int);
extern "C" void call_8c1de630(int, int);
extern "C" void operation_8c1de234(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c1de27c((int)(o), t1);
    call_8c1de51c((int)(o), t1);
    call_8c1de630((int)(o), t1);
}

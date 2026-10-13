typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c0fc3c0(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    if (((ObjectData *)o)->f38 == ((ObjectData *)o)->f48 && ((ObjectData *)o)->f3c == ((ObjectData *)o)->f4c && ((ObjectData *)o)->f40 == ((ObjectData *)o)->f50 && ((ObjectData *)o)->f44 == ((ObjectData *)o)->f54) {
        draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    }
}

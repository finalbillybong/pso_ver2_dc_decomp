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
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    int f70;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c1dfee8(Object *, int);
extern "C" void operation_8c1dfe9c(Object *o)
{
    int t1;
    if (((ObjectData *)o)->f70 > 0 && ((((ObjectData *)o)->f68 & 0x200)) == 0) {
        t1 = o->v5();
        draw_view_transition_if_active((void *)o);
        call_8c1dfee8(o, t1);
    }
}

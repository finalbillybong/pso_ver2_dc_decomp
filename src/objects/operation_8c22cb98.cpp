typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_6c Arg0_6c;
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
    char unknown0[0x68];
    char f68;
    unsigned char f69;
    char unknown6a[0x2];
    Arg0_6c *f6c;
    int f70;
} ObjectData;
extern "C" int active_payload_8c22c05c(void *);
extern "C" void call_8c22cd34(Object *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c22cb98(Object *o)
{
    int t1;
    int t2;
    if (((ObjectData *)o)->f68 == 1) {
        t1 = active_payload_8c22c05c((void *)(((ObjectData *)o)->f6c));
        ((ObjectData *)o)->f70 = (int)t1;
        if (((ObjectData *)o)->f70 != 0) {
            call_8c22cd34(o);
            ((ObjectData *)o)->f68 = 1;
        }
    }
    t2 = o->v5();
    if (((((ObjectData *)o)->f69 & 1)) != 0) {
        call_8c0db5d4(o, t2);
    }
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t2);
}

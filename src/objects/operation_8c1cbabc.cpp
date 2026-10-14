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
extern "C" void operation_8c1cbaf4(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c1cbabc(Object *o)
{
    int t1;
    t1 = o->v5();
    operation_8c1cbaf4((void *)o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}

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
extern "C" void operation_8c199f24(int, int);
extern "C" void operation_8c18ccb4(Object *o)
{
    int t1;
    t1 = o->v5();
    operation_8c199f24((int)(((ObjectData *)o)->f6c), t1);
}

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
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
} ObjectData;
extern int g_8c338130;
extern "C" void call_8c01d1ec(Object *);
extern "C" Object *operation_8c22a930(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c278d58;
    ((ObjectData *)o)->tag = (int)(g_8c338130);
    ((ObjectData *)o)->size = 0x94;
    o->v6(a2);
    return o;
}

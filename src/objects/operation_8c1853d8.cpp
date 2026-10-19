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
    char unknown20[0x74];
    float f94;
    float f98;
    float f9c;
} ObjectData;
extern int g_8c3199f0;
extern "C" void call_8c01d1ec(Object *);
extern "C" Object *operation_8c1853d8(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272018;
    ((ObjectData *)o)->tag = (int)(g_8c3199f0);
    ((ObjectData *)o)->size = 0xa0;
    o->v6(a2);
    ((ObjectData *)o)->f94 = 0.0f;
    ((ObjectData *)o)->f98 = 0.0f;
    ((ObjectData *)o)->f9c = 0.0f;
    return o;
}

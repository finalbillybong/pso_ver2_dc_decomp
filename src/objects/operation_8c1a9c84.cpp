typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_88 Arg0_88;
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
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x18];
    Arg0_88 *f88;
    char unknown8c[0x8];
    int f94;
    char unknown98[0x4];
    float f9c;
    int fa0;
} ObjectData;
extern "C" void call_8c01d1ec(Object *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" Object *operation_8c1a9c84(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274690;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c324d7c);
    ((ObjectData *)o)->size = 0xa4;
    o->v6(a2);
    ((ObjectData *)o)->f94 = 1;
    ((ObjectData *)o)->f9c = ((ObjectData *)o)->f6c;
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(((ObjectData *)base)->f88), 5);
        ((ObjectData *)base)->fa0 = (int)t1;
    }
    if (!(((ObjectData *)o)->fa0 >= 0)) {
        ((ObjectData *)o)->fa0 = 0;
    }
    return o;
}

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
    char unknown20[0x68];
    int f88;
    char unknown8c[0x8];
    int f94;
    int f98;
    int f9c;
    unsigned short fa0;
    short fa2;
    char unknowna4[0x2];
    short fa6;
    int fa8;
} ObjectData;
extern int g_8c31a298;
extern "C" void call_8c01d1ec(Object *);
extern "C" Object *operation_8c191a80(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272788;
    ((ObjectData *)o)->tag = (int)(g_8c31a298);
    ((ObjectData *)o)->size = 0xac;
    o->v6(a2);
    ((ObjectData *)o)->fa6 = 0;
    ((ObjectData *)o)->fa0 = ((ObjectData *)o)->f88;
    if ((unsigned int)(((ObjectData *)o)->fa0 & 0xffff) > (unsigned int)4) {
        ((ObjectData *)o)->fa0 = 0xffff;
    }
    ((ObjectData *)o)->f94 = 0;
    ((ObjectData *)o)->fa8 = 1;
    ((ObjectData *)o)->f9c = 0;
    ((ObjectData *)o)->fa2 = 0;
    ((ObjectData *)o)->f98 = -1;
    return o;
}

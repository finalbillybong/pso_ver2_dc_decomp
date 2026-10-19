typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
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
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x50];
    int f88;
    char unknown8c[0x8];
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    int fa8;
    int fac;
    void *fb0;
    float fb4;
    float fb8;
    float fbc;
    int fc0;
    int fc4;
    int fc8;
    int fcc;
    int fd0;
} ObjectData;
extern int g_8c32adf8;
extern S_g8c44be98 *g_8c44be98;
extern int g_8c4e2f60;
extern "C" void call_8c01d1ec(Object *, void *);
extern "C" Object *operation_8c1db340(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2772c4;
    ((ObjectData *)o)->tag = (int)(g_8c32adf8);
    ((ObjectData *)o)->size = 0xd4;
    o->v6(a1);
    ((ObjectData *)o)->f28 = (int)(g_8c4e2f60);
    ((ObjectData *)o)->f34 |= 0x40000000;
    ((ObjectData *)o)->fac = (int)(g_8c4e2f60);
    if (!(((ObjectData *)o)->f88 >= 0)) {
        ((ObjectData *)o)->fb0 = (void *)(void *)0x8c32ad08;
    } else {
        ((ObjectData *)o)->fb0 = (void *)(void *)0x8c32ac18;
    }
    ((ObjectData *)o)->f94 = 0.0f;
    ((ObjectData *)o)->f98 = 0.0f;
    ((ObjectData *)o)->f9c = 0.0f;
    ((ObjectData *)o)->fa8 = 0;
    ((ObjectData *)o)->fa0 = 0.0f;
    ((ObjectData *)o)->fa4 = 0.0f;
    ((ObjectData *)o)->fbc = 0.0f;
    ((ObjectData *)o)->fb8 = 0.0f;
    ((ObjectData *)o)->fb4 = 0.0f;
    ((ObjectData *)o)->fc8 = 0;
    ((ObjectData *)o)->fc4 = 0;
    ((ObjectData *)o)->fc0 = 0;
    ((ObjectData *)o)->fcc = 0;
    ((ObjectData *)o)->fd0 = 0;
    return o;
}

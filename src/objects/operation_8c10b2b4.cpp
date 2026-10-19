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
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x68];
    int f88;
    char unknown8c[0x8];
    int f94;
    int f98;
} ObjectData;
extern int g_8c30bd3c;
extern S_g8c44be98 *g_8c44be98;
extern "C" void call_8c01d1ec(Object *, void *);
extern "C" Object *operation_8c10b2b4(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    (void)home;
    call_8c01d1ec(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269a98;
    ((ObjectData *)o)->tag = (int)(g_8c30bd3c);
    ((ObjectData *)o)->size = 0x9c;
    o->v6(a1);
    ((ObjectData *)o)->f94 = 0;
    ((ObjectData *)o)->f98 = 5;
    v1 = (int)((ObjectData *)o)->f88;
    if (!(v1 >= 0)) {
        ((ObjectData *)o)->f04 |= 1;
        return o;
    }
    if (v1 > 6) {
        ((ObjectData *)o)->f04 |= 1;
        return o;
    }
    return o;
}

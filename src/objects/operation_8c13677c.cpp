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
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};
typedef struct ObjectData {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x74];
    int f94;
    int f98;
} ObjectData;
extern int g_8c312e50;
extern "C" void call_8c01d1ec(Object *);
extern "C" Object *operation_8c13677c(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26d03c;
    ((ObjectData *)o)->tag = (int)(g_8c312e50);
    ((ObjectData *)o)->size = 0x9c;
    o->v6(a2);
    ((ObjectData *)o)->f94 = 0;
    ((ObjectData *)o)->f98 = 0;
    o->v14();
    ((ObjectData *)o)->f04 |= 0x10;
    return o;
}

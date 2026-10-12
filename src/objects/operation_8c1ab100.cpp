typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    char unknown8c[0x58];
    int fe4;
    int fe8;
    int fec;
} ObjectData;
extern "C" void call_8c051eb8(int);
extern "C" Object *operation_8c1ab100(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c051eb8((int)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2747ac;
    ((ObjectData *)o)->tag = *(int *)0x8c324f28;
    ((ObjectData *)o)->size = 0xf0;
    o->v6(a2);
    ((ObjectData *)o)->fec = ((ObjectData *)o)->f88;
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->fe8 = 0;
    return o;
}

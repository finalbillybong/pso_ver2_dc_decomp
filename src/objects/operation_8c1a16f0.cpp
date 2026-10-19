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
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x74];
    float fe4;
} ObjectData;
extern int g_8c31d488;
extern "C" void operation_8c051eb8(void *);
extern "C" Object *operation_8c1a16f0(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272ec8;
    ((ObjectData *)o)->tag = (int)(g_8c31d488);
    ((ObjectData *)o)->size = 0xe8;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = ((ObjectData *)o)->f6c;
    return o;
}

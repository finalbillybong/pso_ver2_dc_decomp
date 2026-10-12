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
    virtual void v6();
    virtual void v7();
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc4];
    int fe4;
    char unknowne8[0x28];
    int f110;
    int f114;
    int f118;
    char unknown11c[0x14];
    int f130;
} ObjectData;
extern "C" void call_8c051eb8(int);
extern "C" Object *operation_8c01c488(Object *o)
{
    Object **home = &o;
    (void)home;
    call_8c051eb8((int)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c261294;
    ((ObjectData *)o)->tag = *(int *)0x8c2e3450;
    ((ObjectData *)o)->size = 0x134;
    o->v7();
    ((ObjectData *)o)->f110 = 0;
    ((ObjectData *)o)->f130 = 0;
    ((ObjectData *)o)->f114 = 0;
    ((ObjectData *)o)->f118 = 0;
    ((ObjectData *)o)->fe4 = 0;
    return o;
}

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
    virtual void v4(void *);
    virtual int v5();
    virtual void v6();
    virtual void v7();
};
typedef struct ObjectData {

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" int call_8c0105b4(int, int);
extern "C" void call_8c010728(int, unsigned short);
extern "C" void call_8c12b880(void *, int, int);
extern "C" void call_8c12b154(void *, int, int);
extern "C" int operation_8c02fe0c(Object *o, int a1, int a2, int a3, int a4, int a5, unsigned short a6)
{
    int t1;
    int t2;
    o->v4((g_8c2e7ce0 + 0x6a9));
    t1 = call_8c0105b4((int)(o), a5);
    call_8c010728((int)(o), a6);
    if (t1 != 0) {
        return 2;
    }
    call_8c12b880((void *)(((char *)o + 0x3024)), 0, 0x11);
    call_8c12b880((void *)(((char *)o + 0x3035)), 0, 0x11);
    call_8c12b880((void *)(((char *)o + 0x30f6)), 0, 0x11);
    call_8c12b880((void *)(((char *)o + 0x3107)), 0, 0x11);
    call_8c12b154((void *)(((char *)o + 0x3024)), a1, 8);
    call_8c12b154((void *)(((char *)o + 0x3035)), a2, 8);
    call_8c12b154((void *)(((char *)o + 0x30f6)), a3, 8);
    call_8c12b154((void *)(((char *)o + 0x3107)), a4, 8);
    t2 = o->v5();
    if (!(t2 >= 0)) {
        o->v4((g_8c2e7ce0 + 0x319));
        return 1;
    }
    o->v7();
    return 0;
}

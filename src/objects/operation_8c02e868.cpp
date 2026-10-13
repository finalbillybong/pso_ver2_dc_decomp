typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c42ae84 S_g8c42ae84;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual int v5();
};
typedef struct ObjectData {

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c0106f8(int, void *);
extern "C" void call_8c010728(int, short);
extern "C" int operation_8c02e868(Object *o)
{
    int t1;
    o->v4((g_8c2e7ce0 + 0x35a));
    call_8c0106f8((int)(o), (void *)(*(S_g8c42ae84 **)0x8c42ae84));
    call_8c010728((int)(o), (short)(*(short *)0x8c42ae88));
    t1 = o->v5();
    if (!(t1 >= 0)) {
        switch (t1) {
        case -1:
            o->v4((g_8c2e7ce0 + 0x364));
            break;
        case -2:
            o->v4((g_8c2e7ce0 + 0x37b));
            break;
        case -3:
            o->v4((g_8c2e7ce0 + 0x391));
        }
        return 1;
    }
    return 0;
}

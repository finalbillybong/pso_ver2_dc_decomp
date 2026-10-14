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
    virtual void v4(void *);
};
typedef struct ObjectData {
    char unknown0[0xa80];
    int fa80;
    char unknowna84[0xa6cc];
    int fb150;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c12b77c(void *, int, int);
extern "C" void operation_8c02e098(Object *o, int a1)
{
    o->v4((g_8c2e7ce0 + 0x1e3));
    call_8c12b77c((void *)((void *)0x8c42aef0), (int)(a1 + 4), 0x80);
    ((ObjectData *)o)->fa80 = 1;
    if (((ObjectData *)o)->fb150 != 0) {
        ((void (*)(int))(((ObjectData *)o)->fb150))(a1);
    }
}

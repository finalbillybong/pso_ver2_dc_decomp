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
};
typedef struct ObjectData {
    char unknown0[0xb180];
    int fb180;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f794(Object *o)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x5aa));
    v21 = (char *)((ObjectData *)o)->fb180;
    if (v21 != 0) {
        ((void (*)(void))(v21))();
    }
}

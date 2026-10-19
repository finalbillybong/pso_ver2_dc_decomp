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
    char unknown0[0xb188];
    int fb188;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02e540(Object *o, int a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x2ca));
    v21 = (char *)((ObjectData *)o)->fb188;
    if (v21 != 0) {
        ((void (*)(int))(v21))(a1);
    }
}

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
    char unknown0[0xb198];
    int fb198;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02fb94(Object *o, int a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x663));
    v21 = (char *)((ObjectData *)o)->fb198;
    if (v21 != 0) {
        ((void (*)(int))(v21))(a1);
    }
}

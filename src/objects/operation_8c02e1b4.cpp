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
    char unknown0[0xb1b8];
    int fb1b8;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02e1b4(Object *o, int a1)
{
    o->v4((g_8c2e7ce0 + 0x234));
    if (((ObjectData *)o)->fb1b8 != 0) {
        ((void (*)(int))(((ObjectData *)o)->fb1b8))(a1);
    }
}

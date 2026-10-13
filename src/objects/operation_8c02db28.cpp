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
    char unknown0[0xb144];
    int fb144;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02db28(Object *o, int a1)
{
    o->v4((g_8c2e7ce0 + 0xbf));
    if (((ObjectData *)o)->fb144 != 0) {
        ((void (*)(int))(((ObjectData *)o)->fb144))((int)(a1 + 4));
    }
}

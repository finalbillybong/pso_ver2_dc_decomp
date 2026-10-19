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
    char unknown0[0xb194];
    int fb194;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02fafc(Object *o, int a1)
{
    char *v22;
    o->v4((g_8c2e7ce0 + 0x647));
    v22 = (char *)((ObjectData *)o)->fb194;
    if (v22 != 0) {
        ((void (*)(int))(v22))((int)(a1 + 4));
    }
}

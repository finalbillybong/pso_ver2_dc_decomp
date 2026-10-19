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
    char unknown0[0xb19c];
    int fb19c;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02fcbc(Object *o, int a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x68c));
    v21 = (char *)((ObjectData *)o)->fb19c;
    if (v21 != 0) {
        ((void (*)(int))(v21))(a1);
    }
}

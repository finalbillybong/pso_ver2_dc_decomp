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
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0xa5c];
    int fa5c;
    char unknowna60[0x1c];
    int fa7c;
    char unknowna80[0x2698];
    int f3118;
    int f311c;
    char unknown3120[0x800c];
    int fb12c;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02dd30(Object *o)
{
    o->v4((g_8c2e7ce0 + 0x186));
    o->v6();
    ((ObjectData *)o)->fa5c = 0;
    ((ObjectData *)o)->fa7c = 0;
    ((ObjectData *)o)->f3118 = 0;
    ((ObjectData *)o)->f311c = 0;
    if (((ObjectData *)o)->fb12c != 0) {
        ((void (*)(void))(((ObjectData *)o)->fb12c))();
    }
}

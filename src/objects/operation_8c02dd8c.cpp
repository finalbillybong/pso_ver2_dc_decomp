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
    char unknown0[0xb13c];
    int fb13c;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02dd8c(Object *o, int a1)
{
    o->v4((g_8c2e7ce0 + 0x190));
    if (((ObjectData *)o)->fb13c != 0) {
        ((void (*)(int, int))(((ObjectData *)o)->fb13c))((int)(a1 + 4), (int)(a1 + 0xc));
    }
}

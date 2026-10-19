typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
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
    char unknown0[0xa78];
    int fa78;
    char unknowna7c[0xa6f8];
    int fb174;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c0300c8(Object *o, Arg1 *a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x6d0));
    ((ObjectData *)o)->fa78 = a1->f01;
    v21 = (char *)((ObjectData *)o)->fb174;
    if (v21 != 0) {
        ((void (*)(int))(v21))((int)(a1->f01));
    }
}

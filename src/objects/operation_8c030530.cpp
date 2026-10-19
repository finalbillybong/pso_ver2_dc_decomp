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
    char unknown0[0xb1d4];
    int fb1d4;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c030530(Object *o, Arg1 *a1)
{
    char *v22;
    o->v4((g_8c2e7ce0 + 0x711));
    v22 = (char *)((ObjectData *)o)->fb1d4;
    if (v22 != 0) {
        ((void (*)(void *, int))(v22))((void *)(((char *)a1 + 0x4)), (int)(a1->f01));
    }
}

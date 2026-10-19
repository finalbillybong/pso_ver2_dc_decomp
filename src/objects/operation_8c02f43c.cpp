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
    char unknown0[0xb164];
    int fb164;
} ObjectData;
struct Arg1 {
    char unknown0[0x5];
    char f05;
    char f06;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f43c(Object *o, Arg1 *a1)
{
    char *v22;
    o->v4((g_8c2e7ce0 + 0x50c));
    v22 = (char *)((ObjectData *)o)->fb164;
    if (v22 != 0) {
        ((void (*)(void *, int, int))(v22))((void *)(((char *)a1 + 0x10)), (int)(a1->f05), (int)(a1->f06));
    }
}

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
    char unknown0[0xb168];
    int fb168;
} ObjectData;
struct Arg1 {
    char unknown0[0x4];
    char f04;
    char f05;
    char f06;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f47c(Object *o, Arg1 *a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x519));
    v21 = (char *)((ObjectData *)o)->fb168;
    if (v21 != 0) {
        ((void (*)(int, int, int))(v21))((int)(a1->f04), (int)(a1->f05), (int)(a1->f06));
    }
}

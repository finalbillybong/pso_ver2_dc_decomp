typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
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
    char unknown0[0xb15c];
    int fb15c;
} ObjectData;
struct Arg1 {
    Block16 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02e44c(Object *o, Arg1 *a1)
{
    char *v21;
    o->v4((g_8c2e7ce0 + 0x2b0));
    v21 = (char *)((ObjectData *)o)->fb15c;
    if (v21 != 0) {
        ((void (*)(Block16))(v21))((Block16)(*(Block16 *)&a1->f00));
    }
}

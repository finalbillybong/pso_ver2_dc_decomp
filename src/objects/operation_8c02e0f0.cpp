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
    char unknown0[0xa80];
    int fa80;
    char unknowna84[0xa6d4];
    int fb158;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x2];
    char f04;
    char f05;
    char unknown6[0x1];
    char f07;
    char f08;
    char f09;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02e0f0(Object *o, Arg1 *a1)
{
    char *v22;
    o->v4((g_8c2e7ce0 + 0x1ff));
    ((ObjectData *)o)->fa80 = 1;
    v22 = (char *)((ObjectData *)o)->fb158;
    if (v22 != 0) {
        ((void (*)(void *, int, int, int, int, int, int))(v22))((void *)(((char *)a1 + 0x10)), (int)(a1->f01), (int)(a1->f04), (int)(a1->f05), (int)(a1->f07), (int)(a1->f08), (int)(a1->f09));
    }
}

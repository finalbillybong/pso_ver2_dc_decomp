typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
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
    virtual void v7();
    virtual void v8();
    virtual void v9(Arg1 *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Arg1 {
    unsigned char f00;
    char f01;
    unsigned short f02;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f7c4(Object *o, Arg1 *a1)
{
    o->v4((g_8c2e7ce0 + 0x5b9));
    if (((ObjectData *)o)->fa7c != 0) {
        a1->f00 = 0x81;
        a1->f01 = 0;
        a1->f02 = 0x220;
        o->v9(a1, a1->f02);
    }
}

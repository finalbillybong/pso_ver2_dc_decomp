typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_x41936 S_x41936;
class Object;
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
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Frame {
    unsigned char f00;
    char f01;
    unsigned short f02;
    Block8 f04;
};
struct S_x41936 {
    Block8 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f290(Object *o, int a1)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x4ac));
    if (((ObjectData *)o)->fa7c != 0) {
        (&frame)->f00 = 0x84;
        (&frame)->f01 = 0;
        (&frame)->f02 = 0xc;
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&((S_x41936 *)((char *)(int *)((char *)o + 0x1d14) + a1 * 0xc))->f00;
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}

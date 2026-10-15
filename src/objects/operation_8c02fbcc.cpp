typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
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
    Block24 f04;
};
struct Arg1 {
    Block24 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c12b880(Frame *, int, int);
extern "C" void operation_8c02fbcc(Object *o, Arg1 *a1)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x671));
    if (((ObjectData *)o)->fa7c != 0) {
        call_8c12b880((Frame *)((&frame)), 0, 0x1c);
        (&frame)->f00 = 0xc2;
        (&frame)->f01 = 0;
        (&frame)->f02 = 0x1c;
        *(Block24 *)&(&frame)->f04 = *(Block24 *)&a1->f00;
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}

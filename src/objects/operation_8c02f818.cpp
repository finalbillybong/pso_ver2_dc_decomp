typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
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
    char unknown0[0xa6c];
    Block8 fa6c;
    char unknowna74[0x8];
    int fa7c;
} ObjectData;
struct Frame {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
    Block8 f04;
    char unknownc[0x10];
};
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c12b880(Frame *, int, int);
extern "C" void operation_8c02f818(Object *o)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x5c8));
    if (((ObjectData *)o)->fa7c != 0) {
        call_8c12b880((Frame *)((&frame)), 0, 0x1c);
        (&frame)->f00 = 0xa0;
        (&frame)->f02 = 0x1c;
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&((ObjectData *)o)->fa6c;
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}

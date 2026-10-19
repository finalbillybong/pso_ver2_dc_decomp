typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x28];
    short f28;
} ObjectData;
struct Frame {
    short f00;
    char unknown2[0x2];
    int f04;
    char unknown8[0x1];
    char f09;
    char unknowna[0x2];
    short f0c;
    char unknowne[0x2];
    int f10;
};
extern int g_8c4621a8;
extern "C" int call_8c12b0cc(int);
extern "C" int call_8c3ca534(int, Frame *, int);
extern "C" int operation_8c010b54(Object *o, int a1)
{
    Frame frame;
    short v1;
    int t1;
    int t2;
    v1 = (short)((ObjectData *)o)->f28;
    if ((short)v1 != -1) {
        (&frame)->f00 = v1;
        (&frame)->f04 = 0;
        (&frame)->f09 = 1;
        t1 = call_8c12b0cc(a1);
        (&frame)->f0c = t1;
        g_8c4621a8 = 1;
        (&frame)->f10 = a1;
        t2 = call_8c3ca534(0x4118, (Frame *)((&frame)), 0);
        g_8c4621a8 = 0;
        if ((short)t2 != 0) {
            o->v6();
        }
        return (int)(t2);
    }
    return -0xa;
}

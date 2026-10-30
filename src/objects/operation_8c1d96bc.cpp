typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
class Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block16 f0c;
};
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
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x60];
    int f60;
    char unknown64[0x4];
    int f68;
    float f6c;
    char unknown70[0x4];
    float f74;
} ObjectData;
extern Block16 g_8c32a318;
extern "C" char g_8c32a328[];
extern "C" void operation_8c0c5480(void *, void *, Frame *);
extern "C" void call_8c38c5b6(int);
extern "C" void call_8c38cf80(int, void *, ...);
extern "C" void operation_8c1d96bc(Object *o)
{
    Frame frame;
    int t1;
    void *pm5;
    t1 = o->v11(250.0f, 10.0f);
    if (!(t1 == 0)) {
        Block16 *pm2;
        int pm3;
        ObjectData *pm4;
        pm2 = &g_8c32a318;
        pm3 = (unsigned char)(0);
        *(&(&frame)->f0c) = *(pm2);
        pm4 = (ObjectData *)o;
        (pm4)->f68 = pm3;
        ((ObjectData *)o)->f60 = 0;
        (&frame)->f00 = ((ObjectData *)o)->f6c;
        (&frame)->f04 = 3.0f;
        (&frame)->f08 = ((ObjectData *)o)->f74;
        operation_8c0c5480((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x60)), (Frame *)((&frame)));
    }
    t1 = -0xff0100;
    call_8c38c5b6(t1);
    pm5 = (void *)((g_8c32a328 + 0x191));
    call_8c38cf80(0x13001a, pm5);
    call_8c38cf80(0x13001b, (void *)((g_8c32a328 + 0x19f)));
    call_8c38cf80(0x13001c, (void *)((g_8c32a328 + 0x1ae)));
    call_8c38cf80(0x13001e, (void *)((g_8c32a328 + 0x1bc)));
    call_8c38c5b6(-0xf0f10);
}

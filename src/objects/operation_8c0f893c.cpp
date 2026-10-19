typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_64 Arg0_64;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x33c];
    Arg0_3a4 *f3a4;
    char unknown3a8[0x14];
    float f3bc;
    float f3c0;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0f7adc(float, float, float, float);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(Frame *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e3d0(int, void *);
extern "C" void call_8c1000a8(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c0fad14(Object *);
extern "C" void operation_8c0f893c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 0 && ((ObjectData *)o)->f3bc > 0.0f) {
        t2 = o->v11(500.0f, 20.0f);
        if (t2 != 0) {
            if (1.0f > ((ObjectData *)o)->f3bc) {
                operation_8c0f7adc(((ObjectData *)o)->f3bc, 0.0f, 0.0f, 0.0f);
            }
            call_8c1086fc();
            call_8c38ae68();
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f00.f04 += ((ObjectData *)o)->f3c0;
            call_8c382a40((Frame *)((&frame)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c37e3d0(0, (void *)(((char *)o + 0x3c4)));
            call_8c1000a8((void *)(((ObjectData *)o)->f3a4));
            call_8c38ad10();
            call_8c391cc4();
            if (1.0f > ((ObjectData *)o)->f3bc) {
                g_8c5755a4 = (int)(g_8c46f574);
                g_8c5755a8 = (int)(g_8c46f578);
                g_8c575570 = (int)(g_8c46f560);
            }
            call_8c0fad14(o);
        }
    }
}

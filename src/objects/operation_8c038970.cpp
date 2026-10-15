typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3cc Arg0_3cc;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_s3b8 Arg0_s3b8;
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
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual int v12(float, float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x9c];
    float f3a8;
} ObjectData;
struct Arg0_s3b8 {
    char unknown0[0x14];
    Arg0_3cc *f14;
};
struct Arg0_3cc {
    char unknown0[0x20];
    int f20;
    int f24;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void operation_8c038970(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = o->v12(250.0f, 500.0f, 30.0f);
    if (t1 == 0) {
        return;
    }
    call_8c013c58(o);
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    t2 = update_depth_mode((void *)(((char *)o + 0x3b8)), (void *)(((char *)o + 0x3c)));
    if (t2 == 1) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        ((void (*)(void *))(((Arg0_s3b8 *)((char *)o + 0x3b8))->f14->f20))((void *)(((char *)o + 0x3b8)));
    }
    call_8c38ae68();
    call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f3a8, 0.0f);
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    t3 = operation_8c03d338();
    if (t3 == 1) {
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
    } else {
        call_8c1086fc();
        if (t1 == 1) {
            operation_8c01cc90((void *)o);
        } else {
            operation_8c01cd20((void *)o);
        }
        call_8c391cc4();
    }
    call_8c38ad10();
    t4 = update_depth_mode((void *)(((char *)o + 0x3b8)), (void *)(((char *)o + 0x3c)));
    if (t4 == 1) {
        ((void (*)(void *))(((Arg0_s3b8 *)((char *)o + 0x3b8))->f14->f24))((void *)(((char *)o + 0x3b8)));
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        g_8c575570 = (int)(g_8c46f560);
    }
    operation_8c013e74();
    if (((ObjectData *)o)->f30a != 0 && ((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 9) {
        (&frame)->f00 = 2.0f;
        (&frame)->f04 = 1.0f;
        (&frame)->f08 = 2.0f;
        call_8c04a9e0(o, (Frame *)((&frame)));
    }
}

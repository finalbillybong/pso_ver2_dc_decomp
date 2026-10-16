typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s35c;
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
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2e8];
    float f350;
    float f354;
    char unknown358[0x20];
    int f378;
} ObjectData;
class Arg0_s35c {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_s35cData {

} Arg0_s35cData;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void update_context_blend(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c24c78c(Object *o)
{
    int t1;
    int t2;
    int t3;
    update_context_blend((void *)(((char *)o + 0x35c)));
    t1 = o->v11(((ObjectData *)o)->f350, ((ObjectData *)o)->f354);
    ((ObjectData *)o)->f378 = (int)t1;
    if (((ObjectData *)o)->f378 == 1) {
        t2 = update_depth_mode((void *)(((char *)o + 0x35c)), (void *)(((char *)o + 0x3c)));
        if (t2 == 1) {
            g_8c46f560 = (int)(g_8c575570);
            g_8c46f574 = (int)(g_8c5755a4);
            g_8c46f578 = (int)(g_8c5755a8);
            ((Arg0_s35c *)((char *)o + 0x35c))->v6();
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
        call_8c38ad10();
        t3 = update_depth_mode((void *)(((char *)o + 0x35c)), (void *)(((char *)o + 0x3c)));
        if (t3 == 1) {
            ((Arg0_s35c *)((char *)o + 0x35c))->v7();
            g_8c5755a4 = (int)(g_8c46f574);
            g_8c5755a8 = (int)(g_8c46f578);
            g_8c575570 = (int)(g_8c46f560);
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_2c S_vv11_2c;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_4 S_vv12_4;
class Object;
class Arg0_s374;
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
    char unknown68[0x8];
    float f70;
    char unknown74[0x2e8];
    int f35c;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct S_vv11 {
    char unknown0[0x2c];
    S_vv11_2c *f2c;
};
struct S_vv12 {
    char unknown0[0x4];
    S_vv12_4 *f04;
};
class Arg0_s374 {
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
typedef struct Arg0_s374Data {

} Arg0_s374Data;
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
extern "C" int operation_8c03d338(void);
extern "C" int call_8c12b944(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1415d8(Object *o)
{
    Frame frame;
    S_vv11 *v11;
    S_vv12 *v12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    update_context_blend((void *)(((char *)o + 0x374)));
    t1 = o->v11(400.0f, 20.0f);
    ((ObjectData *)o)->f35c = (int)t1;
    if (((ObjectData *)o)->f35c != 1) {
        return;
    }
    t2 = update_depth_mode((void *)(((char *)o + 0x374)), (void *)(((char *)o + 0x3c)));
    if (t2 == 1) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        ((Arg0_s374 *)((char *)o + 0x374))->v6();
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    t3 = operation_8c03d338();
    if (t3 != 1 && !(((ObjectData *)o)->f70 > 0.0f)) {
        t4 = call_8c12b944();
        (&frame)->f00 = (float)t4 / 32768.0f * 0.1f - 0.05f;
        (&frame)->f04 = 0.0f;
        t5 = call_8c12b944();
        (&frame)->f08 = (float)t5 / 32768.0f * 0.1f - 0.05f;
        call_8c382a40((void *)(&frame));
    }
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    v11 = (S_vv11 *)((ObjectData *)o)->f38;
    call_8c38ae68();
    call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f70, 0.0f);
    call_8c382a40((void *)((int)v11 + 8));
    call_8c3aa702((void *)(((ObjectData *)o)->f38->f04));
    v12 = (S_vv12 *)v11->f2c;
    call_8c38ae68();
    call_8c382a40((void *)((int)v12 + 8));
    call_8c391c94();
    call_8c3aa702((void *)(v12->f04));
    call_8c391cc4();
    call_8c38ad10();
    call_8c38ad10();
    call_8c38ad10();
    t6 = update_depth_mode((void *)(((char *)o + 0x374)), (void *)(((char *)o + 0x3c)));
    if (t6 == 1) {
        ((Arg0_s374 *)((char *)o + 0x374))->v7();
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        g_8c575570 = (int)(g_8c46f560);
    }
}

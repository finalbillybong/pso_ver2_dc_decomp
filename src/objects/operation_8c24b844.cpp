typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510fa4 S_g8c510fa4;
typedef struct S_g8c510fa4_0 S_g8c510fa4_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_2c S_vv3_2c;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_30 S_vv4_30;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
    float f10c;
} ObjectData;
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x24];
    S_vv3_2c *f2c;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x28];
    S_vv4_30 *f30;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    int f30;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    char unknown8[0x28];
    S_vv6_30 *f30;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
};
extern S_g8c510fa4 *g_8c510fa4;
extern "C" int operation_8c24ba5c(void *, float);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c24b844(Object *o)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    char *v8;
    S_vv6 *v6;
    S_vv7 *v7;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0 || operation_8c24ba5c((void *)o, 30.0f) == 0) {
        return;
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    v1 = (int)(((((ObjectData *)o)->f108 & 1)) != 0);
    call_8c3827d8((void *)(*(S_g8c510fa4_0 **)((char *)((char *)g_8c510fa4 + 0x0) + (v1 << 2))));
    v2 = (S_vv2 *)((ObjectData *)o)->f38;
    call_8c382a40((void *)((int)v2 + 8));
    call_8c38ae68();
    call_8c3829bc(0, -((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v2->f04));
    call_8c38ad10();
    v3 = (S_vv3 *)v2->f2c;
    call_8c38ae68();
    call_8c382a40((void *)((int)v3 + 8));
    call_8c38ae68();
    call_8c3829bc(0, ((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v3->f04));
    call_8c38ad10();
    call_8c38ad10();
    call_8c391c94();
    v4 = (S_vv4 *)v3->f2c;
    call_8c38ae68();
    call_8c382a40((void *)((int)v4 + 8));
    call_8c38ae68();
    call_8c3829bc(0, ((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v4->f04));
    call_8c38ad10();
    call_8c38ad10();
    v5 = (S_vv5 *)v4->f30;
    call_8c38ae68();
    call_8c382a40((void *)((int)v5 + 8));
    call_8c38ae68();
    call_8c3829bc(0, ((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v5->f04));
    call_8c38ad10();
    call_8c38ad10();
    v8 = (char *)((ObjectData *)o)->f38->f2c->f30;
    v6 = (S_vv6 *)v8;
    call_8c38ae68();
    call_8c382a40((void *)((int)v6 + 8));
    call_8c38ae68();
    call_8c3829bc(0, -((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v6->f04));
    call_8c38ad10();
    call_8c38ad10();
    v7 = (S_vv7 *)v6->f30;
    call_8c38ae68();
    call_8c382a40((void *)((int)v7 + 8));
    call_8c38ae68();
    call_8c3829bc(0, -((ObjectData *)o)->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v7->f04));
    call_8c38ad10();
    call_8c38ad10();
    call_8c391cc4();
    call_8c38ad10();
}

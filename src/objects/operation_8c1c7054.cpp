typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_38_2c_30_30_30 Arg0_38_2c_30_30_30;
typedef struct Arg0_38_2c_30_30_30_30 Arg0_38_2c_30_30_30_30;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_14 S_vv10_14;
typedef struct S_vv10_1c S_vv10_1c;
typedef struct S_vv10_4 S_vv10_4;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_4 S_vv11_4;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_2c S_vv7_2c;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_14 S_vv8_14;
typedef struct S_vv8_1c S_vv8_1c;
typedef struct S_vv8_4 S_vv8_4;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_2c S_vv9_2c;
typedef struct S_vv9_4 S_vv9_4;
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
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    char unknown74[0x84];
    float ff8;
    float ffc;
    int f100;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
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
    char unknown8[0x24];
    S_vv7_2c *f2c;
};
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
    char unknown8[0xc];
    S_vv8_14 *f14;
    int f18;
    S_vv8_1c *f1c;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30 *f30;
};
struct Arg0_38_2c_30_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30_30 *f30;
};
struct S_vv9 {
    char unknown0[0x4];
    S_vv9_4 *f04;
    char unknown8[0x24];
    S_vv9_2c *f2c;
};
struct S_vv10 {
    char unknown0[0x4];
    S_vv10_4 *f04;
    char unknown8[0xc];
    S_vv10_14 *f14;
    int f18;
    S_vv10_1c *f1c;
};
struct Arg0_38_2c_30_30_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30_30_30 *f30;
};
struct S_vv11 {
    char unknown0[0x4];
    S_vv11_4 *f04;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c37e02c(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1c7054(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv8 *v8;
    S_vv9 *v9;
    S_vv10 *v10;
    S_vv11 *v11;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0) {
        return;
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    v1 = (S_vv1 *)((ObjectData *)o)->f38;
    call_8c382a40((void *)((int)v1 + 8));
    call_8c3aa702((void *)(v1->f04));
    v2 = (S_vv2 *)v1->f2c;
    if (((ObjectData *)o)->f70 > 0.0f) {
        call_8c382a40((void *)((int)v2 + 8));
        call_8c3aa702((void *)(v2->f04));
    }
    v6 = (S_vv6 *)v2->f30;
    call_8c382a40((void *)((int)v6 + 8));
    call_8c3aa702((void *)(v6->f04));
    v7 = (S_vv7 *)v6->f30;
    call_8c382a40((void *)((int)v7 + 8));
    call_8c3aa702((void *)(v7->f04));
    v8 = (S_vv8 *)v7->f2c;
    call_8c38ae68();
    call_8c382a40((void *)((int)v8 + 8));
    call_8c37e02c(0, (void *)(v8->f1c));
    call_8c37dd28(0, (void *)(v8->f14));
    call_8c37df90(0, (void *)((int)((ObjectData *)o)->f100 + v8->f18));
    call_8c391c94();
    call_8c3aa702((void *)(v8->f04));
    call_8c391cc4();
    call_8c38ad10();
    v9 = (S_vv9 *)((ObjectData *)o)->f38->f2c->f30->f30->f30;
    call_8c382a40((void *)((int)v9 + 8));
    call_8c3aa702((void *)(v9->f04));
    v10 = (S_vv10 *)v9->f2c;
    call_8c38ae68();
    call_8c382a40((void *)((int)v10 + 8));
    call_8c37e02c(0, (void *)(v10->f1c));
    call_8c37dd28(0, (void *)(v10->f14));
    call_8c37df90(0, (void *)(v10->f18 + (int)((ObjectData *)o)->f100));
    call_8c391c94();
    call_8c3aa702((void *)(v10->f04));
    call_8c391cc4();
    call_8c38ad10();
    v11 = (S_vv11 *)((ObjectData *)o)->f38->f2c->f30->f30->f30->f30;
    if (((ObjectData *)o)->f6c > 0.0f) {
        call_8c382a40((void *)((int)v11 + 8));
        call_8c3aa702((void *)(v11->f04));
    }
    call_8c38ad10();
}

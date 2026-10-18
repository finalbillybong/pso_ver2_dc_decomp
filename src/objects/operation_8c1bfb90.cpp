typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_4 S_vv13_4;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_30 S_vv8_30;
typedef struct S_vv8_4 S_vv8_4;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_30 S_vv9_30;
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
    char unknown68[0x20];
    int f88;
    char unknown8c[0x6c];
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
    float f108;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x28];
    S_vv1_30 *f30;
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
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
    char unknown8[0x28];
    S_vv8_30 *f30;
};
struct S_vv9 {
    char unknown0[0x4];
    S_vv9_4 *f04;
    char unknown8[0x28];
    S_vv9_30 *f30;
};
struct S_vv13 {
    char unknown0[0x4];
    S_vv13_4 *f04;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391c94(void);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c1bfb90(Object *o)
{
    char *v17;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv6 *v6;
    S_vv8 *v8;
    S_vv9 *v9;
    S_vv13 *v13;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 == 0) {
        return;
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    v17 = (char *)((ObjectData *)o)->f38->f2c;
    v1 = (S_vv1 *)v17;
    call_8c38ae68();
    call_8c3829bc(0, -((ObjectData *)o)->f104, 0.0f, 0.0f);
    call_8c3aa702((void *)(v1->f04));
    call_8c38ad10();
    call_8c391c94();
    v2 = (S_vv2 *)v1->f30;
    if (((ObjectData *)o)->f88 == 2) {
        call_8c38ae68();
        call_8c37e2e4(0, ((ObjectData *)o)->f108, ((ObjectData *)o)->f108, 1.0f);
        call_8c3aa702((void *)(v2->f04));
        call_8c38ad10();
    }
    v6 = (S_vv6 *)v2->f30;
    if (((ObjectData *)o)->f88 == 1) {
        call_8c38ae68();
        call_8c37e2e4(0, ((ObjectData *)o)->f108, ((ObjectData *)o)->f108, 1.0f);
        call_8c3aa702((void *)(v6->f04));
        call_8c38ad10();
    }
    call_8c391cc4();
    v8 = (S_vv8 *)v6->f30;
    call_8c38ae68();
    call_8c3829bc(0, ((ObjectData *)o)->f104, 0.0f, 0.0f);
    call_8c3aa702((void *)(v8->f04));
    call_8c38ad10();
    call_8c391c94();
    v9 = (S_vv9 *)v8->f30;
    if (((ObjectData *)o)->f88 == 0) {
        call_8c38ae68();
        call_8c37e2e4(0, ((ObjectData *)o)->f108, ((ObjectData *)o)->f108, 1.0f);
        call_8c3aa702((void *)(v9->f04));
        call_8c38ad10();
    }
    v13 = (S_vv13 *)v9->f30;
    if (((ObjectData *)o)->f88 == 3) {
        call_8c38ae68();
        call_8c37e2e4(0, ((ObjectData *)o)->f108, ((ObjectData *)o)->f108, 1.0f);
        call_8c3aa702((void *)(v13->f04));
        call_8c38ad10();
    }
    call_8c391cc4();
    call_8c38ad10();
}

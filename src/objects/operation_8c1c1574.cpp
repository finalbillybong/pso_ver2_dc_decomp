typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c289014 S_g8c289014;
typedef struct S_g8c289028 S_g8c289028;
typedef struct S_g8c4e2b84 S_g8c4e2b84;
typedef struct S_g8c4e2ca8 S_g8c4e2ca8;
typedef struct S_g8c4e2ca8_42c S_g8c4e2ca8_42c;
typedef struct S_g8c4e2ca8_42c_8 S_g8c4e2ca8_42c_8;
typedef struct S_g8c4e2cac S_g8c4e2cac;
typedef struct S_g8c4e2cac_0 S_g8c4e2cac_0;
typedef struct S_g8c4e2cb0 S_g8c4e2cb0;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_a4 Arg0_a4;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x34];
    int fa0;
    Arg0_a4 *fa4;
    int fa8;
} ObjectData;
struct S_g8c4e2cac {
    S_g8c4e2cac_0 *f00;
};
struct S_g8c4e2cac_0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x14];
    int f20;
};
struct S_g8c4e2ca8 {
    char unknown0[0x42c];
    S_g8c4e2ca8_42c *f42c;
};
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e02c(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" int operation_8c1beb60(int);
extern "C" void call_8c3aa716(int);
extern "C" void call_8c391c94(void);
extern "C" void call_8c0cd63c(void *, void *, int);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1c1574(Object *o)
{
    char *v21;
    int v23;
    int t1;
    int t2;
    int t3;
    t1 = o->v11(800.0f, 50.0f);
    if (t1 != 0) {
        call_8c391cc4();
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (((ObjectData *)o)->fa0 != 0) {
            call_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
        }
        call_8c3827d8((void *)(*(S_g8c4e2b84 **)0x8c4e2b84));
        t2 = operation_8c1beb60((int)(*(S_g8c289014 **)((char *)0x8c289014 + (((ObjectData *)o)->fa0 << 2))));
        call_8c3aa716(t2);
        call_8c391c94();
        t3 = operation_8c1beb60((int)(*(S_g8c289028 **)((char *)0x8c289028 + (((ObjectData *)o)->fa0 << 2))));
        call_8c3aa716(t3);
        if (*(int *)0x8c4e2ca8 != 0) {
            v23 = (int)(*(S_g8c4e2cac **)0x8c4e2cac)->f00->f20;
            if (((ObjectData *)o)->fa8 >= 0x14) {
                v21 = (char *)(*(S_g8c4e2cac **)0x8c4e2cac)->f00->f20;
                (*(S_g8c4e2cac **)0x8c4e2cac)->f00->f20 = (int)((*(S_g8c4e2cac **)0x8c4e2cac)->f00->f08);
                v23 = (int)v21;
            }
            call_8c3827d8((void *)(*(S_g8c4e2cac **)0x8c4e2cac));
            call_8c0cd63c((void *)(*(S_g8c4e2cb0 **)((char *)0x8c4e2cb0 + (((ObjectData *)o)->fa0 << 2))), (void *)(((ObjectData *)o)->fa4), 0);
            call_8c3a944a((void *)(*(S_g8c4e2ca8_42c_8 **)((char *)((char *)(*(S_g8c4e2ca8 **)0x8c4e2ca8)->f42c + 0x8) + (*(int *)((char *)0x8c28903c + (((ObjectData *)o)->fa0 << 2)) << 4))));
            (*(S_g8c4e2cac **)0x8c4e2cac)->f00->f20 = (int)v23;
        }
        call_8c38ad10();
        call_8c391cc4();
    }
}

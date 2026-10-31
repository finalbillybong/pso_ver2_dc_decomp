typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b24 S_g8c4d9b24;
typedef struct S_g8c4d9b24_0 S_g8c4d9b24_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_2c S_vv4_2c;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
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
    char unknown100[0xc];
    int f10c;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x24];
    S_vv4_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
extern int g_8c46f560;
extern S_g8c4d9b24 *g_8c4d9b24;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1363fc(Object *o)
{
    S_vv1 *v1;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        call_8c3827d8(*(void **)((((ObjectData *)o)->f10c << 2) + (int)g_8c4d9b24));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        call_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        if (((ObjectData *)o)->f10c != 1) {
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            call_8c38c0f0((void *)(((char *)o + 0x11c)));
        }
        v4 = (S_vv4 *)v1->f2c;
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x6c)));
        call_8c382a40((void *)((int)v4 + 8));
        call_8c3aa702((void *)(v4->f04));
        v5 = (S_vv5 *)v4->f2c;
        call_8c38ae68();
        call_8c382a40((void *)((int)v5 + 8));
        call_8c391c94();
        call_8c3aa702((void *)(v5->f04));
        call_8c391cc4();
        call_8c38ad10();
        call_8c38ad10();
        if (((ObjectData *)o)->f10c != 1) {
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
        }
        call_8c38ad10();
    }
}

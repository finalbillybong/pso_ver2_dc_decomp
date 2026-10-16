typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2be4 S_L8c4e2be4;
typedef struct S_L8c4e2be4_4 S_L8c4e2be4_4;
typedef struct S_L8c4e2be4_8 S_L8c4e2be4_8;
typedef struct S_L8c4e2be4_c S_L8c4e2be4_c;
typedef struct S_g8c4e2be4 S_g8c4e2be4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_2c S_vv5_2c;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_30 S_vv7_30;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_30 S_vv8_30;
typedef struct S_vv8_30_4 S_vv8_30_4;
typedef struct S_vv8_4 S_vv8_4;
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
    char unknown68[0x90];
    float ff8;
    float ffc;
    char unknown100[0x18];
    int f118;
} ObjectData;
struct S_L8c4e2be4 {
    S_g8c4e2be4 *f00;
    S_L8c4e2be4_4 *f04;
    S_L8c4e2be4_8 *f08;
    S_L8c4e2be4_c *f0c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x24];
    S_vv5_2c *f2c;
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
    char unknown8[0x28];
    S_vv7_30 *f30;
};
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
    char unknown8[0x28];
    S_vv8_30 *f30;
};
struct S_vv8_30 {
    char unknown0[0x4];
    S_vv8_30_4 *f04;
};
extern int g_8c418244;
extern int g_8c4e2bf4;
extern S_L8c4e2be4 g_8c4e2be4;
extern "C" void call_8c0344f0(void *, int, int, int);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1bf448(Object *o)
{
    int v2;
    int v1;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv8 *v8;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    ((ObjectData *)o)->f118 = (int)t1;
    if (((ObjectData *)o)->f118 == 1) {
        v1 = (int)g_8c418244;
        v2 = (int)g_8c4e2bf4;
        if (v2 != v1) {
            g_8c4e2bf4 = (int)v1;
            call_8c0344f0((void *)((&g_8c4e2be4)->f00), 0, 2, 7);
            call_8c0344f0((void *)((&g_8c4e2be4)->f04), 0, -2, 7);
            call_8c0344f0((void *)((&g_8c4e2be4)->f08), 0, 1, 7);
            call_8c0344f0((void *)((&g_8c4e2be4)->f0c), 0, -1, 7);
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v5 = (S_vv5 *)((ObjectData *)o)->f38;
        call_8c3aa702((void *)(v5->f04));
        call_8c391c94();
        v6 = (S_vv6 *)v5->f2c;
        call_8c3aa702((void *)(v6->f04));
        v7 = (S_vv7 *)v6->f30;
        call_8c3aa702((void *)(v7->f04));
        v8 = (S_vv8 *)v7->f30;
        call_8c3aa702((void *)(v8->f04));
        call_8c3aa702((void *)(v8->f30->f04));
        call_8c391cc4();
        call_8c38ad10();
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2304 S_g8c4e2304;
typedef struct S_g8c4e2304_0 S_g8c4e2304_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_30 S_vv5_30;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv9 S_vv9;
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
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x28];
    S_vv5_30 *f30;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct S_vv9 {
    char unknown0[0x4];
    S_vv9_4 *f04;
};
extern int g_8c46f560;
extern S_g8c4e2304 *g_8c4e2304;
extern int g_8c575570;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c3addea(Arg0_38 *, void *, float);
extern "C" void operation_8c1af190(Object *o)
{
    int v1;
    S_vv2 *v2;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv9 *v9;
    int t1;
    int t2;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        t2 = operation_8c0eeb00((void *)o, 30.0f);
        if (t2 != 0) {
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            v1 = (int)(((ObjectData *)o)->f108 & 1);
            call_8c3827d8((void *)(*(S_g8c4e2304_0 **)((char *)g_8c4e2304 + (v1 << 2))));
            if (((ObjectData *)o)->fe4 == 0) {
                v2 = (S_vv2 *)((ObjectData *)o)->f38->f2c;
                call_8c382a40((void *)((int)v2 + 8));
                call_8c3aa702((void *)(v2->f04));
                if (v1 != 1) {
                    g_8c46f560 = (int)(g_8c575570);
                    g_8c575570 |= 0x10;
                    call_8c38c0f0((void *)(((char *)o + 0x10c)));
                }
                call_8c38ae68();
                v5 = (S_vv5 *)v2->f2c;
                call_8c382a40((void *)((int)v5 + 8));
                call_8c3aa702((void *)(v5->f04));
                call_8c38ad10();
                call_8c38ae68();
                v6 = (S_vv6 *)v5->f30;
                call_8c382a40((void *)((int)v6 + 8));
                call_8c3aa702((void *)(v6->f04));
                call_8c38ad10();
                if (v1 != 1) {
                    call_8c38c0f0((void *)((void *)0x8c305fd8));
                    g_8c575570 = (int)(g_8c46f560);
                }
                v9 = (S_vv9 *)((ObjectData *)o)->f38->f2c->f30;
                call_8c382a40((void *)((int)v9 + 8));
                call_8c3aa702((void *)(v9->f04));
            } else {
                call_8c3addea((Arg0_38 *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
            }
            call_8c38ad10();
        }
    }
}

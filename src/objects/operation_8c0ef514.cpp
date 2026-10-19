typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4704a4 S_g8c4704a4;
typedef struct S_g8c4704a4_0 S_g8c4704a4_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_30 S_vv4_30;
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
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x28];
    S_vv3_30 *f30;
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
extern S_g8c4704a4 *g_8c4704a4;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void operation_8c0ef514(Object *o)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    int t2;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        t2 = operation_8c0eeb00((void *)o, 30.0f);
        if (t2 != 0) {
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            v1 = (int)(((((ObjectData *)o)->f108 & 1)) != 0);
            call_8c3827d8((void *)(*(S_g8c4704a4_0 **)((char *)((char *)g_8c4704a4 + 0x0) + (v1 << 2))));
            if (((ObjectData *)o)->fe4 == 0) {
                v2 = (S_vv2 *)((ObjectData *)o)->f38;
                call_8c382a40((void *)((int)v2 + 8));
                call_8c3aa702((void *)(v2->f04));
                v3 = (S_vv3 *)v2->f2c;
                call_8c38ae68();
                call_8c382a40((void *)((int)v3 + 8));
                call_8c3aa702((void *)(v3->f04));
                call_8c38ad10();
                call_8c391c94();
                v4 = (S_vv4 *)v3->f30;
                call_8c38ae68();
                call_8c382a40((void *)((int)v4 + 8));
                call_8c3aa702((void *)(v4->f04));
                call_8c38ad10();
                v5 = (S_vv5 *)v4->f30;
                call_8c38ae68();
                call_8c382a40((void *)((int)v5 + 8));
                call_8c3aa702((void *)(v5->f04));
                call_8c38ad10();
                call_8c391cc4();
            } else {
                call_8c3addea((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
            }
            call_8c38ad10();
        }
    }
}

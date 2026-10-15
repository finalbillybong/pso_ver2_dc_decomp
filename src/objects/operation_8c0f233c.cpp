typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_18 S_vv1_18;
typedef struct S_vv1_1c S_vv1_1c;
typedef struct S_vv1_4 S_vv1_4;
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
    char unknown68[0x80];
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0xc];
    S_vv1_14 *f14;
    S_vv1_18 *f18;
    S_vv1_1c *f1c;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void call_8c37e02c(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c37e390(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c0f233c(Object *o)
{
    S_vv1 *v1;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        if (((ObjectData *)o)->f108 == 0) {
            call_8c3ac53a((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
        } else {
            v1 = (S_vv1 *)((ObjectData *)o)->f38;
            call_8c38ae68();
            call_8c382a40((void *)((int)v1 + 8));
            call_8c37e02c(0, (void *)(v1->f1c));
            call_8c37dd28(0, (void *)(v1->f14));
            call_8c37df90(0, (void *)(v1->f18));
            call_8c37e390((void *)((int)v1 + 0x20));
            call_8c3aa702((void *)(v1->f04));
            call_8c38ad10();
        }
        call_8c38ad10();
    }
}

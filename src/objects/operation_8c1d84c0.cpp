typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct S_g8c4e2ef4 S_g8c4e2ef4;
typedef struct S_g8c4e2f0c S_g8c4e2f0c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_ec Arg0_ec;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_18 S_vv1_42c_18;
typedef struct S_vv1_42c_8 S_vv1_42c_8;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    char unknowne8[0x4];
    Arg0_ec *fec;
} ObjectData;
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_vv1_42c {
    char unknown0[0x8];
    S_vv1_42c_8 *f08;
    char unknownc[0xc];
    S_vv1_42c_18 *f18;
};
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c0cd63c(void *, void *, int);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1d84c0(Object *o)
{
    char *v45;
    S_vv1 *v1;
    int t1;
    v45 = (char *)((ObjectData *)o)->fe4;
    if (*(int *)((char *)0x8c4e2edc + ((int)(v45) << 2)) != 0) {
        v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + ((int)(v45) << 2));
        t1 = o->v11(800.0f, 50.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(*(S_g8c4e2ef4 **)0x8c4e2ef4));
            call_8c0cd63c((void *)(*(S_g8c4e2f0c **)0x8c4e2f0c), (void *)(((ObjectData *)o)->fec), 0);
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3aa716((void *)(v1->f42c->f08));
            call_8c3aa716((void *)(v1->f42c->f18));
            call_8c38ad10();
        }
    }
}

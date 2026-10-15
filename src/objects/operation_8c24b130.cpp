typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510f80 S_g8c510f80;
typedef struct S_g8c510f80_42c S_g8c510f80_42c;
typedef struct S_g8c510f80_42c_c S_g8c510f80_42c_c;
typedef struct S_g8c510f84 S_g8c510f84;
typedef struct S_g8c510f84_4 S_g8c510f84_4;
typedef struct S_g8c510f84_4_4 S_g8c510f84_4_4;
typedef struct S_g8c510f88 S_g8c510f88;
typedef struct S_g8c510f88_4 S_g8c510f88_4;
typedef struct S_g8c510f88_4_4 S_g8c510f88_4_4;
typedef struct Arg0_64 Arg0_64;
class Object;
struct S_g8c510f80 {
    char unknown0[0x42c];
    S_g8c510f80_42c *f42c;
};
struct S_g8c510f80_42c {
    char unknown0[0x8];
    int f08;
    S_g8c510f80_42c_c *f0c;
};
struct S_g8c510f84 {
    char unknown0[0x4];
    S_g8c510f84_4 *f04;
};
struct S_g8c510f84_4 {
    char unknown0[0x4];
    S_g8c510f84_4_4 *f04;
};
struct S_g8c510f88 {
    char unknown0[0x4];
    S_g8c510f88_4 *f04;
};
struct S_g8c510f88_4 {
    char unknown0[0x4];
    S_g8c510f88_4_4 *f04;
};
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
} ObjectData;
extern "C" void call_8c0345cc(void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c24b1e4(Object *, int);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c24b130(Object *o)
{
    char *v1;
    int t1;
    v1 = (char *)(*(S_g8c510f80 **)0x8c510f80)->f42c->f08;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c0345cc((void *)((*(S_g8c510f84 **)0x8c510f84)->f04->f04), 1);
        call_8c0345cc((void *)((*(S_g8c510f88 **)0x8c510f88)->f04->f04), 1);
        call_8c3827d8((void *)((*(S_g8c510f80 **)0x8c510f80)->f42c->f0c));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c24b1e4(o, (int)(v1));
        call_8c38ad10();
    }
}

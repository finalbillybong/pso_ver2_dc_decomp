typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c510f64 S_g8c510f64;
typedef struct S_g8c510f64_42c S_g8c510f64_42c;
typedef struct S_g8c510f64_42c_8 S_g8c510f64_42c_8;
typedef struct S_g8c510f64_42c_c S_g8c510f64_42c_c;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_se4;
struct Frame {
    char unknown0[0x8];
    float f08;
};
struct S_g8c510f64 {
    char unknown0[0x42c];
    S_g8c510f64_42c *f42c;
};
struct S_g8c510f64_42c {
    char unknown0[0x8];
    S_g8c510f64_42c_8 *f08;
    S_g8c510f64_42c_c *f0c;
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
class Arg0_se4 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_se4Data {

} Arg0_se4Data;
extern "C" void call_8c3be280(int, void *, Frame *);
extern "C" void clear_depth_mode(void *);
extern "C" void set_depth_mode(void *);
extern "C" int depth_amount_negative(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c24acf4(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c3be280(0, (void *)(((char *)o + 0x3c)), (Frame *)((&frame)));
        if (38.0f > (&frame)->f08) {
            clear_depth_mode((void *)(((char *)o + 0xe4)));
        } else {
            set_depth_mode((void *)(((char *)o + 0xe4)));
        }
        t2 = depth_amount_negative((void *)(((char *)o + 0xe4)));
        if (t2 != 0) {
            ((Arg0_se4 *)((char *)o + 0xe4))->v6();
        }
        call_8c3827d8((void *)((*(S_g8c510f64 **)0x8c510f64)->f42c->f0c));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3a944a((void *)((*(S_g8c510f64 **)0x8c510f64)->f42c->f08));
        call_8c38ad10();
        if (t2 != 0) {
            ((Arg0_se4 *)((char *)o + 0xe4))->v7();
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c60 S_g8c469c60;
typedef struct S_g8c469c60_4 S_g8c469c60_4;
typedef struct S_g8c469c60_8 S_g8c469c60_8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s128;
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
    char unknown2c[0x34];
    Arg0_60 *f60;
    Arg0_64 *f64;
} ObjectData;
struct S_g8c469c60 {
    char unknown0[0x4];
    S_g8c469c60_4 *f04;
    S_g8c469c60_8 *f08;
};
class Arg0_s128 {
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
typedef struct Arg0_s128Data {

} Arg0_s128Data;
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c083ac0(Object *o)
{
    int t1;
    int t2;
    t1 = o->v11(400.0f, 100.0f);
    if (t1 != 0) {
        t2 = update_depth_mode((void *)(((char *)o + 0x128)), (void *)(((char *)o + 0x3c)));
        if (t2 != 0) {
            ((Arg0_s128 *)((char *)o + 0x128))->v6();
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0xf8)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        call_8c3a944a((void *)((*(S_g8c469c60 **)0x8c469c60)->f08));
        call_8c38ad10();
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        call_8c3a944a((void *)((*(S_g8c469c60 **)0x8c469c60)->f04));
        call_8c38ad10();
        if (t2 != 0) {
            ((Arg0_s128 *)((char *)o + 0x128))->v7();
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_8 Arg0_30_8;
class S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x8];
    Arg0_30_8 *f08;
};
class S_vv1 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv1Data {
    char unknown0[0x20];
    float f20;
    float f24;
} S_vv1Data;
extern "C" void call_8c0f7830(S_vv1 *, int, float);
extern "C" void operation_8c0e36f8(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)o->f30->f08;
    ((S_vv1Data *)v1)->f20 = 0.0f;
    ((S_vv1Data *)v1)->f24 = 0.0f;
    v1->v3();
    call_8c0f7830(v1, -0xff00eb, 1.0f);
}

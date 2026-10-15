typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_c Arg0_30_c;
class S_vv21;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x38];
    short f6c;
};
struct Arg0_30 {
    char unknown0[0xc];
    Arg0_30_c *f0c;
};
class S_vv21 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv21Data {
    char unknown0[0x24];
    float f24;
} S_vv21Data;
extern "C" void call_8c060538(int);
extern "C" void operation_8c22bd64(Object *o, int a1)
{
    S_vv21 *v21;
    if (o->f6c != (short)a1) {
        o->f6c = a1;
        call_8c060538((int)((short)a1));
        v21 = (S_vv21 *)o->f30->f0c;
        ((S_vv21Data *)v21)->f24 = (float)((short)a1 + 0x64);
        v21->v3();
    }
}

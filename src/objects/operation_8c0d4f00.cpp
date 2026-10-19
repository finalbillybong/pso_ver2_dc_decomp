typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s404;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xd4];
    int f3e0;
};
class Arg0_s404 {
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
typedef struct Arg0_s404Data {

} Arg0_s404Data;
extern "C" void operation_8c0d4f00(Object *o)
{
    if (o->f30a != 1 && o->f30a != 9 && ((o->f3e0 & 0x80000)) == 0) {
        return;
    }
    ((Arg0_s404 *)((char *)o + 0x404))->v7();
}

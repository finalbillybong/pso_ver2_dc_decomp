typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
class Arg0_20 {
public:
    char unknown0[0x20];
    virtual void v0();
    virtual void v1();
};
typedef struct Arg0_20Data {

} Arg0_20Data;
extern "C" void operation_8c09f54c(Object *o)
{
    o->f20->v1();
}

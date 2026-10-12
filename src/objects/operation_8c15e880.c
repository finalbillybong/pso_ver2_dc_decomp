typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x350];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern void call_8c15e92c(Object *, int);
void operation_8c15e880(Object *o)
{
    o->f3c = o->f3b8->f3c;
    o->f64 = o->f3b8->f64;
    call_8c15e92c(o, 1);
}

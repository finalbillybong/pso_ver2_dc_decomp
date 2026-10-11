typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0x3b8];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x20];
    int f20;
};
void operation_8c02641c(Object *o)
{
    if (o->f3b8 != 0) {
        o->f3b8->f20 |= 1;
    }
}

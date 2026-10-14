typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
struct Object {
    char unknown0[0x10];
    Arg0_10 *f10;
};
struct Arg0_10 {
    char unknown0[0x20];
    int f20;
};
void operation_8c25cfe8(Object *o)
{
    o->f10->f20 = 1;
}

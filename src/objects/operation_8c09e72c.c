typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
};
struct Arg0_84 {
    char unknown0[0x2];
    short f02;
};
int operation_8c09e72c(Object *o, int a1)
{
    if (o->f84 != 0) {
        o->f84->f02 &= a1;
        return 1;
    }
    return 0;
}

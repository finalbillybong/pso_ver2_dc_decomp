typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
void operation_8c1efc00(Object *o)
{
    o->fe8 &= -0x41;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -3;
    }
}

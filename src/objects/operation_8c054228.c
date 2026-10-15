typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x26160 S_x26160;
struct Object {
    char unknown0[0xdc];
    int fdc;
};
struct S_x26160 {
    float f00;
};
float operation_8c054228(Object *o, int a1)
{
    return (o->fdc != 0) ? ((S_x26160 *)((int)o->fdc + 0xc + a1 * 0x2c))->f00 : 0.0f;
}

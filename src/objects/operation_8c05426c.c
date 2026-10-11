typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x89872 S_x89872;
struct Object {
    char unknown0[0xdc];
    int fdc;
};
struct S_x89872 {
    int f00;
};
void operation_8c05426c(Object *o, int a1, int a2)
{
    if (o->fdc != 0) {
        ((S_x89872 *)(o->fdc + 0x18 + a1 * 0x2c))->f00 |= a2;
    }
}

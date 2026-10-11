typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
int operation_8c054248(Object *o, int a1, int a2)
{
    return (o->fdc != 0) ? (*(int *)((char *)((char *)o->fdc + 0x18) + (a1 * 0x2c)) & a2) : 0;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x818];
    int f818;
};
int operation_8c05b320(Object *o)
{
    return o->f818 & 0x40;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x144];
    int f144;
};
int operation_8c0e72dc(Object *o)
{
    return o->f144 ^ (int)(&o->f144);
}

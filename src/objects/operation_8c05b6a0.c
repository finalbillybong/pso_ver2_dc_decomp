typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2bc];
    int f2bc;
};
void operation_8c05b6a0(Object *o)
{
    o->f2bc |= 8;
}

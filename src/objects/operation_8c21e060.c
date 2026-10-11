typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    char unknown40[0x8];
    float f48;
    float f4c;
};
void operation_8c21e060(Object *o)
{
    o->f48 = (o->f38 - o->f48) * 0.21f + o->f48;
    o->f4c = (o->f3c - o->f4c) * 0.21f + o->f4c;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x8];
    float f35c;
};
void operation_8c178878(Object *o)
{
    o->f35c -= 0.1f;
    if (-1.0f > o->f35c) {
        o->f350 = 3;
    }
}

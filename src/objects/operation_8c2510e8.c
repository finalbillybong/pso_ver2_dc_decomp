typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x238];
    float f238;
};
void operation_8c2510e8(Object *o)
{
    o->f238 = 0.1f;
}

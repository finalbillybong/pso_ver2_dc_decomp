typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
};
void operation_8c24027c(Object *o)
{
    o->f234 += 0xccc;
}

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
void operation_8c251a48(Object *o)
{
    if (o != 0) {
        o->f234 &= -3;
    }
}

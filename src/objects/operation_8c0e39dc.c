typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
void operation_8c0e39dc(Object *o)
{
    o->f30a = 1;
}

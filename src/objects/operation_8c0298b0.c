typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x7e0];
    int f7e0;
};
int operation_8c0298b0(Object *o)
{
    return ((o->f7e0 & 2)) != 0;
}

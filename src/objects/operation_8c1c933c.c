typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6];
    short f06;
};
short operation_8c1c933c(Object *o)
{
    return o->f06;
}

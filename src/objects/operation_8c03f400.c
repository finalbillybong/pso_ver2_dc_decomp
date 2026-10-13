typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c03f400(Object *o)
{
    o->f04 |= 1;
    *(int *)0x8c466de4 = 1;
}

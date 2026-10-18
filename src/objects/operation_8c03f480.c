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
extern int g_8c466de4;
void operation_8c03f480(Object *o)
{
    o->f04 |= 1;
    g_8c466de4 = 4;
}

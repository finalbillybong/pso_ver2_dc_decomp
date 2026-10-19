typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3ec];
    int f3ec;
    int f3f0;
};
void operation_8c144d78(Object *o)
{
    o->f3ec = 0;
    o->f3f0 = 0;
}

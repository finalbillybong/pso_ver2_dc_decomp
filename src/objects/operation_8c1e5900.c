typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
};
int operation_8c1e5900(Object *o)
{
    return (o->f2c != 0) ? o->f2c : *(int *)0x8c32bb04;
}

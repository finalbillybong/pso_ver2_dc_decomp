typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x374];
    int f374;
};
int operation_8c026634(Object *o)
{
    if (o->f374 < 0 || o->f374 >= 3) {
        return 0;
    }
    return o->f374;
}

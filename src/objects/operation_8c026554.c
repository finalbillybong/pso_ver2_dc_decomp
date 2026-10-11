typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x380];
    int f380;
};
int operation_8c026554(Object *o)
{
    if (o->f380 < 0 || o->f380 >= 3) {
        return 0;
    }
    return o->f380;
}

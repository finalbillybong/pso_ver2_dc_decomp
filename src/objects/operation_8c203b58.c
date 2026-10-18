typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xd];
    char f0d;
};
int operation_8c203b58(Object *o)
{
    if (o != 0) {
        o->f0d |= 1;
    }
    return 0;
}

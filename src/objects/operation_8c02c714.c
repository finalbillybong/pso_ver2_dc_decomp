typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
void operation_8c02c714(Object *o)
{
    if (o != 0) {
        o->f34 |= 0xa00;
    }
}

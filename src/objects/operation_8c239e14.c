typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x238];
    int f238;
};
void operation_8c239e14(Object *o)
{
    if (o->f238 != 1 && o->f238 != 0) {
        return;
    }
    o->f238 = 2;
}

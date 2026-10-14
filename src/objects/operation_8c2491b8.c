typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    int f238;
};
void operation_8c2491b8(Object *o)
{
    if (o->f238 > 0) {
        o->f238 -= 0x888;
        o->f234 -= 0x888;
    }
}

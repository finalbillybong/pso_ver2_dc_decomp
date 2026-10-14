typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
};
void operation_8c1d9384(Object *o)
{
    o->f94 += 2;
    if (o->f94 >= 0x100) {
        o->f94 -= 0x100;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    int f10;
    int f14;
};
void operation_8c1e5d48(Object *o)
{
    if (o->f14 > 0) {
        o->f14 -= 1;
        if (!(o->f14 > 0)) {
            o->f10 = -1;
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
    char unknowna[0x2e];
    int f38;
};
void operation_8c21da98(Object *o)
{
    if (o->f38 != 0) {
        ((void (*)(void))(o->f38))();
    }
    o->f08 |= 1;
}

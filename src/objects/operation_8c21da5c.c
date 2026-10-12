typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
    char unknowna[0x2a];
    int f34;
};
void operation_8c21da5c(Object *o)
{
    if (o->f34 != 0) {
        ((void (*)(void))(o->f34))();
    }
    o->f08 |= 1;
}

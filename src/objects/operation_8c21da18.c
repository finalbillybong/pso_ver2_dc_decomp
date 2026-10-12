typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
    char unknowna[0x32];
    int f3c;
};
void operation_8c21da18(Object *o)
{
    if (o->f3c != 0) {
        ((void (*)(void))(o->f3c))();
    }
    o->f08 |= 1;
}

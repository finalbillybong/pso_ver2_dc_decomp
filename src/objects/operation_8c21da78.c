typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
    char unknowna[0x36];
    int f40;
};
void operation_8c21da78(Object *o)
{
    if (o->f40 != 0) {
        ((void (*)(void))(o->f40))();
    }
    o->f08 |= 1;
}

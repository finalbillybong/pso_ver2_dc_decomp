typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
struct Object {
    char unknown0[0x108];
    int f108;
};
void operation_8c131804(Object *o, Arg1 *a1)
{
    if (a1->f00 == 1) {
        o->f108 |= 1;
    }
}

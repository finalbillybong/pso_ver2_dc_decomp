typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x16a];
    int f170;
};
void operation_8c19c138(Object *o)
{
    if (o->f170 != 0) {
        ((void (*)(void))(o->f170))();
        o->f04 |= 1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x166];
    int f16c;
};
void operation_8c19c0f0(Object *o)
{
    if (o->f16c != 0) {
        ((void (*)(void))(o->f16c))();
        o->f04 |= 1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x162];
    int f168;
};
void operation_8c19c114(Object *o)
{
    if (o->f168 != 0) {
        ((void (*)(void))(o->f168))();
        o->f04 |= 1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22ee];
    int f22f4;
};
void operation_8c2231b4(Object *o)
{
    if (o->f22f4 != 0) {
        ((void (*)(void))(o->f22f4))();
    }
    o->f04 |= 1;
}

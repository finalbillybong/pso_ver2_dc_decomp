typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32];
    int f38;
};
void operation_8c1c6ab8(Object *o)
{
    if (o->f38 != 0) {
        o->f04 |= 1;
    }
}

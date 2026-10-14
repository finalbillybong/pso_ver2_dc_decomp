typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    int f3c;
};
void operation_8c1c60f4(Object *o)
{
    if (o->f3c != 0) {
        o->f04 |= 1;
    }
}

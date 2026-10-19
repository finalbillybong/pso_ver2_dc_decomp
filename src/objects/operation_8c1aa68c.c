typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2a];
    int f30;
};
void operation_8c1aa68c(Object *o)
{
    if (o->f30 == 1) {
        o->f04 |= 1;
    }
}

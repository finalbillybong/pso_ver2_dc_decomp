typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
};
void operation_8c0b6738(Object *o)
{
    o->f24 += 1;
    if (o->f24 > o->f20) {
        o->f04 |= 1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x35];
    unsigned char f3b;
    char unknown3c[0x3];
    char f3f;
};
void operation_8c0cb3b8(Object *o)
{
    int v1;
    v1 = (int)(o->f3b + -0x10);
    if (!(v1 >= 0)) {
        o->f04 |= 1;
        v1 = (int)0;
    }
    o->f3b = v1;
    o->f3f = v1;
}

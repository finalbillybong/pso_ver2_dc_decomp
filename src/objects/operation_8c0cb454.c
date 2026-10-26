typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x25];
    unsigned char f2b;
    char unknown2c[0x3];
    char f2f;
};
void operation_8c0cb454(Object *o)
{
    int v1;
    v1 = (int)(o->f2b + -0x10);
    if (!(v1 >= 0)) {
        o->f04 |= 1;
        v1 = (int)0;
    }
    o->f2b = v1;
    o->f2f = v1;
}

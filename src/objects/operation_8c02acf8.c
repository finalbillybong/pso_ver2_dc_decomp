typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x30e];
    int f618;
    char unknown61c[0x194];
    int f7b0;
};
void operation_8c02acf8(Object *o)
{
    int v1;
    v1 = (int)(o->f308 == 3);
    if (v1 != 0) {
        o->f618 = 0xc093;
    } else {
        o->f618 = 0x4013;
    }
    o->f7b0 = 0;
}

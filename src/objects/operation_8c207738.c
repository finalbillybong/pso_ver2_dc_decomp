typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
void operation_8c207738(Object *o, int a1)
{
    o->f02 += a1;
    if (!(o->f02 >= 0)) {
        o->f02 = 0;
    }
    if (o->f02 > 0x78) {
        o->f02 = 0x78;
    }
}

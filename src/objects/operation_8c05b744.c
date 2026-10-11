typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x95664 S_x95664;
struct Object {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
struct S_x95664 {
    int f00;
};
void operation_8c05b744(Object *o)
{
    int v1;
    v1 = (int)0;
    while (o->fe0 > v1) {
        ((S_x95664 *)(o->fdc + 0x18 + v1 * 0x2c))->f00 |= 1;
        v1 = (int)(v1 + 1);
    }
}

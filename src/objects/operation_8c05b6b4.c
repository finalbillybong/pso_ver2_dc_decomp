typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x12736 S_x12736;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    int fdc;
    int fe0;
};
struct S_x12736 {
    int f00;
};
void operation_8c05b6b4(Object *o)
{
    int v1;
    int mask;
    mask = 0x4000000;
    o->f34 |= mask;
    v1 = (int)0;
    while (o->fe0 > v1) {
        ((S_x12736 *)((int)o->fdc + 0x18 + v1 * 0x2c))->f00 |= mask;
        v1 = (int)(v1 + 1);
    }
}

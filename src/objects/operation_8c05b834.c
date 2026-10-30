typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_x69584 S_x69584;
struct Object {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
struct S_x69584 {
    char unknown0[0x18];
    int f18;
};
struct S_vv2 {
    char unknown0[0x18];
    int f18;
};
void operation_8c05b834(Object *o)
{
    int v1;
    S_vv2 *v2;
    int v3;
    v1 = 0;
    v3 = -3;
    while (o->fe0 > v1) {
        v2 = (S_vv2 *)((int)o->fdc + v1 * 0x2c);
        v2->f18 |= 4;
        v2->f18 &= v3;
        v1++;
    }
}

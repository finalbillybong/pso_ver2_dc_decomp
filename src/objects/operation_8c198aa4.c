typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x50912 S_x50912;
struct Object {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
struct S_x50912 {
    int f00;
};
void operation_8c198aa4(Object *o)
{
    int v2;
    int v1;
    v1 = (int)-2;
    v2 = (int)0;
    while (o->fe0 > v2) {
        ((S_x50912 *)((int)o->fdc + 0x18 + v2 * 0x2c))->f00 &= v1;
        v2 = (int)(v2 + 1);
    }
}

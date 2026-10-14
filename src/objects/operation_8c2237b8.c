typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x28];
    int f28;
    Arg0_2c *f2c;
};
struct Arg0_2c {
    char unknown0[0x310];
    int f310;
};
void operation_8c2237b8(Object *o)
{
    int v1;
    v1 = (int)(((o->f2c->f310 & 0x1c)) != 0);
    if (v1 != 0) {
        o->f28 += 1;
    }
}

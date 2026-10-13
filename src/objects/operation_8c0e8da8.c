typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
struct Object {
    char unknown0[0xe6];
    short fe6;
    char unknowne8[0x20];
    Arg0_108 *f108;
};
struct Arg0_108 {
    char unknown0[0x344];
    int f344;
};
void operation_8c0e8da8(Object *o)
{
    int v1;
    v1 = (int)(o->fe6 == 3);
    if (v1 != 1) {
        if (o->f108 != 0) {
            o->f108->f344 = 1;
        }
        o->fe6 = 2;
    }
}

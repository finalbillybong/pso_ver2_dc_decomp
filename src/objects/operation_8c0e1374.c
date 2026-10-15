typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    unsigned char f82;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    int f00;
};
int operation_8c0e1374(Object *o)
{
    switch (o->f82) {
    case 1:
    case 2:
        break;
    case 0:
        return o->f30->f00->f00 & 0x10;
    }
    return 0;
}

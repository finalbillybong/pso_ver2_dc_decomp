typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x4];
    int f310;
    char unknown314[0x260];
    short f574;
    short f576;
    int f578;
    short f57c;
};
int operation_8c022034(Object *o, int a1)
{
    if (((o->f310 & 0x1e000)) != 0) {
        return 0;
    }
    if (o->f30a == (short)a1) {
        return 0;
    }
    o->f34 |= 0x10000;
    o->f576 = a1;
    o->f57c = o->ff0;
    o->f574 = 0;
    o->f578 = o->f64;
    return 1;
}

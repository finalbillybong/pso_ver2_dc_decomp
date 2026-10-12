typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
struct Arg0_64 {
    char unknown0[0x80];
    unsigned short f80;
};
int operation_8c17478c(Object *o)
{
    if (o->f64 != 0) {
        return ((o->f64->f80 & 0xffff & 2)) != 0;
    }
    return 0;
}

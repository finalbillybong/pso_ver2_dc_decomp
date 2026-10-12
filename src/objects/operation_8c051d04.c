typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x68];
    unsigned short f68;
};
int operation_8c051d04(Object *o)
{
    return ((o->f24->f68 & 0x40)) != 0;
}

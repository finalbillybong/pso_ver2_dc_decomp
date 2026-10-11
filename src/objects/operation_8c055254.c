typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0xc6];
    int f470;
};
int operation_8c055254(Object *o)
{
    if (o->f470 != 0) {
        return o->f3a8;
    }
    return 0xffff;
}

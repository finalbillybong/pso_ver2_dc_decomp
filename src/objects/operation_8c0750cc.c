typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0xb0];
    int fec;
};
int operation_8c0750cc(Object *o)
{
    if (((o->fec & 0x40)) == 0) {
        if (o->f38 != 0) {
            return 1;
        }
    }
    return 0;
}

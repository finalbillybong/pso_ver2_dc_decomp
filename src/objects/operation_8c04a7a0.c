typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
};
int operation_8c04a7a0(Object *o, int a1)
{
    short v1;
    if (!((short)a1 >= 0)) {
        return 0;
    }
    *(short *)((char *)o + 0x330) += a1;
    v1 = (short)o->f198;
    if (o->f330 > (short)v1) {
        o->f330 = v1;
        return 0;
    }
    return 1;
}

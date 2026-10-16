typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x19a];
    short f19a;
    char unknown19c[0x196];
    short f332;
};
int operation_8c04a8ac(Object *o, int a1)
{
    short v1;
    *(short *)((char *)o + 0x332) += a1;
    v1 = (short)o->f19a;
    if (o->f332 > (short)v1) {
        o->f332 = v1;
        return 0;
    }
    return 1;
}

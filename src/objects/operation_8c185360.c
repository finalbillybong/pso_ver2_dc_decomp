typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6];
    short f06;
};
short operation_8c185360(Object *o)
{
    short v2;
    v2 = (short)o->f06;
    if (!(v2 >= 0 && !(v2 > 0xa))) {
        o->f06 = 0;
    }
    return o->f06;
}

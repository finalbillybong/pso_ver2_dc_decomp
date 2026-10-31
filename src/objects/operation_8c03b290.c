typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
};
unsigned char operation_8c03b290(Object *o)
{
    if (o->f20 >= 0xd) {
        o->f20 = 0;
    }
    return o->f20;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
short operation_8c247888(Object *o)
{
    int v1;
    v1 = (int)0;
    if (o->f04 >= 0) {
        v1 = (int)0;
        if (0x13 > o->f04) {
            v1 = (int)1;
        }
    }
    if (v1 == 0) {
        o->f04 = 0;
    }
    return o->f04;
}

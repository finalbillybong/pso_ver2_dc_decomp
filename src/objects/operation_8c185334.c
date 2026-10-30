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
short operation_8c185334(Object *o)
{
    short v4;
    int v3;
    int v1;
    v4 = o->f04;
    v1 = 0;
    v3 = 1;
    if (v4 >= 0 && 6 > v4) {
        v1 = 1;
    }
    if (v1 == 0 && v4 != -1) {
        v3 = 0;
    }
    if (v3 == 0) {
        v4 = 0;
    }
    return v4;
}

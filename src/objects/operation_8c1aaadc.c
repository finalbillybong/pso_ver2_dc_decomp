typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
short operation_8c1aaadc(Object *o)
{
    short t;
    int v2;
    t = o->f02;
    if (t < 0 || t >= 3) {
        v2 = 0;
    } else {
        v2 = 1;
    }
    if (v2 == 0) {
        t = 0;
    }
    return t;
}

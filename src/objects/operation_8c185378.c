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
short operation_8c185378(Object *o)
{
    short v2;
    v2 = o->f02;
    if (!(o->f02 >= 0 && o->f02 < 6)) {
        if (v2 != -1) {
            v2 = 0;
        }
    }
    return v2;
}

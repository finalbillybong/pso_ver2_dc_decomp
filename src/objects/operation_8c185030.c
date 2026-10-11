typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x4c];
    int f90;
    int f94;
};
int operation_8c185030(Object *o)
{
    if (3 > o->f94) {
        if (o->f40 > 10.0f) {
            if (o->f90 < 0) {
                return 1;
            }
        }
    }
    return 0;
}

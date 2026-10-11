typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    int f90;
};
void operation_8c1be874(Object *o)
{
    int v1;
    int v3;
    if (o->f90 < 0) {
        v3 = (int)0;
    } else {
        v1 = (int)o->f90;
        if (o->f90 >= 2) {
            v1 = (int)1;
        }
        v3 = (int)v1;
    }
    o->f90 = v3;
}

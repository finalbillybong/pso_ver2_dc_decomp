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
void operation_8c14081c(Object *o)
{
    if (!(*(int *)0x8c4d9e64 > 1) && o->f90 != 0) {
        o->f90 = 0;
        if (--*(int *)0x8c4d9e64 >= 0) {
            return;
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern int operation_8c1571f4(void *);
int operation_8c1747b0(Object *o)
{
    int t1;
    if (o->f64 != 0) {
        t1 = operation_8c1571f4(o->f64);
        return t1;
    }
    return -1;
}

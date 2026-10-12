typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x22];
    short f22;
    char unknown24[0x10];
    Arg0_34 *f34;
};
extern int operation_8c21118c(void *);
int operation_8c1dd520(Object *o)
{
    int t1;
    if (o->f34 == 0) {
        return 0;
    }
    t1 = operation_8c21118c(o->f34);
    if (t1 == 0) {
        return 0;
    }
    if (t1 == 2) {
        o->f22 |= 0x20;
        return 1;
    }
    if (t1 != 1) {
        return 0;
    }
    o->f22 |= 0x10;
    return 1;
}

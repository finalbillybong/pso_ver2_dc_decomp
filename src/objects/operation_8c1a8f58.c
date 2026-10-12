typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0x8];
    int f30;
};
extern int operation_8c1571f4(void *);
int operation_8c1a8f58(Object *o)
{
    int t1;
    int t2;
    if (o->f24 == 0) {
        return 0;
    }
    t1 = operation_8c1571f4(o->f24);
    if (o->f30 == t1) {
        return 0;
    }
    t2 = operation_8c1571f4(o->f24);
    o->f30 = t2;
    return 1;
}

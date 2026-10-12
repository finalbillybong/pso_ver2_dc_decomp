typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
};
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
void operation_8c25ad8c(Object *o)
{
    int t1;
    if (o->f28 != 0) {
        request_resource_release(o->f28);
        o->f28 = (Arg0_28 *)0;
    }
    if (o->f2c != 0) {
        t1 = operation_8c1571f4(o->f2c);
        o->f30 = t1;
        request_resource_release(o->f2c);
        o->f2c = (Arg0_2c *)0;
    }
}

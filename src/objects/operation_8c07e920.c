typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
extern int call_8c16337c(void *, int);
extern void call_8c07fd18(Object *, int);
void operation_8c07e920(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (o->f13c != 0) {
        t1 = call_8c16337c(o->f13c, 0xf9);
        if (t1 != 0) {
            call_8c07fd18(o, 1);
            return;
        }
        t2 = call_8c16337c(o->f13c, 0xfa);
        if (t2 != 0) {
            call_8c07fd18(o, 0xd);
            return;
        }
        t3 = call_8c16337c(o->f13c, 0xfc);
        if (t3 != 0) {
            call_8c07fd18(o, 0x19);
        }
    }
}

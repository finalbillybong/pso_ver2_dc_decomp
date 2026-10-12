typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_568 S_g8c467180_2c_568;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x568];
    S_g8c467180_2c_568 *f568;
};
extern int call_8c1196d4(void *, void *, int);
extern void call_8c119764(void *, void *, int);
void operation_8c25f2cc(Object *o)
{
    int t1;
    t1 = call_8c1196d4((void *)0x8c34066c, (void *)0x8c340674, 1);
    o->f24 = (Arg0_24 *)t1;
    if (o->f24 != 0) {
        call_8c119764(o->f24, (*(S_g8c467180 **)0x8c467180)->f2c->f568, 2);
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    char unknown38[0x18];
    int f50;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
extern void call_8c119764(void *, void *, int);
void operation_8c1d4434(Object *o, int a1)
{
    if (o->f50 != a1) {
        o->f50 = a1;
        call_8c119764(o->f34, *(S_g8c467180_2c_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x0) + (a1 + 0xa6 << 2)), 0x80);
    }
}

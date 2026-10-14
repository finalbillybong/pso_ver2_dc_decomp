typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x310];
    int f310;
};
extern void call_8c1c577c(void *, Object *, int, int);
void operation_8c2530ac(Object *o)
{
    int v1;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        call_8c1c577c((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 1, 2);
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_414 S_g8c467180_2c_414;
typedef struct S_g8c467180_2c_440 S_g8c467180_2c_440;
typedef struct S_g8c467180_2c_444 S_g8c467180_2c_444;
typedef struct S_g8c467180_2c_448 S_g8c467180_2c_448;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x414];
    S_g8c467180_2c_414 *f414;
    char unknown418[0x28];
    S_g8c467180_2c_440 *f440;
    S_g8c467180_2c_444 *f444;
    S_g8c467180_2c_448 *f448;
};
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
};
struct Arg0_34 {
    int f00;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
extern void call_8c156d30(int, void *, int, int);
extern void call_8c156d48(int, void *, int, int, int);
extern void call_8c1570b4(S_c8c156bd8 *, float, float);
extern void call_8c157138(S_c8c156bd8 *);
S_c8c156bd8 *operation_8c1d1a1c(Object *o)
{
    S_c8c156bd8 *t1;
    t1 = call_8c156bd8((void *)0x8c32996c, 3, (*(S_g8c467180 **)0x8c467180)->f2c->f414);
    call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f440, 6, 8);
    if (((o->f34->f00 & 1)) != 0) {
        call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f444, 6, 0x1e);
    } else {
        call_8c156d48((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f444, 0x16, 0x1e, -0x979798);
    }
    if (*(char *)0x8c5059fc > 0) {
        call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f448, 6, 0x20);
    } else {
        call_8c156d48((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f448, 0x16, 0x20, -0x979798);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    call_8c1570b4(t1, 215.0f, 127.0f);
    call_8c157138(t1);
    return t1;
}

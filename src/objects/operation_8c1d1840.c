typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_244 S_g8c467180_2c_244;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x244];
    S_g8c467180_2c_244 *f244;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
extern int get_field_8c21f338(int);
extern int call_8c21f370(int);
extern int call_8c21f354(int);
extern void call_8c156d30(int, int, int, int);
extern void call_8c1570b4(S_c8c156bd8 *, float, float);
extern void call_8c157138(S_c8c156bd8 *);
extern void operation_8c1571d4(void *, int);
S_c8c156bd8 *operation_8c1d1840(Object *o)
{
    int v1;
    int t1;
    int t2;
    S_c8c156bd8 *t3;
    int t4;
    t3 = call_8c156bd8((void *)0x8c32995c, 0xc, (*(S_g8c467180 **)0x8c467180)->f2c->f244);
    v1 = (int)0;
    while (0xc > v1) {
        t1 = get_field_8c21f338(v1);
        t4 = call_8c21f370(t1);
        t2 = call_8c21f354(t1);
        if (t2 != 0) {
            call_8c156d30((int)t3, t4, 0x26, v1);
        } else {
            call_8c156d30((int)t3, t4, 6, v1);
        }
        v1 = (int)(v1 + 1);
    }
    t3->f80 = (t3->f80 & 0xffff) | 0x10;
    call_8c1570b4(t3, 215.0f, 188.0f);
    call_8c157138(t3);
    operation_8c1571d4((void *)t3, (int)o->f24);
    return t3;
}

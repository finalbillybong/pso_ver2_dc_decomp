typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_42c S_g8c467180_2c_42c;
typedef struct S_g8c467180_2c_430 S_g8c467180_2c_430;
typedef struct Arg1 Arg1;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x42c];
    S_g8c467180_2c_42c *f42c;
    S_g8c467180_2c_430 *f430;
};
struct Arg1 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void call_8c15761c(int);
extern int call_8c21f468(void);
extern void call_8c156d30(int, void *, int, int);
extern void call_8c156d48(int, void *, int, int, int);
extern void call_8c1570b4(Arg1 *, float, float);
extern void call_8c157138(Arg1 *);
void operation_8c1d1b78(int a0, Arg1 *a1)
{
    int t1;
    call_8c15761c((int)a1);
    t1 = call_8c21f468();
    if (t1 > 0) {
        call_8c156d30((int)a1, (*(S_g8c467180 **)0x8c467180)->f2c->f42c, 6, 0xc);
    } else {
        call_8c156d48((int)a1, (*(S_g8c467180 **)0x8c467180)->f2c->f42c, 0x16, 0xc, -0x979798);
    }
    call_8c156d30((int)a1, (*(S_g8c467180 **)0x8c467180)->f2c->f430, 6, 0x10);
    a1->f80 = (a1->f80 & 0xffff) | 0x10;
    call_8c1570b4(a1, 215.0f, 127.0f);
    call_8c157138(a1);
}

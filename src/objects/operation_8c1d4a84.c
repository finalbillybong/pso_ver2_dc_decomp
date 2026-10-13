typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1d50b4 S_c8c1d50b4;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_210 S_g8c467180_2c_210;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x210];
    S_g8c467180_2c_210 *f210;
};
struct S_c8c1d50b4 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c1d50b4 *operation_8c1d50b4(int, int);
extern void operation_8c1cd38c(void *, int);
extern void operation_8c1d5530(int, int);
extern void operation_8c1d556c(int, int, int);
extern void call_8c1d56d8(S_c8c1d50b4 *);
S_c8c1d50b4 *operation_8c1d4a84(int a0, int a1)
{
    S_c8c1d50b4 *t1;
    t1 = operation_8c1d50b4((int)((void *)0x8c289430), (int)((void *)0x8c289438));
    operation_8c1cd38c((void *)t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f210));
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    switch (a1) {
    case 6:
        operation_8c1d5530((int)t1, 0);
        break;
    case 2:
        operation_8c1d556c((int)t1, 1, 1);
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        operation_8c1d556c((int)t1, 1, 3);
        break;
    case 3:
        operation_8c1d556c((int)t1, 1, 2);
        break;
    case 1:
        operation_8c1d5530((int)t1, 2);
    case 4:
    case 5:
    case 7:
    case 8:
        break;
    }
    call_8c1d56d8(t1);
    return t1;
}

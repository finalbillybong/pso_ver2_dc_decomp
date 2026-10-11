typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_1f4 S_g8c467180_2c_1f4;
typedef struct S_g8c467180_2c_2f0 S_g8c467180_2c_2f0;
typedef struct S_g8c467180_2c_4ac S_g8c467180_2c_4ac;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f4];
    S_g8c467180_2c_1f4 *f1f4;
    char unknown1f8[0xf8];
    S_g8c467180_2c_2f0 *f2f0;
    char unknown2f4[0x1b8];
    S_g8c467180_2c_4ac *f4ac;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
extern void call_8c156d30(int, void *, int, int);
extern void call_8c156d48(int, void *, int, int, int);
extern void call_8c15700c(S_c8c156bd8 *, float);
extern void call_8c157138(S_c8c156bd8 *);
S_c8c156bd8 *operation_8c217328(void)
{
    S_c8c156bd8 *t1;
    t1 = call_8c156bd8((void *)0x8c2e1790, 2, (*(S_g8c467180 **)0x8c467180)->f2c->f1f4);
    call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f2f0, 6, 3);
    if (*(int *)0x8c504a24 > 0) {
        call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f4ac, 6, 7);
    } else {
        call_8c156d48((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f4ac, 0x16, 7, -0x979798);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    call_8c15700c(t1, 179.0f);
    call_8c157138(t1);
    return t1;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156c24 S_c8c156c24;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_260 S_g8c467180_2c_260;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x260];
    S_g8c467180_2c_260 *f260;
};
struct S_c8c156c24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156c24 *call_8c156c24(void *, int);
extern void call_8c156d30(int, void *, int, int);
extern void call_8c1570b4(S_c8c156c24 *, float, float);
S_c8c156c24 *operation_8c1d3b5c(void)
{
    S_c8c156c24 *t1;
    t1 = call_8c156c24((void *)0x8c289390, 1);
    call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f260, 3, 0);
    t1->f80 = (t1->f80 & 0xffff) | 0x40;
    call_8c1570b4(t1, 223.0f, 68.0f);
    return t1;
}

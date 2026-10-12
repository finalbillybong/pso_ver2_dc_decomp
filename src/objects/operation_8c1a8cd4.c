typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_240 S_g8c467180_2c_240;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x240];
    S_g8c467180_2c_240 *f240;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
S_c8c156bd8 *operation_8c1a8cd4(void)
{
    S_c8c156bd8 *t1;
    t1 = call_8c156bd8((void *)0x8c288cb0, 5, (*(S_g8c467180 **)0x8c467180)->f2c->f240);
    t1->f80 = (t1->f80 & 0xffff) | 0x100;
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}

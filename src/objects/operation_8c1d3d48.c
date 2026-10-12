typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_204 S_g8c467180_2c_204;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x204];
    S_g8c467180_2c_204 *f204;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
S_c8c156bd8 *operation_8c1d3d48(void)
{
    S_c8c156bd8 *t1;
    t1 = call_8c156bd8((void *)0x8c2893b0, 8, (*(S_g8c467180 **)0x8c467180)->f2c->f204);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}

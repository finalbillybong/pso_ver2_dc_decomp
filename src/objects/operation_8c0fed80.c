typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4ec];
    int f4ec;
};
int operation_8c0fed80(void)
{
    return (int)((*(S_g8c467180 **)0x8c467180)->f2c->f4ec);
}

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
    char unknown0[0xc];
    int f0c;
    int f10;
    int f14;
};
int operation_8c04c6a8(int a0)
{
    if (((a0 & 0x20)) != 0) {
        return (int)((*(S_g8c467180 **)0x8c467180)->f2c->f0c);
    }
    if (((a0 & 0x40)) != 0) {
        return (int)((*(S_g8c467180 **)0x8c467180)->f2c->f10);
    }
    return (((a0 & 0x80)) != 0) ? (*(S_g8c467180 **)0x8c467180)->f2c->f14 : 0;
}

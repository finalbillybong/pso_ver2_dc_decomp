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
int operation_8c1d45b4(int a0, int a1)
{
    return *(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x0) + (a1 + 0x103 << 2));
}

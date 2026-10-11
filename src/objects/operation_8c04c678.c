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
int operation_8c04c678(int a0)
{
    int v1;
    int v4;
    v4 = (int)a0;
    if (a0 == 0xb) {
        v1 = (int)a0;
        if (*(int *)0x8c4703c0 >= 3) {
            v1 = (int)0xe;
        }
        v4 = (int)v1;
    }
    return *(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x0) + (*(int *)((char *)0x8c284b28 + (v4 << 2)) << 2));
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4c8 S_g8c467180_2c_4c8;
typedef struct S_g8c504a00 S_g8c504a00;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4c8];
    S_g8c467180_2c_4c8 *f4c8;
};
struct S_g8c504a00 {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
};
extern S_g8c467180 *g_8c467180;
extern S_g8c504a00 *g_8c504a00;
extern void operation_8c220be8(int, int);
void operation_8c208c60(void)
{
    if (g_8c504a00 != 0) {
        operation_8c220be8((int)(g_8c467180->f2c->f4c8), 1);
        g_8c504a00->f24 = 9;
        g_8c504a00->f34 = 0;
    }
}

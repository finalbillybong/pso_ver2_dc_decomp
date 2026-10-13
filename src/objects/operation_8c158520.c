typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_2c S_g8c4daaa4_2c;
typedef struct S_g8c4daaa4_2c_0 S_g8c4daaa4_2c_0;
struct S_g8c4daaa4 {
    char unknown0[0x2c];
    S_g8c4daaa4_2c *f2c;
};
int operation_8c158520(int a0, int a1)
{
    if (a0 >= 0 && 8 > a0) {
        return (int)(&*(int *)((char *)((char *)*(S_g8c4daaa4_2c_0 **)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f2c + 0x0) + (a0 << 2)) + 0x0) + (a1 << 3)));
    }
    return 0;
}

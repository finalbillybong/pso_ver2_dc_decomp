typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_c S_g8c4daaa4_c;
struct S_g8c4daaa4 {
    char unknown0[0xc];
    S_g8c4daaa4_c *f0c;
};
struct S_g8c4daaa4_c {
    int f00;
    int f04;
};
int operation_8c158110(int a0)
{
    return ((*(S_g8c4daaa4 **)0x8c4daaa4)->f0c->f00 > a0) ? ((*(S_g8c4daaa4 **)0x8c4daaa4)->f0c->f04 + a0 * 0xc) : ((*(S_g8c4daaa4 **)0x8c4daaa4)->f0c->f04 + (*(S_g8c4daaa4 **)0x8c4daaa4)->f0c->f00 * 0xc);
}

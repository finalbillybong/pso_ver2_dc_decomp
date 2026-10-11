typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_14 S_g8c4daaa4_14;
struct S_g8c4daaa4 {
    char unknown0[0x14];
    S_g8c4daaa4_14 *f14;
};
struct S_g8c4daaa4_14 {
    int f00;
    int f04;
};
int operation_8c1581ac(int a0)
{
    return ((*(S_g8c4daaa4 **)0x8c4daaa4)->f14->f00 > a0) ? ((*(S_g8c4daaa4 **)0x8c4daaa4)->f14->f04 + a0 * 0x14) : ((*(S_g8c4daaa4 **)0x8c4daaa4)->f14->f04 + (*(S_g8c4daaa4 **)0x8c4daaa4)->f14->f00 * 0x14);
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
struct S_g8c4daaa4 {
    char unknown0[0x1c];
    int f1c;
};
int operation_8c1580b0(int a0)
{
    return (0x20 > a0) ? ((*(S_g8c4daaa4 **)0x8c4daaa4)->f1c + a0 * 0x24) : 0;
}

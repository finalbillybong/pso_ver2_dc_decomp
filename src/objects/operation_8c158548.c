typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_30 S_g8c4daaa4_30;
struct S_g8c4daaa4 {
    char unknown0[0x30];
    S_g8c4daaa4_30 *f30;
};
unsigned char operation_8c158548(int a0)
{
    if (a0 >= 0x4e && 0x214 >= a0) {
        return *(unsigned char *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f30 - 0x4e) + (a0));
    }
    return 0;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_18 S_g8c4daaa4_18;
struct S_g8c4daaa4 {
    char unknown0[0x18];
    S_g8c4daaa4_18 *f18;
};
unsigned char operation_8c15842c(int a0)
{
    return ((unsigned int)0x89 > (unsigned int)(unsigned char)a0) ? (unsigned char)*(char *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f18 + 0x0) + ((unsigned char)a0)) : 0;
}

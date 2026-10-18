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
unsigned char operation_8c158794(int a0)
{
    if ((((unsigned char)a0 & 0x7f)) != 0 && (((unsigned char)a0 & 0x80)) == 0) {
        return (((unsigned char)a0 + 0x138) >= 0x4e && 0x214 >= ((unsigned char)a0 + 0x138)) ? *(unsigned char *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f30 - 0x4e) + ((unsigned char)a0 + 0x138)) : (unsigned char)0;
    }
    return 0;
}

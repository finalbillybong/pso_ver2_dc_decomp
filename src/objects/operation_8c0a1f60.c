typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ee80 S_g8c46ee80;
struct S_g8c46ee80 {
    char unknown0[0xd8];
    int fd8;
    float fdc;
};
void operation_8c0a1f60(int a0, float f0)
{
    if (*(int *)0x8c46ee80 != 0) {
        (*(S_g8c46ee80 **)0x8c46ee80)->fdc = f0;
        (*(S_g8c46ee80 **)0x8c46ee80)->fd8 = a0;
    }
}

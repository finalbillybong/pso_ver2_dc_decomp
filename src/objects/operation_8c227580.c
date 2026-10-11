typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x3214];
    unsigned char f3214;
};
void operation_8c227580(int a0, int a1)
{
    if (*(int *)0x8c4db9e8 != 0) {
        (*(S_g8c4db9e8 **)0x8c4db9e8)->f3214 = (*(S_g8c4db9e8 **)0x8c4db9e8)->f3214 & -0xf1 | a1 << 4;
    }
}

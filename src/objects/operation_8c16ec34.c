typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
void operation_8c16ec34(void)
{
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 = (unsigned int)(*(S_g8c46fe20 **)0x8c46fe20)->f20 >> 1 << 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
        }
    }
    if (*(int *)0x8c4d59d8 != 0) {
        (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
    }
}

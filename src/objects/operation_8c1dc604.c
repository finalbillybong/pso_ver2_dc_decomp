typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_58 S_g8c46fe20_58;
struct S_g8c46fe20 {
    char unknown0[0x58];
    S_g8c46fe20_58 *f58;
};
struct S_g8c46fe20_58 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern short g_8c46fe24;
void operation_8c1dc604(void)
{
    g_8c46fe24 &= -3;
    if (g_8c46fe20 != 0 && g_8c46fe20->f58 != 0) {
        g_8c46fe20->f58->f04 |= 1;
        g_8c46fe20->f58 = (S_g8c46fe20_58 *)0;
    }
}

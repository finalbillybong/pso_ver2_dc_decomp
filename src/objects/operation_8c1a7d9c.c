typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c46fe20 *g_8c46fe20;
void operation_8c1a7d9c(void)
{
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x10;
    }
}

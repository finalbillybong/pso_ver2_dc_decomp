typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
struct S_L8c510b80 {
    char unknown0[0x10];
    short f10;
};
extern S_L8c510b80 g_8c510b80;
void operation_8c236c9c(void)
{
    (&g_8c510b80)->f10 = (unsigned int)(&g_8c510b80)->f10 >> 1 << 1;
    (&g_8c510b80)->f10 &= -3;
    (&g_8c510b80)->f10 &= -0x11;
    (&g_8c510b80)->f10 &= -0x21;
}

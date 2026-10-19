typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510c80 S_g8c510c80;
struct S_g8c510c80 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c510c80 *g_8c510c80;
void operation_8c243b88(void)
{
    if (g_8c510c80 != 0) {
        g_8c510c80->f28 = 0;
    }
}

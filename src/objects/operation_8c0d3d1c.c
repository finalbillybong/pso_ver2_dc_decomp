typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46fc84;
extern int g_8c46fc88;
extern int g_8c575570;
void operation_8c0d3d1c(void)
{
    if (g_8c46fc84 != 0x19) {
        if (g_8c46fc84 == 0x1a) {
            goto L_8c0d3d3c;
        }
    } else {
        g_8c46fc88 = (int)(g_8c575570);
        g_8c575570 &= -0x8001;
        goto L_8c0d3d44;
L_8c0d3d3c:;
        g_8c575570 = (int)(g_8c46fc88);
    }
L_8c0d3d44:;
    g_8c46fc84 += 1;
}

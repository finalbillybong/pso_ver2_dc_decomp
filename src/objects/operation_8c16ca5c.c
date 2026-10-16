typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db41c;
extern int g_8c4db420;
extern int g_8c4db428;
void operation_8c16ca5c(void)
{
    if (g_8c4db41c > 0) {
        g_8c4db41c -= 1;
        g_8c4db420 = (int)(*(int *)((char *)0x8c4db434 + (g_8c4db41c << 2)));
        return;
    }
    g_8c4db428 = 2;
}

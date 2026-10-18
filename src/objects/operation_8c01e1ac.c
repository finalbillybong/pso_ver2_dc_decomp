typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
extern int g_8c41cb3c;
extern char g_8c41cd05;
extern int g_8c5064f8;
extern S_L8c41cba0 g_8c41cba0;
void operation_8c01e1ac(void)
{
    int v1;
    g_8c41cd05 = 0;
    if (g_8c41cb3c == 0 && g_8c5064f8 == 0 && (v1 = 0x606, (v1 & (&g_8c41cba0)->f20) == v1) && (((&g_8c41cba0)->f28 & 8)) != 0) {
        g_8c41cd05 = 1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c335fe0 S_L8c335fe0;
struct S_L8c335fe0 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c2e16f0;
extern float g_8c2e1700;
extern S_L8c335fe0 g_8c335fe0;
extern char g_8c336004[];
void operation_8c28449c(void)
{
    (&g_8c335fe0)->f18 = (int)(g_8c2e16f0);
    *(float *)(g_8c336004 + 0x10) = g_8c2e1700;
}

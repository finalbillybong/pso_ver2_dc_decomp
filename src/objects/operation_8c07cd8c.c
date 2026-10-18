typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a94 S_g8c469a94;
typedef struct S_g8c469a94_42c S_g8c469a94_42c;
struct S_g8c469a94 {
    char unknown0[0x42c];
    S_g8c469a94_42c *f42c;
};
struct S_g8c469a94_42c {
    char unknown0[0x38];
    int f38;
    int f3c;
};
extern S_g8c469a94 *g_8c469a94;
extern int g_8c469b40;
extern int g_8c469b44;
void operation_8c07cd8c(void)
{
    S_g8c469a94 *v1;
    int v2;
    v1 = g_8c469a94;
    v2 = v1->f42c->f38;
    g_8c469b40 = v2;
    g_8c469b44 = (int)(v1->f42c->f3c);
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x10];
    int f10;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern int operation_8c238420(int);
void operation_8c2485b4(int a0)
{
    int v1;
    int t1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || 0x3c > a0 || a0 > 0xe10) {
        return;
    }
    t1 = operation_8c238420(a0);
    (&g_8c339ca0)->f10 = (int)(t1);
}

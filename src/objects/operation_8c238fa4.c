typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x3c];
    int f3c;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
int operation_8c238fa4(int a0)
{
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    return (v1 != 0) ? *(int *)((char *)&g_8c339ca0.f3c + (a0 << 2)) : 0;
}

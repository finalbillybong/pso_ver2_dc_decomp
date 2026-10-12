typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x34];
    int f34;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
void operation_8c238290(void)
{
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        (&g_8c339ca0)->f34 = 1;
    }
}

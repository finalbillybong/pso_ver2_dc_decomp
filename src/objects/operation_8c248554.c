typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x30];
    int f30;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
void operation_8c248554(int a0)
{
    int v1;
    int v4;
    int v5;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0) {
        (&g_8c339ca0)->f30 = 0;
        return;
    }
    v5 = (int)a0;
    if (a0 != 1) {
        v4 = (int)a0;
        if (a0 != 0) {
            v4 = (int)0;
        }
        v5 = (int)v4;
    }
    (&g_8c339ca0)->f30 = v5;
}

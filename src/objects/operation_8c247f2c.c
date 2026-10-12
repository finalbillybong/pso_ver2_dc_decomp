typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c339ca0[];
int operation_8c247f2c(float f0)
{
    int v1;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 == 0) {
        return 0;
    }
    if (0.01f > f0 || f0 > 10000.0f) {
        return 0;
    }
    *(float *)(g_8c339ca0 + 0x4) = f0;
    return 1;
}

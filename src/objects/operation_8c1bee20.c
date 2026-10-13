typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c46efd4[];
void operation_8c1bee20(void)
{
    *(float *)0x8c4e2ba8 = *(float *)(g_8c46efd4 + 0x14) * 32.0f;
    *(float *)0x8c4e2bac = *(float *)(g_8c46efd4 + 0x18) * 32.0f;
    *(float *)0x8c4e2bb0 = *(float *)(g_8c46efd4 + 0x1c) * 32.0f;
    *(float *)0x8c4e2bb4 = *(float *)(g_8c46efd4 + 0x20) * 32.0f;
}

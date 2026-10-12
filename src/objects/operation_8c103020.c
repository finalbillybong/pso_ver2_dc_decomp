typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c4d5998[];
void operation_8c103020(float f0)
{
    if (*(int *)0x8c4d5954 == 1) {
        *(float *)(g_8c4d5998 + 0x4) += f0;
    }
    if (1200.0f > *(float *)(g_8c4d5998 + 0x4)) {
        *(float *)(g_8c4d5998 + 0x4) = 1200.0f;
    }
    if (*(float *)(g_8c4d5998 + 0x4) > 3500.0f) {
        *(float *)(g_8c4d5998 + 0x4) = 3500.0f;
    }
}

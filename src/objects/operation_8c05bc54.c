typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c3a9cec(float, float);
extern void call_8c3a8b70(float, float);
void operation_8c05bc54(float f0)
{
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * f0, *(float *)(g_8c418280 + 0x20) * f0);
    call_8c3a8b70(*(float *)(g_8c418280 + 0x1c) * f0, *(float *)(g_8c418280 + 0x20) * f0);
}

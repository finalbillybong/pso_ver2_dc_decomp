typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c37e800(int, float, float, float);
void operation_8c01474c(int a0)
{
    call_8c37e800((int)(a0 + 0x20), *(float *)(g_8c418280 + 0x28), *(float *)(g_8c418280 + 0x2c), *(float *)(g_8c418280 + 0x30));
}

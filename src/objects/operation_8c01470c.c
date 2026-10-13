typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c37e8bc(int, float, float, float);
void operation_8c01470c(int a0)
{
    call_8c37e8bc((int)(a0 + 0x20), *(float *)(g_8c418280 + 0x18), *(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}

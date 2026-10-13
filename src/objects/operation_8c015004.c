typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c3c1554(float, float, float);
void operation_8c015004(void)
{
    call_8c3c1554(*(float *)(g_8c418280 + 0x28), *(float *)(g_8c418280 + 0x2c), *(float *)(g_8c418280 + 0x30));
}

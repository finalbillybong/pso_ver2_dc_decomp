typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c3a9cec(float, float);
void operation_8c0149c8(void)
{
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c3a8b70(float, float);
void operation_8c014894(void)
{
    call_8c3a8b70(*(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}

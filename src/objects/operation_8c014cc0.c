typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c39986a(float, float, float);
void operation_8c014cc0(void)
{
    call_8c39986a(*(float *)(g_8c418280 + 0x38), *(float *)(g_8c418280 + 0x3c), *(float *)(g_8c418280 + 0x40));
}

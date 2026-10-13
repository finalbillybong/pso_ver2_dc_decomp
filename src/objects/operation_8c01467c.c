typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
void operation_8c01467c(float f0, float f1, float f2)
{
    *(float *)(g_8c418280 + 0x28) = f0;
    *(float *)(g_8c418280 + 0x2c) = f1;
    *(float *)(g_8c418280 + 0x30) = f2;
}

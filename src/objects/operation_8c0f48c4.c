typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c309fd8 S_L8c309fd8;
struct S_L8c309fd8 {
    char unknown0[0x8];
    float f08;
};
extern S_L8c309fd8 g_8c309fd8;
void operation_8c0f48c4(int a0, float f0)
{
    float v1;
    v1 = (float)f0;
    if (0.1f > f0) {
        v1 = (float)0.1f;
    }
    *(float *)((char *)&g_8c309fd8.f08 + (a0 << 4)) = v1;
}

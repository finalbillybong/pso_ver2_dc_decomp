typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3070ec S_L8c3070ec;
struct S_L8c3070ec {
    char unknown0[0x8];
    float f08;
};
extern S_L8c3070ec g_8c3070ec;
void operation_8c0d485c(int a0, float f0)
{
    float v1;
    v1 = (float)f0;
    if (0.1f > f0) {
        v1 = (float)0.1f;
    }
    *(float *)((char *)&g_8c3070ec.f08 + (a0 << 4)) = v1;
}

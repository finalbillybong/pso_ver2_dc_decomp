typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbf68 S_L8c4dbf68;
struct S_L8c4dbf68 {
    char unknown0[0x10];
    int f10;
};
extern S_L8c4dbf68 g_8c4dbf68;
void operation_8c18ef00(int a0)
{
    if (a0 >= 0 && 0x14 >= a0 && *(int *)((char *)&g_8c4dbf68.f10 + (a0 * 0x14)) != -1) {
        *(int *)((char *)&g_8c4dbf68.f10 + (a0 * 0x14)) = -1;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c317ba8 g_8c317ba8;
void operation_8c16c314(int a0)
{
    ((void (*)(int))(*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3))))((int)(a0 << 3));
}

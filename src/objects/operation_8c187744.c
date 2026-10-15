typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c319b78 S_L8c319b78;
struct S_L8c319b78 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c319b78 g_8c319b78;
void operation_8c187744(int a0)
{
    ((void (*)(void))(*(int *)((char *)&g_8c319b78.f04 + ((unsigned char)a0 << 3))))();
}

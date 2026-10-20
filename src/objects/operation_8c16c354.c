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
extern int g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
void operation_8c16c354(int a0)
{
    int v1;
    char *v4;
    int v2;
    char c1;
    char c2;
    v4 = (char *)g_8c4db400;
    v1 = (int)g_8c4db420;
    g_8c4db420 = v1 + 1;
    c1 = v4[v1];
    v2 = (int)g_8c4db420;
    g_8c4db420 = v2 + 1;
    c2 = v4[v2];
    ((void (*)(char, char, char))(*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3))))(c1, c2, c1);
}

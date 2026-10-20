typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct S_g8c4db400 S_g8c4db400;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4db400 *g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
void operation_8c16c328(int a0)
{
    int v1;
    char c;
    v1 = (int)g_8c4db420;
    g_8c4db420 = v1 + 1;
    c = *(char *)((char *)g_8c4db400 + v1);
    ((void (*)(char))(*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3))))(c);
}

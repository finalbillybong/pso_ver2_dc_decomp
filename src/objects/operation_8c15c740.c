typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db138 S_g8c4db138;
struct S_g8c4db138 {
    char unknown0[0x24];
    int f24;
};
extern int g_8c4db130;
extern int g_8c4db134;
extern S_g8c4db138 *g_8c4db138;
void operation_8c15c740(void)
{
    g_8c4db130 = 0x45;
    g_8c4db134 = 2;
    g_8c4db138->f24 = 0x10;
}

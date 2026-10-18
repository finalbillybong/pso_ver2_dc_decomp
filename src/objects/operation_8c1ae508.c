typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e22dc S_g8c4e22dc;
struct S_g8c4e22dc {
    char unknown0[0x398];
    int f398;
};
extern int g_8c4703c0;
extern S_g8c4e22dc *g_8c4e22dc;
int operation_8c1ae508(void)
{
    int v3;
    if (g_8c4e22dc == 0) {
        return 0;
    }
    v3 = g_8c4e22dc->f398;
    if (g_8c4703c0 == 0) {
        return v3 >= 9;
    }
    return v3 >= 0xe;
}

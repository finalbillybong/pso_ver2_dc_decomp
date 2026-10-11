typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338c40 S_L8c338c40;
struct S_L8c338c40 {
    char unknown0[0x14];
    unsigned short f14;
    char unknown16[0x2];
    int f18;
};
extern S_L8c338c40 g_8c338c40;
int operation_8c2324c0(void)
{
    return ((&g_8c338c40)->f14 == 0x4e31) ? (&g_8c338c40)->f18 : 0;
}

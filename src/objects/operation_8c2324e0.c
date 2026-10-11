typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338c40 S_L8c338c40;
struct S_L8c338c40 {
    char unknown0[0x16];
    unsigned short f16;
    char unknown18[0x4];
    int f1c;
};
extern S_L8c338c40 g_8c338c40;
int operation_8c2324e0(void)
{
    return ((&g_8c338c40)->f16 == 0x4e32) ? (&g_8c338c40)->f1c : 0;
}

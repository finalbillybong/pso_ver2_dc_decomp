typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338c40 S_L8c338c40;
struct S_L8c338c40 {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0xa];
    int f10;
};
extern S_L8c338c40 g_8c338c40;
int operation_8c2324a0(void)
{
    return ((&g_8c338c40)->f04 == 0x5332) ? (&g_8c338c40)->f10 : 0;
}

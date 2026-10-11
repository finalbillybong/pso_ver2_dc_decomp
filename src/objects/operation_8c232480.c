typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338c40 S_L8c338c40;
struct S_L8c338c40 {
    char unknown0[0x2];
    unsigned short f02;
    char unknown4[0x8];
    int f0c;
};
extern S_L8c338c40 g_8c338c40;
int operation_8c232480(void)
{
    return ((&g_8c338c40)->f02 == 0x5331) ? (&g_8c338c40)->f0c : 0;
}

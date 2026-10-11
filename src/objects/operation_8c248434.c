typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x24];
    int f24;
    int f28;
};
extern S_L8c339ca0 g_8c339ca0;
int operation_8c248434(void)
{
    return ((&g_8c339ca0)->f24 != 0) ? (&g_8c339ca0)->f28 : 0;
}

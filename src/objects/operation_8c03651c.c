typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c461c04 S_L8c461c04;
struct S_L8c461c04 {
    char unknown0[0x120];
    int f120;
    char unknown124[0x120];
    int f244;
};
extern S_L8c461c04 g_8c461c04;
int operation_8c03651c(void)
{
    if ((&g_8c461c04)->f120 == 1 || (&g_8c461c04)->f244 == 1) {
        return 1;
    }
    return 0;
}

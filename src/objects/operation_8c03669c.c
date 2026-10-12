typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2ed2b4[];
void *operation_8c03669c(int a0, int a1)
{
    if (a0 >= 0 && 2 > a0 && a1 >= 0 && 3 > a1) {
        return (void *)(a0 * 0x57 + 0x8c46200c + a1 * 0x1d);
    }
    return (g_8c2ed2b4 + 0xfc);
}

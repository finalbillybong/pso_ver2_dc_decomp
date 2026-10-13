typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2ed2b4[];
void *operation_8c0366dc(int a0)
{
    if (a0 >= 0 && 2 > a0) {
        return (void *)(0x8c4620ba + a0 * 0x1d);
    }
    return (g_8c2ed2b4 + 0xfc);
}

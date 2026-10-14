typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c196e78(int a0, int a1)
{
    int v1;
    int v2;
    v1 = (int)0;
    while (0x16 > v1) {
        v2 = (int)0;
        while (9 > v2) {
            *(int *)((char *)((char *)(a0 + 0x20 + a1 * 0x318 + v1 * 0x24) + 0x0) + (v2 << 2)) = 0;
            v2 = (int)(v2 + 1);
        }
        v1 = (int)(v1 + 1);
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c053d34(int a0)
{
    int v1;
    int v2;
    v1 = (int)0;
    while (0x10 > v1) {
        v2 = (int)*(int *)((char *)0x8c467880 + (v1 << 2));
        if (v2 == a0) {
            return (int)(v1);
        }
        if (v2 == 0) {
            *(int *)((char *)0x8c467880 + (v1 << 2)) = a0;
            return (int)(v1);
        }
        v1 = (int)(v1 + 1);
    }
    return -1;
}

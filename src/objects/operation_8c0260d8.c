typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c0260d8(int a0, int a1, int a2, int a3)
{
    int v2;
    if (a1 == 1) {
        v2 = (int)(a0 + 0x4e4);
    } else {
        v2 = (int)(a0 + 0x4c0);
    }
    if (a2 == 0) {
        v2 = (int)(v2 + 4);
    } else {
        v2 = (int)(v2 + 0x14);
    }
    return *(unsigned char *)((char *)v2 + (a3 << 2) + 0x1);
}

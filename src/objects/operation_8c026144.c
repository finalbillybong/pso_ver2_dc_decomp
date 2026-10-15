typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c026144(int a0, int a1, int a2, int a3, unsigned short a4, unsigned short a5)
{
    int v2;
    int v3;
    if (a1 == 1) {
        v2 = (int)(a0 + 0x4e4);
    } else {
        v2 = (int)(a0 + 0x4c0);
    }
    if (a2 == 0) {
        v3 = (int)(v2 + 4);
    } else {
        v3 = (int)(v2 + 0x14);
    }
    *(char *)((char *)((char *)v3 + 0x0) + (a3 << 2)) = a4;
    *(char *)((char *)v3 + (a3 << 2) + 0x1) = a5;
}

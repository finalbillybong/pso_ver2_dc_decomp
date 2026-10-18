typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db9e4;
void operation_8c235790(int a0, int a1, int a2)
{
    int v3;
    int v1;
    int v2;
    short tmp;
    v1 = (int)(a1 << 1);
    v2 = (int)(a2 << 1);
    v3 = (int)(g_8c4db9e4 + 0x1264);
    tmp = *(short *)((char *)v3 + v1);
    *(short *)((char *)v3 + v1) = *(short *)((char *)v3 + v2);
    *(short *)((char *)v3 + v2) = tmp;
}

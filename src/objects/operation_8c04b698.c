typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c04b698(int a0, int a1)
{
    int v;
    int w;
    int r;
    int v3;
    w = 0x10000;
    r = 0;
    for (v3 = 0x100; v3 != 0; w >>= 2) {
        v = 0;
        if ((a0 & v3) != 0) {
            v += 1;
        }
        if ((a1 & v3) != 0) {
            v += 2;
        }
        r += w * v;
        v3 >>= 1;
    }
    return r;
}

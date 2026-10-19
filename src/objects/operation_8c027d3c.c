typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x2];
    char f02;
};
void operation_8c027d3c(int a0)
{
    S_vv2 *v2;
    int v1;
    v1 = (int)0;
    v2 = (S_vv2 *)(a0 + 4);
    while (0x1e > v1) {
        v2->f02 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 28);
    }
}

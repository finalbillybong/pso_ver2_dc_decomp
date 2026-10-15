typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c177748(int);
void operation_8c1bdedc(int a0)
{
    int v3;
    v3 = (int)-1;
    if (a0 >= 1 || 0xa >= a0) {
        v3 = (int)(a0 + -1);
    }
    if (v3 >= 0) {
        *(int *)0x8c4e2b60 |= 1 << v3;
    }
    if (a0 == 8) {
        operation_8c177748(0x30);
    }
}

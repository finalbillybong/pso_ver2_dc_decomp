typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c1bde04(int a0)
{
    int v4;
    v4 = (int)-1;
    if (a0 >= 1 || 0xa >= a0) {
        v4 = (int)(a0 + -1);
    }
    if (v4 >= 0) {
        *(int *)0x8c4e2b60 |= 1 << v4;
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c41cba0[];
extern int operation_8c01d8a8(void *, int);
int operation_8c20a7a4(int a0, int a1)
{
    int t1;
    t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), a1);
    return t1 | *(int *)(g_8c41cba0 + 0x28) & a1;
}

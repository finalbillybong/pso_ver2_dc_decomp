typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c41cba0[];
extern int call_8c01d844(void *, int, int, int);
int operation_8c20a7d0(int a0, int a1)
{
    int t1;
    int t2;
    t2 = call_8c01d844((void *)((g_8c41cba0 + 0x20)), a1, 6, 1);
    t1 = call_8c01d844((void *)((g_8c41cba0 + 0x110)), a1, 6, 1);
    return t1 | t2;
}

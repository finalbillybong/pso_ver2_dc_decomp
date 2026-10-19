typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d5a30;
extern int call_8c12267c(int);
extern void operation_8c122688(void *, int, int);
void operation_8c103174(void)
{
    int v3;
    int t1;
    t1 = call_8c12267c(0xc);
    if (t1 != 0) {
        operation_8c122688((void *)t1, 0x1000, 0x20);
    }
    g_8c4d5a30 = (int)(t1);
    v3 = (int)0;
    while (0x12 > v3) {
        *(int *)((char *)0x8c4d59e8 + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467874;
static inline int count_8c1ae1a8(int n)
{
    int i;
    int c;
    c = 0;
    for (i = 0; i < n; i++) {
        if (*(int *)((char *)0x8c467240 + (i << 2)) != 0) {
            c++;
        }
    }
    return c;
}
int operation_8c1ae1a8(void)
{
    int v3;
    v3 = count_8c1ae1a8(g_8c467874);
    if (v3 == 0 || v3 > 4) {
        return 1;
    }
    return v3;
}

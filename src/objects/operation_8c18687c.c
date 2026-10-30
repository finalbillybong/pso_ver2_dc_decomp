typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46ec50;
static inline int total_8c18687c(int n)
{
    int i;
    int sum;
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += *(int *)((char *)0x8c46ec58 + (i << 2));
    }
    return sum;
}
int operation_8c18687c(int a0)
{
    if (a0 > 0x11) {
        return 0;
    }
    return g_8c46ec50 + total_8c18687c(a0) * 0x44;
}

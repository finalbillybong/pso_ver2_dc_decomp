typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c462cf0;
extern char g_8c462cf4;
extern char g_8c2ef0e4[];
extern void operation_8c03ef80(void *, ...);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c03ed70(int a0)
{
    int t1;
    if (a0 != 0) {
        if (g_8c462cf0 == 1) {
            operation_8c03ef80((void *)((g_8c2ef0e4 + 0x397)), a0);
            return 0;
        }
        t1 = icmp((unsigned char *)(void *)&g_8c462cf4, (unsigned char *)a0);
        if (t1 != 0) {
            operation_8c03ef80((void *)((g_8c2ef0e4 + 0x3b5)), a0, (void *)&g_8c462cf4);
            return 0;
        }
    }
    g_8c462cf0 = 1;
    g_8c462cf4 = 0;
    return 1;
}

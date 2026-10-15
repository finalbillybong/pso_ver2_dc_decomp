typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c462cf0;
extern char g_8c462cf4;
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c03ee04(int a0)
{
    int t1;
    if (g_8c462cf0 == 0) {
        t1 = icmp((unsigned char *)(void *)&g_8c462cf4, (unsigned char *)a0);
        if (t1 == 0) {
            g_8c462cf0 = 1;
            g_8c462cf4 = 0;
        }
    }
}

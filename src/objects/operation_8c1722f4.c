typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern char g_8c318c08[];
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c1722f4(int a0)
{
    int t1;
    t1 = icmp((unsigned char *)(void *)0x8c340764, (unsigned char *)(g_8c318c08 + 0x27));
    if (t1 == 0) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 0;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 1;
}

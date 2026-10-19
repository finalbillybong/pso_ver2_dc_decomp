typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
extern S_g8c4db4e4 *g_8c4db4e4;
extern int g_8c5060c4;
extern char g_8c318c08[];
extern int call_8c12b0cc(void *);
extern void call_8c18e720(void *, void *);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c172918(void)
{
    char *v1;
    int t1;
    int t2;
    int t3;
    v1 = (char *)g_8c5060c4;
    t1 = icmp((unsigned char *)v1, (unsigned char *)(g_8c318c08 + 0x27));
    if (t1 == 0) {
        t2 = call_8c12b0cc((void *)((g_8c318c08 + 0x6b)));
        call_8c18e720(g_8c4db4e4, (void *)((g_8c318c08 + 0x6b)));
        g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t2);
        return;
    }
    t3 = call_8c12b0cc((void *)v1);
    call_8c18e720(g_8c4db4e4, (void *)v1);
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t3);
}

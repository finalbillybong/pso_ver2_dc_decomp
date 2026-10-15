typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505c24 S_g8c505c24;
extern char g_8c336fc8[];
extern int call_8c17349c(void);
extern int call_8c12b0cc(int);
extern void call_8c18e720(void *, int);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c220e6c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c17349c();
    t2 = icmp((unsigned char *)t1, (unsigned char *)(g_8c336fc8 + 0x30));
    if (t2 == 0) {
        t3 = call_8c12b0cc(t1);
        call_8c18e720((void *)(*(S_g8c505c24 **)0x8c505c24), t1);
        *(int *)0x8c505c24 += t3;
        return;
    }
    t4 = call_8c12b0cc(t1);
    call_8c18e720((void *)(*(S_g8c505c24 **)0x8c505c24), t1);
    *(int *)0x8c505c24 += t4;
}

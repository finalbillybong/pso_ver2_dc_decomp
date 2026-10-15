typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156c24 S_c8c156c24;
typedef struct S_g8c33772c S_g8c33772c;
struct S_c8c156c24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c22752c(void);
extern S_c8c156c24 *operation_8c156c24(int, int);
extern void operation_8c156d30(S_c8c156c24 *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void call_8c157138(S_c8c156c24 *);
S_c8c156c24 *operation_8c2271e0(void)
{
    int v3;
    int v1;
    int v2;
    int t1;
    S_c8c156c24 *t2;
    v1 = (int)0x20;
    t1 = operation_8c22752c();
    v2 = (int)v1;
    if (t1 != 0) {
        v2 = (int)0x21;
    }
    t2 = operation_8c156c24((int)((void *)0x8c2e19c0), v2);
    t2->f80 = (t2->f80 & 0xffff) | 0x100;
    v3 = (int)0;
    while (v2 > v3) {
        operation_8c156d30(t2, (void *)(*(S_g8c33772c **)((char *)0x8c33772c + (v3 << 2))), 0x26, v3);
        v3 = (int)(v3 + 1);
    }
    t2->f80 = (t2->f80 & 0xffff) | 0x400;
    operation_8c1570b4((void *)t2, 480.0f, 128.0f);
    call_8c157138(t2);
    return t2;
}

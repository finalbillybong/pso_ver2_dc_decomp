typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db380 S_g8c4db380;
extern S_g8c4db380 *g_8c4db380;
extern char g_8c4db2f0[];
extern char g_8c4db300[];
extern void operation_8c01364c(void *, unsigned int);
extern void call_8c03dc40(void *, int);
void operation_8c167f24(void)
{
    int v5;
    int pm1;
    int km;
    int v4;
    int kf;
    int v3;
    operation_8c01364c((void *)((void *)0x8c3177cc), (unsigned int)0x50);
    if (g_8c4db380 != 0) {
        call_8c03dc40(g_8c4db380, 1);
    }
    v3 = (int)0;
    while (4 > v3) {
        *(int *)((char *)0x8c4db2e0 + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
    }
    pm1 = 0xffff;
    v3 = (int)0;
    km = -1;
    v4 = v3;
    kf = pm1;
    for (; 4 > v4; ) {
        int off;
        off = v4 * 0x24;
        v5 = (int)0;
        while (4 > v5) {
            *(int *)((char *)((char *)(off + g_8c4db2f0) + 0x0) + (v5 << 2)) = km;
            *(int *)((char *)((char *)(int *)(g_8c4db2f0 + 0x10) + off) + (v5 << 2)) = kf;
            v5 = (int)(v5 + 1);
        }
        *(int *)((char *)(g_8c4db2f0 + 0x20) + off) = 0;
        v4 = (int)(v4 + 1);
    }
}

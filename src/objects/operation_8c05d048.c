typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467874;
extern int active_unflagged_8c05b258(void *);
extern float squared_distance_xz(void *, void *);
int operation_8c05d048(int a0)
{
    char *v5;
    int v1;
    int v4;
    int v3;
    int v6;
    int v2;
    int t1;
    int t2;
    float t3;
    v1 = (int)0;
    v2 = (int)0x308;
    v3 = (int)g_8c467874;
    v4 = (int)0;
    while (v3 > v4) {
        v5 = (char *)*(int *)((char *)0x8c467240 + (v4 << 2));
        t1 = active_unflagged_8c05b258((void *)v5);
        if (t1 != 0) {
            v6 = (int)(*(short *)((char *)((char *)v5 + 0x0) + (v2)) == 2);
            if (v6 == 0) {
                v1 = (int)v5;
                goto L_8c05d08e;
            }
        }
        v4 = (int)(v4 + 1);
    }
L_8c05d08e:;
    t2 = active_unflagged_8c05b258((void *)v1);
    if (t2 != 0) {
        t3 = squared_distance_xz((void *)(a0 + 0x3c), (void *)(v1 + 0x3c));
        if (10000.0f > t3) {
            return (int)(v1);
        }
    }
    return 0;
}

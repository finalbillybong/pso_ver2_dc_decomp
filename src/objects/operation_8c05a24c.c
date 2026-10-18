typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c467874;
extern int active_unflagged_8c05b2dc(void *);
extern float squared_distance_xz(void *, void *);
extern int operation_8c0113bc(int, int);
unsigned short operation_8c05a24c(int a0, float f0)
{
    S_vv6 *v6;
    int v5;
    short v8;
    unsigned short v1;
    int v7;
    float v4;
    int v2;
    int v3;
    int t1;
    float t2;
    int t3;
    v1 = (unsigned short)0xffff;
    v2 = (int)g_8c467874;
    v4 = (float)(f0 * f0);
    v5 = (int)0;
    v3 = (int)0x324;
    while (v2 > v5) {
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
        t1 = active_unflagged_8c05b2dc((void *)v6);
        if (t1 != 0) {
            v7 = (int)(a0 + v3);
            t2 = squared_distance_xz((void *)v7, (void *)((int)v6 + 0x3c));
            if (v4 > t2) {
                t3 = operation_8c0113bc(v7, (int)((int)v6 + v3));
                if (t3 == 0) {
                    v8 = (short)v6->f20;
                    v1 = (unsigned short)v8;
                    v4 = (float)t2;
                }
            }
        }
        v5 = (int)(v5 + 1);
    }
    return v1;
}

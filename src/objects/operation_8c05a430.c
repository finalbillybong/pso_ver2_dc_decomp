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
extern int g_8c467878;
extern int active_unflagged_8c05b2dc(void *);
extern float squared_distance_xz(void *, void *);
extern int operation_8c0113bc(int, int);
unsigned short operation_8c05a430(int a0, float f0)
{
    int v7;
    S_vv6 *v6;
    short v8;
    unsigned short v2;
    int v5;
    int pm6;
    int v1;
    int t1;
    float t2;
    int pm5;
    int v3;
    int pm7;
    int pm8;
    pm8 = (int)g_8c467874;
    v3 = (int)g_8c467878;
    v5 = 0;
    pm6 = pm8;
    v2 = (unsigned short)0xffff;
    v1 = pm6;
    while (v3 > v5) {
        S_vv6 *v6;
        pm7 = v1 + v5 << 2;
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (pm7));
        if ((int)(v6) != a0) {
            t1 = active_unflagged_8c05b2dc((void *)v6);
            if (t1 != 0) {
                int v7;
                int pm4;
                int pm9;
                pm4 = (int)v6;
                pm9 = (int)(a0 + 0x324);
                v7 = pm9;
                t2 = squared_distance_xz((void *)v7, (void *)(pm4 + 0x3c));
                if (t2 < f0) {
                    int t3;
                    pm5 = 0x324;
                    t3 = operation_8c0113bc(v7, (int)((int)v6 + pm5));
                    if (t3 == 0) {
                        v8 = (short)v6->f20;
                        v2 = (unsigned short)v8;
                        f0 = (float)t2;
                    }
                }
            }
        }
        v5 = (int)(v5 + 1);
    }
    return v2;
}

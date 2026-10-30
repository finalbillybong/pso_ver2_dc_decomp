typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e24 S_g8c510e24;
typedef struct S_g8c510e2c S_g8c510e2c;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    int f04;
    int f08;
};
extern S_g8c510e24 *g_8c510e24;
extern S_g8c510e2c *g_8c510e2c;
extern int g_8c510e38;
extern int call_8c18e768(int, int);
extern void call_8c245728(void *, int);
void operation_8c24554c(int a0)
{
    S_vv2 *v2;
    char *tbl;
    int lo;
    int hi;
    int mid;
    lo = 0;
    v2 = (S_vv2 *)g_8c510e2c;
    hi = v2->f08 + -1;
    tbl = (char *)v2 + v2->f00;
    while (hi > lo) {
        mid = call_8c18e768(lo + hi, 2);
        if (*(short *)(tbl + (mid << 3)) < (short)a0) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if ((short)a0 == *(short *)(tbl + (lo << 3))) {
        g_8c510e38 = (int)v2 + v2->f04 + *(int *)((char *)(int *)(tbl + 4) + (lo << 3));
        call_8c245728(g_8c510e24, *(short *)((char *)(short *)(tbl + 2) + (lo << 3)));
    }
}

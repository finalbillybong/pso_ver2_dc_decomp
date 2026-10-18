typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv7 S_vv7;
struct S_vv7 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c467874;
extern int active_unflagged_8c05b2dc(void *);
extern float squared_distance_xz(void *, void *);
extern int operation_8c0113bc(int, int);
extern void call_8c05be98(int, unsigned short);
extern void reset_link_8c05bf28(void *);
int operation_8c0f5158(int a0)
{
    float v1;
    S_vv7 *v7;
    unsigned short v9;
    unsigned short v2;
    int v6;
    int v8;
    float v5;
    int v4;
    int v3;
    int t1;
    float t2;
    int t3;
    v1 = (float)0.0f;
    v2 = (unsigned short)0xffff;
    v4 = (int)g_8c467874;
    v5 = (float)v1;
    v6 = (int)0;
    v3 = (int)0x324;
    while (v4 > v6) {
        v7 = (S_vv7 *)*(S_g8c467240 **)((char *)0x8c467240 + (v6 << 2));
        t1 = active_unflagged_8c05b2dc((void *)v7);
        if (t1 != 0) {
            v8 = (int)(a0 + v3);
            t2 = squared_distance_xz((void *)v8, (void *)((int)v7 + 0x3c));
            if (90000.0f > t2 && t2 > v5) {
                t3 = operation_8c0113bc(v8, (int)((int)v7 + v3));
                if (t3 == 0) {
                    v9 = (unsigned short)v7->f20;
                    v2 = (unsigned short)v9;
                    v5 = (float)t2;
                }
            }
        }
        v6 = (int)(v6 + 1);
    }
    if ((unsigned short)v2 != 0xffff) {
        call_8c05be98(a0, v2);
        return 1;
    }
    reset_link_8c05bf28((void *)a0);
    return 0;
}

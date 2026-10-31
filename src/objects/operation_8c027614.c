typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv16 S_vv16;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv6 S_vv6;
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv6 {
    char unknown0[0x310];
    int f310;
};
struct S_vv16 {
    int f00;
};
extern int operation_8c01d728(void *);
extern int actor_matches_current_mode(void *);
extern void operation_8c1e8e60(int, int, int);
void operation_8c027614(int a0)
{
    int v7;
    int v5;
    S_vv6 *v6;
    S_vv4 *v4;
    int v1;
    S_vv16 *v16;
    int v2;
    int t1;
    int t2;
    v4 = (S_vv4 *)(void *)0x8c41ce2c;
    v1 = (int)0x400;
    v2 = (int)0x350;
    v5 = (int)0;
    while (4 > v5) {
        v6 = (S_vv6 *)v4->f00;
        if (v6 != 0) {
            t1 = operation_8c01d728((void *)v6);
            if ((short)a0 == (short)t1) {
                t2 = actor_matches_current_mode((void *)v6);
                if (t2 != 0) {
                    v7 = (int)(((v6->f310 & 0x8000)) != 0);
                    if (v7 == 0) {
                        v16 = (S_vv16 *)((int)v6 + v2);
                        v16->f00 |= v1;
                        operation_8c1e8e60((int)v6, 0x13, 0);
                    }
                }
            }
        }
        v4 = (S_vv4 *)((char *)v4 + 4);
        v5 = (int)(v5 + 1);
    }
}
